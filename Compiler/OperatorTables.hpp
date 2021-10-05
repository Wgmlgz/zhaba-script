#pragma once
#include <vector>
#include <utility>
#include <string>
#include <map>
#include "Lang\Types.hpp"

namespace tables {
    std::unordered_map<std::string, double> bin_operators = {
        {".", 2},   {"->", 2},  {"*", 5},   {"/", 5},   {"%", 5},
        {"%%", 5},   {"+", 6},   {"-", 6},   {"<<", 7},  {">>", 7},  {"<=>", 8},
        {"<", 9},    {"<=", 9},  {">", 9},   {">=", 9},  {"==", 10}, {"!=", 10},
        {"&", 11},   {"^", 12},  {"&&", 14}, {"||", 15}, {"=", 16},
        {"+=", 16},  {"-=", 16}, {"*=", 16}, {"/=", 16}, {"%=", 16}, {"<<=", 16},
        {">>=", 16}, {"&=", 16}, {"^=", 16}, {"|=", 16}, {"::", 17}, { "\"", 18}, {",", 19} };
    const std::vector<std::pair<std::string, std::string>> lexer_tokens = {
        {"str", R"((\'(\\.|[^'\\])*\'))"},
        {"int", R"((([0-9]+)))"},
        {"space", R"(((\ +)))"},
        {"id", R"((([_a-zA-Z][_a-zA-Z0-9]*|[\.\+\-\*\\\%\<\>\=\^\&\:\|\/\!\#\$\@\?]+)))"},
        {"line end", R"(((\n)))"},
        {"p(", R"(((\()))"},
        {"p)", R"(((\))))"},
    };

    // std::map<std::tuple<std::string, int, int>, int> B_OD{
    //     {{"+", intT, intT}, intT},
    //     {{"+", blT, intT}, intT},
    //     {{"+", intT, blT}, intT},
    //     {{"+", blT, blT}, intT},
    //     {{"+", intT, blT}, intT},

    //     {{"+", strT, strT}, strT},

    //     {{"-", intT, intT}, intT},
    //     {{"-", blT, intT}, intT},
    //     {{"-", intT, blT}, intT},
    //     {{"-", blT, blT}, intT},

    //     {{"*", intT, intT}, intT},
    //     {{"*", blT, intT}, intT},
    //     {{"*", intT, blT}, intT},
    //     {{"*", blT, blT}, intT},

    //     {{"%%", intT, intT}, blT},

    //     // {{"=", "id", "type"}, blT},

    //     {{"==", strT, strT}, blT},
    //     {{"==", intT, intT}, blT},
    //     {{"==", blT, intT}, blT},
    //     {{"==", intT, blT}, blT},
    //     {{"==", blT, blT}, blT},

    //     // {{"<::>", intT, intT}, "int range"}, {{"::", intT, "int range"}, "int
    //     // range"}
    // };
}