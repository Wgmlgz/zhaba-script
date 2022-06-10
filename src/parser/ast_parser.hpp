#pragma once
#include "../lang/lang.hpp"

namespace ast {

ASTBlock *parseBlock(tokeniter begin, tokeniter end);
ASTBlock *parse(tokeniter begin, tokeniter end);

}