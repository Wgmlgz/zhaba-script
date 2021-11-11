#pragma once
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <map>
#include <list>
#include "Types.hpp"
#include "LangTables.hpp"

struct ZHDATA {
  const int64_t INF = 1000000000000.0;
  const int64_t priority_offset = 100;
  const int64_t parentheses_offset = 1000000;
  const bool USE_SPACES_OFFSET = false;

  std::unordered_set<std::string> flow_ops                   = tables::flow_ops;
  std::unordered_map<std::string, int64_t> bin_operators     = tables::bin_operators;
  std::unordered_set<std::string> operators                  = tables::operators;
  std::unordered_set<std::string> functions                  = tables::functions;
  std::unordered_map<std::string, int64_t> prefix_operators  = tables::prefix_operators;
  std::unordered_map<std::string, int64_t> postfix_operators = tables::postfix_operators;

  std::map<std::tuple<std::string, std::vector<types::Type>>, types::Type> B_OD;
  std::map<std::pair <std::string, std::vector<types::Type>>, types::Type> PR_OD;
  std::map<std::pair <std::string, std::vector<types::Type>>, types::Type> PO_OD;
  std::map<std::pair <std::string, std::vector<types::Type>>, types::Type> FN_OD;

  int file_offset = 0;
  Lexer lexer = tables::lexer_tokens;

  /** std::list because need valid iterator */
  std::list<std::string> included_files_names;
  std::vector<std::string> included_files;
  std::map<std::string, std::vector<std::string>> files_lines;

  std::unordered_map<std::string, bool> bools {
    {"exp_parser_logs",   false},
    {"show_ast",          false},
    {"show_st",           false},
    {"show_st_cool",      false},
    {"show_err",          false},
    {"show_cpp",          false},
    {"show_original",     false},
    {"show_preprocessed", false},
    {"show_exp_tmp_tree", false},
  };
};

ZHDATA zhdata;