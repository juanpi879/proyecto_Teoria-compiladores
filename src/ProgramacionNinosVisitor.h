
// Generated from ProgramacionNinos.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ProgramacionNinosParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ProgramacionNinosParser.
 */
class  ProgramacionNinosVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ProgramacionNinosParser.
   */
    virtual std::any visitPrograma(ProgramacionNinosParser::ProgramaContext *context) = 0;

    virtual std::any visitInstruccion(ProgramacionNinosParser::InstruccionContext *context) = 0;

    virtual std::any visitAsignacion(ProgramacionNinosParser::AsignacionContext *context) = 0;

    virtual std::any visitImprimir(ProgramacionNinosParser::ImprimirContext *context) = 0;

    virtual std::any visitEntrada(ProgramacionNinosParser::EntradaContext *context) = 0;

    virtual std::any visitCondicional(ProgramacionNinosParser::CondicionalContext *context) = 0;

    virtual std::any visitBucle(ProgramacionNinosParser::BucleContext *context) = 0;

    virtual std::any visitBucleMientras(ProgramacionNinosParser::BucleMientrasContext *context) = 0;

    virtual std::any visitBuclepara(ProgramacionNinosParser::BucleparaContext *context) = 0;

    virtual std::any visitExpresion(ProgramacionNinosParser::ExpresionContext *context) = 0;

    virtual std::any visitCondicion(ProgramacionNinosParser::CondicionContext *context) = 0;

    virtual std::any visitFuncion(ProgramacionNinosParser::FuncionContext *context) = 0;

    virtual std::any visitLlamadaFuncion(ProgramacionNinosParser::LlamadaFuncionContext *context) = 0;

    virtual std::any visitClase(ProgramacionNinosParser::ClaseContext *context) = 0;

    virtual std::any visitMetodo(ProgramacionNinosParser::MetodoContext *context) = 0;

    virtual std::any visitCreacionObjeto(ProgramacionNinosParser::CreacionObjetoContext *context) = 0;

    virtual std::any visitAccesoObjeto(ProgramacionNinosParser::AccesoObjetoContext *context) = 0;

    virtual std::any visitArregloDeclaracion(ProgramacionNinosParser::ArregloDeclaracionContext *context) = 0;

    virtual std::any visitAccesoArreglo(ProgramacionNinosParser::AccesoArregloContext *context) = 0;

    virtual std::any visitSegun(ProgramacionNinosParser::SegunContext *context) = 0;

    virtual std::any visitCaso(ProgramacionNinosParser::CasoContext *context) = 0;

    virtual std::any visitPausar(ProgramacionNinosParser::PausarContext *context) = 0;

    virtual std::any visitContinuar(ProgramacionNinosParser::ContinuarContext *context) = 0;

    virtual std::any visitEvento(ProgramacionNinosParser::EventoContext *context) = 0;

    virtual std::any visitFuncionMatematica(ProgramacionNinosParser::FuncionMatematicaContext *context) = 0;

    virtual std::any visitComentario(ProgramacionNinosParser::ComentarioContext *context) = 0;


};

