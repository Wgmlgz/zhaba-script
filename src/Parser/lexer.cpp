#include "lexer.hpp"

Lexer::Lexer(std::vector<std::pair<TOKEN, std::string>> new_tokens)
    : tokens(std::move(new_tokens)) {}

std::vector<Token> Lexer::parse(
    const std::string &str, const std::string &filename,
    std::map<std::string, std::vector<std::string>> &files_lines,
    bool DEBUG) {
  std::vector<Token> parse_res;
  /** Merge all tokens in one regex */
  std::regex r(std::accumulate(tokens.begin(), tokens.end(), std::string(),
                               [](const auto &ss, const auto &s) {
                                 return ss.empty() ? s.second
                                                   : ss + "|" + s.second;
                               }));

  size_t line_n = 0, pos = 0;
  std::string line;
  /** Iterate throw all matches */
  for (auto i = std::sregex_iterator(str.begin(), str.end(), r);
       i != std::sregex_iterator(); ++i) {
    auto match = *i;

    /** Find matched group by id */
    size_t id = 0;
    for (; id + 1 < match.size(); ++id)
      if (!match[id + 1].str().empty()) break;
    id /= 2;
    std::string token_val = match.str();

    /** Create and push new Token */
    parse_res.emplace_back(
        tokens[id].first, token_val, pos, line_n, filename
    );

    /** Update lines info for error trace */
    tokens[id].first == TOKEN::line_end
    ? (files_lines[filename].push_back(line), line.clear(), ++line_n,
        pos = 0, 0)
    : (pos += token_val.size(), line += token_val, 0);

    /** Write logs if needed */
    if (DEBUG)
      std::cout << "'" + token_val + "':" +
          std::to_string(
              static_cast<std::underlying_type_t<TOKEN>>(
                  tokens[id].first)) +
          " at " + std::to_string(pos) + ":" +
          std::to_string(line_n)
                << std::endl;
  }
  return parse_res;
}
