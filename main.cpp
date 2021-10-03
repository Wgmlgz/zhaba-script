#include <string>
#include <iostream>
#include "Compiler\Expressions\ExpressionParser.hpp"
#include "Compiler\ToCpp.hpp"
#include "Compiler\TreeParser\AbstractSyntaxTree.hpp"
#include "Compiler\TreeParser\SyntaxTreeParser.hpp"
auto programm = R"(

int sum = int a int b: 2 + 3
int mult = int aa int aa: a * b

)";

int main() {
  try {
    Lexer parser(tables::lexer_tokens);
    auto parse_res = parser.parse(programm, false);
    ASTBlock* ast = ASTParser::parse(parse_res.begin(), parse_res.end());
    auto ast_generic = ASTParser::toGenericTree(ast);
    std::cout << "ast:\n";
    printCompact(ast_generic);
    auto stree = parseAST(ast);
    auto st_generic = stree->toGenericTree();
    printCompact(st_generic);
    
    std::cout << "cpp:" << std::endl;
    std::cout << toCpp(stree) << std::endl;
  }
  catch (ParserError error) {
    std::cout << error.toString();
  }
  catch (...) {
    std::cout << " s" << std::endl;
  }
}