#pragma once
#include <vector>
#include <utility>
#include <string>
#include <map>
#include "Lang\Types.hpp"

namespace tables {
  const std::vector<std::pair<std::string, std::string>> lexer_tokens = {
    {"str", R"((\'(\\.|[^'\\])*\'))"},
    {"int", R"((([0-9]+)))"},
    {"space", R"(((\ +)))"},
    {"id", R"((([_a-zA-Z][_a-zA-Z0-9]*|[\,\.\+\-\*\\\%\<\>\=\^\&\:\|\/\!\#\$\@\?]+)))"},
    {"line end", R"(((\n)))"},
    {"p(", R"(((\()))"},
    {"p)", R"(((\))))"},
  };
}