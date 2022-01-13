#pragma once
#include <filesystem>
#include <fstream>
#include <vector>

#include "../Lang/lang.hpp"
#include "lexer.hpp"
#include "parser_error.hpp"

void defineFlowTokens(std::vector<Token> &tokens);
void preprocess(std::filesystem::path file_path, std::vector<Token> &res, int depth = 0);