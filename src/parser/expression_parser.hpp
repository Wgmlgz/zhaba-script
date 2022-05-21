#pragma once
#include <set>
#include <utility>

#include "../lang/lang.hpp"
#include "../tree_lib/TreeLib.hpp"
#include "lexer.hpp"
#include "../lang/parser_error.hpp"
#include "type_parser.hpp"

namespace zhexp {

STExp *callDtor(std::pair<Scope::VarInfo *, Function *> info);
void copyExp(Exp *&exp, Scope &scope);
Exp *buildExp(Scope &scope, tokeniter begin, tokeniter end);
Exp *postprocess(Exp *exp, Scope &scope_info);
Exp *parse(std::vector<Token>::iterator begin, std::vector<Token>::iterator end,
           Scope &scope_info);

};  // namespace zhexp