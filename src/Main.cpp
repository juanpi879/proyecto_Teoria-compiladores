#include "ProgramacionNinosDriver.h"
#include "antlr4-runtime.h"
#include <fstream>
#include <iostream>

using namespace antlr4;

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: prog_kids <input file>" << std::endl;
        return 1;
    }

    // Leer el archivo de entrada
    std::ifstream stream;
    stream.open(argv[1]);
    ANTLRInputStream input(stream);
    ProgramacionNinosLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    ProgramacionNinosParser parser(&tokens);

    // Inicializar el driver y visitar el árbol
    ProgramacionNinosDriver driver;
    tree::ParseTree *tree = parser.programa();
    driver.visit(tree);

    // Finalizar y mostrar el IR
    driver.finalizarIR();
    driver.printIR();

    return 0;
}
