#include "ExpressionParser.hpp"
#include "BlockParser.hpp"
int main() {
  ExpParser prs;
  prs.settings["DEBUG"] = false;
  prs.settings["SHOW_COOL_TREE"] = false;
  prs.settings["SHOW_TREE"] = true;
  // "2*2  ++"
  std::cout << "da: " << (2 + 2 == 4 && 2 == 3) + 4 << std::endl;
  std::string s = "33%%3 && 33%%5";
  while (1) {
    std::getline(std::cin, s);
    int res = prs.calc(s);
    std::cout << "Ans: " << res << std::endl;
  }
}

// auto s =  0. 1+2 += 3.4

// R"(
// @:
//   ? y<0 + y>1: nor
//   ? x==n        
//     ? dir + !y: nor

//     : yesr
//   ? a.y.x
//     ? dir : ++x !=dir
//     : !=y !=dir
//   : ? dir
//       nor
//     : ++x
// )";
// int main() {
//   std::cout << 5 / 2 << std::endl;
//   auto prs = ASTParser();
//   prs.parse(s);
// }