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

/* Token */
struct Token {
  std::string token;
  std::string val;
  size_t pos;
  size_t line;
  const std::string& filename;

  Token(
    std::string new_token,
    std::string new_type,
    size_t new_pos,
    size_t new_line,
    const std::string& new_filename
  ) :
    token(new_token),
    val(new_type),
    pos(new_pos),
    line(new_line),
    filename(new_filename)
  {}
};

typedef std::vector<Token>::iterator tokeniter;

class Lexer {
  std::vector<std::pair<std::string, std::string>> tokens;
public:
  Lexer(const std::vector<std::pair<std::string, std::string>>& new_tokens) { tokens = new_tokens; }
  std::vector<Token> parse(
    const std::string& str,
    const std::string& filename,
    std::map<std::string, std::vector<std::string>>& files_lines,
    bool DEBUG = false) {
    std::string tokens_str = std::accumulate(tokens.begin(), tokens.end(), std::string(),
      [](const std::string& ss, const std::pair<std::string, std::string>& s) {
        return ss.empty() ? s.second : ss + "|" + s.second;
      });

    std::vector<Token> parse_res;
    const std::regex r(tokens_str);

    int line = 1, pos = 0;
    std::string line_str;
    for (std::sregex_iterator i = std::sregex_iterator(str.begin(), str.end(), r);
      i != std::sregex_iterator();
      ++i) {
      std::smatch m = *i;

      std::string log_str;
      log_str += "val:'";
      std::string token_val = m.str();
      log_str += token_val;
      log_str += "' pos:";
      log_str += std::to_string(pos);
      log_str += " line:";
      log_str += std::to_string(line);
      log_str += " gid: '";

      int index;
      for (auto i = 1; i < m.size(); ++i) if (!m[i].str().empty()) {
        index = i - 1;
        break;
      }
      index /= 2;
      log_str += tokens[index].first + "'";

      parse_res.push_back(Token(
        tokens[index].first,
        token_val,
        pos,
        line,
        filename
      ));

      if (tokens[index].first == "line end") {
        files_lines[filename].push_back(line_str);
        line_str.clear();
        ++line;
        pos = 0;
      } else {
        pos += token_val.size();
        line_str += token_val;
      }
      if (DEBUG) std::cout << log_str << std::endl;
    }
    return parse_res;
  }
};


