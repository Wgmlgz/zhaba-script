#pragma once
#include <unordered_map>
#include <string>

namespace parser_settings {
  std::unordered_map<std::string, bool> bools = {
    {"exp_parser_logs",   false},
    {"show_ast",          false},
    {"show_st",           false},
    {"show_err",          false},
    {"show_cpp",          false},
    {"show_original",     false},
    {"show_exp_tmp_tree", false},
  };
}