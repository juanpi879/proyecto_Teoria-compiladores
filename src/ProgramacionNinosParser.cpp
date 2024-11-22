
// Generated from ProgramacionNinos.g4 by ANTLR 4.13.2


#include "ProgramacionNinosVisitor.h"

#include "ProgramacionNinosParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ProgramacionNinosParserStaticData final {
  ProgramacionNinosParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ProgramacionNinosParserStaticData(const ProgramacionNinosParserStaticData&) = delete;
  ProgramacionNinosParserStaticData(ProgramacionNinosParserStaticData&&) = delete;
  ProgramacionNinosParserStaticData& operator=(const ProgramacionNinosParserStaticData&) = delete;
  ProgramacionNinosParserStaticData& operator=(ProgramacionNinosParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag programacionninosParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<ProgramacionNinosParserStaticData> programacionninosParserStaticData = nullptr;

void programacionninosParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (programacionninosParserStaticData != nullptr) {
    return;
  }
#else
  assert(programacionninosParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ProgramacionNinosParserStaticData>(
    std::vector<std::string>{
      "programa", "instruccion", "asignacion", "imprimir", "entrada", "condicional", 
      "bucle", "bucleMientras", "buclepara", "expresion", "condicion", "funcion", 
      "llamadaFuncion", "clase", "metodo", "creacionObjeto", "accesoObjeto", 
      "arregloDeclaracion", "accesoArreglo", "segun", "caso", "pausar", 
      "continuar", "evento", "funcionMatematica", "comentario"
    },
    std::vector<std::string>{
      "", "'variable'", "'='", "'imprimir'", "'('", "')'", "'leer'", "'si'", 
      "'{'", "'}'", "'sino'", "'repetir'", "'mientras'", "'para'", "'verdadero'", 
      "'falso'", "'+'", "'-'", "'*'", "'/'", "'concatenar'", "'y'", "'o'", 
      "'no'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'cualquier'", 
      "'definir'", "','", "'clase'", "'hereda'", "'nuevo'", "'.'", "'arreglo'", 
      "'['", "']'", "'segun'", "'defecto'", "'caso'", "':'", "'pausar'", 
      "'continuar'", "'mover'", "'hacia'", "'girar'", "'a'", "'encender'", 
      "'apagar'", "'sumar'", "'restar'", "'multiplicar'", "'dividir'", "'elevar'", 
      "'cuadrado'", "'comentar'", "", "", "", "", "';'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "ID", "INT", "STRING", "WS", "PUNTOYCOMA", 
      "COMENTARIO", "COMENTARIO_MULTILINEA"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,65,408,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,4,0,54,8,0,11,0,12,0,55,
  	1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,3,1,80,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,89,8,2,1,
  	3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,5,5,106,8,5,
  	10,5,12,5,109,9,5,1,5,1,5,1,5,1,5,5,5,115,8,5,10,5,12,5,118,9,5,1,5,3,
  	5,121,8,5,1,6,1,6,1,6,1,6,1,6,1,6,5,6,129,8,6,10,6,12,6,132,9,6,1,6,1,
  	6,1,7,1,7,1,7,1,7,1,7,1,7,5,7,142,8,7,10,7,12,7,145,9,7,1,7,1,7,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,159,8,8,10,8,12,8,162,9,8,1,8,1,
  	8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,176,8,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,5,9,187,8,9,10,9,12,9,190,9,9,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,207,8,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,5,10,215,8,10,10,10,12,10,218,9,10,1,11,
  	1,11,1,11,1,11,1,11,1,11,3,11,226,8,11,1,11,1,11,1,11,1,11,1,11,1,12,
  	1,12,1,12,1,12,1,12,5,12,238,8,12,10,12,12,12,241,9,12,3,12,243,8,12,
  	1,12,1,12,1,13,1,13,1,13,1,13,3,13,251,8,13,1,13,1,13,1,13,5,13,256,8,
  	13,10,13,12,13,259,9,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,3,14,
  	269,8,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,16,1,16,
  	1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,5,17,295,
  	8,17,10,17,12,17,298,9,17,3,17,300,8,17,1,17,1,17,1,18,1,18,1,18,1,18,
  	1,18,1,19,1,19,1,19,1,19,1,19,1,19,5,19,315,8,19,10,19,12,19,318,9,19,
  	1,19,1,19,1,19,1,19,5,19,324,8,19,10,19,12,19,327,9,19,1,19,3,19,330,
  	8,19,3,19,332,8,19,1,19,1,19,1,20,1,20,1,20,1,20,5,20,340,8,20,10,20,
  	12,20,343,9,20,1,21,1,21,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,
  	1,23,1,23,1,23,1,23,1,23,3,23,361,8,23,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,3,24,403,8,24,1,25,1,25,1,25,1,25,0,2,18,
  	20,26,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,0,3,1,0,16,20,1,0,24,29,1,0,24,25,445,0,53,1,0,0,0,2,79,1,0,
  	0,0,4,88,1,0,0,0,6,90,1,0,0,0,8,95,1,0,0,0,10,99,1,0,0,0,12,122,1,0,0,
  	0,14,135,1,0,0,0,16,148,1,0,0,0,18,175,1,0,0,0,20,206,1,0,0,0,22,219,
  	1,0,0,0,24,232,1,0,0,0,26,246,1,0,0,0,28,262,1,0,0,0,30,275,1,0,0,0,32,
  	280,1,0,0,0,34,284,1,0,0,0,36,303,1,0,0,0,38,308,1,0,0,0,40,335,1,0,0,
  	0,42,344,1,0,0,0,44,346,1,0,0,0,46,360,1,0,0,0,48,402,1,0,0,0,50,404,
  	1,0,0,0,52,54,3,2,1,0,53,52,1,0,0,0,54,55,1,0,0,0,55,53,1,0,0,0,55,56,
  	1,0,0,0,56,57,1,0,0,0,57,58,5,0,0,1,58,1,1,0,0,0,59,80,3,4,2,0,60,80,
  	3,6,3,0,61,80,3,10,5,0,62,80,3,12,6,0,63,80,3,14,7,0,64,80,3,16,8,0,65,
  	80,3,34,17,0,66,80,3,36,18,0,67,80,3,26,13,0,68,80,3,30,15,0,69,80,3,
  	32,16,0,70,80,3,28,14,0,71,80,3,24,12,0,72,80,3,38,19,0,73,80,3,42,21,
  	0,74,80,3,44,22,0,75,80,3,8,4,0,76,80,3,46,23,0,77,80,3,48,24,0,78,80,
  	3,50,25,0,79,59,1,0,0,0,79,60,1,0,0,0,79,61,1,0,0,0,79,62,1,0,0,0,79,
  	63,1,0,0,0,79,64,1,0,0,0,79,65,1,0,0,0,79,66,1,0,0,0,79,67,1,0,0,0,79,
  	68,1,0,0,0,79,69,1,0,0,0,79,70,1,0,0,0,79,71,1,0,0,0,79,72,1,0,0,0,79,
  	73,1,0,0,0,79,74,1,0,0,0,79,75,1,0,0,0,79,76,1,0,0,0,79,77,1,0,0,0,79,
  	78,1,0,0,0,80,3,1,0,0,0,81,82,5,1,0,0,82,83,5,59,0,0,83,84,5,2,0,0,84,
  	89,3,18,9,0,85,86,5,59,0,0,86,87,5,2,0,0,87,89,3,18,9,0,88,81,1,0,0,0,
  	88,85,1,0,0,0,89,5,1,0,0,0,90,91,5,3,0,0,91,92,5,4,0,0,92,93,3,18,9,0,
  	93,94,5,5,0,0,94,7,1,0,0,0,95,96,5,6,0,0,96,97,5,4,0,0,97,98,5,5,0,0,
  	98,9,1,0,0,0,99,100,5,7,0,0,100,101,5,4,0,0,101,102,3,20,10,0,102,103,
  	5,5,0,0,103,107,5,8,0,0,104,106,3,2,1,0,105,104,1,0,0,0,106,109,1,0,0,
  	0,107,105,1,0,0,0,107,108,1,0,0,0,108,110,1,0,0,0,109,107,1,0,0,0,110,
  	120,5,9,0,0,111,112,5,10,0,0,112,116,5,8,0,0,113,115,3,2,1,0,114,113,
  	1,0,0,0,115,118,1,0,0,0,116,114,1,0,0,0,116,117,1,0,0,0,117,119,1,0,0,
  	0,118,116,1,0,0,0,119,121,5,9,0,0,120,111,1,0,0,0,120,121,1,0,0,0,121,
  	11,1,0,0,0,122,123,5,11,0,0,123,124,5,4,0,0,124,125,3,18,9,0,125,126,
  	5,5,0,0,126,130,5,8,0,0,127,129,3,2,1,0,128,127,1,0,0,0,129,132,1,0,0,
  	0,130,128,1,0,0,0,130,131,1,0,0,0,131,133,1,0,0,0,132,130,1,0,0,0,133,
  	134,5,9,0,0,134,13,1,0,0,0,135,136,5,12,0,0,136,137,5,4,0,0,137,138,3,
  	20,10,0,138,139,5,5,0,0,139,143,5,8,0,0,140,142,3,2,1,0,141,140,1,0,0,
  	0,142,145,1,0,0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,146,1,0,0,0,145,
  	143,1,0,0,0,146,147,5,9,0,0,147,15,1,0,0,0,148,149,5,13,0,0,149,150,5,
  	4,0,0,150,151,3,4,2,0,151,152,5,63,0,0,152,153,3,20,10,0,153,154,5,63,
  	0,0,154,155,3,4,2,0,155,156,5,5,0,0,156,160,5,8,0,0,157,159,3,2,1,0,158,
  	157,1,0,0,0,159,162,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,163,1,
  	0,0,0,162,160,1,0,0,0,163,164,5,9,0,0,164,17,1,0,0,0,165,166,6,9,-1,0,
  	166,176,5,60,0,0,167,176,5,61,0,0,168,176,5,14,0,0,169,176,5,15,0,0,170,
  	176,5,59,0,0,171,172,5,23,0,0,172,176,3,18,9,3,173,176,3,36,18,0,174,
  	176,3,48,24,0,175,165,1,0,0,0,175,167,1,0,0,0,175,168,1,0,0,0,175,169,
  	1,0,0,0,175,170,1,0,0,0,175,171,1,0,0,0,175,173,1,0,0,0,175,174,1,0,0,
  	0,176,188,1,0,0,0,177,178,10,6,0,0,178,179,7,0,0,0,179,187,3,18,9,7,180,
  	181,10,5,0,0,181,182,5,21,0,0,182,187,3,18,9,6,183,184,10,4,0,0,184,185,
  	5,22,0,0,185,187,3,18,9,5,186,177,1,0,0,0,186,180,1,0,0,0,186,183,1,0,
  	0,0,187,190,1,0,0,0,188,186,1,0,0,0,188,189,1,0,0,0,189,19,1,0,0,0,190,
  	188,1,0,0,0,191,192,6,10,-1,0,192,193,3,18,9,0,193,194,7,1,0,0,194,195,
  	3,18,9,0,195,207,1,0,0,0,196,197,3,18,9,0,197,198,7,2,0,0,198,199,5,61,
  	0,0,199,207,1,0,0,0,200,201,5,23,0,0,201,202,5,4,0,0,202,203,3,20,10,
  	0,203,204,5,5,0,0,204,207,1,0,0,0,205,207,5,30,0,0,206,191,1,0,0,0,206,
  	196,1,0,0,0,206,200,1,0,0,0,206,205,1,0,0,0,207,216,1,0,0,0,208,209,10,
  	4,0,0,209,210,5,21,0,0,210,215,3,20,10,5,211,212,10,3,0,0,212,213,5,22,
  	0,0,213,215,3,20,10,4,214,208,1,0,0,0,214,211,1,0,0,0,215,218,1,0,0,0,
  	216,214,1,0,0,0,216,217,1,0,0,0,217,21,1,0,0,0,218,216,1,0,0,0,219,220,
  	5,31,0,0,220,221,5,59,0,0,221,225,5,4,0,0,222,223,5,59,0,0,223,224,5,
  	32,0,0,224,226,5,59,0,0,225,222,1,0,0,0,225,226,1,0,0,0,226,227,1,0,0,
  	0,227,228,5,5,0,0,228,229,5,8,0,0,229,230,3,2,1,0,230,231,5,9,0,0,231,
  	23,1,0,0,0,232,233,5,59,0,0,233,242,5,4,0,0,234,239,3,18,9,0,235,236,
  	5,32,0,0,236,238,3,18,9,0,237,235,1,0,0,0,238,241,1,0,0,0,239,237,1,0,
  	0,0,239,240,1,0,0,0,240,243,1,0,0,0,241,239,1,0,0,0,242,234,1,0,0,0,242,
  	243,1,0,0,0,243,244,1,0,0,0,244,245,5,5,0,0,245,25,1,0,0,0,246,247,5,
  	33,0,0,247,250,5,59,0,0,248,249,5,34,0,0,249,251,5,59,0,0,250,248,1,0,
  	0,0,250,251,1,0,0,0,251,252,1,0,0,0,252,257,5,8,0,0,253,256,3,4,2,0,254,
  	256,3,28,14,0,255,253,1,0,0,0,255,254,1,0,0,0,256,259,1,0,0,0,257,255,
  	1,0,0,0,257,258,1,0,0,0,258,260,1,0,0,0,259,257,1,0,0,0,260,261,5,9,0,
  	0,261,27,1,0,0,0,262,263,5,31,0,0,263,264,5,59,0,0,264,268,5,4,0,0,265,
  	266,5,59,0,0,266,267,5,32,0,0,267,269,5,59,0,0,268,265,1,0,0,0,268,269,
  	1,0,0,0,269,270,1,0,0,0,270,271,5,5,0,0,271,272,5,8,0,0,272,273,3,2,1,
  	0,273,274,5,9,0,0,274,29,1,0,0,0,275,276,5,35,0,0,276,277,5,59,0,0,277,
  	278,5,4,0,0,278,279,5,5,0,0,279,31,1,0,0,0,280,281,5,59,0,0,281,282,5,
  	36,0,0,282,283,5,59,0,0,283,33,1,0,0,0,284,285,5,37,0,0,285,286,5,59,
  	0,0,286,287,5,38,0,0,287,288,5,60,0,0,288,289,5,39,0,0,289,290,5,2,0,
  	0,290,299,5,8,0,0,291,296,3,18,9,0,292,293,5,32,0,0,293,295,3,18,9,0,
  	294,292,1,0,0,0,295,298,1,0,0,0,296,294,1,0,0,0,296,297,1,0,0,0,297,300,
  	1,0,0,0,298,296,1,0,0,0,299,291,1,0,0,0,299,300,1,0,0,0,300,301,1,0,0,
  	0,301,302,5,9,0,0,302,35,1,0,0,0,303,304,5,59,0,0,304,305,5,38,0,0,305,
  	306,3,18,9,0,306,307,5,39,0,0,307,37,1,0,0,0,308,309,5,40,0,0,309,310,
  	5,4,0,0,310,311,3,18,9,0,311,312,5,5,0,0,312,316,5,8,0,0,313,315,3,40,
  	20,0,314,313,1,0,0,0,315,318,1,0,0,0,316,314,1,0,0,0,316,317,1,0,0,0,
  	317,331,1,0,0,0,318,316,1,0,0,0,319,329,5,41,0,0,320,330,3,2,1,0,321,
  	325,5,8,0,0,322,324,3,2,1,0,323,322,1,0,0,0,324,327,1,0,0,0,325,323,1,
  	0,0,0,325,326,1,0,0,0,326,328,1,0,0,0,327,325,1,0,0,0,328,330,5,9,0,0,
  	329,320,1,0,0,0,329,321,1,0,0,0,330,332,1,0,0,0,331,319,1,0,0,0,331,332,
  	1,0,0,0,332,333,1,0,0,0,333,334,5,9,0,0,334,39,1,0,0,0,335,336,5,42,0,
  	0,336,337,3,18,9,0,337,341,5,43,0,0,338,340,3,2,1,0,339,338,1,0,0,0,340,
  	343,1,0,0,0,341,339,1,0,0,0,341,342,1,0,0,0,342,41,1,0,0,0,343,341,1,
  	0,0,0,344,345,5,44,0,0,345,43,1,0,0,0,346,347,5,45,0,0,347,45,1,0,0,0,
  	348,349,5,46,0,0,349,350,5,59,0,0,350,351,5,47,0,0,351,361,3,18,9,0,352,
  	353,5,48,0,0,353,354,5,59,0,0,354,355,5,49,0,0,355,361,3,18,9,0,356,357,
  	5,50,0,0,357,361,5,59,0,0,358,359,5,51,0,0,359,361,5,59,0,0,360,348,1,
  	0,0,0,360,352,1,0,0,0,360,356,1,0,0,0,360,358,1,0,0,0,361,47,1,0,0,0,
  	362,363,5,52,0,0,363,364,5,4,0,0,364,365,3,18,9,0,365,366,5,32,0,0,366,
  	367,3,18,9,0,367,368,5,5,0,0,368,403,1,0,0,0,369,370,5,53,0,0,370,371,
  	5,4,0,0,371,372,3,18,9,0,372,373,5,32,0,0,373,374,3,18,9,0,374,375,5,
  	5,0,0,375,403,1,0,0,0,376,377,5,54,0,0,377,378,5,4,0,0,378,379,3,18,9,
  	0,379,380,5,32,0,0,380,381,3,18,9,0,381,382,5,5,0,0,382,403,1,0,0,0,383,
  	384,5,55,0,0,384,385,5,4,0,0,385,386,3,18,9,0,386,387,5,32,0,0,387,388,
  	3,18,9,0,388,389,5,5,0,0,389,403,1,0,0,0,390,391,5,56,0,0,391,392,5,4,
  	0,0,392,393,3,18,9,0,393,394,5,32,0,0,394,395,3,18,9,0,395,396,5,5,0,
  	0,396,403,1,0,0,0,397,398,5,57,0,0,398,399,5,4,0,0,399,400,3,18,9,0,400,
  	401,5,5,0,0,401,403,1,0,0,0,402,362,1,0,0,0,402,369,1,0,0,0,402,376,1,
  	0,0,0,402,383,1,0,0,0,402,390,1,0,0,0,402,397,1,0,0,0,403,49,1,0,0,0,
  	404,405,5,58,0,0,405,406,5,61,0,0,406,51,1,0,0,0,31,55,79,88,107,116,
  	120,130,143,160,175,186,188,206,214,216,225,239,242,250,255,257,268,296,
  	299,316,325,329,331,341,360,402
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  programacionninosParserStaticData = std::move(staticData);
}

}

ProgramacionNinosParser::ProgramacionNinosParser(TokenStream *input) : ProgramacionNinosParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ProgramacionNinosParser::ProgramacionNinosParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ProgramacionNinosParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *programacionninosParserStaticData->atn, programacionninosParserStaticData->decisionToDFA, programacionninosParserStaticData->sharedContextCache, options);
}

