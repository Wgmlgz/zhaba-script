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
  /** main syntax tree */
  ZHModule *sttree;
  ZHModule *core_module = nullptr;

  std::map<std::filesystem::path, ZHModule *> used_modules;
  std::map<std::string, std::vector<std::string>> files_lines;
  std::filesystem::path bin_path;
  std::filesystem::path std_path;

  std::unordered_map<std::string, bool> flags = tables::flags;

  std::mt19937 rng = std::mt19937(std::random_device()());

  /** all collected functions & types, to access them use scope */
  std::list<types::TYPE> structs;
  std::list<Function *> functions;
};

extern ZHDATA zhdata;