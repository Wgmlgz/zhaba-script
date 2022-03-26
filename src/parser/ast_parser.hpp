#pragma once
#include "../lang/lang.hpp"
#include "parser_error.hpp"

namespace ast {

ASTBlock *parseBlock(tokeniter begin, tokeniter end);
ASTBlock *parse(tokeniter begin, tokeniter end);

}