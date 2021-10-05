#include <string>
#include <iostream>
#include "Compiler\Expressions\ExpressionParser.hpp"
#include "Compiler\ToCpp.hpp"
#include "Compiler\TreeParser\AbstractSyntaxTree.hpp"
#include "Compiler\TreeParser\SyntaxTreeParser.hpp"

/*




*/
auto programm = R"(

3 int - _ int a: #return -a;

5 int /  ___ int a int b: #return a / b;
5 int %  ___ int a int b: #return a % b;
5 int *  ___ int a int b: #return a * b;
5 int %% ___ int a int b: #return !(a % b);

6 int +  ___ int a int b: #return a + b;
6 int -  ___ int a int b: #return a - b;


9  int <  ___ int a int b: #return a < b;
9  int >  ___ int a int b: #return a > b;
9  int <= ___ int a int b: #return a <= b;
9  int >= ___ int a int b: #return a >= b;
10 int == ___ int a int b: #return a == b;
10 int != ___ int a int b: #return a != b;

14 int && ___ int a int b: #return a && b;
15 int || ___ int a int b: #return a || b;

int out _ int x: #'printf("%d\n",x)'

int fizz_buzz _ int a int b:
  int i = 1
  @ 1 < 100
    i = i + 1

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