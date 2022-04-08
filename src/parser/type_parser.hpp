#pragma once
#include "../lang/lang.hpp"
#include "../lang/parser_error.hpp"
#include "../lang/types.hpp"
#include "lexer.hpp"

/** Defined in SyntaxTreeParser.hpp */
std::vector<Function *> parseImpl(ast::ASTBlock *block, const types::Type &type,
                                  ScopeInfo &main_scope, ScopeInfo &push_scope);

namespace types {

Type parse(std::string &str, const ScopeInfo &scope);
Type parse(tokeniter &token, const ScopeInfo &scope);
std::vector<Type> parseTemplate(tokeniter &token, const ScopeInfo &scope);

void parsePushStruct(const std::string &name, ast::ASTBlock *block,
                     const ScopeInfo &scope);

struct TypeParsingError {};
};  // namespace types