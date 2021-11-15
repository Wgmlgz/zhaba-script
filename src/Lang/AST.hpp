#pragma once
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "Expression.hpp"
#include "Scope.hpp"
#include "LangTables.hpp"

namespace ast {
struct ASTNode {
  virtual ~ASTNode() = default;
};

struct ASTLine : public ASTNode {
  tokeniter begin, end;
  ASTLine(tokeniter new_begin, tokeniter new_end)
      : begin{new_begin}, end{new_end} {}
};

struct ASTBlock : public ASTNode {
  std::vector<ASTNode*> nodes;
  size_t offset = 0;
  bool undef_offset = false;
  size_t line;
  enum block_type { newB, nextB, finB };
  block_type btype = newB;
  ScopeInfo scope_info;
  ASTBlock(size_t new_offset = 0, bool new_undef_offset = false,
           size_t new_line = 0)
      : offset{new_offset}, undef_offset{new_undef_offset}, line{new_line} {}
};

std::string lineToStr(tokeniter begin, tokeniter end) {
  std::string res = "'";
  for (auto i = begin; i != end; ++i) res += i->val;
  return res + "'";
}

TreeNode<std::string>* toGenericTree(ASTNode* node) {
  auto res = new TreeNode<std::string>;
  if (ASTBlock* block = dynamic_cast<ASTBlock*>(node)) {
    res->data = "[block]";
    if (block->btype == ASTBlock::newB) res->data += "new";
    if (block->btype == ASTBlock::nextB) res->data += "next";
    if (block->btype == ASTBlock::finB) res->data += "fin";
    // res->data += block->btype;
    for (auto i : block->nodes) {
      res->branches.push_back(toGenericTree(i));
    }
  } else {
    ASTLine* line = dynamic_cast<ASTLine*>(node);
    res->data = lineToStr(line->begin, line->end);
  }
  return res;
}
};  // namespace ast