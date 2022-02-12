#include "expression_parser.hpp"

namespace zhexp {
/**
 * @brief Converts expression to expression tree
 */
Exp *buildExp(const std::vector<Exp *>::iterator begin,
              const std::vector<Exp *>::iterator end, int depth) {
  if (distance(begin, end) == 0)
    throw ParserError(0, "Unknown error (empty buildExp range)");
  if (auto op = dynamic_cast<CCode *>(*begin)) {
    return op;
  }
  if (auto op = dynamic_cast<FlowOperator *>(*begin)) {
    if (begin + 1 < end)
      op->operand = buildExp(begin + 1, end);
    return op;
  }
  if (distance(begin, end) == 1) {
    if (auto op = dynamic_cast<Literal *>(*begin)) return op;
    else if (auto op = dynamic_cast<Tuple *>(*begin)) return op;
    else throw ParserError((*begin)->begin, "Expected literal");
  }

  int64_t max_priority = -zhdata.INF, true_priority = 0;
  bool is_bin = false;
  auto pos = end;

  for (auto i = begin; i != end; ++i) {
    if (Operator *op = dynamic_cast<Operator *>(*i)) {
      true_priority = op->priority;
      if (i == begin) {
        if (!zhdata.prefix_operators.contains(op->val) and !zhdata.functions.contains(op->val))
          throw ParserError(op->begin, "Unknown prefix operator '" + op->val + "'");
        if (zhdata.USE_SPACES_OFFSET) true_priority += 2 * op->spr * zhdata.priority_offset;
        true_priority += zhdata.prefix_operators[op->val];
      } else if (i == end - 1) {
        if (!zhdata.postfix_operators.contains(op->val))
          throw ParserError(op->begin, "Unknown postfix operator");

        if (zhdata.USE_SPACES_OFFSET) true_priority += 2 * op->spl * zhdata.priority_offset;
        true_priority += zhdata.postfix_operators[op->val];
      } else {
        if (zhdata.bin_operators.contains(op->val)) {
          if (zhdata.USE_SPACES_OFFSET) true_priority += (op->spl + op->spr) * zhdata.priority_offset;
          true_priority += zhdata.bin_operators[op->val];
        } else {
          true_priority = -zhdata.INF;
        }
      }
      if (op->val == "=" ?
          true_priority > max_priority :
          true_priority >= max_priority
          ) {
        max_priority = true_priority;
        pos = i;
      }
    }
  }
  if (zhdata.flags["exp_parser_logs"]) {
    for (auto i = begin; i != end; ++i) {
      std::cout << (*i)->toString() << ",";
    }
    std::cout << "\n";
  }
  if (pos == end) {
    throw ParserError((*begin)->begin, "Expected operator");
  } else if (!dynamic_cast<Operator *>(*pos)) {
    throw ParserError((*pos)->begin, "Unknown binary operator");
  }
  auto op = static_cast<Operator *>(*pos);
  if (pos == begin) {
    return new PrefixOperator(op->begin, op->end, op->val, max_priority,
                              buildExp(pos + 1, end, depth + 1));
  } else if (pos == end - 1) {
    return new PostfixOperator(op->begin, op->end, op->val, max_priority,
                               buildExp(begin, pos, depth + 1));
  } else {
    return new BinOperator(op->begin, op->end, op->val, max_priority,
                           buildExp(begin, pos, depth + 1),
                           buildExp(pos + 1, end, depth + 1));
  }
}

std::vector<Exp *> preprocess(tokeniter begin, tokeniter end, const ScopeInfo &scope) {
  auto res = std::vector<Exp *>{};
  int pcount = 0;

  if (std::distance(begin, end) < 1) {
    throw ParserError(0, "Empty expression");
  }


  /** C++ code injection */
  if (begin->token == TOKEN::id and begin->val == "#") {
    std::string code;
    for (auto i = begin + 1; i != end; ++i) {
      code += i->val;
    }
    return {new CCode(*begin, *begin, code)};
  }

  if (begin->token == TOKEN::id and zhdata.flow_ops.count(begin->val)) {
    res.push_back(new FlowOperator(*begin, *begin, begin->val, nullptr));
    ++begin;
  }

  /** Find which tokens are operators */
  for (auto i = begin; i != end; ++i) {
    if (i->token == TOKEN::id) {
      if (zhdata.operators.count(i->val)) {
        i->token = TOKEN::op;
      } else if (zhdata.functions.count(i->val)) {
        auto next = i + 1;
        if (next == end) continue;
        if (next->token == TOKEN::open_p) {
          i->token = TOKEN::op;
        }
      }
    }
  }

  for (auto i = begin; i != end; ++i) {
    if (i == begin) {
      if (i->token == TOKEN::space) continue;
    }
    if (i + 1 == end) {
      if (i->token == TOKEN::space) continue;
    }

    try {
      auto pos = i->pos;
      auto type = types::parse(i, scope);
      res.push_back(new TypeLiteral(*i, *i, type));
      --i;
      continue;
    } catch (const types::TypeParsingError& err) {}

    bool lhs = false, rhs = false;
    if (i->token == TOKEN::space) {
      if (i != begin)
        if (std::set{TOKEN::close_p, TOKEN::int_literal, TOKEN::str_literal, TOKEN::id}.count((i - 1)->token))
          lhs = true;
      if (i + 1 != end)
        if (std::set{TOKEN::open_p, TOKEN::int_literal, TOKEN::str_literal, TOKEN::id}.count((i + 1)->token))
          rhs = true;
      if (lhs and rhs) {
        res.push_back(new Operator(*i, *i, ",", -zhdata.parentheses_offset * pcount, 0, i->val.size()));
      }
    } else {
      if (i != begin)
        if (std::set{TOKEN::close_p, TOKEN::int_literal, TOKEN::str_literal, TOKEN::id}.count((i - 1)->token))
          lhs = true;
      if (lhs and rhs) {
        res.push_back(new Operator(*i, *i, ",", -zhdata.parentheses_offset * pcount, 0, 0));
      }
      if (zhdata.operators.count(i->val)) rhs = false;
    }

    if (i->token == TOKEN::open_p) {
      if (!res.empty())
        if (auto type_literal = dynamic_cast<TypeLiteral *>(res.back())) {
          auto type_name = type_literal->literal_type.toString();
          auto op = new Operator(*i, *i, type_name,
                                 -zhdata.parentheses_offset * pcount, 0, 0);
          res.pop_back();
          res.push_back(op);
        }
      ++pcount;
    } else if (i->token == TOKEN::close_p) {
      --pcount;
      /** () parse and push empty tuple */
      if (i != begin and (i - 1)->token == TOKEN::open_p) {
        res.push_back(new Tuple(*i, *i));
      }
    }
    if (pcount < 0) throw ParserError(i->pos, "Too many ')'");
    int bpriority = -zhdata.parentheses_offset * pcount;

    if (i->token == TOKEN::op) {
      /* Get spaces */
      int64_t spaces_lhs = 0, spaces_rhs = 0;
      if (i != begin) {
        if ((i - 1)->token == TOKEN::space) spaces_lhs = (i - 1)->val.size();
      } else {
        spaces_lhs = zhdata.INF;
      }
      if (i != end - 1) {
        if ((i + 1)->token == TOKEN::space) spaces_rhs = (i + 1)->val.size();
      } else {
        spaces_rhs = zhdata.INF;
      }
      /** Member call */
      if (i->val == "." and
          i != end - 1 and
          i != end - 2 and
          ((i + 1)->token == TOKEN::id or (i + 1)->token == TOKEN::op) and
          (i + 2)->token == TOKEN::open_p
          ) {
        ++i;
        res.push_back(new Operator(*i, *i, ".call." + i->val, bpriority, spaces_lhs, spaces_rhs));
      } else {
        res.push_back(new Operator(*i, *i, i->val, bpriority, spaces_lhs, spaces_rhs));
      }
    } else if (i->token == TOKEN::int_literal) {
      int base = 10;
      auto str = i->val;
      if (std::regex_match(i->val, std::regex("0x.+"))) {
        base = 16;
        str = str.substr(2, str.size() - 2);
      } else if (std::regex_match(i->val, std::regex("0b.+"))) {
        base = 2;
        str = str.substr(2, str.size() - 2);
      }

      if (std::regex_match(str, std::regex("true|tru")))
        res.push_back(new BoolLiteral(*i, *i, true));
      else if (std::regex_match(str, std::regex("false|fls")))
        res.push_back(new BoolLiteral(*i, *i, false));

      else if (std::regex_match(str, std::regex(".+i8")))
        res.push_back(new I8Literal(
            *i, *i, std::stoll(str.substr(0, str.size() - 2), 0, base)));
      else if (std::regex_match(str, std::regex(".+i16")))
        res.push_back(new I16Literal(
            *i, *i, std::stoll(str.substr(0, str.size() - 3), 0, base)));
      else if (std::regex_match(str, std::regex(".+i32")))
        res.push_back(new I32Literal(
            *i, *i, std::stoll(str.substr(0, str.size() - 3), 0, base)));
      else if (std::regex_match(str, std::regex(".+i64")))
        res.push_back(new I64Literal(
            *i, *i, std::stoll(str.substr(0, str.size() - 3), 0, base)));

      else if (std::regex_match(str, std::regex(".+u8")))
        res.push_back(new U8Literal(
            *i, *i, std::stoull(str.substr(0, str.size() - 2), 0, base)));
      else if (std::regex_match(str, std::regex(".+u16")))
        res.push_back(new U16Literal(
            *i, *i, std::stoull(str.substr(0, str.size() - 3), 0, base)));
      else if (std::regex_match(str, std::regex(".+u32")))
        res.push_back(new U32Literal(
            *i, *i, std::stoull(str.substr(0, str.size() - 3), 0, base)));
      else if (std::regex_match(str, std::regex(".+u64")))
        res.push_back(new U64Literal(
            *i, *i, std::stoull(str.substr(0, str.size() - 3), 0, base)));
      else if (std::regex_match(str, std::regex(".+i")))
        res.push_back(new I64Literal(*i, *i, std::stoll(str, 0, base)));
      else if (std::regex_match(str, std::regex(".+u")))
        res.push_back(new U64Literal(*i, *i, std::stoll(str, 0, base)));
      else if (std::regex_match(str, std::regex(".+")))
        res.push_back(new I64Literal(*i, *i, std::stoll(str, 0, base)));
      else
        throw ParserError(*i, "Wrong int literal");
    } else if (i->token == TOKEN::str_literal) {
      bool do_escape = true;
      auto str = i->val;
      if (str[0] == '`') do_escape = false;
      str = str.substr(1, i->val.size() - 2);
      /** Apply escape sequences */
      if (do_escape) {
        str = std::regex_replace(str, std::regex(R"(\\')"), "\'");
        str = std::regex_replace(str, std::regex(R"(\\")"), "\"");
        str = std::regex_replace(str, std::regex(R"(\\\\)"), "\\");
        str = std::regex_replace(str, std::regex(R"(\\b)"), "\b");
        str = std::regex_replace(str, std::regex(R"(\\n)"), "\n");
        str = std::regex_replace(str, std::regex(R"(\\t)"), "\t");
        str = std::regex_replace(str, std::regex(R"(\\0)"), "\0");
      }
      res.push_back(new StrLiteral(*i, *i, str));
    } else if (i->token == TOKEN::id) {
      res.push_back(new IdLiteral(*i, *i, i->val));
    }
  }
  if (pcount) {
    if (pcount > 0)
      throw ParserError((end - 1)->pos,
                        "Not enought ')'");
    else
      throw ParserError((end - 1)->pos,
                        "Too many ')'");
  }
  return res;
}

Exp *postprocess(Exp *exp, ScopeInfo &scope_info, ScopeInfo *block_scope) {
  if (auto op = dynamic_cast<CCode *>(exp)) {
    return op;
  }
  if (auto op = dynamic_cast<FlowOperator *>(exp)) {
    exp->type = types::Type(types::TYPE::voidT);
    if (op->operand) op->operand = postprocess(op->operand, scope_info, block_scope);
  } else if (auto op = dynamic_cast<I8Literal *>(exp)) {
    exp->type = types::Type(types::TYPE::i8T);
  } else if (auto op = dynamic_cast<I16Literal *>(exp)) {
    exp->type = types::Type(types::TYPE::i16T);
  } else if (auto op = dynamic_cast<I32Literal *>(exp)) {
    exp->type = types::Type(types::TYPE::i32T);
  } else if (auto op = dynamic_cast<I64Literal *>(exp)) {
    exp->type = types::Type(types::TYPE::i64T);
  } else if (auto op = dynamic_cast<U8Literal *>(exp)) {
    exp->type = types::Type(types::TYPE::u8T);
  } else if (auto op = dynamic_cast<U16Literal *>(exp)) {
    exp->type = types::Type(types::TYPE::u16T);
  } else if (auto op = dynamic_cast<U32Literal *>(exp)) {
    exp->type = types::Type(types::TYPE::u32T);
  } else if (auto op = dynamic_cast<U64Literal *>(exp)) {
    exp->type = types::Type(types::TYPE::u64T);
  } else if (auto op = dynamic_cast<BoolLiteral *>(exp)) {
    exp->type = types::Type(types::TYPE::boolT);
  } else if (auto op = dynamic_cast<CharLiteral *>(exp)) {
    exp->type = types::Type(types::TYPE::charT);
  } else if (auto op = dynamic_cast<StrLiteral *>(exp)) {
    exp->type = types::Type(types::TYPE::strT);
  } else if (auto id = dynamic_cast<IdLiteral *>(exp)) {
    if (scope_info.vars.count(id->val)) {
      auto tmp =
          new Variable(id->begin, id->end, id->val, scope_info.vars[id->val]);
      tmp->type = scope_info.vars[id->val];
      exp = tmp;
    } else
      throw ParserError(id->begin, id->end, "Unknown variable '" + id->val + "'");
  } else if (auto op = dynamic_cast<BinOperator *>(exp)) {
    if (op->val == ",") {
      op->lhs = postprocess(op->lhs, scope_info, block_scope);
      op->rhs = postprocess(op->rhs, scope_info, block_scope);

      bool b = true;
      if (auto t = dynamic_cast<Tuple *>(op->lhs)) {
        if (t->priority == op->priority) {
          t->content.insert(t->content.end(), op->rhs);
          exp = t;
          b = false;
        }
      }
      if (b) {
        auto t = new Tuple(op->begin, op->end);
        t->priority = op->priority;
        t->content = {op->lhs, op->rhs};
        exp = t;
        exp->type = types::Type(types::TYPE::voidT);
      }
    }
      /** Regular assignment */
    else if (op->val == "=") {
      op->lhs = postprocess(op->lhs, scope_info, block_scope);
      op->rhs = postprocess(op->rhs, scope_info, block_scope);

      auto lhs = op->lhs->type.rvalClone();
      auto rhs = op->rhs->type.rvalClone();
      lhs.setRef(false);
      if (lhs <=> rhs != 0) {
        throw ParserError(op->begin, op->end, "Types (" +
            op->lhs->type.toString() + " " +
            op->rhs->type.toString() +
            ") for '=' are different");
      }

      if (op->lhs->type.getLval()) {
        op->type = types::Type(types::TYPE::voidT);
      } else {
        throw ParserError(op->lhs->begin, op->end, "Left operant for '=' must be lval");
      }
    }
      /** Variable creation & assingment */
    else if (op->val == ":=") {
      op->rhs = postprocess(op->rhs, scope_info, block_scope);
      if (auto id_l = dynamic_cast<IdLiteral *>(op->lhs)) {
        if (op->rhs->type.getTypeId() == types::TYPE::voidT)
          throw ParserError(op->begin, op->rhs->end, "Variable type cannot be void");

        scope_info.vars[id_l->val] = op->rhs->type;
        scope_info.vars[id_l->val].setLval(true);

        if (block_scope) {
          block_scope->vars[id_l->val] = op->rhs->type;
          block_scope->vars[id_l->val].setLval(true);
        }

        auto tmp = new Variable(op->lhs->begin, op->lhs->end, id_l->val,
                                scope_info.vars[id_l->val]);
        tmp->type = scope_info.vars[id_l->val];
        op->lhs = tmp;
        op->val = "=";
        op->type = types::Type(types::TYPE::voidT);
      } else {
        throw ParserError(op->lhs->begin, op->lhs->end, "Expected id literal");
      }
    }
      /** Member access */
    else if (op->val == ".") {
      op->lhs = postprocess(op->lhs, scope_info, block_scope);
      if (auto id = dynamic_cast<IdLiteral *>(op->rhs)) {
        if (op->lhs->type.getTypeId() >=
            static_cast<types::TYPE>(zhdata.first_struct_id)) {
          if (zhdata.structs[op->lhs->type.getTypeId()].members.count(
              id->val)) {
            if (op->lhs->type.getPtr() > 1) {
              throw ParserError(
                  op->begin, op->end,
                  "Can't use member access with 2 or more pointer modifiers (" +
                      std::to_string(op->lhs->type.getPtr()) + " found)"
              );
            }
            op->type = zhdata.structs[op->lhs->type.getTypeId()].members[id->val];
            op->type.setLval(op->lhs->type.getLval());
          } else {
            throw ParserError(
                op->begin,
                op->end,
                "Type '" + op->lhs->type.toString() + "' doesn't have '" + id->val + "' member"
            );
          }
        } else {
          throw ParserError(
              op->begin, op->end, "Expression type can't be '" + op->lhs->type.toString() + "'"
          );
        }
      } else {
        throw ParserError(
            op->begin, op->end,
            "Expected identifier near '.', but (" +
                op->toString() + ") found"
        );
      }
    }
      /** Type cast */
    else if (op->val == "as") {
      op->lhs = postprocess(op->lhs, scope_info, block_scope);
      if (auto type_l = dynamic_cast<TypeLiteral *>(op->rhs)) {
        op->type = type_l->literal_type;
        op->type.setLval(op->lhs->type.getLval());
      } else {
        throw ParserError(
            op->begin, op->rhs->end,
            "Expected type literal, but '" + op->rhs->toString() + "' found"
        );
      }
    } else {
      op->lhs = postprocess(op->lhs, scope_info, block_scope);
      op->rhs = postprocess(op->rhs, scope_info, block_scope);

      /**
       * Pointer arithmetic
       * ptr + x(i64)
       * x(i64) + ptr
       * ptr - x(i64)
       */
      if ((op->val == "+" &&
          ((op->lhs->type.getPtr() &&
              op->rhs->type.getTypeId() == types::TYPE::i64T) ||
              (op->rhs->type.getPtr() &&
                  op->lhs->type.getTypeId() == types::TYPE::i64T))) or
          (op->val == "-" && op->lhs->type.getPtr() &&
              op->rhs->type.getTypeId() == types::TYPE::i64T)) {
        if (op->rhs->type.getPtr()) std::swap(op->rhs, op->lhs);
        auto orig_type = op->lhs->type;
        auto int_type = types::Type(types::TYPE::i64T);
        op->lhs =
            new BinOperator(op->begin, op->end, "as", 0, op->lhs,
                            new TypeLiteral(op->begin, op->end, int_type));
        op->lhs->type = int_type;

        auto int_literal =
            new I64Literal(op->begin, op->end, orig_type.getSizeNonRef());
        int_literal->type = int_type;
        auto t = new BinOperator(
            op->begin, op->end, "*", 0, op->rhs, int_literal
        );
        t->func = zhdata.B_OD[{"*", {int_type, int_type}}];
        t->type = int_type;
        op->rhs = t;
        op->func = zhdata.B_OD[{op->val, {int_type, int_type}}];
        op->type = int_type;
        op = new BinOperator(op->begin, op->end, "as", 0, op,
                             new TypeLiteral(op->begin, op->end, orig_type));
        op->type = orig_type;
        exp = op;
      } else if ((op->val == "==" || op->val == "!=" || op->val == "<=" ||
          op->val == ">=" || op->val == "<" || op->val == ">") &&
          (op->lhs->type.getPtr() && op->rhs->type.getPtr())) {
        auto int_type = types::Type(types::TYPE::i64T);
        auto bool_type = types::Type(types::TYPE::boolT);
        op->lhs =
            new BinOperator(op->begin, op->end, "as", 0, op->lhs,
                            new TypeLiteral(op->begin, op->end, int_type));
        op->lhs->type = int_type;
        op->rhs =
            new BinOperator(op->begin, op->end, "as", 0, op->rhs,
                            new TypeLiteral(op->begin, op->end, int_type));
        op->rhs->type = int_type;
        op->func = zhdata.B_OD.at({op->val, {int_type, int_type}});
        op->type = bool_type;
      } else {
        /** Member call */
        if (op->val.size() >= 6 and op->val.substr(0, 6) == ".call.") {
          if (op->lhs->type.getPtr() == 0) {
            if (!op->lhs->type.getLval()) {
              throw ParserError("For now only lval member call");
            }
            auto ltype = op->lhs->type;
            op->lhs = new PrefixOperator(op->begin, op->end, "&", 3, op->lhs);
            op->lhs->type = ltype;
            op->lhs->type.setLval(false);
            op->lhs->type.setPtr(1);
          }
        }

        std::vector<types::Type> types;
        types.push_back(op->lhs->type);
        types.back().setLval(false);
        if (auto tuple = dynamic_cast<Tuple *>(op->rhs)) {
          for (auto exp : tuple->content) {
            types.push_back(exp->type);
          }
        } else {
          types.push_back(op->rhs->type);
        }

        for (auto &i : types) i.setLval(false);
        for (auto &i : types) i.setRef(false);

        types::funcHead func_head{op->val, types};
        if (zhdata.B_OD.count(func_head)) {
          op->func = zhdata.B_OD[func_head];
          exp->type = zhdata.B_OD[func_head]->type;
        } else {
          throw ParserError(op->begin, op->end,
                            "There is no instance of binary operator '" +
                                op->val +
                                "' for types: " + op->lhs->type.toString() +
                                ", " + op->rhs->type.toString());
        }
      }
    }
  } else if (auto op = dynamic_cast<PostfixOperator *>(exp)) {
    op->child = postprocess(op->child, scope_info, block_scope);
    std::vector<types::Type> types;
    if (auto tuple = dynamic_cast<Tuple *>(op->child)) {
      for (auto exp : tuple->content) {
        types.push_back(exp->type);
      }
    } else {
      types.push_back(op->child->type);
    }

    for (auto &i : types) i.setLval(false);
    for (auto &i : types) i.setRef(false);

    types::funcHead func_head{op->val, types};
    if (zhdata.PO_OD.count(func_head)) {
      op->func = zhdata.PO_OD[func_head];
      exp->type = zhdata.PO_OD[func_head]->type;
    } else
      throw ParserError(
          op->begin, op->end, "There is no instance of postfix operator '" + op->val +
              "' for type: " + op->child->type.toString());
  } else if (auto op = dynamic_cast<PrefixOperator *>(exp)) {
    op->child = postprocess(op->child, scope_info, block_scope);

    if (op->val == "&") {
      if (!op->child->type.getLval())
        throw ParserError(op->begin, op->end, "Cannot get ptr of rval");
      exp->type = op->child->type;
      exp->type.setPtr(op->child->type.getPtr() + 1);
      exp->type.setLval(false);

      return exp;
    } else if (op->val == "*" && op->child->type.getPtr()) {
      exp->type = op->child->type;
      exp->type.setPtr(op->child->type.getPtr() - 1);
      exp->type.setLval(true);

      return exp;
    } else if (op->val == "sizeof") {
      size_t size = 0;
      if (auto type = dynamic_cast<TypeLiteral *>(op->child)) {
        size = type->literal_type.getSize();
      } else {
        size = op->child->type.getSize();
      }
      auto int_l = new I64Literal(op->begin, op->child->end, size);
      exp = int_l;
      exp = postprocess(exp, scope_info, block_scope);
      return exp;
    }

    std::vector<types::Type> types;
    if (auto tuple = dynamic_cast<Tuple *>(op->child)) {
      for (auto exp : tuple->content) {
        types.push_back(exp->type);
      }
    } else {
      types.push_back(op->child->type);
    }

    for (auto &i : types) i.setLval(false);
    for (auto &i : types) i.setRef(false);

    types::funcHead func_head{op->val, types};
    if (zhdata.PR_OD.contains(func_head)) {
      op->func = zhdata.PR_OD[func_head];
      exp->type = zhdata.PR_OD[func_head]->type;
    } else if (zhdata.FN_OD.contains(func_head)) {
      op->func = zhdata.FN_OD[func_head];
      exp->type = zhdata.FN_OD[func_head]->type;
    } else {
      std::string types_str;
      for (auto &i : types) {
        types_str += i.toString() + " ";
      }
      throw ParserError(op->begin, op->end, "There is no instance of prefix operator '" +
          op->val +
          "' for types: " + types_str);
    }
  } else if (auto op = dynamic_cast<Tuple *>(exp)) {
    for (auto &i : op->content) {
      i = postprocess(i, scope_info, block_scope);
    }
  }
  return exp;
}

Exp *parse(std::vector<Token>::iterator begin,
           std::vector<Token>::iterator end, ScopeInfo &scope_info,
           ScopeInfo *block_scope) {
  auto exp_res = preprocess(begin, end, scope_info);
  Exp *exp = buildExp(exp_res.begin(), exp_res.end());
  if (zhdata.flags["exp_parser_logs"]) zhexp::printExpTree(exp);
  exp = postprocess(exp, scope_info, block_scope);
  if (zhdata.flags["exp_parser_logs"]) zhexp::printExpTree(exp);
  return exp;
}
};