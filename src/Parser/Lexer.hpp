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

enum class TOKEN {
  comment_block,
  comment_line,
  str_literal,
  int_literal,
  space,
  id,
  line_end,
  open_p,
  close_p,
  new_block,
  next_block,
  fin_block,
  op,
};

/** Just Token lol */
struct Token {
  const TOKEN orig_token;
  TOKEN token;
  const std::string val, &filename;
  const size_t pos, line;
  
  Token(const TOKEN& new_token, const std::string& new_type, size_t new_pos,
        size_t new_line, const std::string& new_filename)
      : orig_token(new_token),
        token(new_token),
        val(new_type),
        pos(new_pos),
        line(new_line),
        filename(new_filename) {}

  void reset() { token = orig_token; }
};

typedef std::vector<Token>::iterator tokeniter;

class Lexer {
  std::vector<std::pair<TOKEN, std::string>> tokens;

 public:
  Lexer(const std::vector<std::pair<TOKEN, std::string>>& new_tokens)
      : tokens(new_tokens) {}
  std::vector<Token> parse(
      const std::string& str, const std::string& filename,
      std::map<std::string, std::vector<std::string>>& files_lines,
      bool DEBUG = false) {
    std::vector<Token> parse_res;
    /** Merge all tokens in one regex */
    std::regex r(std::accumulate(tokens.begin(), tokens.end(), std::string(),
                                 [](const auto& ss, const auto& s) {
                                   return ss.empty() ? s.second
                                                     : ss + "|" + s.second;
                                 }));

    size_t line_n = 0, pos = 0;
    std::string line;
    /** Iterate throw all matches */
    for (auto i = std::sregex_iterator(str.begin(), str.end(), r);
         i != std::sregex_iterator(); ++i) {
      auto m = *i;

      /** Find matched group by id */
      size_t id = 0;
      for (; id + 1 < m.size(); ++id)
        if (m[id + 1].str().size()) break;
      id /= 2;
      std::string token_val = m.str();

      /** Create and push new Token */
      parse_res.push_back({tokens[id].first, token_val, pos, line_n, filename});

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
};
