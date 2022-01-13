#include "ast.hpp"

namespace ast {
ASTNode::~ASTNode() = default;
void ASTNode::reset() {};

ASTLine::ASTLine(tokeniter new_begin, tokeniter new_end)
    : begin{new_begin}, end{new_end} {}
void ASTLine::reset() {
  std::for_each(begin, end, [](Token &i) { i.reset(); });
}

ASTBlock::ASTBlock(size_t new_offset, bool new_undef_offset,
                   size_t new_line)
    : offset{new_offset}, undef_offset{new_undef_offset}, line{new_line} {}

void ASTBlock::reset() {
  for (auto &i : nodes) {
    i->reset();
  }
}

std::string lineToStr(tokeniter begin, tokeniter end) {
  std::string res = "'";
  for (auto i = begin; i != end; ++i) res += i->val;
  return res + "'";
}

TreeNode<std::string> *toGenericTree(ASTNode *node) {
  auto res = new TreeNode<std::string>;
  if (auto *block = dynamic_cast<ASTBlock *>(node)) {
    res->data = "[block]";
    if (block->btype == ASTBlock::newB) res->data += "new";
    if (block->btype == ASTBlock::nextB) res->data += "next";
    if (block->btype == ASTBlock::finB) res->data += "fin";
    for (auto i : block->nodes) {
      res->branches.push_back(toGenericTree(i));
    }
  } else {
    auto *line = dynamic_cast<ASTLine *>(node);
    res->data = lineToStr(line->begin, line->end);
  }
  return res;
}
};  // namespace ast