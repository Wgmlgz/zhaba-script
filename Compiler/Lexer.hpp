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

// token
struct Token {
  std::string token;
  std::string val;
  size_t pos;
  Token(std::string new_token, std::string new_type, size_t new_pos) {
    token = new_token;
    val = new_type;
    pos = new_pos;
  }
};
class Lexer {
  std::vector<std::pair<std::string, std::string>> tokens;
  void defineFlowTokens(std::vector<Token>& tokens) {
    for (auto i = tokens.begin(); i != tokens.end(); ++i) {
      if (i->token == "id") if (i->val == ":") i->token = "new block";
      if (i->token == "id") if (i->val == "|") i->token = "next block";
    }
  }

public:
  Lexer(const std::vector<std::pair<std::string, std::string>>& new_tokens) { tokens = new_tokens; }
  std::vector<Token> parse(const std::string& str, const bool DEBUG = false) {
    std::string tokens_str = std::accumulate(tokens.begin(), tokens.end(), std::string(),
      [](std::string& ss, std::pair<std::string, std::string>& s) {
        return ss.empty() ? s.second : ss + "|" + s.second;
      });

    std::vector<Token> parse_res;
    const std::regex r(tokens_str);
    for (std::sregex_iterator i = std::sregex_iterator(str.begin(), str.end(), r);
      i != std::sregex_iterator();
      ++i) {
      std::smatch m = *i;

      std::string log_str;
      log_str += "val:'";
      std::string token_val = m.str();
      log_str += token_val;
      log_str += "' pos:";
      log_str += std::to_string(m.position());
      log_str += " gid: ";

      int index;
      for (auto i = 1; i < m.size(); ++i) if (!m[i].str().empty()) {
        index = i - 1;
        break;
      }
      index /= 2;
      log_str += std::to_string(index);

      parse_res.push_back(Token(tokens[index].first, token_val, m.position()));

      if(DEBUG) std::cout << log_str << std::endl;
    }
    defineFlowTokens(parse_res);
    return parse_res;
  }
};


