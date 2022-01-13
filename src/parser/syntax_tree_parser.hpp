#pragma once
#include "../lang/lang.hpp"
#include "../tree_lib/Tree.hpp"
#include "definitions_parser.hpp"
#include "type_parser.hpp"
#include "expression_parser.hpp"

STBlock *parseASTBlock(ast::ASTBlock *main_block, ScopeInfo cur_scope, ScopeInfo &parent_scope, types::Type retT);
std::vector<Function *> parseImpl(ast::ASTBlock *block, const types::Type &type, ScopeInfo &main_scope);
STTree *parseAST(ast::ASTBlock *main_block);

