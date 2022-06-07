#pragma once
#include <map>
#include <string>
#include <unordered_set>
#include <vector>

#include "../core/core.hpp"
#include "syntax_tree.hpp"

using json = nlohmann::json;

namespace types {
struct Generic {
  std::string name;
  std::vector<std::string> names;
  ast::ASTBlock *block = nullptr;
  std::vector<ast::ASTBlock *> impl_blocks;
  Scope *scope;

  std::string toString();
};

void pushGenericType(const std::string &name,
                     const std::vector<std::string> &names,
                     ast::ASTBlock *block, Scope *scope
);
}