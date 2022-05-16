#pragma once
#include <string>
#include <map>
#include <unordered_set>
#include <vector>

#include "syntax_tree.hpp"

namespace types {
struct Generic {
  std::string name;
  std::vector<std::string> names;
  ast::ASTBlock *block = nullptr;
  std::vector<ast::ASTBlock *> impl_blocks;
  ScopeInfo *scope;

  std::string toString();
};

void pushGenericType(const std::string &name,
                     const std::vector<std::string> &names,
                     ast::ASTBlock *block, ScopeInfo *scope
);
}
