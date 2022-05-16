#pragma once
#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <regex>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

#include "../lang/token.hpp"

namespace lexer {
std::vector<Token> parse(
    const std::vector<std::pair<TOKEN, std::string>> &tokens,
    const std::string &str, const std::string &filename,
    std::map<std::string, std::vector<std::string>> &files_lines,
    bool DEBUG = false);
}
