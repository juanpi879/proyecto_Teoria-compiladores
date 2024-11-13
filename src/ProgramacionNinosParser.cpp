
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
      "'apagar'", "'sumar'", "'restar'", "'multiplicar'", "'dividir'", "'comentar'", 
      "", "", "", "", "';'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "ID", "INT", "STRING", "WS", "PUNTOYCOMA", 
      "COMENTARIO", "COMENTARIO_MULTILINEA"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,63,388,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,4,0,54,8,0,11,0,12,0,55,
  	1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,3,1,80,8,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,
  	1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,5,5,102,8,5,10,5,12,5,105,9,5,
  	1,5,1,5,1,5,1,5,5,5,111,8,5,10,5,12,5,114,9,5,1,5,3,5,117,8,5,1,6,1,6,
  	1,6,1,6,1,6,1,6,5,6,125,8,6,10,6,12,6,128,9,6,1,6,1,6,1,7,1,7,1,7,1,7,
  	1,7,1,7,5,7,138,8,7,10,7,12,7,141,9,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,5,8,155,8,8,10,8,12,8,158,9,8,1,8,1,8,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,3,9,171,8,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,
  	9,182,8,9,10,9,12,9,185,9,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,3,10,199,8,10,1,10,1,10,1,10,1,10,1,10,1,10,5,10,207,
  	8,10,10,10,12,10,210,9,10,1,11,1,11,1,11,1,11,1,11,1,11,3,11,218,8,11,
  	1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,5,12,230,8,12,10,12,
  	12,12,233,9,12,3,12,235,8,12,1,12,1,12,1,13,1,13,1,13,1,13,3,13,243,8,
  	13,1,13,1,13,1,13,5,13,248,8,13,10,13,12,13,251,9,13,1,13,1,13,1,14,1,
  	14,1,14,1,14,1,14,1,14,3,14,261,8,14,1,14,1,14,1,14,1,14,1,14,1,15,1,
  	15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,
  	17,1,17,1,17,1,17,5,17,287,8,17,10,17,12,17,290,9,17,3,17,292,8,17,1,
  	17,1,17,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,5,19,307,
  	8,19,10,19,12,19,310,9,19,1,19,1,19,1,19,1,19,5,19,316,8,19,10,19,12,
  	19,319,9,19,1,19,3,19,322,8,19,3,19,324,8,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,5,20,332,8,20,10,20,12,20,335,9,20,1,21,1,21,1,22,1,22,1,23,1,23,
  	1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,3,23,353,8,23,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,3,24,
  	383,8,24,1,25,1,25,1,25,1,25,0,2,18,20,26,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,0,3,1,0,16,20,1,0,24,29,
  	1,0,24,25,421,0,53,1,0,0,0,2,79,1,0,0,0,4,81,1,0,0,0,6,86,1,0,0,0,8,91,
  	1,0,0,0,10,95,1,0,0,0,12,118,1,0,0,0,14,131,1,0,0,0,16,144,1,0,0,0,18,
  	170,1,0,0,0,20,198,1,0,0,0,22,211,1,0,0,0,24,224,1,0,0,0,26,238,1,0,0,
  	0,28,254,1,0,0,0,30,267,1,0,0,0,32,272,1,0,0,0,34,276,1,0,0,0,36,295,
  	1,0,0,0,38,300,1,0,0,0,40,327,1,0,0,0,42,336,1,0,0,0,44,338,1,0,0,0,46,
  	352,1,0,0,0,48,382,1,0,0,0,50,384,1,0,0,0,52,54,3,2,1,0,53,52,1,0,0,0,
  	54,55,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,57,1,0,0,0,57,58,5,0,0,1,
  	58,1,1,0,0,0,59,80,3,4,2,0,60,80,3,6,3,0,61,80,3,10,5,0,62,80,3,12,6,
  	0,63,80,3,14,7,0,64,80,3,16,8,0,65,80,3,34,17,0,66,80,3,36,18,0,67,80,
  	3,26,13,0,68,80,3,30,15,0,69,80,3,32,16,0,70,80,3,28,14,0,71,80,3,24,
  	12,0,72,80,3,38,19,0,73,80,3,42,21,0,74,80,3,44,22,0,75,80,3,8,4,0,76,
  	80,3,46,23,0,77,80,3,48,24,0,78,80,3,50,25,0,79,59,1,0,0,0,79,60,1,0,
  	0,0,79,61,1,0,0,0,79,62,1,0,0,0,79,63,1,0,0,0,79,64,1,0,0,0,79,65,1,0,
  	0,0,79,66,1,0,0,0,79,67,1,0,0,0,79,68,1,0,0,0,79,69,1,0,0,0,79,70,1,0,
  	0,0,79,71,1,0,0,0,79,72,1,0,0,0,79,73,1,0,0,0,79,74,1,0,0,0,79,75,1,0,
  	0,0,79,76,1,0,0,0,79,77,1,0,0,0,79,78,1,0,0,0,80,3,1,0,0,0,81,82,5,1,
  	0,0,82,83,5,57,0,0,83,84,5,2,0,0,84,85,3,18,9,0,85,5,1,0,0,0,86,87,5,
  	3,0,0,87,88,5,4,0,0,88,89,3,18,9,0,89,90,5,5,0,0,90,7,1,0,0,0,91,92,5,
  	6,0,0,92,93,5,4,0,0,93,94,5,5,0,0,94,9,1,0,0,0,95,96,5,7,0,0,96,97,5,
  	4,0,0,97,98,3,20,10,0,98,99,5,5,0,0,99,103,5,8,0,0,100,102,3,2,1,0,101,
  	100,1,0,0,0,102,105,1,0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,106,1,
  	0,0,0,105,103,1,0,0,0,106,116,5,9,0,0,107,108,5,10,0,0,108,112,5,8,0,
  	0,109,111,3,2,1,0,110,109,1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,112,
  	113,1,0,0,0,113,115,1,0,0,0,114,112,1,0,0,0,115,117,5,9,0,0,116,107,1,
  	0,0,0,116,117,1,0,0,0,117,11,1,0,0,0,118,119,5,11,0,0,119,120,5,4,0,0,
  	120,121,3,18,9,0,121,122,5,5,0,0,122,126,5,8,0,0,123,125,3,2,1,0,124,
  	123,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,129,1,
  	0,0,0,128,126,1,0,0,0,129,130,5,9,0,0,130,13,1,0,0,0,131,132,5,12,0,0,
  	132,133,5,4,0,0,133,134,3,20,10,0,134,135,5,5,0,0,135,139,5,8,0,0,136,
  	138,3,2,1,0,137,136,1,0,0,0,138,141,1,0,0,0,139,137,1,0,0,0,139,140,1,
  	0,0,0,140,142,1,0,0,0,141,139,1,0,0,0,142,143,5,9,0,0,143,15,1,0,0,0,
  	144,145,5,13,0,0,145,146,5,4,0,0,146,147,3,4,2,0,147,148,5,61,0,0,148,
  	149,3,20,10,0,149,150,5,61,0,0,150,151,3,4,2,0,151,152,5,5,0,0,152,156,
  	5,8,0,0,153,155,3,2,1,0,154,153,1,0,0,0,155,158,1,0,0,0,156,154,1,0,0,
  	0,156,157,1,0,0,0,157,159,1,0,0,0,158,156,1,0,0,0,159,160,5,9,0,0,160,
  	17,1,0,0,0,161,162,6,9,-1,0,162,171,5,58,0,0,163,171,5,59,0,0,164,171,
  	5,14,0,0,165,171,5,15,0,0,166,171,5,57,0,0,167,168,5,23,0,0,168,171,3,
  	18,9,2,169,171,3,36,18,0,170,161,1,0,0,0,170,163,1,0,0,0,170,164,1,0,
  	0,0,170,165,1,0,0,0,170,166,1,0,0,0,170,167,1,0,0,0,170,169,1,0,0,0,171,
  	183,1,0,0,0,172,173,10,5,0,0,173,174,7,0,0,0,174,182,3,18,9,6,175,176,
  	10,4,0,0,176,177,5,21,0,0,177,182,3,18,9,5,178,179,10,3,0,0,179,180,5,
  	22,0,0,180,182,3,18,9,4,181,172,1,0,0,0,181,175,1,0,0,0,181,178,1,0,0,
  	0,182,185,1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,19,1,0,0,0,185,
  	183,1,0,0,0,186,187,6,10,-1,0,187,188,3,18,9,0,188,189,7,1,0,0,189,190,
  	3,18,9,0,190,199,1,0,0,0,191,192,3,18,9,0,192,193,7,2,0,0,193,194,5,59,
  	0,0,194,199,1,0,0,0,195,196,5,23,0,0,196,199,3,20,10,2,197,199,5,30,0,
  	0,198,186,1,0,0,0,198,191,1,0,0,0,198,195,1,0,0,0,198,197,1,0,0,0,199,
  	208,1,0,0,0,200,201,10,4,0,0,201,202,5,21,0,0,202,207,3,20,10,5,203,204,
  	10,3,0,0,204,205,5,22,0,0,205,207,3,20,10,4,206,200,1,0,0,0,206,203,1,
  	0,0,0,207,210,1,0,0,0,208,206,1,0,0,0,208,209,1,0,0,0,209,21,1,0,0,0,
  	210,208,1,0,0,0,211,212,5,31,0,0,212,213,5,57,0,0,213,217,5,4,0,0,214,
  	215,5,57,0,0,215,216,5,32,0,0,216,218,5,57,0,0,217,214,1,0,0,0,217,218,
  	1,0,0,0,218,219,1,0,0,0,219,220,5,5,0,0,220,221,5,8,0,0,221,222,3,2,1,
  	0,222,223,5,9,0,0,223,23,1,0,0,0,224,225,5,57,0,0,225,234,5,4,0,0,226,
  	231,3,18,9,0,227,228,5,32,0,0,228,230,3,18,9,0,229,227,1,0,0,0,230,233,
  	1,0,0,0,231,229,1,0,0,0,231,232,1,0,0,0,232,235,1,0,0,0,233,231,1,0,0,
  	0,234,226,1,0,0,0,234,235,1,0,0,0,235,236,1,0,0,0,236,237,5,5,0,0,237,
  	25,1,0,0,0,238,239,5,33,0,0,239,242,5,57,0,0,240,241,5,34,0,0,241,243,
  	5,57,0,0,242,240,1,0,0,0,242,243,1,0,0,0,243,244,1,0,0,0,244,249,5,8,
  	0,0,245,248,3,4,2,0,246,248,3,28,14,0,247,245,1,0,0,0,247,246,1,0,0,0,
  	248,251,1,0,0,0,249,247,1,0,0,0,249,250,1,0,0,0,250,252,1,0,0,0,251,249,
  	1,0,0,0,252,253,5,9,0,0,253,27,1,0,0,0,254,255,5,31,0,0,255,256,5,57,
  	0,0,256,260,5,4,0,0,257,258,5,57,0,0,258,259,5,32,0,0,259,261,5,57,0,
  	0,260,257,1,0,0,0,260,261,1,0,0,0,261,262,1,0,0,0,262,263,5,5,0,0,263,
  	264,5,8,0,0,264,265,3,2,1,0,265,266,5,9,0,0,266,29,1,0,0,0,267,268,5,
  	35,0,0,268,269,5,57,0,0,269,270,5,4,0,0,270,271,5,5,0,0,271,31,1,0,0,
  	0,272,273,5,57,0,0,273,274,5,36,0,0,274,275,5,57,0,0,275,33,1,0,0,0,276,
  	277,5,37,0,0,277,278,5,57,0,0,278,279,5,38,0,0,279,280,5,58,0,0,280,281,
  	5,39,0,0,281,282,5,2,0,0,282,291,5,8,0,0,283,288,3,18,9,0,284,285,5,32,
  	0,0,285,287,3,18,9,0,286,284,1,0,0,0,287,290,1,0,0,0,288,286,1,0,0,0,
  	288,289,1,0,0,0,289,292,1,0,0,0,290,288,1,0,0,0,291,283,1,0,0,0,291,292,
  	1,0,0,0,292,293,1,0,0,0,293,294,5,9,0,0,294,35,1,0,0,0,295,296,5,57,0,
  	0,296,297,5,38,0,0,297,298,3,18,9,0,298,299,5,39,0,0,299,37,1,0,0,0,300,
  	301,5,40,0,0,301,302,5,4,0,0,302,303,3,18,9,0,303,304,5,5,0,0,304,308,
  	5,8,0,0,305,307,3,40,20,0,306,305,1,0,0,0,307,310,1,0,0,0,308,306,1,0,
  	0,0,308,309,1,0,0,0,309,323,1,0,0,0,310,308,1,0,0,0,311,321,5,41,0,0,
  	312,322,3,2,1,0,313,317,5,8,0,0,314,316,3,2,1,0,315,314,1,0,0,0,316,319,
  	1,0,0,0,317,315,1,0,0,0,317,318,1,0,0,0,318,320,1,0,0,0,319,317,1,0,0,
  	0,320,322,5,9,0,0,321,312,1,0,0,0,321,313,1,0,0,0,322,324,1,0,0,0,323,
  	311,1,0,0,0,323,324,1,0,0,0,324,325,1,0,0,0,325,326,5,9,0,0,326,39,1,
  	0,0,0,327,328,5,42,0,0,328,329,3,18,9,0,329,333,5,43,0,0,330,332,3,2,
  	1,0,331,330,1,0,0,0,332,335,1,0,0,0,333,331,1,0,0,0,333,334,1,0,0,0,334,
  	41,1,0,0,0,335,333,1,0,0,0,336,337,5,44,0,0,337,43,1,0,0,0,338,339,5,
  	45,0,0,339,45,1,0,0,0,340,341,5,46,0,0,341,342,5,57,0,0,342,343,5,47,
  	0,0,343,353,3,18,9,0,344,345,5,48,0,0,345,346,5,57,0,0,346,347,5,49,0,
  	0,347,353,3,18,9,0,348,349,5,50,0,0,349,353,5,57,0,0,350,351,5,51,0,0,
  	351,353,5,57,0,0,352,340,1,0,0,0,352,344,1,0,0,0,352,348,1,0,0,0,352,
  	350,1,0,0,0,353,47,1,0,0,0,354,355,5,52,0,0,355,356,5,4,0,0,356,357,3,
  	18,9,0,357,358,5,32,0,0,358,359,3,18,9,0,359,360,5,5,0,0,360,383,1,0,
  	0,0,361,362,5,53,0,0,362,363,5,4,0,0,363,364,3,18,9,0,364,365,5,32,0,
  	0,365,366,3,18,9,0,366,367,5,5,0,0,367,383,1,0,0,0,368,369,5,54,0,0,369,
  	370,5,4,0,0,370,371,3,18,9,0,371,372,5,32,0,0,372,373,3,18,9,0,373,374,
  	5,5,0,0,374,383,1,0,0,0,375,376,5,55,0,0,376,377,5,4,0,0,377,378,3,18,
  	9,0,378,379,5,32,0,0,379,380,3,18,9,0,380,381,5,5,0,0,381,383,1,0,0,0,
  	382,354,1,0,0,0,382,361,1,0,0,0,382,368,1,0,0,0,382,375,1,0,0,0,383,49,
  	1,0,0,0,384,385,5,56,0,0,385,386,5,59,0,0,386,51,1,0,0,0,30,55,79,103,
  	112,116,126,139,156,170,181,183,198,206,208,217,231,234,242,247,249,260,
  	288,291,308,317,321,323,333,352,382
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
      ((1ULL << _la) & 287510378571643082) != 0));
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
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(ProgramacionNinosParser::T__0);
    setState(82);
    match(ProgramacionNinosParser::ID);
    setState(83);
    match(ProgramacionNinosParser::T__1);
    setState(84);
    expresion(0);
   
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
    setState(86);
    match(ProgramacionNinosParser::T__2);
    setState(87);
    match(ProgramacionNinosParser::T__3);
    setState(88);
    expresion(0);
    setState(89);
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
    setState(91);
    match(ProgramacionNinosParser::T__5);
    setState(92);
    match(ProgramacionNinosParser::T__3);
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
    setState(95);
    match(ProgramacionNinosParser::T__6);
    setState(96);
    match(ProgramacionNinosParser::T__3);
    setState(97);
    condicion(0);
    setState(98);
    match(ProgramacionNinosParser::T__4);
    setState(99);
    match(ProgramacionNinosParser::T__7);
    setState(103);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 287510378571643082) != 0)) {
      setState(100);
      instruccion();
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(106);
    match(ProgramacionNinosParser::T__8);
    setState(116);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ProgramacionNinosParser::T__9) {
      setState(107);
      match(ProgramacionNinosParser::T__9);
      setState(108);
      match(ProgramacionNinosParser::T__7);
      setState(112);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 287510378571643082) != 0)) {
        setState(109);
        instruccion();
        setState(114);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(115);
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
    setState(118);
    match(ProgramacionNinosParser::T__10);
    setState(119);
    match(ProgramacionNinosParser::T__3);
    setState(120);
    expresion(0);
    setState(121);
    match(ProgramacionNinosParser::T__4);
    setState(122);
    match(ProgramacionNinosParser::T__7);
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 287510378571643082) != 0)) {
      setState(123);
      instruccion();
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(129);
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
    setState(131);
    match(ProgramacionNinosParser::T__11);
    setState(132);
    match(ProgramacionNinosParser::T__3);
    setState(133);
    condicion(0);
    setState(134);
    match(ProgramacionNinosParser::T__4);
    setState(135);
    match(ProgramacionNinosParser::T__7);
    setState(139);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 287510378571643082) != 0)) {
      setState(136);
      instruccion();
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(142);
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
    setState(144);
    match(ProgramacionNinosParser::T__12);
    setState(145);
    match(ProgramacionNinosParser::T__3);
    setState(146);
    asignacion();
    setState(147);
    match(ProgramacionNinosParser::PUNTOYCOMA);
    setState(148);
    condicion(0);
    setState(149);
    match(ProgramacionNinosParser::PUNTOYCOMA);
    setState(150);
    asignacion();
    setState(151);
    match(ProgramacionNinosParser::T__4);
    setState(152);
    match(ProgramacionNinosParser::T__7);
    setState(156);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 287510378571643082) != 0)) {
      setState(153);
      instruccion();
      setState(158);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(159);
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
    setState(170);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(162);
      match(ProgramacionNinosParser::INT);
      break;
    }

    case 2: {
      setState(163);
      match(ProgramacionNinosParser::STRING);
      break;
    }

    case 3: {
      setState(164);
      match(ProgramacionNinosParser::T__13);
      break;
    }

    case 4: {
      setState(165);
      match(ProgramacionNinosParser::T__14);
      break;
    }

    case 5: {
      setState(166);
      match(ProgramacionNinosParser::ID);
      break;
    }

    case 6: {
      setState(167);
      match(ProgramacionNinosParser::T__22);
      setState(168);
      expresion(2);
      break;
    }

    case 7: {
      setState(169);
      accesoArreglo();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(183);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(181);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpresionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpresion);
          setState(172);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(173);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 2031616) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(174);
          expresion(6);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpresionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpresion);
          setState(175);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(176);
          match(ProgramacionNinosParser::T__20);
          setState(177);
          expresion(5);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpresionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpresion);
          setState(178);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(179);
          match(ProgramacionNinosParser::T__21);
          setState(180);
          expresion(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(185);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
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
    setState(198);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(187);
      expresion(0);
      setState(188);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1056964608) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(189);
      expresion(0);
      break;
    }

    case 2: {
      setState(191);
      expresion(0);
      setState(192);
      _la = _input->LA(1);
      if (!(_la == ProgramacionNinosParser::T__23

      || _la == ProgramacionNinosParser::T__24)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(193);
      match(ProgramacionNinosParser::STRING);
      break;
    }

    case 3: {
      setState(195);
      match(ProgramacionNinosParser::T__22);
      setState(196);
      condicion(2);
      break;
    }

    case 4: {
      setState(197);
      match(ProgramacionNinosParser::T__29);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(208);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(206);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<CondicionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCondicion);
          setState(200);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(201);
          match(ProgramacionNinosParser::T__20);
          setState(202);
          condicion(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<CondicionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCondicion);
          setState(203);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(204);
          match(ProgramacionNinosParser::T__21);
          setState(205);
          condicion(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(210);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
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
    setState(211);
    match(ProgramacionNinosParser::T__30);
    setState(212);
    match(ProgramacionNinosParser::ID);
    setState(213);
    match(ProgramacionNinosParser::T__3);
    setState(217);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ProgramacionNinosParser::ID) {
      setState(214);
      match(ProgramacionNinosParser::ID);

      setState(215);
      match(ProgramacionNinosParser::T__31);
      setState(216);
      match(ProgramacionNinosParser::ID);
    }
    setState(219);
    match(ProgramacionNinosParser::T__4);
    setState(220);
    match(ProgramacionNinosParser::T__7);

    setState(221);
    instruccion();
    setState(222);
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
    setState(224);
    match(ProgramacionNinosParser::ID);
    setState(225);
    match(ProgramacionNinosParser::T__3);
    setState(234);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008806316539428864) != 0)) {
      setState(226);
      expresion(0);
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ProgramacionNinosParser::T__31) {
        setState(227);
        match(ProgramacionNinosParser::T__31);
        setState(228);
        expresion(0);
        setState(233);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(236);
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
    setState(238);
    match(ProgramacionNinosParser::T__32);
    setState(239);
    match(ProgramacionNinosParser::ID);
    setState(242);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ProgramacionNinosParser::T__33) {
      setState(240);
      match(ProgramacionNinosParser::T__33);
      setState(241);
      match(ProgramacionNinosParser::ID);
    }
    setState(244);
    match(ProgramacionNinosParser::T__7);
    setState(249);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ProgramacionNinosParser::T__0

    || _la == ProgramacionNinosParser::T__30) {
      setState(247);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ProgramacionNinosParser::T__0: {
          setState(245);
          asignacion();
          break;
        }

        case ProgramacionNinosParser::T__30: {
          setState(246);
          metodo();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(251);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(252);
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
    setState(254);
    match(ProgramacionNinosParser::T__30);
    setState(255);
    match(ProgramacionNinosParser::ID);
    setState(256);
    match(ProgramacionNinosParser::T__3);
    setState(260);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ProgramacionNinosParser::ID) {
      setState(257);
      match(ProgramacionNinosParser::ID);

      setState(258);
      match(ProgramacionNinosParser::T__31);
      setState(259);
      match(ProgramacionNinosParser::ID);
    }
    setState(262);
    match(ProgramacionNinosParser::T__4);
    setState(263);
    match(ProgramacionNinosParser::T__7);

    setState(264);
    instruccion();
    setState(265);
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
    setState(267);
    match(ProgramacionNinosParser::T__34);
    setState(268);
    match(ProgramacionNinosParser::ID);
    setState(269);
    match(ProgramacionNinosParser::T__3);
    setState(270);
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
    setState(272);
    match(ProgramacionNinosParser::ID);
    setState(273);
    match(ProgramacionNinosParser::T__35);
    setState(274);
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
    setState(276);
    match(ProgramacionNinosParser::T__36);
    setState(277);
    match(ProgramacionNinosParser::ID);
    setState(278);
    match(ProgramacionNinosParser::T__37);
    setState(279);
    match(ProgramacionNinosParser::INT);
    setState(280);
    match(ProgramacionNinosParser::T__38);
    setState(281);
    match(ProgramacionNinosParser::T__1);
    setState(282);
    match(ProgramacionNinosParser::T__7);
    setState(291);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008806316539428864) != 0)) {
      setState(283);
      expresion(0);
      setState(288);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ProgramacionNinosParser::T__31) {
        setState(284);
        match(ProgramacionNinosParser::T__31);
        setState(285);
        expresion(0);
        setState(290);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(293);
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
    setState(295);
    match(ProgramacionNinosParser::ID);
    setState(296);
    match(ProgramacionNinosParser::T__37);
    setState(297);
    expresion(0);
    setState(298);
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
    setState(300);
    match(ProgramacionNinosParser::T__39);
    setState(301);
    match(ProgramacionNinosParser::T__3);
    setState(302);
    expresion(0);
    setState(303);
    match(ProgramacionNinosParser::T__4);
    setState(304);
    match(ProgramacionNinosParser::T__7);
    setState(308);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ProgramacionNinosParser::T__41) {
      setState(305);
      caso();
      setState(310);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(323);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ProgramacionNinosParser::T__40) {
      setState(311);
      match(ProgramacionNinosParser::T__40);
      setState(321);
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
        case ProgramacionNinosParser::ID: {
          setState(312);
          instruccion();
          break;
        }

        case ProgramacionNinosParser::T__7: {
          setState(313);
          match(ProgramacionNinosParser::T__7);
          setState(317);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 287510378571643082) != 0)) {
            setState(314);
            instruccion();
            setState(319);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(320);
          match(ProgramacionNinosParser::T__8);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
    setState(325);
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
    setState(327);
    match(ProgramacionNinosParser::T__41);
    setState(328);
    expresion(0);
    setState(329);
    match(ProgramacionNinosParser::T__42);
    setState(333);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 287510378571643082) != 0)) {
      setState(330);
      instruccion();
      setState(335);
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
    setState(336);
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
    setState(338);
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
    setState(352);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ProgramacionNinosParser::T__45: {
        enterOuterAlt(_localctx, 1);
        setState(340);
        match(ProgramacionNinosParser::T__45);
        setState(341);
        match(ProgramacionNinosParser::ID);
        setState(342);
        match(ProgramacionNinosParser::T__46);
        setState(343);
        expresion(0);
        break;
      }

      case ProgramacionNinosParser::T__47: {
        enterOuterAlt(_localctx, 2);
        setState(344);
        match(ProgramacionNinosParser::T__47);
        setState(345);
        match(ProgramacionNinosParser::ID);
        setState(346);
        match(ProgramacionNinosParser::T__48);
        setState(347);
        expresion(0);
        break;
      }

      case ProgramacionNinosParser::T__49: {
        enterOuterAlt(_localctx, 3);
        setState(348);
        match(ProgramacionNinosParser::T__49);
        setState(349);
        match(ProgramacionNinosParser::ID);
        break;
      }

      case ProgramacionNinosParser::T__50: {
        enterOuterAlt(_localctx, 4);
        setState(350);
        match(ProgramacionNinosParser::T__50);
        setState(351);
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
    setState(382);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ProgramacionNinosParser::T__51: {
        enterOuterAlt(_localctx, 1);
        setState(354);
        match(ProgramacionNinosParser::T__51);
        setState(355);
        match(ProgramacionNinosParser::T__3);
        setState(356);
        expresion(0);
        setState(357);
        match(ProgramacionNinosParser::T__31);
        setState(358);
        expresion(0);
        setState(359);
        match(ProgramacionNinosParser::T__4);
        break;
      }

      case ProgramacionNinosParser::T__52: {
        enterOuterAlt(_localctx, 2);
        setState(361);
        match(ProgramacionNinosParser::T__52);
        setState(362);
        match(ProgramacionNinosParser::T__3);
        setState(363);
        expresion(0);
        setState(364);
        match(ProgramacionNinosParser::T__31);
        setState(365);
        expresion(0);
        setState(366);
        match(ProgramacionNinosParser::T__4);
        break;
      }

      case ProgramacionNinosParser::T__53: {
        enterOuterAlt(_localctx, 3);
        setState(368);
        match(ProgramacionNinosParser::T__53);
        setState(369);
        match(ProgramacionNinosParser::T__3);
        setState(370);
        expresion(0);
        setState(371);
        match(ProgramacionNinosParser::T__31);
        setState(372);
        expresion(0);
        setState(373);
        match(ProgramacionNinosParser::T__4);
        break;
      }

      case ProgramacionNinosParser::T__54: {
        enterOuterAlt(_localctx, 4);
        setState(375);
        match(ProgramacionNinosParser::T__54);
        setState(376);
        match(ProgramacionNinosParser::T__3);
        setState(377);
        expresion(0);
        setState(378);
        match(ProgramacionNinosParser::T__31);
        setState(379);
        expresion(0);
        setState(380);
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
    setState(384);
    match(ProgramacionNinosParser::T__55);
    setState(385);
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
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);

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
