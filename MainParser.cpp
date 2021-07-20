#pragma once
#include "AbstractSyntaxTree.hpp"
#include "ExpressionParser.hpp"

struct ParserError {
  size_t line;
  size_t ch_begin, ch_end;
  std::string error_message;
  std::string warning_message;
  std::string help_message; 
};

auto s = R"(
? 2==2
  ? y<0 + y>1: nor
  ? x==n
    ? dir + !y: nor
    : yesr
  ? a.y.x
    ? dir : ++x !=dir
    : !=y !=dir
  : ? dir
      nor
    : ++x
)";




class MainParser {

public:
  
  void parse(const std::string& str) {
    auto prs = ASTParser();
    auto block_parse = prs.parse(s);

  }
};

int main() {
  std::cout << "Frogger" << std::endl;
}