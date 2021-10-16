#pragma once
#include "../Lang/Lang.hpp"
#include "ParserError.hpp"

namespace ast {
ASTBlock* parseBlock(tokeniter begin, tokeniter end) {
  std::stack<ASTBlock*> st;
  auto root = new ASTBlock;
  st.emplace(root);
  auto cur = begin;

  int line_n = -1;
  for (;;) {
    if (cur == end) break;
    size_t line_offset = 0;
    if (cur->token == "space") {
      line_offset = cur->val.size();
      ++cur;
    }
    if (cur == end) break;
    if (cur->token == "line end") {
      ++cur;
      ++line_n;
      continue;
    }
    tokeniter line_begin = cur, line_end = end;
    bool exit = false;
    for (;;) {
      if (cur == end) {
        exit = true;
        break;
      }
      if (cur->token == "new block") break;
      if (cur->token == "next block") break;
      if (cur->token == "fin block") break;
      if (cur->token == "line end") {
        break;
      }
      ++cur;
    }
    line_end = cur;
    // cur at new line
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
    if (cur->token == "new block") {
      auto tmp = new ASTBlock(st.top()->offset, true, line_n);
      st.top()->nodes.push_back(tmp);
      st.emplace(tmp);
    } else if (cur->token == "next block") {
      auto tmp = new ASTBlock(st.top()->offset, true, line_n);
      tmp->btype = ASTBlock::nextB;
      st.top()->nodes.push_back(tmp);
      st.emplace(tmp);
    } else if (cur->token == "fin block") {
      auto tmp = new ASTBlock(st.top()->offset, true, line_n);
      tmp->btype = ASTBlock::finB;
      st.top()->nodes.push_back(tmp);
      st.emplace(tmp);
    }
    if (cur->token == "line end") {
      ++line_n;
    }
    ++cur;
  }
  return root;
}

ASTBlock* parse(tokeniter begin, tokeniter end) {
  int line = 1;
  ParserError::which_line.clear();
  ParserError::lines.clear();
  ParserError::lines.resize(1);

  for (auto i = begin; i != end; ++i) {
    ParserError::which_line[i->pos] = line;
    if (i->token == "line end")
      ++line, ParserError::lines.push_back("");
    else
      ParserError::lines[line - 1] += i->val;
  }

  return parseBlock(begin, end);
}
}