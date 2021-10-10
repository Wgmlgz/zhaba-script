#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "Src/Parser/Parser.hpp"
#include "Src/Compiler/Compiler.hpp"
#include "Src/TreeLib/TreeLib.hpp"

int main() {
  try {
    /* read file name */
    std::cout << "Enter file to compile (without .zh): ";
    std::string file_name = "test";
    // std::cin >> file_name; 

    /* read thing */
    auto fin = std::ifstream(file_name + ".zh");
    std::stringstream strStream;
    strStream << fin.rdbuf();
    std::string programm = strStream.str();
    fin >> programm;
    std::cout << programm;

    /* compiling */
    Lexer parser(tables::lexer_tokens);
    auto parse_res = parser.parse(programm, false);
    auto ast = ast::parse(parse_res.begin(), parse_res.end());
    auto ast_generic = ast::toGenericTree(ast);

    std::cout << "ast:\n";
    printCompact(ast_generic);
    auto stree = parseAST(ast);
    auto st_generic = stree->toGenericTree();
    printCompact(st_generic);
    std::string cpp_code = toCpp(stree);

    /* output */
    std::cout << "cpp:" << std::endl << cpp_code << std::endl;
    auto fout = std::ofstream(file_name + ".cpp");
    fout << cpp_code;
    fout.close();
  }
  catch (ParserError error) {
    std::cout << error.toString();
  }
  catch (...) {
    std::cout << "Random error lol" << std::endl;
  }
}