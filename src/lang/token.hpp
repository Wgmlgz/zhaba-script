#pragma once

#include <string>
#include <vector>
#include "../core/core.hpp"

using json = nlohmann::json;

enum class TOKEN {
  comment_block,
  comment_line,
  line_end,
  space,
  
  str_literal,
  int_literal,
  id,
  open_p,
  close_p,


  new_block,
  next_block,
  fin_block,
  block_end,
  statement_end,
};

struct Token {
  const TOKEN orig_token;
  TOKEN token;
  const std::string val, &filename;
  const size_t pos, line;

  Token(const TOKEN& new_token, std::string  new_type, size_t new_pos,
        size_t new_line, const std::string& new_filename);

  void reset();
  std::string toString();
};

void to_json(json& j, const Token& token);

typedef std::vector<Token>::iterator tokeniter;