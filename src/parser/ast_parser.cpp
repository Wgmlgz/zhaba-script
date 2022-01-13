#include "ast_parser.hpp"

namespace ast {

ASTBlock *parseBlock(tokeniter begin, tokeniter end) {
  std::stack<ASTBlock *> st;
  auto root = new ASTBlock;
  st.emplace(root);
  auto cur = begin;

  int line_n = -1;
  while (true) {
    if (cur == end) break;
    size_t line_offset = 0;
    if (cur->token == TOKEN::space) {
      line_offset = cur->val.size();
      ++cur;
    }
    if (cur == end) break;
    if (cur->token == TOKEN::line_end) {
      ++cur;
      ++line_n;
      continue;
    }
    auto line_begin = cur, line_end = end;
    while (true) {
      if (cur == end) {
        break;
      }
      if (cur->token == TOKEN::new_block) break;
      if (cur->token == TOKEN::next_block) break;
      if (cur->token == TOKEN::fin_block) break;
      if (cur->token == TOKEN::line_end) {
        break;
      }
      ++cur;
    }
    line_end = cur;
    /** cur at new line */
    if (line_n != st.top()->line) {
      while (st.top()->undef_offset ? line_offset <= st.top()->offset
                                    : line_offset < st.top()->offset) {
        st.pop();
      }
      if (st.top()->undef_offset) {
        if (line_offset > st.top()->offset) {
          st.top()->offset = line_offset;
          st.top()->undef_offset = false;
        }
      }
      if (line_offset > st.top()->offset) {
        auto tmp = new ASTBlock(line_offset, false, line_n);
        st.top()->nodes.push_back(tmp);
        st.emplace(tmp);
      }
      if (line_begin != line_end)
        st.top()->nodes.push_back(new ASTLine(line_begin, line_end));
    } else {
      if (line_begin != line_end)
        st.top()->nodes.push_back(new ASTLine(line_begin, line_end));
    }
    if (cur == end) break;
    if (cur->token == TOKEN::new_block) {
      auto tmp = new ASTBlock(st.top()->offset, true, line_n);
      st.top()->nodes.push_back(tmp);
      st.emplace(tmp);
    } else if (cur->token == TOKEN::next_block) {
      auto tmp = new ASTBlock(st.top()->offset, true, line_n);
      tmp->btype = ASTBlock::nextB;
      st.top()->nodes.push_back(tmp);
      st.emplace(tmp);
    } else if (cur->token == TOKEN::fin_block) {
      auto tmp = new ASTBlock(st.top()->offset, true, line_n);
      tmp->btype = ASTBlock::finB;
      st.top()->nodes.push_back(tmp);
      st.emplace(tmp);
    }
    if (cur->token == TOKEN::line_end) {
      ++line_n;
    }
    ++cur;
  }
  return root;
}

ASTBlock *parse(tokeniter begin, tokeniter end) {
  return parseBlock(begin, end);
}

}