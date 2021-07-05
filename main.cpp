#include "ExpressionParser.hpp"

int main() {
  ExpParser prs;
  prs.settings["DEBUG"] = false;

  std::string s = "2++ + 4*4+4  *  0   ++";
  if (1) {

    int res = prs.calc(s);
    std::cout << "Ans: " << res << std::endl;
  }
}
