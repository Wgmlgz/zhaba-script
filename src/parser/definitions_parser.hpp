#pragma once
#include <string>
#include <vector>
#include "lexer.hpp"
#include "../lang/lang.hpp"
#include "type_parser.hpp"
#include "parser_error.hpp"

void validateFunction(Scope &scope, const Function &func, tokeniter begin,
                      tokeniter end);
Function *parseOpHeader(tokeniter begin, tokeniter end, const Scope &scope);