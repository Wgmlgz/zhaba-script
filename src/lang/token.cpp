#include "token.hpp"

Token::Token(const TOKEN &new_token, std::string new_type,
             size_t new_pos, size_t new_line, const std::string &new_filename)
    : orig_token(new_token),
      token(new_token),
      val(std::move(new_type)),
      pos(new_pos),
      line(new_line),
      filename(new_filename) {}

void Token::reset() { token = orig_token; }
