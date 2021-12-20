#pragma once
#include <filesystem>
#include <list>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include "LangTables.hpp"
#include "SyntaxTree.hpp"
#include "Types.hpp"


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
  std::map<types::funcHead, Function*> B_OD = {
    CBOP(+,  i8T, i8T, i8T),
    CBOP(-,  i8T, i8T, i8T),
    CBOP(*,  i8T, i8T, i8T),
    CBOP(/,  i8T, i8T, i8T),
    CBOP(%,  i8T, i8T, i8T),
    CBOP(==, i8T, i8T, boolT),
    CBOP(!=, i8T, i8T, boolT),
    CBOP(<,  i8T, i8T, boolT),
    CBOP(>,  i8T, i8T, boolT),
    CBOP(<=, i8T, i8T, boolT),
    CBOP(>=, i8T, i8T, boolT),

    CBOP(+,  i16T, i16T, i16T),
    CBOP(-,  i16T, i16T, i16T),
    CBOP(*,  i16T, i16T, i16T),
    CBOP(/,  i16T, i16T, i16T),
    CBOP(%,  i16T, i16T, i16T),
    CBOP(==, i16T, i16T, boolT),
    CBOP(!=, i16T, i16T, boolT),
    CBOP(<,  i16T, i16T, boolT),
    CBOP(>,  i16T, i16T, boolT),
    CBOP(<=, i16T, i16T, boolT),
    CBOP(>=, i16T, i16T, boolT),
    
    CBOP(+,  i32T, i32T, i32T),
    CBOP(-,  i32T, i32T, i32T),
    CBOP(*,  i32T, i32T, i32T),
    CBOP(/,  i32T, i32T, i32T),
    CBOP(%,  i32T, i32T, i32T),
    CBOP(==, i32T, i32T, boolT),
    CBOP(!=, i32T, i32T, boolT),
    CBOP(<,  i32T, i32T, boolT),
    CBOP(>,  i32T, i32T, boolT),
    CBOP(<=, i32T, i32T, boolT),
    CBOP(>=, i32T, i32T, boolT),
    
    CBOP(+,  i64T, i64T, i64T),
    CBOP(-,  i64T, i64T, i64T),
    CBOP(*,  i64T, i64T, i64T),
    CBOP(/,  i64T, i64T, i64T),
    CBOP(%,  i64T, i64T, i64T),
    CBOP(==, i64T, i64T, boolT),
    CBOP(!=, i64T, i64T, boolT),
    CBOP(<,  i64T, i64T, boolT),
    CBOP(>,  i64T, i64T, boolT),
    CBOP(<=, i64T, i64T, boolT),
    CBOP(>=, i64T, i64T, boolT),

    CBOP(+,  u8T, u8T, u8T),
    CBOP(-,  u8T, u8T, u8T),
    CBOP(*,  u8T, u8T, u8T),
    CBOP(/,  u8T, u8T, u8T),
    CBOP(%,  u8T, u8T, u8T),
    CBOP(==, u8T, u8T, boolT),
    CBOP(!=, u8T, u8T, boolT),
    CBOP(<,  u8T, u8T, boolT),
    CBOP(>,  u8T, u8T, boolT),
    CBOP(<=, u8T, u8T, boolT),
    CBOP(>=, u8T, u8T, boolT),

    CBOP(+,  u16T, u16T, u16T),
    CBOP(-,  u16T, u16T, u16T),
    CBOP(*,  u16T, u16T, u16T),
    CBOP(/,  u16T, u16T, u16T),
    CBOP(%,  u16T, u16T, u16T),
    CBOP(==, u16T, u16T, boolT),
    CBOP(!=, u16T, u16T, boolT),
    CBOP(<,  u16T, u16T, boolT),
    CBOP(>,  u16T, u16T, boolT),
    CBOP(<=, u16T, u16T, boolT),
    CBOP(>=, u16T, u16T, boolT),
    
    CBOP(+,  u32T, u32T, u32T),
    CBOP(-,  u32T, u32T, u32T),
    CBOP(*,  u32T, u32T, u32T),
    CBOP(/,  u32T, u32T, u32T),
    CBOP(%,  u32T, u32T, u32T),
    CBOP(==, u32T, u32T, boolT),
    CBOP(!=, u32T, u32T, boolT),
    CBOP(<,  u32T, u32T, boolT),
    CBOP(>,  u32T, u32T, boolT),
    CBOP(<=, u32T, u32T, boolT),
    CBOP(>=, u32T, u32T, boolT),
    
    CBOP(+,  u64T, u64T, u64T),
    CBOP(-,  u64T, u64T, u64T),
    CBOP(*,  u64T, u64T, u64T),
    CBOP(/,  u64T, u64T, u64T),
    CBOP(%,  u64T, u64T, u64T),
    CBOP(==, u64T, u64T, boolT),
    CBOP(!=, u64T, u64T, boolT),
    CBOP(<,  u64T, u64T, boolT),
    CBOP(>,  u64T, u64T, boolT),
    CBOP(<=, u64T, u64T, boolT),
    CBOP(>=, u64T, u64T, boolT),

    CBOP(==, charT, charT, boolT),
    CBOP(!=, charT, charT, boolT),
    CBOP(<,  charT, charT, boolT),
    CBOP(>,  charT, charT, boolT),
    CBOP(<=, charT, charT, boolT),
    CBOP(>=, charT, charT, boolT),

    CBOP(&&, boolT, boolT, boolT),
    CBOP(||, boolT, boolT, boolT),
  };
  std::map<types::funcHead, Function*> PR_OD = {
#define CFN0(name, rt)                                             \
  {                                                                \
    {(#name), {}}, new Function {                                  \
      (#name), {}, types::Type(types::TYPE::rt), OpType::lhs, true \
    }                                                              \
  }
#define CFN1(name, arg1_t, rt)                                  \
  {                                                             \
    {#name, {types::Type(types::TYPE::arg1_t)}}, new Function { \
      (#name), {{"a", types::Type(types::TYPE::arg1_t)}},       \
          types::Type(types::TYPE::rt), OpType::lhs, true       \
    }                                                           \
  }

      CFN1(!, boolT, boolT),
      CFN1(!, charT, boolT),
      CFN1(!, i8T, boolT),
      CFN1(!, i16T, boolT),
      CFN1(!, i32T, boolT),
      CFN1(!, i64T, boolT),
      CFN1(!, u8T, boolT),
      CFN1(!, u16T, boolT),
      CFN1(!, u32T, boolT),
      CFN1(!, u64T, boolT),

      CFN1(out, i8T, voidT),
      CFN1(out, i16T, voidT),
      CFN1(out, i32T, voidT),
      CFN1(out, i64T, voidT),

      CFN1(out, u8T, voidT),
      CFN1(out, u16T, voidT),
      CFN1(out, u32T, voidT),
      CFN1(out, u64T, voidT),

      CFN1(out, strT, voidT),
      CFN1(out, charT, voidT),

      CFN1(out, boolT, voidT),

      CFN1(out, f4T, voidT),
      CFN1(out, f8T, voidT),
      CFN1(out, f10T, voidT),

      CFN1(put, i8T, voidT),
      CFN1(put, i16T, voidT),
      CFN1(put, i32T, voidT),
      CFN1(put, i64T, voidT),

      CFN1(put, u8T, voidT),
      CFN1(put, u16T, voidT),
      CFN1(put, u32T, voidT),
      CFN1(put, u64T, voidT),

      CFN1(put, strT, voidT),
      CFN1(put, charT, voidT),

      CFN1(put, boolT, voidT),

      CFN1(put, f4T, voidT),
      CFN1(put, f8T, voidT),
      CFN1(put, f10T, voidT),

      CFN0(in_i8, i8T),
      CFN0(in_i16, i16T),
      CFN0(in_i32, i32T),
      CFN0(in_i64, i64T),

      CFN0(in_u8, u8T),
      CFN0(in_u16, u16T),
      CFN0(in_u32, u32T),
      CFN0(in_u64, u64T),

      CFN0(in_char, charT),
      CFN0(in_str, strT),

      CFN0(in_bool, boolT),

      CFN0(in_f4, f4T),
      CFN0(in_f8, f8T),
      CFN0(in_f10, f10T),

      CFN1(malloc, i64T, i64T),
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

  /** input/output stream for interpreter */
  std::istream* in = &std::cin;
  std::ostream* out = &std::cout;

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