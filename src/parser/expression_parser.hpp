#pragma once
#include <set>
#include <utility>

#include "../lang/lang.hpp"
#include "../tree_lib/TreeLib.hpp"
#include "lexer.hpp"
#include "../lang/parser_error.hpp"
#include "type_parser.hpp"

namespace zhexp {

STExp *callDtor(std::pair<ScopeInfo::VarInfo *, Function *> info);
void copyExp(Exp *&exp, ScopeInfo &scope);
Exp *buildExp(ScopeInfo &scope, tokeniter begin, tokeniter end);
Exp *postprocess(Exp *exp, ScopeInfo &scope_info);
Exp *parse(std::vector<Token>::iterator begin, std::vector<Token>::iterator end,
           ScopeInfo &scope_info);

};  // namespace zhexp