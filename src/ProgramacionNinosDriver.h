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
    void printIR() {
        module->print(llvm::outs(), nullptr);
        if (llvm::verifyModule(*module, &llvm::errs())) {
            llvm::errs() << "Error en la generación del IR\n";
        }
    }

    // Implementación del visitor para la regla "programa"
    std::any visitPrograma(ProgramacionNinosParser::ProgramaContext *ctx) override {
        std::cout << "Visitando Programa" << std::endl;
        return visitChildren(ctx);
    }

    // Implementación del visitor para la asignación de una variable
    std::any visitAsignacion(ProgramacionNinosParser::AsignacionContext *ctx) override {
        std::string varName = ctx->ID()->getText();
        std::cout << "Visitando Asignacion para la variable: " << varName << std::endl;

        // Obtener el valor de la expresión
        Value *val = std::any_cast<Value*>(visit(ctx->expresion()));
        if (!val) {
            std::cerr << "Error: No se pudo obtener el valor de la expresión para la asignación de " << varName << std::endl;
            return nullptr;
        }

        // Almacenar el valor en el mapa de símbolos
        sym[varName] = val;

        std::cout << "Asignación completada para " << varName << std::endl;
        return val;
    }

    // Implementación del visitor para expresiones (solo números por ahora)
    std::any visitExpresion(ProgramacionNinosParser::ExpresionContext *ctx) override {
        if (ctx->INT()) { // Manejar números enteros
            int value = std::stoi(ctx->INT()->getText());
            return static_cast<Value*>(ConstantFP::get(context, APFloat(static_cast<float>(value))));
        }

        if (ctx->STRING()) { // Manejar cadenas de texto
            std::string strValue = ctx->STRING()->getText(); // Incluye las comillas
            // Elimina las comillas del string
            strValue = strValue.substr(1, strValue.length() - 2);
            return strValue;
        }

        if (ctx->ID()) { // Manejar identificadores (variables)
            std::string varName = ctx->ID()->getText();
            if (sym.count(varName)) {
                return sym[varName];
            } else {
                std::cerr << "Error: Variable '" << varName << "' no definida.\n";
                return nullptr;
            }
        }

        std::cerr << "Error: Expresion no reconocida o no implementada.\n";
        return nullptr;
    }

    // Implementación del visitor para la impresión
    std::any visitImprimir(ProgramacionNinosParser::ImprimirContext *ctx) override {
        std::cout << "Visitando Imprimir" << std::endl;

        auto val = visit(ctx->expresion());

        if (!val.has_value()) {
            std::cerr << "Error: Expresión nula en imprimir.\n";
            return nullptr;
        }

        // Determinar el tipo de valor a imprimir
        if (auto floatVal = std::any_cast<Value*>(&val); floatVal != nullptr) {
            // Caso de número (float o INT manejado como float)
            Function *printFunc = cast<Function>(module->getOrInsertFunction(
                "print", FunctionType::get(Type::getVoidTy(context), {Type::getFloatTy(context)}, false)
            ).getCallee());
            builder.CreateCall(printFunc, {*floatVal});
        } else if (auto stringVal = std::any_cast<std::string>(&val); stringVal != nullptr) {
            // Caso de STRING
            Function *printStringFunc = cast<Function>(module->getOrInsertFunction(
                "printString", FunctionType::get(Type::getVoidTy(context), {PointerType::get(Type::getInt8Ty(context), 0)}, false)
            ).getCallee());
            Value *strPtr = builder.CreateGlobalString(*stringVal);
            builder.CreateCall(printStringFunc, {strPtr});
        } else {
            std::cerr << "Error: Tipo de expresión no soportado en imprimir.\n";
            return nullptr;
        }

        return nullptr;
    }

    


};
