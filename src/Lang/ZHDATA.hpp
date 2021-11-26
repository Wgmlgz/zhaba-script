#pragma once
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <map>
#include <list>
#include "Types.hpp"
#include "SyntaxTree.hpp"
#include "LangTables.hpp"

struct ZHDATA {
  const int64_t INF = 1000000000000.0;
  const int64_t priority_offset = 100;
  const int64_t parentheses_offset = 1000000;
  const bool USE_SPACES_OFFSET = false;

  std::unordered_set<std::string> flow_ops                   = tables::flow_ops;
  std::unordered_set<std::string> operators                  = tables::operators;
  std::unordered_set<std::string> functions                  = tables::functions;
  std::unordered_map<std::string, int64_t> bin_operators     = tables::bin_operators;
  std::unordered_map<std::string, int64_t> prefix_operators  = tables::prefix_operators;
  std::unordered_map<std::string, int64_t> postfix_operators = tables::postfix_operators;

  std::map<types::funcHead, Function*> B_OD;
  std::map<types::funcHead, Function*> PR_OD;
  std::map<types::funcHead, Function*> PO_OD;
  std::map<types::funcHead, Function*> FN_OD;

  /** main syntax tree */
  STTree* sttree;

  int file_offset = 0;
  Lexer lexer = tables::lexer_tokens;

  /** std::list because need valid iterator */
  std::set<std::string> used_modules;
  std::list<std::string> included_files_names;
  std::vector<std::string> included_files;
  std::map<std::string, std::vector<std::string>> files_lines;
  std::filesystem::path bin_path;
  std::filesystem::path std_path;

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
    {"B", false},
    {"show_type", false},
  };
};

ZHDATA zhdata;