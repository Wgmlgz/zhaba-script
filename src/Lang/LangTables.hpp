#pragma once
#include <vector>
#include <utility>
#include <string>
#include <map>
#include <set>
#include "Types.hpp"

namespace tables {
  const std::vector<std::pair<std::string, std::string>> lexer_tokens = {
    {"comment.block", R"(((\/\*[\s\S]*?\*\/)))"},
    {"comment.line", R"((((\/\/.*))))"},
    {"str", R"((\'(\\.|[^'\\])*\'))"},
    {"int", R"((([0-9]+)))"},
    {"space", R"(((\ +)))"},
    {"id", R"((([_a-zA-Z][_a-zA-Z0-9]*|[\~\,\.\+\-\*\\\%\<\>\=\^\&\:\|\/\!\#\$\@\?]+|\[\])))"},
    {"line end", R"(((\n)))"},
    {"p(", R"(((\()))"},
    {"p)", R"(((\))))"},
  };
  std::unordered_set<std::string> banned_ids {
    "?", "@", "<<<", ":=", "as", "|", "\\"
  };
  std::unordered_set<std::string> flow_ops {
    "?", "@", "<<<"
  };
  std::unordered_map<std::string, int64_t> bin_operators {
    {".", 2}, {"=", 10}, {":=", 10}, {",", 17}, {"as", 4}
  };
  std::unordered_set<std::string> operators {
    ".", "=", ":=", ",", "*", "&", "as"
  };
  std::unordered_set<std::string> functions {
    
  };
  std::unordered_map<std::string, int64_t> prefix_operators {
    {"*", 3},
    {"&", 3},
  };
  std::unordered_map<std::string, int64_t> postfix_operators = {};
}