ProgramacionNinosParser::~ProgramacionNinosParser() {
  delete _interpreter;
}

const atn::ATN& ProgramacionNinosParser::getATN() const {
  return *programacionninosParserStaticData->atn;
}

std::string ProgramacionNinosParser::getGrammarFileName() const {
  return "ProgramacionNinos.g4";
}

const std::vector<std::string>& ProgramacionNinosParser::getRuleNames() const {
  return programacionninosParserStaticData->ruleNames;
}

const dfa::Vocabulary& ProgramacionNinosParser::getVocabulary() const {
  return programacionninosParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ProgramacionNinosParser::getSerializedATN() const {
  return programacionninosParserStaticData->serializedATN;
}


//----------------- ProgramaContext ------------------------------------------------------------------

ProgramacionNinosParser::ProgramaContext::ProgramaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgramacionNinosParser::ProgramaContext::EOF() {
  return getToken(ProgramacionNinosParser::EOF, 0);
}

std::vector<ProgramacionNinosParser::InstruccionContext *> ProgramacionNinosParser::ProgramaContext::instruccion() {
  return getRuleContexts<ProgramacionNinosParser::InstruccionContext>();
}

ProgramacionNinosParser::InstruccionContext* ProgramacionNinosParser::ProgramaContext::instruccion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::InstruccionContext>(i);
}


