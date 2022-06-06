#pragma once
#include "../lang/lang.hpp"
#include "../parser/parser.hpp"
#include "../tree_lib/Tree.hpp"
#include "definitions_parser.hpp"
#include "expression_parser.hpp"
#include "type_parser.hpp"

STBlock *parseASTBlock(ast::ASTBlock *main_block, Scope cur_scope,
                       Scope &parent_scope, types::Type retT);

std::vector<Function *> parseImpl(ast::ASTBlock *block, const types::Type &type,
                                  Scope &main_scope);

ZHModule *parseFile(std::filesystem::path file_path);

Function *parseFn(ZHModule *res, Scope &push_scope, ast::ASTLine *line,
                  ast::ASTBlock *main_block,
                  std::vector<ast::ASTNode *>::iterator &cur,
                  bool allow_header_only = false);

std::filesystem::path resolvePath(std::filesystem::path file_path);