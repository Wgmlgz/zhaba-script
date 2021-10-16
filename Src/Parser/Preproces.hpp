#pragma once
#include <vector>
#include <fstream>
#include "../Lang/Lang.hpp"
#include "Lexer.hpp"
#include "ParserError.hpp"

void defineFlowTokens(std::vector<Token>& tokens) {
  for (auto i = tokens.begin(); i != tokens.end(); ++i) {
    if (i->token == "id") if (i->val == ":") i->token = "new block";
    if (i->token == "id") if (i->val == "|") i->token = "next block";
    if (i->token == "id") if (i->val == "\\") i->token = "fin block";
  }
}

void preprocess(std::string& file_name, std::vector<Token>& res, int depth = 0) {
  zhdata.included_files.push_back(file_name);
  auto fin = std::ifstream(file_name);
  if (fin.fail()) {
    // fin.close();
    throw ParserError(-1, "Cannot open file '" + file_name + "' ");
  }
  std::stringstream ss;
  ss << fin.rdbuf();
  std::string file_data = ss.str();
  fin >> file_data;
  fin.close();

  std::vector<Token> tokens = zhdata.lexer.parse(file_data);
  for (auto& i : tokens) i.file = &zhdata.included_files.back();

  for (auto i = tokens.begin(); i != tokens.end(); ++i) {
    /* include <filename>*/
    if (i->token == "comment.block" or i->token == "comment.line") continue;
    if (i->val == "include") {
      if (i + 1 == tokens.end()) 
        throw ParserError(i->pos, "Expected file path");
      if (depth >= 16)
        throw ParserError(0, "Maximum file include depth reached");
        
      std::string path;
      do {
        ++i;
      } while (i->token == "space");
      if (i->token == "str") {
        path = i->val;
        path.erase(path.begin());
        path.pop_back();
      } else {
        path = i->val;
      }
      preprocess(path, res, depth + 1);
    } else {
      res.push_back(*i);
    }
  }
}