#pragma once
#include <filesystem>
#include <list>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include "lang_tables.hpp"
#include "syntax_tree.hpp"
#include "types.hpp"
#include "lang.hpp"
#include "generics.hpp"
#include "types.hpp"

struct FnInfo {
  std::unordered_set<std::string> flow_ops = tables::flow_ops;
  std::unordered_set<std::string> operators = tables::operators;
  std::unordered_set<std::string> functions = tables::functions;
  // std::unordered_map<std::string, int64_t> bin_operators =
  //     tables::bin_operators;
  // std::unordered_map<std::string, int64_t> prefix_operators =
  //     tables::prefix_operators;
  // std::unordered_map<std::string, int64_t> postfix_operators =
  //     tables::postfix_operators;

  // std::map<types::funcHead, Function *> B_OD = tables::B_OD;
  // std::map<types::funcHead, Function *> PR_OD = tables::PR_OD;
  // std::map<types::funcHead, Function *> PO_OD;
  // std::map<types::funcHead, Function *> FN_OD;
};

struct ZHDATA {
  /** Type related */
  std::map<std::string, types::Generic> generics;
  std::unordered_map<std::string, types::TYPE> prim_types = tables::prim_types;

  std::unordered_map<types::TYPE, std::string> type_names = tables::type_names;
  std::unordered_map<types::TYPE, std::string> cpp_type_names = tables::cpp_type_names;

  std::unordered_map<types::TYPE, size_t> sizes = tables::sizes;

  std::unordered_map<std::string, types::TYPE> struct_ids;
  std::unordered_map<types::TYPE, std::string> struct_names;
  std::unordered_map<types::TYPE, types::StructInfo> structs;

  const int first_struct_id = 50;
  int last_struct_id = 50;

  /** Parsing related */
  const int64_t INF = 1000000000000.0;
  const int64_t priority_offset = 100;
  const int64_t parentheses_offset = 1000000;

  FnInfo fn_info;

  /** main syntax tree */
  STTree *sttree;

  Lexer lexer = tables::lexer_tokens;

  std::set<std::string> used_modules;
  std::list<std::string> included_files_names;  /** std::list because need valid iterators */
  std::vector<std::string> included_files;
  std::map<std::string, std::vector<std::string>> files_lines;
  std::filesystem::path bin_path;
  std::filesystem::path std_path;

  /** input/output stream for interpreter */
  std::istream *in = &std::cin;
  std::ostream *out = &std::cout;

  std::unordered_map<std::string, bool> flags = tables::flags;
};

extern ZHDATA zhdata;