#pragma once
#include <filesystem>
#include <iostream>
#include <list>
#include <map>
#include <random>
#include <string>
#include <unordered_map>
#include <unordered_set>

#include "generics.hpp"
#include "lang.hpp"
#include "lang_tables.hpp"
#include "syntax_tree.hpp"
#include "types.hpp"

struct ZHDATA {
  /** Type related */
  std::map<std::string, types::Generic> generics;
  std::unordered_map<std::string, types::TYPE> prim_types = tables::prim_types;

  std::unordered_map<types::TYPE, std::string> type_names = tables::type_names;
  std::unordered_map<types::TYPE, std::string> cpp_type_names =
      tables::cpp_type_names;

  std::unordered_map<types::TYPE, size_t> sizes = tables::sizes;

  std::unordered_map<std::string, types::TYPE> struct_ids;
  std::unordered_map<types::TYPE, std::string> struct_names;
  std::unordered_set<types::TYPE> incomplete_types;
  std::unordered_map<types::TYPE, types::StructInfo> structs;

  int first_struct_id = 50;
  int last_struct_id = 50;

  /** Parsing related */
  int64_t INF = 1000000000000.0;
  int64_t priority_offset = 100;
  int64_t parentheses_offset = 1000000;

  /** main syntax tree */
  STTree *sttree;

  Lexer lexer = tables::lexer_tokens;

  std::set<std::string> used_modules;
  std::list<std::string>
      included_files_names; /** std::list because need valid iterators */
  std::vector<std::string> included_files;
  std::map<std::string, std::vector<std::string>> files_lines;
  std::filesystem::path bin_path;
  std::filesystem::path std_path;

  /** input/output stream for interpreter */
  std::istream *in = &std::cin;
  std::ostream *out = &std::cout;

  std::unordered_map<std::string, bool> flags = tables::flags;

  std::mt19937 rng = std::mt19937(std::random_device()());
};

extern ZHDATA zhdata;