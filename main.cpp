#include "Compiler\Expressions\ExpressionParser.hpp"
#include "Compiler\ToCpp.hpp"
#include "Compiler\TreeParser\AbstractSyntaxTree.hpp"
#include "Compiler\TreeParser\SyntaxTree.hpp"

/*
#int da  a b
*/
auto s = R"(
int a = 2

)";

int main() {
  try {
    Lexer parser(tables::lexer_tokens);
    auto parse_res = parser.parse(s, true);
    ASTBlock* a = ASTParser::parse(parse_res.begin(), parse_res.end());
    auto t = ASTParser::toGenericTree(a);
    printCompact(t);
    STBlock* b = parseAST(a);
    auto c = toGenericTree(b);
    printCompact(c);
    // printASCII(c);
    std::cout << "cpp:" << std::endl;
    std::cout << toCpp(b) << std::endl;
  }
  catch (ParserError error) {
    std::cout << error.toString("dada");
    // std::cout << s << std::endl;

    // std::cout << std::string(error.pos, ' ') << "^" << std::endl;
    // std::cout << error.message << std::endl;
  }
  catch (...) {
    std::cout << " s" << std::endl;
  }
}
