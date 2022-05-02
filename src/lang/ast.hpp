#pragma once
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "expression.hpp"
#include "scope.hpp"
#include "../tree_lib/Tree.hpp"

namespace ast {

struct ASTNode {
  virtual ~ASTNode();
  virtual void reset();
};

struct ASTLine : public ASTNode {
  const tokeniter begin, end;
  ASTLine(tokeniter new_begin, tokeniter new_end);
  void reset() override;
};

struct ASTBlock : public ASTNode {
  std::vector<ASTNode *> nodes;
  size_t offset = 0;
  bool undef_offset = false;
  size_t line;
  enum block_type { newB, nextB, finB };
  block_type btype = newB;
  ASTBlock(size_t new_offset = 0, bool new_undef_offset = false,
                    size_t new_line = 0);

  void reset() override;
};

std::string lineToStr(tokeniter begin, tokeniter end);

TreeNode<std::string> *toGenericTree(ASTNode *node);

};  // namespace ast