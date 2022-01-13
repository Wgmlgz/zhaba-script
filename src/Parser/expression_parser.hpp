#pragma once
#include <set>
#include <utility>

#include "parser_error.hpp"
#include "Lexer.hpp"
#include "../Lang/lang.hpp"
#include "../TreeLib/TreeLib.hpp"
#include "type_parser.hpp"

namespace zhexp {

Exp *buildExp(std::vector<Exp *>::iterator begin, std::vector<Exp *>::iterator end, int depth = 0);
std::vector<Exp *> preprocess(tokeniter begin, tokeniter end, const ScopeInfo &scope);
Exp *postprocess(Exp *exp, ScopeInfo &scope_info, ScopeInfo *block_scope);
Exp *parse(std::vector<Token>::iterator begin, std::vector<Token>::iterator end,
           ScopeInfo &scope_info, ScopeInfo *block_scope);

};