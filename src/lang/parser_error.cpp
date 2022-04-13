#include "parser_error.hpp"

#include "../libs/termcolor.hpp"

ParserError::ParserError(size_t new_pos, size_t new_len,
                         std::string new_message) {
  // pos = new_pos;
  len = new_len;
  message = std::move(new_message);
}
ParserError::ParserError(size_t new_pos, std::string new_message) {
  // pos = new_pos;
  message = std::move(new_message);
}
ParserError::ParserError(const Token &token, const std::string &new_message) {
  pos = token.pos;
  len = token.val.size();
  message = new_message;
  line = token.line;
  filename = token.filename;
}
ParserError::ParserError(const Token &begin, const Token &end,
                         const std::string &new_message) {
  pos = begin.pos;
  len = end.pos + end.val.size() - begin.pos;
  message = new_message;
  line = begin.line;
  filename = begin.filename;
}
ParserError::ParserError(const std::string &new_message) {
  pos = 0;
  len = 1;
  message = new_message;
}
const char *ParserError::what() {
  std::string res;

  if (pos < 0) {
    res += "Err:\n";
    res += message;
    res += "\n";
  } else {
    /**
     * error :( -> /file/name.zh:42:6
     * 42 | fn error
     *    |    ^^^^^
     *    | Error message
     */
    std::string source = "cannot show source code";
    std::cout << filename << " " << line << std::endl;
    if (line != -1) source = zhdata.files_lines.at(filename)[line];
    auto line_str = std::to_string(line);
    auto pos_str = std::to_string(pos);
    res += "error :( -> " + filename + ':' + line_str + ':' + pos_str + '\n';
    res += line_str + " | " + source + '\n';
    auto head_line = std::string(line_str.size(), ' ') + " | ";
    res += head_line + std::string(pos, ' ') +
           std::string(std::max<int>(len, 1), '^') + "\n" + head_line;
    for (auto i : message) {
      if (i == '\n')
        res += "\n" + head_line;
      else
        res += i;
    }
    res += "\n";
  }
  char *buf = new char[res.length() + 1];
  strcpy(buf, res.c_str());
  return buf;
}
void ParserError::print() {
  if (pos < 0) {
    std::cout << "Err:\n";
    std::cout << message;
    std::cout << "\n";
  } else {
    /**
     * error :( -> /file/name.zh:42:6
     * 42 | fn error
     *    |    ^^^^^
     *    | Error message
     */
    std::string source = "cannot show source code";
    if (line != -1) source = zhdata.files_lines.at(filename)[line];
    auto line_str = std::to_string(line);
    auto pos_str = std::to_string(pos);
    std::cout << termcolor::red << "error " << termcolor::reset << ":("
              << termcolor::blue << " -> " << termcolor::reset
              << filename + ':' + line_str + ':' + pos_str + '\n';
    std::cout << termcolor::blue << line_str + " | " << termcolor::bright_white
              << source << termcolor::reset << '\n';
    auto head_line = std::string(line_str.size(), ' ') + " | ";
    std::cout << termcolor::blue << head_line << termcolor::reset
              << std::string(pos, ' ') << termcolor::grey
              << std::string(std::max<int>(len, 1), '^') << termcolor::reset
              << "\n"
              << termcolor::blue << head_line;
    for (auto i : message) {
      if (i == '\n') {
        std::cout << termcolor::blue << "\n" << head_line;
      } else {
        std::cout << termcolor::red << i;
      }
    }
    std::cout << termcolor::reset << "\n";
  }
}
