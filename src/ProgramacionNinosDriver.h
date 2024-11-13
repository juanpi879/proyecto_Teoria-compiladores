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
        if (ctx->INT()) { // Si la expresión es un número entero
            int value = std::stoi(ctx->INT()->getText());
            return static_cast<Value*>(ConstantFP::get(context, APFloat(static_cast<float>(value))));
        }
        std::cerr << "Error: Expresion no reconocida o no implementada.\n";
        return nullptr;
    }
};
