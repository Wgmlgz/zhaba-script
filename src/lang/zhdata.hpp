#pragma once
#include <filesystem>
#include <iostream>
#include <list>
#include <map>
#include <random>
#include <string>
#include <unordered_map>
#include <unordered_set>

#include "../core/core.hpp"
#include "generics.hpp"
#include "lang.hpp"
#include "lang_tables.hpp"
#include "syntax_tree.hpp"
#include "types.hpp"

struct ZHDATA {
  /** main syntax tree */
  ZHModule *sttree;
  /** Can't init before main, because of emscripten bug or something, so init dynamicly */
  ZHModule *core_module = nullptr;

  Map<Path, ZHModule *> used_modules;
  Map<Str, Vec<Str>> files_lines;
  Path bin_path;
  Path std_path;

  Map<Str, bool> flags = tables::flags;

  std::mt19937 rng = std::mt19937(std::random_device()());

  /** all collected functions & types, to access them use scope */
  std::list<Function *> functions;
  std::list<types::TYPE> structs;
  Map<IntPtr, Json> json_storage;
};

extern ZHDATA zhdata;