size_t ProgramacionNinosParser::ProgramaContext::getRuleIndex() const {
  return ProgramacionNinosParser::RulePrograma;
}


std::any ProgramacionNinosParser::ProgramaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitPrograma(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::ProgramaContext* ProgramacionNinosParser::programa() {
  ProgramaContext *_localctx = _tracker.createInstance<ProgramaContext>(_ctx, getState());
  enterRule(_localctx, 0, ProgramacionNinosParser::RulePrograma);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(52);
      instruccion();
      setState(55); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1152201507026778314) != 0));
    setState(57);
    match(ProgramacionNinosParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstruccionContext ------------------------------------------------------------------

ProgramacionNinosParser::InstruccionContext::InstruccionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgramacionNinosParser::AsignacionContext* ProgramacionNinosParser::InstruccionContext::asignacion() {
  return getRuleContext<ProgramacionNinosParser::AsignacionContext>(0);
}

ProgramacionNinosParser::ImprimirContext* ProgramacionNinosParser::InstruccionContext::imprimir() {
  return getRuleContext<ProgramacionNinosParser::ImprimirContext>(0);
}

ProgramacionNinosParser::CondicionalContext* ProgramacionNinosParser::InstruccionContext::condicional() {
  return getRuleContext<ProgramacionNinosParser::CondicionalContext>(0);
}

ProgramacionNinosParser::BucleContext* ProgramacionNinosParser::InstruccionContext::bucle() {
  return getRuleContext<ProgramacionNinosParser::BucleContext>(0);
}

ProgramacionNinosParser::BucleMientrasContext* ProgramacionNinosParser::InstruccionContext::bucleMientras() {
  return getRuleContext<ProgramacionNinosParser::BucleMientrasContext>(0);
}

ProgramacionNinosParser::BucleparaContext* ProgramacionNinosParser::InstruccionContext::buclepara() {
  return getRuleContext<ProgramacionNinosParser::BucleparaContext>(0);
}

ProgramacionNinosParser::ArregloDeclaracionContext* ProgramacionNinosParser::InstruccionContext::arregloDeclaracion() {
  return getRuleContext<ProgramacionNinosParser::ArregloDeclaracionContext>(0);
}

ProgramacionNinosParser::AccesoArregloContext* ProgramacionNinosParser::InstruccionContext::accesoArreglo() {
  return getRuleContext<ProgramacionNinosParser::AccesoArregloContext>(0);
}

ProgramacionNinosParser::ClaseContext* ProgramacionNinosParser::InstruccionContext::clase() {
  return getRuleContext<ProgramacionNinosParser::ClaseContext>(0);
}

ProgramacionNinosParser::CreacionObjetoContext* ProgramacionNinosParser::InstruccionContext::creacionObjeto() {
  return getRuleContext<ProgramacionNinosParser::CreacionObjetoContext>(0);
}

ProgramacionNinosParser::AccesoObjetoContext* ProgramacionNinosParser::InstruccionContext::accesoObjeto() {
  return getRuleContext<ProgramacionNinosParser::AccesoObjetoContext>(0);
}

ProgramacionNinosParser::MetodoContext* ProgramacionNinosParser::InstruccionContext::metodo() {
  return getRuleContext<ProgramacionNinosParser::MetodoContext>(0);
}

ProgramacionNinosParser::LlamadaFuncionContext* ProgramacionNinosParser::InstruccionContext::llamadaFuncion() {
  return getRuleContext<ProgramacionNinosParser::LlamadaFuncionContext>(0);
}

ProgramacionNinosParser::SegunContext* ProgramacionNinosParser::InstruccionContext::segun() {
  return getRuleContext<ProgramacionNinosParser::SegunContext>(0);
}

ProgramacionNinosParser::PausarContext* ProgramacionNinosParser::InstruccionContext::pausar() {
  return getRuleContext<ProgramacionNinosParser::PausarContext>(0);
}

ProgramacionNinosParser::ContinuarContext* ProgramacionNinosParser::InstruccionContext::continuar() {
  return getRuleContext<ProgramacionNinosParser::ContinuarContext>(0);
}

ProgramacionNinosParser::EntradaContext* ProgramacionNinosParser::InstruccionContext::entrada() {
  return getRuleContext<ProgramacionNinosParser::EntradaContext>(0);
}

ProgramacionNinosParser::EventoContext* ProgramacionNinosParser::InstruccionContext::evento() {
  return getRuleContext<ProgramacionNinosParser::EventoContext>(0);
}

ProgramacionNinosParser::FuncionMatematicaContext* ProgramacionNinosParser::InstruccionContext::funcionMatematica() {
  return getRuleContext<ProgramacionNinosParser::FuncionMatematicaContext>(0);
}

ProgramacionNinosParser::ComentarioContext* ProgramacionNinosParser::InstruccionContext::comentario() {
  return getRuleContext<ProgramacionNinosParser::ComentarioContext>(0);
}


size_t ProgramacionNinosParser::InstruccionContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleInstruccion;
}


