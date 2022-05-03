#pragma once
#include "../lang/lang.hpp"
#include "../parser/parser.hpp"
#include "../tree_lib/Tree.hpp"
#include "definitions_parser.hpp"
#include "expression_parser.hpp"
#include "type_parser.hpp"

STBlock *parseASTBlock(ast::ASTBlock *main_block, ScopeInfo cur_scope,
                       ScopeInfo &parent_scope, types::Type retT);

std::vector<Function *> parseImpl(ast::ASTBlock *block, const types::Type &type,
                                  ScopeInfo &main_scope);

ZHModule *parseAST(std::filesystem::path file_path);

void parceFn(ZHModule *res, ScopeInfo &push_scope, ast::ASTLine *line,
             ast::ASTBlock *main_block,
             std::vector<ast::ASTNode *>::iterator &cur);

std::filesystem::path resolvePath(std::filesystem::path file_path);