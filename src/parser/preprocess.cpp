#include "preprocess.hpp"

void defineFlowTokens(std::vector<Token> &tokens) {
  for (auto &token : tokens) {
    if (token.token == TOKEN::id) {
      if (token.val == ":") token.token = TOKEN::new_block;
      if (token.val == "|") token.token = TOKEN::next_block;
      if (token.val == "\\") token.token = TOKEN::fin_block;
      if (token.val == ";;") token.token = TOKEN::block_end;
      if (token.val == ";") token.token = TOKEN::statement_end;
    }
  }
}

std::vector<Token> tokenizeFile(std::filesystem::path file_path) {
  auto fin = std::ifstream(file_path);

  std::stringstream ss;
  ss << fin.rdbuf();
  std::string file_data = ss.str();
  fin >> file_data;

  file_data = "\n" + file_data + "\n";
  fin.close();

  auto file_name = std::string(file_path.string());
  return lexer::parse(tables::lexer_tokens, file_data, file_name, zhdata.files_lines,
                            zhdata.flags["tokens"]);
}

json jsonFile(std::filesystem::path file_path) {
  auto fin = std::ifstream(file_path);

  json j;
  fin >> j;  

  return j;
}
