#pragma once
#include <filesystem>
#include <map>
#include <string>
#include <vector>

#include "../../build/_deps/cli11-src/include/CLI/App.hpp"
#include "../../build/_deps/json-src/single_include/nlohmann/json.hpp"
#include "../../build/_deps/cli11-src/include/CLI/Config.hpp"
#include "../../build/_deps/cli11-src/include/CLI/Formatter.hpp"

using IntPtr = std::uintptr_t;

template <typename T>
using Vec = std::vector<T>;

template <typename K, typename V>
using Map = std::map<K, V>;

using Str = std::string;

using Json = nlohmann::json;

using Path = std::filesystem::path;