#include "ExpressionParser.hpp"

int main() {
  ExpParser prs;
  prs.settings["DEBUG"] = false;

  std::string s = "++   ++  ++ ++1++ ++  ++   ++";
  if (1) {

    int res = prs.calc(s);
    std::cout << "Ans: " << res << std::endl;
  }
}
