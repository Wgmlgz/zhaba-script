#pragma once
#include <map>
#include <set>
#include <string>
#include <utility>
#include <vector>

#include "Types.hpp"

namespace tables {
const std::vector<std::pair<std::string, std::string>> lexer_tokens = {
    {"comment.block", R"(((\/\*[\s\S]*?\*\/)))"},
    {"comment.line", R"((((\/\/.*))))"},
    {"str", R"(('(\\.|[^'\\])*'|`(?:\\`|[^`])*`))"},
    {"int",
     R"(((?:0x[0-9a-fA-F]+|0b[01]+|[0-9]+)([iu][0-9]*)?|true|false|tru|fls))"},
    {"space", R"((( |\\\\\\ *\n)+))"},
    {"id",
     R"((([_a-zA-Z][_a-zA-Z0-9]*|[\~\,\.\+\-\*\\\%\<\>\=\^\&\:\|\/\!\#\$\@\?]+|\[\])))"},
    {"line end", R"(((\n)))"},
    {"p(", R"(((\()))"},
    {"p)", R"(((\))))"},
};
std::unordered_set<std::string> banned_ids{
    "?", "@", "<<<", ":=", "as", "|", "\\"};
std::unordered_set<std::string> flow_ops{"?", "@", "<<<"};
std::unordered_map<std::string, int64_t> bin_operators{
    {".", 2}, {"=", 10}, {":=", 10}, {",", 17}, {"as", 4},  {"+", 6},
    {"-", 6}, {"/", 5},  {"%", 5},   {"*", 5},  {"==", 10}, {"!=", 10},
    {"<", 9}, {">", 9},  {"<=", 9},  {">=", 9}, {"&&", 14}, {"||", 15}};
std::unordered_set<std::string> operators{
    "!",      ".",      "=",      ":=",      ",",      "*",
    "&",      "as",     "+",      "/",       "%",      "-",
    "!=",     "==",     "out",    "put",     "sizeof", "malloc",
    "free",   "<",      ">",      "<=",      ">=",     "||",
    "&&",     "in_i8",  "in_i16", "in_i32",  "in_i64", "in_u8",
    "in_u16", "in_u32", "in_u64", "in_char", "in_str", "in_bool",
};
std::unordered_set<std::string> functions{

};
std::unordered_map<std::string, int64_t> prefix_operators{
    {"*", 3},       {"!", 3},      {"&", 3},       {"out", 3},
    {"put", 3},     {"sizeof", 3}, {"malloc", 3},  {"free", 3},

    {"in_i8", 3},   {"in_i16", 3}, {"in_i32", 3},  {"in_i64", 3},
    {"in_u8", 3},   {"in_u16", 3}, {"in_u32", 3},  {"in_u64", 3},
    {"in_char", 3}, {"in_str", 3}, {"in_bool", 3},
};
std::unordered_map<std::string, int64_t> postfix_operators = {};
}  // namespace tables