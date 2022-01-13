#pragma once
#include <string>
#include <vector>
#include "lexer.hpp"
#include "../Lang/lang.hpp"
#include "type_parser.hpp"
#include "parser_error.hpp"

void validateFunction(const Function &func, tokeniter begin, tokeniter end);
Function *parseOpHeader(tokeniter begin, tokeniter end, const ScopeInfo &scope);