#pragma once
#include <map>
#include <set>
#include <string>
#include <utility>
#include <vector>

#include "types.hpp"
#include "./token.hpp"
#include "syntax_tree.hpp"

namespace tables {

extern const std::unordered_map<std::string, bool> flags;
extern const std::vector<std::pair<TOKEN, std::string>> lexer_tokens;
extern const std::unordered_set<std::string> banned_ids;
extern const std::unordered_set<std::string> flow_ops;
extern const std::unordered_map<std::string, int64_t> bin_operators;
extern const std::unordered_set<std::string> operators;
extern const std::unordered_set<std::string> functions;
extern const std::unordered_map<std::string, int64_t> prefix_operators;
extern const std::unordered_map<std::string, int64_t> postfix_operators;
extern const std::unordered_map<std::string, types::TYPE> prim_types;
extern const std::unordered_map<types::TYPE, std::string> type_names;
extern const std::unordered_map<types::TYPE, std::string> cpp_type_names;
extern const std::unordered_map<types::TYPE, size_t> sizes;
extern const std::map<types::funcHead, Function *> B_OD;
extern const std::map<types::funcHead, Function *> PR_OD;

}  // namespace tables