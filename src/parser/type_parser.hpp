#pragma once
#include "../lang/lang.hpp"
#include "../lang/parser_error.hpp"
#include "../lang/types.hpp"
#include "lexer.hpp"

/** Defined in SyntaxTreeParser.hpp */
std::vector<Function *> parseImpl(ast::ASTBlock *block, const types::Type &type,
                                  Scope &main_scope, Scope &push_scope);

namespace types {

Type parse(std::string &str, const Scope &scope);
Type parse(tokeniter &token, const Scope &scope);
std::vector<Type> parseTemplate(tokeniter &token, const Scope &scope);

void parsePushStruct(const std::string &name, ast::ASTBlock *block,
                     Scope &write_scope, Scope &scope);

struct TypeParsingError {};
};  // namespace types