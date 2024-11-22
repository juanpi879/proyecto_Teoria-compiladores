#include "antlr4-runtime.h"
#include "ProgramacionNinosBaseVisitor.h"
#include "ProgramacionNinosLexer.h"
#include "ProgramacionNinosParser.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include "llvm/Support/raw_ostream.h"
#include <map>
#include <iostream>

using namespace antlr4;
using namespace std;
using namespace llvm;

class ProgramacionNinosDriver : public ProgramacionNinosBaseVisitor {
private:
    map<string, Value*> sym;
    map<string, GlobalVariable*> stringCache;
    LLVMContext context;
    std::unique_ptr<Module> module;
    IRBuilder<> builder;

public:
    ProgramacionNinosDriver() 
        : module(std::make_unique<Module>("prog_kids_module", context)), builder(context) {
        // Crear la función principal y su bloque de entrada
        FunctionType *funcType = FunctionType::get(builder.getVoidTy(), false);
        Function *mainFunc = Function::Create(funcType, Function::ExternalLinkage, "main", module.get());
        BasicBlock *entryBlock = BasicBlock::Create(context, "entry", mainFunc);
        builder.SetInsertPoint(entryBlock);
    }

    // Finaliza la función principal
    void finalizarIR() {
        if (!builder.GetInsertBlock()->getTerminator()) {
            builder.CreateRetVoid();
        }
    }

    // Imprime el IR generado
   // Imprime el IR generado
    void printIR() {
        module->print(llvm::outs(), nullptr);
        llvm::verifyModule(*module, &llvm::errs());
    }

    // Implementación del visitor para la regla "programa"
    std::any visitPrograma(ProgramacionNinosParser::ProgramaContext *ctx) override {
        return visitChildren(ctx);
    }

    // Implementación del visitor para la asignación de una variable
    std::any visitAsignacion(ProgramacionNinosParser::AsignacionContext *ctx) override {
        std::string varName = ctx->ID()->getText();

        auto val = visit(ctx->expresion());
        if (!val.has_value()) {
            return nullptr;
        }

        if (auto floatVal = std::any_cast<Value*>(&val); floatVal != nullptr) {
            sym[varName] = *floatVal;
        } else {
            return nullptr;
        }

        return nullptr;
    }


    // Implementación del visitor para expresiones (solo números por ahora)
    // Implementación del visitor para expresiones (solo números por ahora)
    std::any visitExpresion(ProgramacionNinosParser::ExpresionContext *ctx) override {
        if (ctx->INT()) {
            // Manejar números enteros
            int value = std::stoi(ctx->INT()->getText());
            return static_cast<Value*>(ConstantFP::get(context, APFloat(static_cast<float>(value))));
        }

        if (auto funcMathCtx = ctx->funcionMatematica()) {
            // Manejar funciones matemáticas
            return visit(funcMathCtx);
        }

        if (ctx->STRING()) {
            // Manejar cadenas de texto
            std::string strValue = ctx->STRING()->getText();
            strValue = strValue.substr(1, strValue.length() - 2); // Eliminar comillas

            // Crear o reutilizar una GlobalVariable para esta cadena
            if (stringCache.find(strValue) == stringCache.end()) {
                auto *strType = ArrayType::get(Type::getInt8Ty(context), strValue.size() + 1);
                GlobalVariable *strVar = new GlobalVariable(
                    *module, strType, true, GlobalValue::PrivateLinkage,
                    ConstantDataArray::getString(context, strValue), "str"
                );
                stringCache[strValue] = strVar;
            }
            return stringCache[strValue];
        }

        if (ctx->ID()) {
            // Manejar identificadores
            std::string varName = ctx->ID()->getText();
            if (sym.count(varName)) {
                return sym[varName];
            } else {
                return nullptr;
            }
        }

        if (ctx->expresion().size() == 2) {
            // Manejar operaciones aritméticas binarias
            Value *lhs = std::any_cast<Value*>(visit(ctx->expresion(0)));
            Value *rhs = std::any_cast<Value*>(visit(ctx->expresion(1)));

            if (!lhs || !rhs) {
                return nullptr;
            }

            if (ctx->getText().find("+") != std::string::npos) {
                return builder.CreateFAdd(lhs, rhs, "addtmp");
            } else if (ctx->getText().find("-") != std::string::npos) {
                return builder.CreateFSub(lhs, rhs, "subtmp");
            } else if (ctx->getText().find("*") != std::string::npos) {
                return builder.CreateFMul(lhs, rhs, "multmp");
            } else if (ctx->getText().find("/") != std::string::npos) {
                return builder.CreateFDiv(lhs, rhs, "divtmp");
            } else {
                return nullptr;
            }
        }

        if (ctx->getText().find("no") != std::string::npos) { // Manejar "no"
            auto operand = std::any_cast<Value*>(visit(ctx->expresion(0))); // Obtener el operando
            if (!operand) {
                return ConstantInt::get(Type::getInt1Ty(context), 0); // Fallback a falso
            }

            return builder.CreateNot(operand, "nottmp"); // Crear la negación lógica
        }

        return nullptr;
    }

// Implementación del visitor para la impresión
    std::any visitImprimir(ProgramacionNinosParser::ImprimirContext *ctx) override {
        auto val = visit(ctx->expresion());

        if (!val.has_value()) {
            return nullptr;
        }

        // Verificar si el valor es un número
        if (auto floatVal = std::any_cast<Value*>(&val); floatVal != nullptr) {
            Function *printFunc = cast<Function>(module->getOrInsertFunction(
                "print", FunctionType::get(Type::getVoidTy(context), {Type::getFloatTy(context)}, false)
            ).getCallee());
            builder.CreateCall(printFunc, {*floatVal});
        } 
        // Verificar si el valor es una cadena (GlobalVariable)
        else if (auto strVar = std::any_cast<GlobalVariable*>(&val); strVar != nullptr) {
            Function *printStringFunc = cast<Function>(module->getOrInsertFunction(
                "printString", FunctionType::get(Type::getVoidTy(context), {PointerType::get(Type::getInt8Ty(context), 0)}, false)
            ).getCallee());
            Value *strPtr = builder.CreateBitCast(*strVar, PointerType::get(Type::getInt8Ty(context), 0));
            builder.CreateCall(printStringFunc, {strPtr});
        } else {
            return nullptr;
        }

        return nullptr;
    }


