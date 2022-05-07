#pragma once
#include <filesystem>
#include <list>
#include <fstream>

#include "../libs/json.hpp"
#include "../tree_lib/Tree.hpp"
#include "ast.hpp"
#include "expression.hpp"

#include "scope.hpp"

using json = nlohmann::json;

struct ZHModule {
  Scope scope;
  std::filesystem::path path;
  std::vector<std::filesystem::path> dependences;

  std::vector<Token> tokens;
  ast::ASTBlock* ast;

  ZHModule(Scope *scope, const std::filesystem::path &new_path);
  void saveCache();
};

std::filesystem::path resolvePath(std::filesystem::path file_path);

void to_json(json& j, const ZHModule& module);