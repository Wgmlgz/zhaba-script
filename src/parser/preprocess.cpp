#include "preprocess.hpp"

void defineFlowTokens(std::vector<Token> &tokens) {
  for (auto &token : tokens) {
    if (token.token == TOKEN::id)
      if (token.val == ":") token.token = TOKEN::new_block;
    if (token.token == TOKEN::id)
      if (token.val == "|") token.token = TOKEN::next_block;
    if (token.token == TOKEN::id)
      if (token.val == "\\") token.token = TOKEN::fin_block;
  }
}

void preprocess(std::filesystem::path file_path, std::vector<Token> &res, int depth) {
  zhdata.included_files_names.push_back(file_path.string());
  auto fin = std::ifstream(file_path);

  if (fin.fail()) {
    file_path = zhdata.std_path / file_path.filename();
    fin = std::ifstream(file_path);
    if (fin.fail())
      throw ParserError(-1, "Cannot open file '" + file_path.string() + "' ");
  }

  std::stringstream ss;
  ss << fin.rdbuf();
  std::string file_data = ss.str();
  fin >> file_data;
  file_data = "\n" + file_data;
  fin.close();
  zhdata.included_files.push_back(file_data);

  std::vector<Token> tokens = zhdata.lexer.parse(
      file_data, zhdata.included_files_names.back(), zhdata.files_lines, zhdata.bools["tokens"]
  );

  for (auto i = tokens.begin(); i != tokens.end(); ++i) {
    /* use <filename>*/
    if (i->token == TOKEN::comment_block or i->token == TOKEN::comment_line) continue;
    if (i->val == "use") {
      if (i + 1 == tokens.end())
        throw ParserError(i->pos, "Expected file path");
      if (depth >= 16)
        throw ParserError(0, "Maximum file include depth reached");

      std::string path_str;
      do { ++i; } while (i->token == TOKEN::space);
      if (i->token == TOKEN::str_literal) {
        path_str = i->val;
        path_str.erase(path_str.begin());
        path_str.pop_back();
      } else {
        path_str = i->val;
      }
      if (!zhdata.used_modules.contains(path_str)) {
        zhdata.used_modules.insert(path_str);
        std::filesystem::path path = path_str;
        if (path.is_relative()) path = file_path.parent_path() / path;
        preprocess(path, res, depth + 1);
      }
    } else {
      res.push_back(*i);
    }
  }
}