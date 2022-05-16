#pragma once
#include <filesystem>
#include <map>
#include <string>
#include <vector>

#include "../libs/json.hpp"

using IntPtr = std::uintptr_t;

template <typename T>
using Vec = std::vector<T>;

template <typename K, typename V>
using Map = std::map<K, V>;

using Str = std::string;

using Json = nlohmann::json;

using Path = std::filesystem::path;