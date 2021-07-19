#include "ExpressionParser.hpp"
#include "SyntaxTree.hpp"
#include "AbstractSyntaxTree.hpp"


auto s = R"(
? 2==2
  2+2
  2 2
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
  } catch (ParserError error) {
      std::cout << s << std::endl;
      std::cout << std::string(error.pos, ' ') << "^" << std::endl;
      std::cout << error.message << std::endl;
  } catch(...) {
    std::cout <<" s" << std::endl;
  }
}
/*
0x9acc40
0x9acdb0
0x9acdb0ok
0x9a8f70
0x9a8fe0
0x9a8fe0ok
0x9a92f0
0x9a92f0ok
0x9a8f70ok
0x9acc40ok
FUCKFUCK
[block]
|-- '? 2==2'
'-- [block]
   |-- '2+2'
   '-- '2 2'

ast tree:
0x9acc40
0x9acdb0
*/
// #include "BlockParser.hpp"
// int main() {
//   ExpParser::settings["DEBUG"] = false;
//   ExpParser::settings["SHOW_COOL_TREE"] = false;
//   ExpParser::settings["SHOW_TREE"] = true;
//   // "2*2  ++"
//   std::cout << "da: " << (2 + 2 == 4 && 2 == 3) + 4 << std::endl;
//   std::string s = "33%%3 && 33%%5";
//   while (1) {
//     std::getline(std::cin, s);
//     int res = ExpParser::calc(s);
//     std::cout << "Ans: " << res << std::endl;
//   }
// }

// int main() {
//   std::cout << 5 / 2 << std::endl;
//   auto prs = ASTParser();
//   prs.parse(s);
// }