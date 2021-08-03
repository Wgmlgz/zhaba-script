#pragma once
#include <vector>
#include <utility>
#include <string>
#include <map>

namespace tables {
std::unordered_map<std::string, double> bin_operators = {
    {".", 2},   {"->", 2},  {"*", 5},   {"/", 5},   {"%", 5},
    {"%%", 5},   {"+", 6},   {"-", 6},   {"<<", 7},  {">>", 7},  {"<=>", 8},
    {"<", 9},    {"<=", 9},  {">", 9},   {">=", 9},  {"==", 10}, {"!=", 10},
    {"&", 11},   {"^", 12},  {"&&", 14}, {"||", 15}, {"=", 16},
    {"+=", 16},  {"-=", 16}, {"*=", 16}, {"/=", 16}, {"%=", 16}, {"<<=", 16},
    {">>=", 16}, {"&=", 16}, {"^=", 16}, {"|=", 16}, {"::", 17}, {",", 18}};
std::unordered_set<std::string> operators = {
    "::",  ".",   "->", "*",  "/",  "%",  "%%", "+",  "-",  "<<",
    ">>",  "<=>", "<",  "<=", ">",  ">=", "==", "!=", "&",  "^",
    "&&",  "||", "=",  "+=", "-=", "*=", "/=", "%=", "<<=",
    ">>=", "&=",  "^=", "|=", ",",  "++", "--", "?", "::"};
std::unordered_map<std::string, double> prefix_operators = {
    {"?", 18}, {"++", 3}, {"--", 3}, {"!", 3}, {"~", 3}, {"*", 3}, {"-", 3}};
std::unordered_map<std::string, double> postfix_operators = {{"++", 2},
                                                             {"--", 2}};
const std::vector<std::pair<std::string, std::string>> lexer_tokens = {
    {"str", R"((\'(\\.|[^'\\])*\'))"},
    {"int", R"((([0-9]+)))"},
    {"space", R"(((\ +)))"},
    {"id", R"((([_a-zA-Z][_a-zA-Z0-9]*|[\.\+\-\*\\\%\<\>\=\^\&\:\|\/\!\#\$\@\?]+)))"},
    {"line end", R"(((\n)))"},
    {"p(", R"(((\()))"},
    {"p)", R"(((\))))"},
};

std::map<std::tuple<std::string, std::string, std::string>, std::string> B_OD{
    {{"+", "int", "int"}, "int"},
    {{"+", "bool", "int"}, "int"},
    {{"+", "int", "bool"}, "int"},
    {{"+", "bool", "bool"}, "int"},
    {{"+", "int", "bool"}, "int"},

    {{"+", "str", "str"}, "str"},

    {{"-", "int", "int"}, "int"},
    {{"-", "bool", "int"}, "int"},
    {{"-", "int", "bool"}, "int"},
    {{"-", "bool", "bool"}, "int"},

    {{"*", "int", "int"}, "int"},
    {{"*", "bool", "int"}, "int"},
    {{"*", "int", "bool"}, "int"},
    {{"*", "bool", "bool"}, "int"},

    {{"%%", "int", "int"}, "bool"},

    // {{"=", "id", "type"}, "bool"},

    {{"==", "str", "str"}, "bool"},
    {{"==", "int", "int"}, "bool"},
    {{"==", "bool", "int"}, "bool"},
    {{"==", "int", "bool"}, "bool"},
    {{"==", "bool", "bool"}, "bool"},

    // {{"<::>", "int", "int"}, "int range"}, {{"::", "int", "int range"}, "int
    // range"}
};

std::unordered_map<std::string, std::vector<std::string>> cast_table {
  //  {"",{""}},
   {"auto", {"int", "str", "bool"}},
   {"int", {"bool"}},
   {"str", {"bool"}},
};
}