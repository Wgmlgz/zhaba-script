#pragma once
#include "../lang/parser_error.hpp"
#include "../lang/types.hpp"
#include "lang.hpp"
#include "lexer.hpp"

/** Defined in SyntaxTreeParser.hpp */
std::vector<Function *> parseImpl(ast::ASTBlock *block, const types::Type &type,
                                  ScopeInfo &main_scope, ScopeInfo &push_scope);

namespace types {

Type parse(std::string &str, const ScopeInfo &scope);
Type parse(tokeniter &token, const ScopeInfo &scope);
std::vector<Type> parseTemplate(tokeniter &token, const ScopeInfo &scope);
types::StructInfo parseStruct(ast::ASTBlock *block, const ScopeInfo &scope);

struct TypeParsingError {};
};  // namespace types