#pragma once
#include <vector>
#include <utility>
#include <string>
#include <map>

namespace tables {
  const std::vector<std::pair<std::string, std::string>> lexer_tokens = {
    {"str", R"((\"(\\.|[^"\\])*\"))"},
    {"int", R"(([0-9]+))"},
    {"space", R"((\ +))"},
    {"id",
      R"(([_a-zA-Z][_a-zA-Z0-9]*|[\.\+\-\*\\\%\<\>\=\^\&\|\/\!\#\$\@\?]+))"},
    {"new block", R"((\:))"},
    {"line end", R"((\n))"},
    {"p(", R"((\())"},
    {"p)", R"((\)))"},
  };

  std::map<std::tuple<std::string, std::string, std::string>, std::string> B_OD{
    {{"+", "int", "int"}, "int"},
    {{"+", "bool", "int"}, "int"},
    {{"+", "int", "bool"}, "int"},
    {{"+", "bool", "bool"}, "int"},

    {{"-", "int", "int"}, "int"},
    {{"-", "bool", "int"}, "int"},
    {{"-", "int", "bool"}, "int"},
    {{"-", "bool", "bool"}, "int"},

    {{"*", "int", "int"}, "int"},
    {{"*", "bool", "int"}, "int"},
    {{"*", "int", "bool"}, "int"},
    {{"*", "bool", "bool"}, "int"},

    {{"%%", "int", "int"}, "bool"},

    {{"==", "int", "int"}, "bool"},
    {{"==", "bool", "int"}, "bool"},
    {{"==", "int", "bool"}, "bool"},
    {{"==", "bool", "bool"}, "bool"},
  };
}