#include "ExpressionParser.hpp"
#include "BlockParser.hpp"
// int main() {
//   ExpParser prs;
//   prs.settings["DEBUG"] = false;
//   prs.settings["SHOW_COOL_TREE"] = true;
//   prs.settings["SHOW_TREE"] = true;
//   // "2*2  ++"
//   std::cout << "da: " << (2 + 2 == 4 && 2 == 3) + 4 << std::endl;
//   std::string s = "33%%3 && 33%%5";
//   while (1) {
//     std::getline(std::cin, s);
//     int res = prs.calc(s);
//     std::cout << "Ans: " << res << std::endl;
//   }
// }
auto s =
R"(
? 2+2==4
  12
    
  ? da
    aaa

    sss
  111
)";
int main() {
  auto prs = ASTParser();
  prs.parse(s);
}