    std::any visitFuncionMatematica(ProgramacionNinosParser::FuncionMatematicaContext *ctx) override {
        if (ctx->getText().find("elevar") != std::string::npos) {
            Value *base = std::any_cast<Value*>(visit(ctx->expresion(0)));
            Value *exponent = std::any_cast<Value*>(visit(ctx->expresion(1)));
            if (!base || !exponent) {
                return nullptr;
            }

            FunctionCallee powFunc = module->getOrInsertFunction(
                "llvm.pow.f32", 
                FunctionType::get(Type::getFloatTy(context), {Type::getFloatTy(context), Type::getFloatTy(context)}, false)
            );
            Value *result = builder.CreateCall(powFunc, {base, exponent}, "elevartmp");
            return builder.CreateFPCast(result, Type::getFloatTy(context), "castedtmp");
        } else if (ctx->getText().find("cuadrado") != std::string::npos) {
            Value *operand = std::any_cast<Value*>(visit(ctx->expresion(0)));
            if (!operand) {
                return nullptr;
            }
            return builder.CreateFMul(operand, operand, "cuadradotmp");
        }

        Value *lhs = std::any_cast<Value*>(visit(ctx->expresion(0)));
        Value *rhs = std::any_cast<Value*>(visit(ctx->expresion(1)));

        if (!lhs || !rhs) {
            return nullptr;
        }

        if (ctx->getText().find("sumar") != std::string::npos) {
            return builder.CreateFAdd(lhs, rhs, "sumartmp");
        } else if (ctx->getText().find("restar") != std::string::npos) {
            return builder.CreateFSub(lhs, rhs, "restartmp");
        } else if (ctx->getText().find("multiplicar") != std::string::npos) {
            return builder.CreateFMul(lhs, rhs, "multiplicartmp");
        } else if (ctx->getText().find("dividir") != std::string::npos) {
            return builder.CreateFDiv(lhs, rhs, "dividirtmp");
        }

        return nullptr;
    }

    std::any visitCondicional(ProgramacionNinosParser::CondicionalContext *ctx) override {
        Value *condVal = std::any_cast<Value*>(visit(ctx->condicion()));
        if (!condVal) {
            return nullptr;
        }

        Function *currentFunction = builder.GetInsertBlock()->getParent();
        BasicBlock *thenBlock = BasicBlock::Create(context, "then", currentFunction);
        BasicBlock *elseBlock = (ctx->instruccion().size() > 1) 
            ? BasicBlock::Create(context, "else", currentFunction) 
            : nullptr;
        BasicBlock *endBlock = BasicBlock::Create(context, "endif", currentFunction);

        builder.CreateCondBr(condVal, thenBlock, elseBlock ? elseBlock : endBlock);

        builder.SetInsertPoint(thenBlock);
        visit(ctx->instruccion(0));
        builder.CreateBr(endBlock);

        if (elseBlock) {
            builder.SetInsertPoint(elseBlock);
            visit(ctx->instruccion(1));
            builder.CreateBr(endBlock);
        }

        builder.SetInsertPoint(endBlock);

        return nullptr;
    }

