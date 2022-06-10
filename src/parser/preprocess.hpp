#pragma once
#include <filesystem>
#include <fstream>
#include <vector>

#include "../lang/lang.hpp"
#include "lexer.hpp"

void defineFlowTokens(std::vector<Token> &tokens);
std::vector<Token> tokenizeFile(std::filesystem::path file_path);
json jsonFile(std::filesystem::path file_path);