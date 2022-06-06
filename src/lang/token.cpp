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
std::string Token::toString() {
  return filename + ':' + std::to_string(line) + ':' + std::to_string(pos);
}

void to_json(json& j, const Token& token) {
  j["token"] = token.token;
  j["val"] = token.val;
  j["filename"] = token.filename;
  j["pos"] = token.pos;
  j["line"] = token.line;
}