    std::any visitCondicion(ProgramacionNinosParser::CondicionContext *ctx) override {
        if (ctx->expresion().size() == 2) { 
            Value *lhs = std::any_cast<Value*>(visit(ctx->expresion(0)));
            Value *rhs = std::any_cast<Value*>(visit(ctx->expresion(1)));

            if (!lhs || !rhs) {
                return ConstantInt::get(Type::getInt1Ty(context), 0);
            }

            if (ctx->getText().find("==") != std::string::npos) {
                return builder.CreateFCmpOEQ(lhs, rhs, "eqtmp");
            } else if (ctx->getText().find("!=") != std::string::npos) {
                return builder.CreateFCmpONE(lhs, rhs, "netmp");
            } else if (ctx->getText().find("<") != std::string::npos) {
                return builder.CreateFCmpOLT(lhs, rhs, "lttmp");
            } else if (ctx->getText().find(">") != std::string::npos) {
                return builder.CreateFCmpOGT(lhs, rhs, "gttmp");
            } else if (ctx->getText().find("<=") != std::string::npos) {
                return builder.CreateFCmpOLE(lhs, rhs, "letmp");
            } else if (ctx->getText().find(">=") != std::string::npos) {
                return builder.CreateFCmpOGE(lhs, rhs, "getmp");
            }
        } else if (ctx->condicion().size() == 2) { 
            Value *lhs = std::any_cast<Value*>(visit(ctx->condicion(0)));
            Value *rhs = std::any_cast<Value*>(visit(ctx->condicion(1)));

            if (!lhs || !rhs) {
                return ConstantInt::get(Type::getInt1Ty(context), 0);
            }

            if (ctx->getText().find("y") != std::string::npos) {
                return builder.CreateAnd(lhs, rhs, "andtmp");
            } else if (ctx->getText().find("o") != std::string::npos) {
                return builder.CreateOr(lhs, rhs, "ortmp");
            }
        } else if (ctx->getText().find("no") != std::string::npos) {
            Value *operand = std::any_cast<Value*>(visit(ctx->condicion(0)));
            if (!operand) {
                return ConstantInt::get(Type::getInt1Ty(context), 0);
            }
            return builder.CreateNot(operand, "nottmp");
        }

        return ConstantInt::get(Type::getInt1Ty(context), 0);
    }

    std::any visitBucleMientras(ProgramacionNinosParser::BucleMientrasContext *ctx) override {
        Function *currentFunction = builder.GetInsertBlock()->getParent();

        BasicBlock *condBlock = BasicBlock::Create(context, "while.cond", currentFunction);
        BasicBlock *bodyBlock = BasicBlock::Create(context, "while.body", currentFunction);
        BasicBlock *endBlock = BasicBlock::Create(context, "while.end", currentFunction);

        builder.CreateBr(condBlock);
        builder.SetInsertPoint(condBlock);
        Value *condVal = std::any_cast<Value*>(visit(ctx->condicion()));
        if (!condVal) {
            return nullptr;
        }
        builder.CreateCondBr(condVal, bodyBlock, endBlock);

        builder.SetInsertPoint(bodyBlock);
        for (auto instruccion : ctx->instruccion()) {
            visit(instruccion);
        }
        builder.CreateBr(condBlock);

        builder.SetInsertPoint(endBlock);

        return nullptr;
    }

    std::any visitSegun(ProgramacionNinosParser::SegunContext *ctx) override {
        auto valor = visit(ctx->expresion());
        bool casoEjecutado = false;
        
        for (auto caso : ctx->caso()) {
            auto valorCaso = visit(caso->expresion());
            if (valor.type() == valorCaso.type()) {
                if (valor.type() == typeid(int) && 
                    std::any_cast<int>(valor) == std::any_cast<int>(valorCaso)) {
                    for (auto instruccion : caso->instruccion()) {
                        visit(instruccion);
                    }
                    casoEjecutado = true;
                    break;
                } else if (valor.type() == typeid(std::string) && 
                        std::any_cast<std::string>(valor) == std::any_cast<std::string>(valorCaso)) {
                    for (auto instruccion : caso->instruccion()) {
                        visit(instruccion);
                    }
                    casoEjecutado = true;
                    break;
                }
            }
        }
        
        if (!casoEjecutado && ctx->children.back()->getText() == "defecto") {
            for (auto instruccion : ctx->children.back()->children) {
                visit(instruccion);
            }
        }

        return nullptr;
    }

 


    


};
