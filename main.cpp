#include "ExpressionParser.h"

int main() {
  ExpParser prs;
  prs.settings["DEBUG"] = false;

  std::string s = "2+3 * 5++";
  if (1) {

    int res = prs.calc(s);
    std::cout << "Ans: " << res << std::endl;
  }
}
