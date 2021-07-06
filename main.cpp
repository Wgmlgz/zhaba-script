#include "ExpressionParser.hpp"

int main() {
  ExpParser prs;
  prs.settings["DEBUG"] = false;
  prs.settings["SHOW_COOL_TREE"] = true;
  // "(2 + 2)*2"
  std::cout << "da: " << (2 + 2 == 4 && 2 == 3) + 4 << std::endl;
  std::string s = "33%%3 && 33%%5";
  while (1) {
    std::getline(std::cin, s);
    int res = prs.calc(s);
    std::cout << "Ans: " << res << std::endl;
  }
}
