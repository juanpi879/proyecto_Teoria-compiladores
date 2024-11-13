
// Generated from ProgramacionNinos.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ProgramacionNinosVisitor.h"


/**
 * This class provides an empty implementation of ProgramacionNinosVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ProgramacionNinosBaseVisitor : public ProgramacionNinosVisitor {
public:

  virtual std::any visitPrograma(ProgramacionNinosParser::ProgramaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstruccion(ProgramacionNinosParser::InstruccionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsignacion(ProgramacionNinosParser::AsignacionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImprimir(ProgramacionNinosParser::ImprimirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEntrada(ProgramacionNinosParser::EntradaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondicional(ProgramacionNinosParser::CondicionalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBucle(ProgramacionNinosParser::BucleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBucleMientras(ProgramacionNinosParser::BucleMientrasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBuclepara(ProgramacionNinosParser::BucleparaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpresion(ProgramacionNinosParser::ExpresionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondicion(ProgramacionNinosParser::CondicionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncion(ProgramacionNinosParser::FuncionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLlamadaFuncion(ProgramacionNinosParser::LlamadaFuncionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClase(ProgramacionNinosParser::ClaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMetodo(ProgramacionNinosParser::MetodoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreacionObjeto(ProgramacionNinosParser::CreacionObjetoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccesoObjeto(ProgramacionNinosParser::AccesoObjetoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArregloDeclaracion(ProgramacionNinosParser::ArregloDeclaracionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccesoArreglo(ProgramacionNinosParser::AccesoArregloContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSegun(ProgramacionNinosParser::SegunContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaso(ProgramacionNinosParser::CasoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPausar(ProgramacionNinosParser::PausarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinuar(ProgramacionNinosParser::ContinuarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvento(ProgramacionNinosParser::EventoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncionMatematica(ProgramacionNinosParser::FuncionMatematicaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComentario(ProgramacionNinosParser::ComentarioContext *ctx) override {
    return visitChildren(ctx);
  }


};

