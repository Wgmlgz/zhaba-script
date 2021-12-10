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

#define CBOP(name, lhst, rhst, rt)                                             \
  {                                                                            \
    {#name, {types::Type(types::TYPE::lhst), types::Type(types::TYPE::rhst)}}, \
    new Function {                                                             \
      #name,                                                                   \
      {{"a", types::Type(types::TYPE::lhst)},                                  \
        {"b", types::Type(types::TYPE::rhst)}},                                \
      types::Type(types::TYPE::rt), OpType::bin, true                          \
    }                                                                          \
  }
#define CFN1(name, arg1_t, rt)                                  \
  {                                                             \
    {#name, {types::Type(types::TYPE::arg1_t)}}, new Function { \
      #name, {{"a", types::Type(types::TYPE::arg1_t)}},         \
          types::Type(types::TYPE::rt), OpType::lhs, true       \
    }                                                           \
  }
  std::map<types::funcHead, Function*> B_OD = {
    CBOP(+, i64T, i64T, i64T),  CBOP(+, i32T, i32T, i32T),
    CBOP(-, i64T, i64T, i64T),  CBOP(-, i32T, i32T, i32T),
    CBOP(*, i64T, i64T, i64T),  CBOP(*, i32T, i32T, i32T),
    CBOP(/, i64T, i64T, i64T),  CBOP(/, i32T, i32T, i32T),
    CBOP(%, i64T, i64T, i64T),  CBOP(%, i32T, i32T, i32T),
    CBOP(==, i64T, i64T, i64T), CBOP(==, i32T, i32T, i32T),
    CBOP(!=, i64T, i64T, i64T), CBOP(!=, i32T, i32T, i32T),
    CBOP(<, i64T, i64T, i64T),  CBOP(<, i32T, i32T, i32T),
    CBOP(>, i64T, i64T, i64T),  CBOP(>, i32T, i32T, i32T),
    CBOP(<=, i64T, i64T, i64T), CBOP(<=, i32T, i32T, i32T),
    CBOP(>=, i64T, i64T, i64T), CBOP(>=, i32T, i32T, i32T),
  };
  std::map<types::funcHead, Function*> PR_OD = {
    CFN1(out, i64T, voidT),
    CFN1(out, strT, voidT),
    CFN1(malloc, i64T, i64T),
    CFN1(realloc, i64T, voidT),
    CFN1(calloc, i64T, voidT),
    CFN1(free, i64T, voidT),
  };
  std::map<types::funcHead, Function*> PO_OD;
  std::map<types::funcHead, Function*> FN_OD = {
    
  };

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

  std::unordered_map<std::string, bool> bools{
    {"exp_parser_logs", false},
    {"show_ast", false},
    {"show_st", false},
    {"show_st_cool", false},
    {"show_err", false},
    {"show_cpp", false},
    {"show_original", false},
    {"show_preprocessed", false},
    {"show_exp_tmp_tree", false},
    {"B", false},
    {"stack_trace", false},
    {"show_bytecode", false},
    {"show_type", false},
};
};

ZHDATA zhdata;