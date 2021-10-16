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

void preprocess(std::filesystem::path file_path, std::vector<Token>& res, int& offset, int depth = 0) {
  zhdata.included_files_names.push_back(file_path.string());
  auto fin = std::ifstream(file_path);
  if (fin.fail()) {
    // fin.close();
    throw ParserError(-1, "Cannot open file '" + file_path.string() + "' ");
  }
  std::stringstream ss;
  ss << fin.rdbuf();
  std::string file_data = ss.str();
  fin >> file_data;
  fin.close();
  zhdata.included_files.push_back(file_data);

  std::vector<Token> tokens = zhdata.lexer.parse(file_data, zhdata.file_offset);
  // for (auto& i : tokens) i.file_ptr = &zhdata.included_files.back();

  for (auto i = tokens.begin(); i != tokens.end(); ++i, offset += i->val.size()) {
    i->pos = offset;
    /* include <filename>*/
    if (i->token == "comment.block" or i->token == "comment.line") continue;
    if (i->val == "include") {
      if (i + 1 == tokens.end()) 
        throw ParserError(i->pos, "Expected file path");
      if (depth >= 16)
        throw ParserError(0, "Maximum file include depth reached");
        
      std::string path_str;
      do {
        ++i;
      } while (i->token == "space");
      if (i->token == "str") {
        path_str = i->val;
        path_str.erase(path_str.begin());
        path_str.pop_back();
      } else {
        path_str = i->val;
      }
      std::filesystem::path path = path_str;
      if (path.is_relative()) path = file_path.parent_path() / path;
      preprocess(path, res, offset, depth + 1);
    } else {
      res.push_back(*i);
    }
  }
}