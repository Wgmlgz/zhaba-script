#pragma once
// #include "ExpressionParser.hpp"
#include "Lexer.hpp"
#include "OperatorTables.hpp"
#include "TreeLib/TreePrinterASCII.hpp"
#include <string>
#include <vector>
#include <sstream>
#include <utility>
#include <stack>

typedef std::vector<Token>::iterator tokeniter;

struct ASTNode {
  virtual ~ASTNode() = default;
};
struct ASTLine : public ASTNode {
  tokeniter begin, end;
  ASTLine(tokeniter new_begin, tokeniter new_end) : begin{ new_begin }, end{ new_end } {}
};
struct ASTBlock : public ASTNode {
  std::vector<ASTNode*> nodes;
  size_t offset = 0;
  bool undef_offset = false;
  size_t line;
  ASTBlock(size_t new_offset = 0, bool new_undef_offset = false,
    size_t new_line = 0)
    : offset{ new_offset }, undef_offset{ new_undef_offset }, line{ new_line } {}
};

namespace ASTParser {
  std::string lineToStr(tokeniter begin, tokeniter end) {
    std::string res = "'";
    for (auto i = begin; i != end; ++i) res += i->val;
    return res + "'";
  }
  TreeNode<std::string>* toGenericTree(ASTNode* node) {
    auto res = new TreeNode<std::string>;
    if (ASTBlock* block = dynamic_cast<ASTBlock*>(node)) {
      res->data = "[block]";
      for (auto i : block->nodes) {
        res->branches.push_back(toGenericTree(i));
      }
    } else {
      ASTLine* line = dynamic_cast<ASTLine*>(node);
      res->data = lineToStr(line->begin, line->end);
    }
    return res;
  }
  ASTBlock* parseBlock(tokeniter begin, tokeniter end) {
    std::stack<ASTBlock*> st;
    auto root = new ASTBlock;
    st.emplace(root);
    auto cur = begin;

    int line_n = -1;
    for (;;) {
      printCompact(toGenericTree(root));
      if (cur == end) break;
      size_t line_offset = 0;
      if (cur->token == "space") {
        line_offset = cur->val.size();
        ++cur;
      }
      if (cur->token == "line end") {
        ++cur;
        ++line_n;
        continue;
      }
      std::cout << line_offset << std::endl;
      tokeniter line_begin = cur, line_end = end;
      bool exit = false;
      for (;;) {
        if (cur == end) {
          exit = true;
          break;
        }
        if (cur->token == "new block") {
          break;
        }
        if (cur->token == "line end") {
          break;
        }
        ++cur;
      }
      line_end = cur;
      // cur at new line
      if (line_n != st.top()->line) {
        while (st.top()->undef_offset ? line_offset <= st.top()->offset
          : line_offset < st.top()->offset) {
          st.pop();
        }
        if (st.top()->undef_offset) {
          if (line_offset > st.top()->offset) {
            st.top()->offset = line_offset;
            st.top()->undef_offset = false;
          }
        }
        if (line_offset > st.top()->offset) {
          auto tmp = new ASTBlock(line_offset, false, line_n);
          st.top()->nodes.push_back(tmp);
          st.emplace(tmp);
        }
        if (line_begin != line_end)
          st.top()->nodes.push_back(new ASTLine(line_begin, line_end));
      } else {
        if (line_begin != line_end)
          st.top()->nodes.push_back(new ASTLine(line_begin, line_end));
      }
      if (cur == end) break;
      if (cur->token == "new block") {
        auto tmp = new ASTBlock(st.top()->offset, true, line_n);
        st.top()->nodes.push_back(tmp);
        st.emplace(tmp);
      }
      if (cur->token == "line end") {
        ++line_n;
      }
      ++cur;
    }
    return root;
  }

  ASTBlock* parse(tokeniter begin, tokeniter end) {
    // Lexer parser(tables::lexer_tokens);
    // auto parse_res = parser.parse(str, true);
    auto block_parse_res = parseBlock(begin, end);

    auto tree = toGenericTree(block_parse_res);
    std::cout << "FUCKFUCK" << std::endl;
    return block_parse_res;
  }
};