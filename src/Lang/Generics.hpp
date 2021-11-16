#pragma once
#include <string>
#include <map>
#include <unordered_set>
#include <vector>

#include "SyntaxTree.hpp"

namespace types {
  struct Generic {
    std::string name;
    std::vector<std::string> names;
    ast::ASTBlock* block = nullptr;
    std::vector<ast::ASTBlock*> impl_blocks;

    std::string toString() {
      auto res = name;
      res += "<";
      bool f = false;
      for (const auto& i : names) {
        if (f) res += " ";
        else f = true;
        res += i;
      }
      res += ">";
      return res;
    }
  };

  std::map<std::string, Generic> generics;

  void pushGenericType(
    const std::string& name,
    const std::vector<std::string>& names, 
    ast::ASTBlock* block
  ) {
    if (generics.contains(name))
      throw std::runtime_error(
        "Generic type '" + name + "' is already defined. (" + generics[name].toString() + ")");
    generics.insert({name, {name, names, block}});
  }
}
