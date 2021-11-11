#pragma once
#include <unordered_map>
#include <vector>
#include <string>

struct ParserError {
  // static std::unordered_map<int, int> which_line;
  // static std::vector<std::string> lines;
  int pos = 0;
  int len = 0;
  std::string filename = "unknown file";
  std::string message;
  int line = -1;
  ParserError(size_t new_pos, size_t new_len, std::string new_message) {
    // pos = new_pos;
    len = new_len;
    message = new_message;
  }
  ParserError(size_t new_pos, std::string new_message) {
    // pos = new_pos;
    message = new_message;
  }
  ParserError(const Token& token, const std::string& new_message) {
    pos = token.pos;
    len = token.val.size();
    message = new_message;
    line = token.line;
    filename = token.filename;
  }
  ParserError(const Token& begin, const Token& end, const std::string& new_message) {
    pos = begin.pos;
    len = end.pos + end.val.size() - begin.pos;
    message = new_message;
    line = begin.line;
    filename = begin.filename;
  }
  ParserError(const std::string& new_message) {
    pos = 0;
    len = 1;
    message = new_message;
  }
  std::string toString() {
    std::string res;

    if (pos < 0) {
      res += "Err:\n";
      res += message;
      res += "\n";
      return res;
    }

    /**
     * error :( -> /file/name.zh:42:6
     * 42 | fn errror
     *    |    ^^^^^ Error message
     */
    std::string source = "cannot show source code";
    if (line != -1) source = zhdata.files_lines[filename][line - 1];
    auto sline = std::to_string(line);
    auto spos = std::to_string(pos);
    res += "error :( -> " + filename + ':' + sline + ':' + spos + '\n';
    res += sline + " | " + source + '\n';
    res += std::string(sline.size(), ' ') + " | " + 
           std::string(pos, ' ') + std::string(std::max<int>(len, 1), '^') + " " +
           message + "\n";
    return res;
  }
};