std::any ProgramacionNinosParser::InstruccionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitInstruccion(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::InstruccionContext* ProgramacionNinosParser::instruccion() {
  InstruccionContext *_localctx = _tracker.createInstance<InstruccionContext>(_ctx, getState());
  enterRule(_localctx, 2, ProgramacionNinosParser::RuleInstruccion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(59);
      asignacion();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(60);
      imprimir();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(61);
      condicional();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(62);
      bucle();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(63);
      bucleMientras();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(64);
      buclepara();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(65);
      arregloDeclaracion();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(66);
      accesoArreglo();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(67);
      clase();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(68);
      creacionObjeto();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(69);
      accesoObjeto();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(70);
      metodo();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(71);
      llamadaFuncion();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(72);
      segun();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(73);
      pausar();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(74);
      continuar();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(75);
      entrada();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(76);
      evento();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(77);
      funcionMatematica();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(78);
      comentario();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsignacionContext ------------------------------------------------------------------

ProgramacionNinosParser::AsignacionContext::AsignacionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgramacionNinosParser::AsignacionContext::ID() {
  return getToken(ProgramacionNinosParser::ID, 0);
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::AsignacionContext::expresion() {
  return getRuleContext<ProgramacionNinosParser::ExpresionContext>(0);
}


size_t ProgramacionNinosParser::AsignacionContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleAsignacion;
}


std::any ProgramacionNinosParser::AsignacionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitAsignacion(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::AsignacionContext* ProgramacionNinosParser::asignacion() {
  AsignacionContext *_localctx = _tracker.createInstance<AsignacionContext>(_ctx, getState());
  enterRule(_localctx, 4, ProgramacionNinosParser::RuleAsignacion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ProgramacionNinosParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(81);
        match(ProgramacionNinosParser::T__0);
        setState(82);
        match(ProgramacionNinosParser::ID);
        setState(83);
        match(ProgramacionNinosParser::T__1);
        setState(84);
        expresion(0);
        break;
      }

      case ProgramacionNinosParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(85);
        match(ProgramacionNinosParser::ID);
        setState(86);
        match(ProgramacionNinosParser::T__1);
        setState(87);
        expresion(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImprimirContext ------------------------------------------------------------------

ProgramacionNinosParser::ImprimirContext::ImprimirContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::ImprimirContext::expresion() {
  return getRuleContext<ProgramacionNinosParser::ExpresionContext>(0);
}


size_t ProgramacionNinosParser::ImprimirContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleImprimir;
}


std::any ProgramacionNinosParser::ImprimirContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitImprimir(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::ImprimirContext* ProgramacionNinosParser::imprimir() {
  ImprimirContext *_localctx = _tracker.createInstance<ImprimirContext>(_ctx, getState());
  enterRule(_localctx, 6, ProgramacionNinosParser::RuleImprimir);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(ProgramacionNinosParser::T__2);
    setState(91);
    match(ProgramacionNinosParser::T__3);
    setState(92);
    expresion(0);
    setState(93);
    match(ProgramacionNinosParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EntradaContext ------------------------------------------------------------------

ProgramacionNinosParser::EntradaContext::EntradaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgramacionNinosParser::EntradaContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleEntrada;
}


std::any ProgramacionNinosParser::EntradaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitEntrada(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::EntradaContext* ProgramacionNinosParser::entrada() {
  EntradaContext *_localctx = _tracker.createInstance<EntradaContext>(_ctx, getState());
  enterRule(_localctx, 8, ProgramacionNinosParser::RuleEntrada);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(ProgramacionNinosParser::T__5);
    setState(96);
    match(ProgramacionNinosParser::T__3);
    setState(97);
    match(ProgramacionNinosParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondicionalContext ------------------------------------------------------------------

ProgramacionNinosParser::CondicionalContext::CondicionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgramacionNinosParser::CondicionContext* ProgramacionNinosParser::CondicionalContext::condicion() {
  return getRuleContext<ProgramacionNinosParser::CondicionContext>(0);
}

std::vector<ProgramacionNinosParser::InstruccionContext *> ProgramacionNinosParser::CondicionalContext::instruccion() {
  return getRuleContexts<ProgramacionNinosParser::InstruccionContext>();
}

ProgramacionNinosParser::InstruccionContext* ProgramacionNinosParser::CondicionalContext::instruccion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::InstruccionContext>(i);
}


size_t ProgramacionNinosParser::CondicionalContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleCondicional;
}


std::any ProgramacionNinosParser::CondicionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitCondicional(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::CondicionalContext* ProgramacionNinosParser::condicional() {
  CondicionalContext *_localctx = _tracker.createInstance<CondicionalContext>(_ctx, getState());
  enterRule(_localctx, 10, ProgramacionNinosParser::RuleCondicional);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(ProgramacionNinosParser::T__6);
    setState(100);
    match(ProgramacionNinosParser::T__3);
    setState(101);
    condicion(0);
    setState(102);
    match(ProgramacionNinosParser::T__4);
    setState(103);
    match(ProgramacionNinosParser::T__7);
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1152201507026778314) != 0)) {
      setState(104);
      instruccion();
      setState(109);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(110);
    match(ProgramacionNinosParser::T__8);
    setState(120);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ProgramacionNinosParser::T__9) {
      setState(111);
      match(ProgramacionNinosParser::T__9);
      setState(112);
      match(ProgramacionNinosParser::T__7);
      setState(116);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1152201507026778314) != 0)) {
        setState(113);
        instruccion();
        setState(118);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(119);
      match(ProgramacionNinosParser::T__8);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BucleContext ------------------------------------------------------------------

ProgramacionNinosParser::BucleContext::BucleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::BucleContext::expresion() {
  return getRuleContext<ProgramacionNinosParser::ExpresionContext>(0);
}

std::vector<ProgramacionNinosParser::InstruccionContext *> ProgramacionNinosParser::BucleContext::instruccion() {
  return getRuleContexts<ProgramacionNinosParser::InstruccionContext>();
}

ProgramacionNinosParser::InstruccionContext* ProgramacionNinosParser::BucleContext::instruccion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::InstruccionContext>(i);
}


size_t ProgramacionNinosParser::BucleContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleBucle;
}


std::any ProgramacionNinosParser::BucleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitBucle(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::BucleContext* ProgramacionNinosParser::bucle() {
  BucleContext *_localctx = _tracker.createInstance<BucleContext>(_ctx, getState());
  enterRule(_localctx, 12, ProgramacionNinosParser::RuleBucle);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(ProgramacionNinosParser::T__10);
    setState(123);
    match(ProgramacionNinosParser::T__3);
    setState(124);
    expresion(0);
    setState(125);
    match(ProgramacionNinosParser::T__4);
    setState(126);
    match(ProgramacionNinosParser::T__7);
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1152201507026778314) != 0)) {
      setState(127);
      instruccion();
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(133);
    match(ProgramacionNinosParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BucleMientrasContext ------------------------------------------------------------------

ProgramacionNinosParser::BucleMientrasContext::BucleMientrasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgramacionNinosParser::CondicionContext* ProgramacionNinosParser::BucleMientrasContext::condicion() {
  return getRuleContext<ProgramacionNinosParser::CondicionContext>(0);
}

std::vector<ProgramacionNinosParser::InstruccionContext *> ProgramacionNinosParser::BucleMientrasContext::instruccion() {
  return getRuleContexts<ProgramacionNinosParser::InstruccionContext>();
}

ProgramacionNinosParser::InstruccionContext* ProgramacionNinosParser::BucleMientrasContext::instruccion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::InstruccionContext>(i);
}


size_t ProgramacionNinosParser::BucleMientrasContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleBucleMientras;
}


std::any ProgramacionNinosParser::BucleMientrasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitBucleMientras(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::BucleMientrasContext* ProgramacionNinosParser::bucleMientras() {
  BucleMientrasContext *_localctx = _tracker.createInstance<BucleMientrasContext>(_ctx, getState());
  enterRule(_localctx, 14, ProgramacionNinosParser::RuleBucleMientras);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(ProgramacionNinosParser::T__11);
    setState(136);
    match(ProgramacionNinosParser::T__3);
    setState(137);
    condicion(0);
    setState(138);
    match(ProgramacionNinosParser::T__4);
    setState(139);
    match(ProgramacionNinosParser::T__7);
    setState(143);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1152201507026778314) != 0)) {
      setState(140);
      instruccion();
      setState(145);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(146);
    match(ProgramacionNinosParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BucleparaContext ------------------------------------------------------------------

ProgramacionNinosParser::BucleparaContext::BucleparaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ProgramacionNinosParser::AsignacionContext *> ProgramacionNinosParser::BucleparaContext::asignacion() {
  return getRuleContexts<ProgramacionNinosParser::AsignacionContext>();
}

ProgramacionNinosParser::AsignacionContext* ProgramacionNinosParser::BucleparaContext::asignacion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::AsignacionContext>(i);
}

std::vector<tree::TerminalNode *> ProgramacionNinosParser::BucleparaContext::PUNTOYCOMA() {
  return getTokens(ProgramacionNinosParser::PUNTOYCOMA);
}

tree::TerminalNode* ProgramacionNinosParser::BucleparaContext::PUNTOYCOMA(size_t i) {
  return getToken(ProgramacionNinosParser::PUNTOYCOMA, i);
}

ProgramacionNinosParser::CondicionContext* ProgramacionNinosParser::BucleparaContext::condicion() {
  return getRuleContext<ProgramacionNinosParser::CondicionContext>(0);
}

std::vector<ProgramacionNinosParser::InstruccionContext *> ProgramacionNinosParser::BucleparaContext::instruccion() {
  return getRuleContexts<ProgramacionNinosParser::InstruccionContext>();
}

ProgramacionNinosParser::InstruccionContext* ProgramacionNinosParser::BucleparaContext::instruccion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::InstruccionContext>(i);
}


size_t ProgramacionNinosParser::BucleparaContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleBuclepara;
}


std::any ProgramacionNinosParser::BucleparaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitBuclepara(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::BucleparaContext* ProgramacionNinosParser::buclepara() {
  BucleparaContext *_localctx = _tracker.createInstance<BucleparaContext>(_ctx, getState());
  enterRule(_localctx, 16, ProgramacionNinosParser::RuleBuclepara);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(ProgramacionNinosParser::T__12);
    setState(149);
    match(ProgramacionNinosParser::T__3);
    setState(150);
    asignacion();
    setState(151);
    match(ProgramacionNinosParser::PUNTOYCOMA);
    setState(152);
    condicion(0);
    setState(153);
    match(ProgramacionNinosParser::PUNTOYCOMA);
    setState(154);
    asignacion();
    setState(155);
    match(ProgramacionNinosParser::T__4);
    setState(156);
    match(ProgramacionNinosParser::T__7);
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1152201507026778314) != 0)) {
      setState(157);
      instruccion();
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(163);
    match(ProgramacionNinosParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpresionContext ------------------------------------------------------------------

ProgramacionNinosParser::ExpresionContext::ExpresionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgramacionNinosParser::ExpresionContext::INT() {
  return getToken(ProgramacionNinosParser::INT, 0);
}

tree::TerminalNode* ProgramacionNinosParser::ExpresionContext::STRING() {
  return getToken(ProgramacionNinosParser::STRING, 0);
}

tree::TerminalNode* ProgramacionNinosParser::ExpresionContext::ID() {
  return getToken(ProgramacionNinosParser::ID, 0);
}

std::vector<ProgramacionNinosParser::ExpresionContext *> ProgramacionNinosParser::ExpresionContext::expresion() {
  return getRuleContexts<ProgramacionNinosParser::ExpresionContext>();
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::ExpresionContext::expresion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::ExpresionContext>(i);
}

ProgramacionNinosParser::AccesoArregloContext* ProgramacionNinosParser::ExpresionContext::accesoArreglo() {
  return getRuleContext<ProgramacionNinosParser::AccesoArregloContext>(0);
}

ProgramacionNinosParser::FuncionMatematicaContext* ProgramacionNinosParser::ExpresionContext::funcionMatematica() {
  return getRuleContext<ProgramacionNinosParser::FuncionMatematicaContext>(0);
}


size_t ProgramacionNinosParser::ExpresionContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleExpresion;
}


std::any ProgramacionNinosParser::ExpresionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitExpresion(this);
  else
    return visitor->visitChildren(this);
}


ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::expresion() {
   return expresion(0);
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::expresion(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ProgramacionNinosParser::ExpresionContext *_localctx = _tracker.createInstance<ExpresionContext>(_ctx, parentState);
  ProgramacionNinosParser::ExpresionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, ProgramacionNinosParser::RuleExpresion, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(175);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(166);
      match(ProgramacionNinosParser::INT);
      break;
    }

    case 2: {
      setState(167);
      match(ProgramacionNinosParser::STRING);
      break;
    }

    case 3: {
      setState(168);
      match(ProgramacionNinosParser::T__13);
      break;
    }

    case 4: {
      setState(169);
      match(ProgramacionNinosParser::T__14);
      break;
    }

    case 5: {
      setState(170);
      match(ProgramacionNinosParser::ID);
      break;
    }

    case 6: {
      setState(171);
      match(ProgramacionNinosParser::T__22);
      setState(172);
      expresion(3);
      break;
    }

    case 7: {
      setState(173);
      accesoArreglo();
      break;
    }

    case 8: {
      setState(174);
      funcionMatematica();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(188);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(186);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpresionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpresion);
          setState(177);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(178);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 2031616) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(179);
          expresion(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpresionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpresion);
          setState(180);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(181);
          match(ProgramacionNinosParser::T__20);
          setState(182);
          expresion(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpresionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpresion);
          setState(183);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(184);
          match(ProgramacionNinosParser::T__21);
          setState(185);
          expresion(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(190);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CondicionContext ------------------------------------------------------------------

ProgramacionNinosParser::CondicionContext::CondicionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ProgramacionNinosParser::ExpresionContext *> ProgramacionNinosParser::CondicionContext::expresion() {
  return getRuleContexts<ProgramacionNinosParser::ExpresionContext>();
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::CondicionContext::expresion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::ExpresionContext>(i);
}

tree::TerminalNode* ProgramacionNinosParser::CondicionContext::STRING() {
  return getToken(ProgramacionNinosParser::STRING, 0);
}

std::vector<ProgramacionNinosParser::CondicionContext *> ProgramacionNinosParser::CondicionContext::condicion() {
  return getRuleContexts<ProgramacionNinosParser::CondicionContext>();
}

ProgramacionNinosParser::CondicionContext* ProgramacionNinosParser::CondicionContext::condicion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::CondicionContext>(i);
}


