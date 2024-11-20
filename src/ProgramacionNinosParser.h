
// Generated from ProgramacionNinos.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  ProgramacionNinosParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    ID = 57, INT = 58, STRING = 59, WS = 60, PUNTOYCOMA = 61, COMENTARIO = 62, 
    COMENTARIO_MULTILINEA = 63
  };

  enum {
    RulePrograma = 0, RuleInstruccion = 1, RuleAsignacion = 2, RuleImprimir = 3, 
    RuleEntrada = 4, RuleCondicional = 5, RuleBucle = 6, RuleBucleMientras = 7, 
    RuleBuclepara = 8, RuleExpresion = 9, RuleCondicion = 10, RuleFuncion = 11, 
    RuleLlamadaFuncion = 12, RuleClase = 13, RuleMetodo = 14, RuleCreacionObjeto = 15, 
    RuleAccesoObjeto = 16, RuleArregloDeclaracion = 17, RuleAccesoArreglo = 18, 
    RuleSegun = 19, RuleCaso = 20, RulePausar = 21, RuleContinuar = 22, 
    RuleEvento = 23, RuleFuncionMatematica = 24, RuleComentario = 25
  };

  explicit ProgramacionNinosParser(antlr4::TokenStream *input);

  ProgramacionNinosParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ProgramacionNinosParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramaContext;
  class InstruccionContext;
  class AsignacionContext;
  class ImprimirContext;
  class EntradaContext;
  class CondicionalContext;
  class BucleContext;
  class BucleMientrasContext;
  class BucleparaContext;
  class ExpresionContext;
  class CondicionContext;
  class FuncionContext;
  class LlamadaFuncionContext;
  class ClaseContext;
  class MetodoContext;
  class CreacionObjetoContext;
  class AccesoObjetoContext;
  class ArregloDeclaracionContext;
  class AccesoArregloContext;
  class SegunContext;
  class CasoContext;
  class PausarContext;
  class ContinuarContext;
  class EventoContext;
  class FuncionMatematicaContext;
  class ComentarioContext; 

  class  ProgramaContext : public antlr4::ParserRuleContext {
  public:
    ProgramaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramaContext* programa();

  class  InstruccionContext : public antlr4::ParserRuleContext {
  public:
    InstruccionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AsignacionContext *asignacion();
    ImprimirContext *imprimir();
    CondicionalContext *condicional();
    BucleContext *bucle();
    BucleMientrasContext *bucleMientras();
    BucleparaContext *buclepara();
    ArregloDeclaracionContext *arregloDeclaracion();
    AccesoArregloContext *accesoArreglo();
    ClaseContext *clase();
    CreacionObjetoContext *creacionObjeto();
    AccesoObjetoContext *accesoObjeto();
    MetodoContext *metodo();
    LlamadaFuncionContext *llamadaFuncion();
    SegunContext *segun();
    PausarContext *pausar();
    ContinuarContext *continuar();
    EntradaContext *entrada();
    EventoContext *evento();
    FuncionMatematicaContext *funcionMatematica();
    ComentarioContext *comentario();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstruccionContext* instruccion();

  class  AsignacionContext : public antlr4::ParserRuleContext {
  public:
    AsignacionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ExpresionContext *expresion();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsignacionContext* asignacion();

  class  ImprimirContext : public antlr4::ParserRuleContext {
  public:
    ImprimirContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpresionContext *expresion();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImprimirContext* imprimir();

  class  EntradaContext : public antlr4::ParserRuleContext {
  public:
    EntradaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntradaContext* entrada();

  class  CondicionalContext : public antlr4::ParserRuleContext {
  public:
    CondicionalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CondicionContext *condicion();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondicionalContext* condicional();

  class  BucleContext : public antlr4::ParserRuleContext {
  public:
    BucleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpresionContext *expresion();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BucleContext* bucle();

  class  BucleMientrasContext : public antlr4::ParserRuleContext {
  public:
    BucleMientrasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CondicionContext *condicion();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BucleMientrasContext* bucleMientras();

  class  BucleparaContext : public antlr4::ParserRuleContext {
  public:
    BucleparaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AsignacionContext *> asignacion();
    AsignacionContext* asignacion(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PUNTOYCOMA();
    antlr4::tree::TerminalNode* PUNTOYCOMA(size_t i);
    CondicionContext *condicion();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BucleparaContext* buclepara();

  class  ExpresionContext : public antlr4::ParserRuleContext {
  public:
    ExpresionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *ID();
    std::vector<ExpresionContext *> expresion();
    ExpresionContext* expresion(size_t i);
    AccesoArregloContext *accesoArreglo();
    FuncionMatematicaContext *funcionMatematica();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpresionContext* expresion();
  ExpresionContext* expresion(int precedence);
  class  CondicionContext : public antlr4::ParserRuleContext {
  public:
    CondicionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpresionContext *> expresion();
    ExpresionContext* expresion(size_t i);
    antlr4::tree::TerminalNode *STRING();
    std::vector<CondicionContext *> condicion();
    CondicionContext* condicion(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondicionContext* condicion();
  CondicionContext* condicion(int precedence);
  class  FuncionContext : public antlr4::ParserRuleContext {
  public:
    FuncionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    InstruccionContext *instruccion();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncionContext* funcion();

  class  LlamadaFuncionContext : public antlr4::ParserRuleContext {
  public:
    LlamadaFuncionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<ExpresionContext *> expresion();
    ExpresionContext* expresion(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LlamadaFuncionContext* llamadaFuncion();

  class  ClaseContext : public antlr4::ParserRuleContext {
  public:
    ClaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<AsignacionContext *> asignacion();
    AsignacionContext* asignacion(size_t i);
    std::vector<MetodoContext *> metodo();
    MetodoContext* metodo(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClaseContext* clase();

  class  MetodoContext : public antlr4::ParserRuleContext {
  public:
    MetodoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    InstruccionContext *instruccion();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MetodoContext* metodo();

  class  CreacionObjetoContext : public antlr4::ParserRuleContext {
  public:
    CreacionObjetoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreacionObjetoContext* creacionObjeto();

  class  AccesoObjetoContext : public antlr4::ParserRuleContext {
  public:
    AccesoObjetoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccesoObjetoContext* accesoObjeto();

  class  ArregloDeclaracionContext : public antlr4::ParserRuleContext {
  public:
    ArregloDeclaracionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *INT();
    std::vector<ExpresionContext *> expresion();
    ExpresionContext* expresion(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArregloDeclaracionContext* arregloDeclaracion();

  class  AccesoArregloContext : public antlr4::ParserRuleContext {
  public:
    AccesoArregloContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ExpresionContext *expresion();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccesoArregloContext* accesoArreglo();

  class  SegunContext : public antlr4::ParserRuleContext {
  public:
    SegunContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpresionContext *expresion();
    std::vector<CasoContext *> caso();
    CasoContext* caso(size_t i);
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SegunContext* segun();

  class  CasoContext : public antlr4::ParserRuleContext {
  public:
    CasoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpresionContext *expresion();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CasoContext* caso();

  class  PausarContext : public antlr4::ParserRuleContext {
  public:
    PausarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PausarContext* pausar();

  class  ContinuarContext : public antlr4::ParserRuleContext {
  public:
    ContinuarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinuarContext* continuar();

  class  EventoContext : public antlr4::ParserRuleContext {
  public:
    EventoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ExpresionContext *expresion();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventoContext* evento();

  class  FuncionMatematicaContext : public antlr4::ParserRuleContext {
  public:
    FuncionMatematicaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpresionContext *> expresion();
    ExpresionContext* expresion(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncionMatematicaContext* funcionMatematica();

  class  ComentarioContext : public antlr4::ParserRuleContext {
  public:
    ComentarioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComentarioContext* comentario();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expresionSempred(ExpresionContext *_localctx, size_t predicateIndex);
  bool condicionSempred(CondicionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

