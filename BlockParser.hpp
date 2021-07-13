// #include "ExpressionParser.hpp"
#include "Lexer.hpp"
#include "TreeLib/TreePrinterASCII.h"
#include <string>
#include <vector>
#include <sstream>
#include <utility>

typedef std::vector<Token>::iterator tokeniter;

struct ASTNode {
  virtual ~ASTNode() = default;
};
struct ASTLine : public ASTNode {
  tokeniter begin, end;
  ASTLine(tokeniter new_begin, tokeniter new_end): begin{new_begin}, end{new_end} {}
};
struct ASTBlock : public ASTNode {
  std::vector<ASTNode*> nodes;
};

class ASTParser {
  std::string lineToStr(tokeniter begin, tokeniter end) {
    std::string res{"'"};
    for(auto i = begin; i != end; ++i) res += i->val;
    return res + "'";
  }
  TreeNode<std::string>* toGenericTree(ASTNode* node) {
    auto res = new TreeNode<std::string>;
    if (ASTBlock* block = dynamic_cast<ASTBlock*>(node)) {
      res->data = "[block]";
      for(auto i : block->nodes) {
        res->branches.push_back(toGenericTree(i));
      }
    } else {
      ASTLine* line = dynamic_cast<ASTLine*>(node);
      res->data = lineToStr(line->begin, line->end);
    }
    return res;
  }
  std::pair<ASTBlock*, tokeniter> parseBlock(size_t offset, tokeniter begin, tokeniter end) {
    auto cur = begin;
    auto block = new ASTBlock;

    for(;;) {
      auto block_begin = cur;
      size_t line_offset = 0;
      if (cur->token == "space") {
        line_offset = cur->val.size();
        ++cur;
      }
      if (cur->token == "line end") {
        ++cur;
        continue;
      }
      if (line_offset > offset) {
        auto tmp = parseBlock(line_offset, block_begin, end);
        block->nodes.push_back(tmp.first);
        cur = tmp.second;
        if (cur == end) return {block, end};
      } else if (line_offset < offset) {
        return {block, cur};
      }
      tokeniter line_begin = cur, line_end = end;
      bool exit = false;
      for(;;) {
        if (cur == end) {
          exit = true;
          break;
        }
        // if (cur->token == "block decl") {break;}
        if (cur->token == "line end") {break;}
        ++cur;
      }
      line_end = cur;
      block->nodes.push_back(new ASTLine(line_begin, line_end));
      if(cur == end) {
        return {block, end};
      }
      ++cur;
    }
  }

 public:
  void parse(const std::string& str) {
    Lexer parser({
        {"int", R"(([0-9]+))"},
        {"space", R"((\ +))"},
        {"id",
         R"(([_a-zA-Z][_a-zA-Z0-9]+|[\+\-\*\\\%\<\>\=\^\&\|\/\!\#\$\@\?]+))"},
        {"block decl", R"((\:))"},
        {"line end", R"((\n))"},
        {"p(", R"((\())"},
        {"p)", R"((\)))"},
    });
    auto parse_res = parser.parse(str, true);
    auto block_parse_res = parseBlock(0, parse_res.begin(), parse_res.end());

    printCompact(toGenericTree(block_parse_res.first));
  }
};