size_t ProgramacionNinosParser::CondicionContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleCondicion;
}


std::any ProgramacionNinosParser::CondicionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitCondicion(this);
  else
    return visitor->visitChildren(this);
}


ProgramacionNinosParser::CondicionContext* ProgramacionNinosParser::condicion() {
   return condicion(0);
}

ProgramacionNinosParser::CondicionContext* ProgramacionNinosParser::condicion(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ProgramacionNinosParser::CondicionContext *_localctx = _tracker.createInstance<CondicionContext>(_ctx, parentState);
  ProgramacionNinosParser::CondicionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, ProgramacionNinosParser::RuleCondicion, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(206);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(192);
      expresion(0);
      setState(193);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1056964608) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(194);
      expresion(0);
      break;
    }

    case 2: {
      setState(196);
      expresion(0);
      setState(197);
      _la = _input->LA(1);
      if (!(_la == ProgramacionNinosParser::T__23

      || _la == ProgramacionNinosParser::T__24)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(198);
      match(ProgramacionNinosParser::STRING);
      break;
    }

    case 3: {
      setState(200);
      match(ProgramacionNinosParser::T__22);
      setState(201);
      match(ProgramacionNinosParser::T__3);
      setState(202);
      condicion(0);
      setState(203);
      match(ProgramacionNinosParser::T__4);
      break;
    }

    case 4: {
      setState(205);
      match(ProgramacionNinosParser::T__29);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(216);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(214);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<CondicionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCondicion);
          setState(208);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(209);
          match(ProgramacionNinosParser::T__20);
          setState(210);
          condicion(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<CondicionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCondicion);
          setState(211);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(212);
          match(ProgramacionNinosParser::T__21);
          setState(213);
          condicion(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(218);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FuncionContext ------------------------------------------------------------------

ProgramacionNinosParser::FuncionContext::FuncionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ProgramacionNinosParser::FuncionContext::ID() {
  return getTokens(ProgramacionNinosParser::ID);
}

tree::TerminalNode* ProgramacionNinosParser::FuncionContext::ID(size_t i) {
  return getToken(ProgramacionNinosParser::ID, i);
}

ProgramacionNinosParser::InstruccionContext* ProgramacionNinosParser::FuncionContext::instruccion() {
  return getRuleContext<ProgramacionNinosParser::InstruccionContext>(0);
}


size_t ProgramacionNinosParser::FuncionContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleFuncion;
}


std::any ProgramacionNinosParser::FuncionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitFuncion(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::FuncionContext* ProgramacionNinosParser::funcion() {
  FuncionContext *_localctx = _tracker.createInstance<FuncionContext>(_ctx, getState());
  enterRule(_localctx, 22, ProgramacionNinosParser::RuleFuncion);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(ProgramacionNinosParser::T__30);
    setState(220);
    match(ProgramacionNinosParser::ID);
    setState(221);
    match(ProgramacionNinosParser::T__3);
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ProgramacionNinosParser::ID) {
      setState(222);
      match(ProgramacionNinosParser::ID);

      setState(223);
      match(ProgramacionNinosParser::T__31);
      setState(224);
      match(ProgramacionNinosParser::ID);
    }
    setState(227);
    match(ProgramacionNinosParser::T__4);
    setState(228);
    match(ProgramacionNinosParser::T__7);

    setState(229);
    instruccion();
    setState(230);
    match(ProgramacionNinosParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LlamadaFuncionContext ------------------------------------------------------------------

ProgramacionNinosParser::LlamadaFuncionContext::LlamadaFuncionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgramacionNinosParser::LlamadaFuncionContext::ID() {
  return getToken(ProgramacionNinosParser::ID, 0);
}

std::vector<ProgramacionNinosParser::ExpresionContext *> ProgramacionNinosParser::LlamadaFuncionContext::expresion() {
  return getRuleContexts<ProgramacionNinosParser::ExpresionContext>();
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::LlamadaFuncionContext::expresion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::ExpresionContext>(i);
}


size_t ProgramacionNinosParser::LlamadaFuncionContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleLlamadaFuncion;
}


std::any ProgramacionNinosParser::LlamadaFuncionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitLlamadaFuncion(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::LlamadaFuncionContext* ProgramacionNinosParser::llamadaFuncion() {
  LlamadaFuncionContext *_localctx = _tracker.createInstance<LlamadaFuncionContext>(_ctx, getState());
  enterRule(_localctx, 24, ProgramacionNinosParser::RuleLlamadaFuncion);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(ProgramacionNinosParser::ID);
    setState(233);
    match(ProgramacionNinosParser::T__3);
    setState(242);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4318952042656743424) != 0)) {
      setState(234);
      expresion(0);
      setState(239);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ProgramacionNinosParser::T__31) {
        setState(235);
        match(ProgramacionNinosParser::T__31);
        setState(236);
        expresion(0);
        setState(241);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(244);
    match(ProgramacionNinosParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClaseContext ------------------------------------------------------------------

ProgramacionNinosParser::ClaseContext::ClaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ProgramacionNinosParser::ClaseContext::ID() {
  return getTokens(ProgramacionNinosParser::ID);
}

tree::TerminalNode* ProgramacionNinosParser::ClaseContext::ID(size_t i) {
  return getToken(ProgramacionNinosParser::ID, i);
}

std::vector<ProgramacionNinosParser::AsignacionContext *> ProgramacionNinosParser::ClaseContext::asignacion() {
  return getRuleContexts<ProgramacionNinosParser::AsignacionContext>();
}

ProgramacionNinosParser::AsignacionContext* ProgramacionNinosParser::ClaseContext::asignacion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::AsignacionContext>(i);
}

std::vector<ProgramacionNinosParser::MetodoContext *> ProgramacionNinosParser::ClaseContext::metodo() {
  return getRuleContexts<ProgramacionNinosParser::MetodoContext>();
}

ProgramacionNinosParser::MetodoContext* ProgramacionNinosParser::ClaseContext::metodo(size_t i) {
  return getRuleContext<ProgramacionNinosParser::MetodoContext>(i);
}


size_t ProgramacionNinosParser::ClaseContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleClase;
}


std::any ProgramacionNinosParser::ClaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitClase(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::ClaseContext* ProgramacionNinosParser::clase() {
  ClaseContext *_localctx = _tracker.createInstance<ClaseContext>(_ctx, getState());
  enterRule(_localctx, 26, ProgramacionNinosParser::RuleClase);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    match(ProgramacionNinosParser::T__32);
    setState(247);
    match(ProgramacionNinosParser::ID);
    setState(250);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ProgramacionNinosParser::T__33) {
      setState(248);
      match(ProgramacionNinosParser::T__33);
      setState(249);
      match(ProgramacionNinosParser::ID);
    }
    setState(252);
    match(ProgramacionNinosParser::T__7);
    setState(257);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 576460754450907138) != 0)) {
      setState(255);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ProgramacionNinosParser::T__0:
        case ProgramacionNinosParser::ID: {
          setState(253);
          asignacion();
          break;
        }

        case ProgramacionNinosParser::T__30: {
          setState(254);
          metodo();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(259);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(260);
    match(ProgramacionNinosParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MetodoContext ------------------------------------------------------------------

ProgramacionNinosParser::MetodoContext::MetodoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ProgramacionNinosParser::MetodoContext::ID() {
  return getTokens(ProgramacionNinosParser::ID);
}

tree::TerminalNode* ProgramacionNinosParser::MetodoContext::ID(size_t i) {
  return getToken(ProgramacionNinosParser::ID, i);
}

ProgramacionNinosParser::InstruccionContext* ProgramacionNinosParser::MetodoContext::instruccion() {
  return getRuleContext<ProgramacionNinosParser::InstruccionContext>(0);
}


size_t ProgramacionNinosParser::MetodoContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleMetodo;
}


std::any ProgramacionNinosParser::MetodoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitMetodo(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::MetodoContext* ProgramacionNinosParser::metodo() {
  MetodoContext *_localctx = _tracker.createInstance<MetodoContext>(_ctx, getState());
  enterRule(_localctx, 28, ProgramacionNinosParser::RuleMetodo);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(262);
    match(ProgramacionNinosParser::T__30);
    setState(263);
    match(ProgramacionNinosParser::ID);
    setState(264);
    match(ProgramacionNinosParser::T__3);
    setState(268);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ProgramacionNinosParser::ID) {
      setState(265);
      match(ProgramacionNinosParser::ID);

      setState(266);
      match(ProgramacionNinosParser::T__31);
      setState(267);
      match(ProgramacionNinosParser::ID);
    }
    setState(270);
    match(ProgramacionNinosParser::T__4);
    setState(271);
    match(ProgramacionNinosParser::T__7);

    setState(272);
    instruccion();
    setState(273);
    match(ProgramacionNinosParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreacionObjetoContext ------------------------------------------------------------------

ProgramacionNinosParser::CreacionObjetoContext::CreacionObjetoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgramacionNinosParser::CreacionObjetoContext::ID() {
  return getToken(ProgramacionNinosParser::ID, 0);
}


size_t ProgramacionNinosParser::CreacionObjetoContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleCreacionObjeto;
}


std::any ProgramacionNinosParser::CreacionObjetoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitCreacionObjeto(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::CreacionObjetoContext* ProgramacionNinosParser::creacionObjeto() {
  CreacionObjetoContext *_localctx = _tracker.createInstance<CreacionObjetoContext>(_ctx, getState());
  enterRule(_localctx, 30, ProgramacionNinosParser::RuleCreacionObjeto);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    match(ProgramacionNinosParser::T__34);
    setState(276);
    match(ProgramacionNinosParser::ID);
    setState(277);
    match(ProgramacionNinosParser::T__3);
    setState(278);
    match(ProgramacionNinosParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccesoObjetoContext ------------------------------------------------------------------

ProgramacionNinosParser::AccesoObjetoContext::AccesoObjetoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ProgramacionNinosParser::AccesoObjetoContext::ID() {
  return getTokens(ProgramacionNinosParser::ID);
}

tree::TerminalNode* ProgramacionNinosParser::AccesoObjetoContext::ID(size_t i) {
  return getToken(ProgramacionNinosParser::ID, i);
}


size_t ProgramacionNinosParser::AccesoObjetoContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleAccesoObjeto;
}


std::any ProgramacionNinosParser::AccesoObjetoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitAccesoObjeto(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::AccesoObjetoContext* ProgramacionNinosParser::accesoObjeto() {
  AccesoObjetoContext *_localctx = _tracker.createInstance<AccesoObjetoContext>(_ctx, getState());
  enterRule(_localctx, 32, ProgramacionNinosParser::RuleAccesoObjeto);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(ProgramacionNinosParser::ID);
    setState(281);
    match(ProgramacionNinosParser::T__35);
    setState(282);
    match(ProgramacionNinosParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArregloDeclaracionContext ------------------------------------------------------------------

ProgramacionNinosParser::ArregloDeclaracionContext::ArregloDeclaracionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgramacionNinosParser::ArregloDeclaracionContext::ID() {
  return getToken(ProgramacionNinosParser::ID, 0);
}

tree::TerminalNode* ProgramacionNinosParser::ArregloDeclaracionContext::INT() {
  return getToken(ProgramacionNinosParser::INT, 0);
}

std::vector<ProgramacionNinosParser::ExpresionContext *> ProgramacionNinosParser::ArregloDeclaracionContext::expresion() {
  return getRuleContexts<ProgramacionNinosParser::ExpresionContext>();
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::ArregloDeclaracionContext::expresion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::ExpresionContext>(i);
}


size_t ProgramacionNinosParser::ArregloDeclaracionContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleArregloDeclaracion;
}


std::any ProgramacionNinosParser::ArregloDeclaracionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitArregloDeclaracion(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::ArregloDeclaracionContext* ProgramacionNinosParser::arregloDeclaracion() {
  ArregloDeclaracionContext *_localctx = _tracker.createInstance<ArregloDeclaracionContext>(_ctx, getState());
  enterRule(_localctx, 34, ProgramacionNinosParser::RuleArregloDeclaracion);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(ProgramacionNinosParser::T__36);
    setState(285);
    match(ProgramacionNinosParser::ID);
    setState(286);
    match(ProgramacionNinosParser::T__37);
    setState(287);
    match(ProgramacionNinosParser::INT);
    setState(288);
    match(ProgramacionNinosParser::T__38);
    setState(289);
    match(ProgramacionNinosParser::T__1);
    setState(290);
    match(ProgramacionNinosParser::T__7);
    setState(299);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4318952042656743424) != 0)) {
      setState(291);
      expresion(0);
      setState(296);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ProgramacionNinosParser::T__31) {
        setState(292);
        match(ProgramacionNinosParser::T__31);
        setState(293);
        expresion(0);
        setState(298);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(301);
    match(ProgramacionNinosParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccesoArregloContext ------------------------------------------------------------------

ProgramacionNinosParser::AccesoArregloContext::AccesoArregloContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgramacionNinosParser::AccesoArregloContext::ID() {
  return getToken(ProgramacionNinosParser::ID, 0);
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::AccesoArregloContext::expresion() {
  return getRuleContext<ProgramacionNinosParser::ExpresionContext>(0);
}


size_t ProgramacionNinosParser::AccesoArregloContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleAccesoArreglo;
}


std::any ProgramacionNinosParser::AccesoArregloContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitAccesoArreglo(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::AccesoArregloContext* ProgramacionNinosParser::accesoArreglo() {
  AccesoArregloContext *_localctx = _tracker.createInstance<AccesoArregloContext>(_ctx, getState());
  enterRule(_localctx, 36, ProgramacionNinosParser::RuleAccesoArreglo);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    match(ProgramacionNinosParser::ID);
    setState(304);
    match(ProgramacionNinosParser::T__37);
    setState(305);
    expresion(0);
    setState(306);
    match(ProgramacionNinosParser::T__38);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SegunContext ------------------------------------------------------------------

ProgramacionNinosParser::SegunContext::SegunContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::SegunContext::expresion() {
  return getRuleContext<ProgramacionNinosParser::ExpresionContext>(0);
}

std::vector<ProgramacionNinosParser::CasoContext *> ProgramacionNinosParser::SegunContext::caso() {
  return getRuleContexts<ProgramacionNinosParser::CasoContext>();
}

ProgramacionNinosParser::CasoContext* ProgramacionNinosParser::SegunContext::caso(size_t i) {
  return getRuleContext<ProgramacionNinosParser::CasoContext>(i);
}

std::vector<ProgramacionNinosParser::InstruccionContext *> ProgramacionNinosParser::SegunContext::instruccion() {
  return getRuleContexts<ProgramacionNinosParser::InstruccionContext>();
}

ProgramacionNinosParser::InstruccionContext* ProgramacionNinosParser::SegunContext::instruccion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::InstruccionContext>(i);
}


size_t ProgramacionNinosParser::SegunContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleSegun;
}


std::any ProgramacionNinosParser::SegunContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitSegun(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::SegunContext* ProgramacionNinosParser::segun() {
  SegunContext *_localctx = _tracker.createInstance<SegunContext>(_ctx, getState());
  enterRule(_localctx, 38, ProgramacionNinosParser::RuleSegun);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    match(ProgramacionNinosParser::T__39);
    setState(309);
    match(ProgramacionNinosParser::T__3);
    setState(310);
    expresion(0);
    setState(311);
    match(ProgramacionNinosParser::T__4);
    setState(312);
    match(ProgramacionNinosParser::T__7);
    setState(316);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ProgramacionNinosParser::T__41) {
      setState(313);
      caso();
      setState(318);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(331);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ProgramacionNinosParser::T__40) {
      setState(319);
      match(ProgramacionNinosParser::T__40);
      setState(329);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ProgramacionNinosParser::T__0:
        case ProgramacionNinosParser::T__2:
        case ProgramacionNinosParser::T__5:
        case ProgramacionNinosParser::T__6:
        case ProgramacionNinosParser::T__10:
        case ProgramacionNinosParser::T__11:
        case ProgramacionNinosParser::T__12:
        case ProgramacionNinosParser::T__30:
        case ProgramacionNinosParser::T__32:
        case ProgramacionNinosParser::T__34:
        case ProgramacionNinosParser::T__36:
        case ProgramacionNinosParser::T__39:
        case ProgramacionNinosParser::T__43:
        case ProgramacionNinosParser::T__44:
        case ProgramacionNinosParser::T__45:
        case ProgramacionNinosParser::T__47:
        case ProgramacionNinosParser::T__49:
        case ProgramacionNinosParser::T__50:
        case ProgramacionNinosParser::T__51:
        case ProgramacionNinosParser::T__52:
        case ProgramacionNinosParser::T__53:
        case ProgramacionNinosParser::T__54:
        case ProgramacionNinosParser::T__55:
        case ProgramacionNinosParser::T__56:
        case ProgramacionNinosParser::T__57:
        case ProgramacionNinosParser::ID: {
          setState(320);
          instruccion();
          break;
        }

        case ProgramacionNinosParser::T__7: {
          setState(321);
          match(ProgramacionNinosParser::T__7);
          setState(325);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 1152201507026778314) != 0)) {
            setState(322);
            instruccion();
            setState(327);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(328);
          match(ProgramacionNinosParser::T__8);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
    setState(333);
    match(ProgramacionNinosParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CasoContext ------------------------------------------------------------------

ProgramacionNinosParser::CasoContext::CasoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::CasoContext::expresion() {
  return getRuleContext<ProgramacionNinosParser::ExpresionContext>(0);
}

std::vector<ProgramacionNinosParser::InstruccionContext *> ProgramacionNinosParser::CasoContext::instruccion() {
  return getRuleContexts<ProgramacionNinosParser::InstruccionContext>();
}

ProgramacionNinosParser::InstruccionContext* ProgramacionNinosParser::CasoContext::instruccion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::InstruccionContext>(i);
}


size_t ProgramacionNinosParser::CasoContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleCaso;
}


std::any ProgramacionNinosParser::CasoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitCaso(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::CasoContext* ProgramacionNinosParser::caso() {
  CasoContext *_localctx = _tracker.createInstance<CasoContext>(_ctx, getState());
  enterRule(_localctx, 40, ProgramacionNinosParser::RuleCaso);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    match(ProgramacionNinosParser::T__41);
    setState(336);
    expresion(0);
    setState(337);
    match(ProgramacionNinosParser::T__42);
    setState(341);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1152201507026778314) != 0)) {
      setState(338);
      instruccion();
      setState(343);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PausarContext ------------------------------------------------------------------

ProgramacionNinosParser::PausarContext::PausarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgramacionNinosParser::PausarContext::getRuleIndex() const {
  return ProgramacionNinosParser::RulePausar;
}


std::any ProgramacionNinosParser::PausarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitPausar(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::PausarContext* ProgramacionNinosParser::pausar() {
  PausarContext *_localctx = _tracker.createInstance<PausarContext>(_ctx, getState());
  enterRule(_localctx, 42, ProgramacionNinosParser::RulePausar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
    match(ProgramacionNinosParser::T__43);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinuarContext ------------------------------------------------------------------

ProgramacionNinosParser::ContinuarContext::ContinuarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgramacionNinosParser::ContinuarContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleContinuar;
}


std::any ProgramacionNinosParser::ContinuarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitContinuar(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::ContinuarContext* ProgramacionNinosParser::continuar() {
  ContinuarContext *_localctx = _tracker.createInstance<ContinuarContext>(_ctx, getState());
  enterRule(_localctx, 44, ProgramacionNinosParser::RuleContinuar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    match(ProgramacionNinosParser::T__44);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EventoContext ------------------------------------------------------------------

ProgramacionNinosParser::EventoContext::EventoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgramacionNinosParser::EventoContext::ID() {
  return getToken(ProgramacionNinosParser::ID, 0);
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::EventoContext::expresion() {
  return getRuleContext<ProgramacionNinosParser::ExpresionContext>(0);
}


size_t ProgramacionNinosParser::EventoContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleEvento;
}


std::any ProgramacionNinosParser::EventoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitEvento(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::EventoContext* ProgramacionNinosParser::evento() {
  EventoContext *_localctx = _tracker.createInstance<EventoContext>(_ctx, getState());
  enterRule(_localctx, 46, ProgramacionNinosParser::RuleEvento);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(360);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ProgramacionNinosParser::T__45: {
        enterOuterAlt(_localctx, 1);
        setState(348);
        match(ProgramacionNinosParser::T__45);
        setState(349);
        match(ProgramacionNinosParser::ID);
        setState(350);
        match(ProgramacionNinosParser::T__46);
        setState(351);
        expresion(0);
        break;
      }

      case ProgramacionNinosParser::T__47: {
        enterOuterAlt(_localctx, 2);
        setState(352);
        match(ProgramacionNinosParser::T__47);
        setState(353);
        match(ProgramacionNinosParser::ID);
        setState(354);
        match(ProgramacionNinosParser::T__48);
        setState(355);
        expresion(0);
        break;
      }

      case ProgramacionNinosParser::T__49: {
        enterOuterAlt(_localctx, 3);
        setState(356);
        match(ProgramacionNinosParser::T__49);
        setState(357);
        match(ProgramacionNinosParser::ID);
        break;
      }

      case ProgramacionNinosParser::T__50: {
        enterOuterAlt(_localctx, 4);
        setState(358);
        match(ProgramacionNinosParser::T__50);
        setState(359);
        match(ProgramacionNinosParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncionMatematicaContext ------------------------------------------------------------------

ProgramacionNinosParser::FuncionMatematicaContext::FuncionMatematicaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ProgramacionNinosParser::ExpresionContext *> ProgramacionNinosParser::FuncionMatematicaContext::expresion() {
  return getRuleContexts<ProgramacionNinosParser::ExpresionContext>();
}

ProgramacionNinosParser::ExpresionContext* ProgramacionNinosParser::FuncionMatematicaContext::expresion(size_t i) {
  return getRuleContext<ProgramacionNinosParser::ExpresionContext>(i);
}


size_t ProgramacionNinosParser::FuncionMatematicaContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleFuncionMatematica;
}


std::any ProgramacionNinosParser::FuncionMatematicaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitFuncionMatematica(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::FuncionMatematicaContext* ProgramacionNinosParser::funcionMatematica() {
  FuncionMatematicaContext *_localctx = _tracker.createInstance<FuncionMatematicaContext>(_ctx, getState());
  enterRule(_localctx, 48, ProgramacionNinosParser::RuleFuncionMatematica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(402);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ProgramacionNinosParser::T__51: {
        enterOuterAlt(_localctx, 1);
        setState(362);
        match(ProgramacionNinosParser::T__51);
        setState(363);
        match(ProgramacionNinosParser::T__3);
        setState(364);
        expresion(0);
        setState(365);
        match(ProgramacionNinosParser::T__31);
        setState(366);
        expresion(0);
        setState(367);
        match(ProgramacionNinosParser::T__4);
        break;
      }

      case ProgramacionNinosParser::T__52: {
        enterOuterAlt(_localctx, 2);
        setState(369);
        match(ProgramacionNinosParser::T__52);
        setState(370);
        match(ProgramacionNinosParser::T__3);
        setState(371);
        expresion(0);
        setState(372);
        match(ProgramacionNinosParser::T__31);
        setState(373);
        expresion(0);
        setState(374);
        match(ProgramacionNinosParser::T__4);
        break;
      }

      case ProgramacionNinosParser::T__53: {
        enterOuterAlt(_localctx, 3);
        setState(376);
        match(ProgramacionNinosParser::T__53);
        setState(377);
        match(ProgramacionNinosParser::T__3);
        setState(378);
        expresion(0);
        setState(379);
        match(ProgramacionNinosParser::T__31);
        setState(380);
        expresion(0);
        setState(381);
        match(ProgramacionNinosParser::T__4);
        break;
      }

      case ProgramacionNinosParser::T__54: {
        enterOuterAlt(_localctx, 4);
        setState(383);
        match(ProgramacionNinosParser::T__54);
        setState(384);
        match(ProgramacionNinosParser::T__3);
        setState(385);
        expresion(0);
        setState(386);
        match(ProgramacionNinosParser::T__31);
        setState(387);
        expresion(0);
        setState(388);
        match(ProgramacionNinosParser::T__4);
        break;
      }

      case ProgramacionNinosParser::T__55: {
        enterOuterAlt(_localctx, 5);
        setState(390);
        match(ProgramacionNinosParser::T__55);
        setState(391);
        match(ProgramacionNinosParser::T__3);
        setState(392);
        expresion(0);
        setState(393);
        match(ProgramacionNinosParser::T__31);
        setState(394);
        expresion(0);
        setState(395);
        match(ProgramacionNinosParser::T__4);
        break;
      }

      case ProgramacionNinosParser::T__56: {
        enterOuterAlt(_localctx, 6);
        setState(397);
        match(ProgramacionNinosParser::T__56);
        setState(398);
        match(ProgramacionNinosParser::T__3);
        setState(399);
        expresion(0);
        setState(400);
        match(ProgramacionNinosParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComentarioContext ------------------------------------------------------------------

ProgramacionNinosParser::ComentarioContext::ComentarioContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgramacionNinosParser::ComentarioContext::STRING() {
  return getToken(ProgramacionNinosParser::STRING, 0);
}


size_t ProgramacionNinosParser::ComentarioContext::getRuleIndex() const {
  return ProgramacionNinosParser::RuleComentario;
}


std::any ProgramacionNinosParser::ComentarioContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgramacionNinosVisitor*>(visitor))
    return parserVisitor->visitComentario(this);
  else
    return visitor->visitChildren(this);
}

ProgramacionNinosParser::ComentarioContext* ProgramacionNinosParser::comentario() {
  ComentarioContext *_localctx = _tracker.createInstance<ComentarioContext>(_ctx, getState());
  enterRule(_localctx, 50, ProgramacionNinosParser::RuleComentario);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    match(ProgramacionNinosParser::T__57);
    setState(405);
    match(ProgramacionNinosParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ProgramacionNinosParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return expresionSempred(antlrcpp::downCast<ExpresionContext *>(context), predicateIndex);
    case 10: return condicionSempred(antlrcpp::downCast<CondicionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ProgramacionNinosParser::expresionSempred(ExpresionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool ProgramacionNinosParser::condicionSempred(CondicionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void ProgramacionNinosParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  programacionninosParserInitialize();
#else
  ::antlr4::internal::call_once(programacionninosParserOnceFlag, programacionninosParserInitialize);
#endif
}
