#pragma once
#include <filesystem>
#include <fstream>
#include <list>

#include "../libs/json.hpp"
#include "../tree_lib/Tree.hpp"
#include "ast.hpp"
#include "expression.hpp"
#include "lang_tables.hpp"
#include "scope.hpp"

using json = nlohmann::json;

struct ZHModule {
  std::filesystem::path path;
  std::vector<ZHModule*> dependencies;

  std::vector<Token> tokens;
  ast::ASTBlock* ast;

  ZHModule(const std::filesystem::path &new_path);
  void saveCache();
};

std::filesystem::path resolvePath(std::filesystem::path file_path);

void to_json(json& j, const ZHModule& module);
Scope* makeCore();
