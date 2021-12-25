#pragma once

#include <string>
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