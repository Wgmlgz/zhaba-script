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
  zhdata.included_files_names.push_back(file_path.string());
  auto fin = std::ifstream(zhdata.bin_path / file_path);
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

  file_data = "\n" + file_data + "\n";
  fin.close();
  zhdata.included_files.push_back(file_data);

  return zhdata.lexer.parse(file_data, zhdata.included_files_names.back(),
                            zhdata.files_lines, zhdata.flags["tokens"]);

}