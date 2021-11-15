#pragma once
#include <set>
#include <utility>

#include "ParserError.hpp"
#include "Lexer.hpp"
#include "../Lang/Lang.hpp"
#include "../TreeLib/TreeLib.hpp"

namespace zhexp {
  /**
   * @brief Converts expression to expression tree
   */
  Exp* buildExp(const std::vector<Exp*>::iterator begin,
    const std::vector<Exp*>::iterator end, int depth = 0) {
    if (distance(begin, end) == 0)
      throw ParserError(0, "Unknown error (empty buildExp range)");
    if (auto op = dynamic_cast<CCode*>(*begin)) {
      return op;
    }
    if (auto op = dynamic_cast<FlowOperator*>(*begin)) {
      if (begin + 1 < end)
        op->operand = buildExp(begin + 1, end);
      return op;
    }
    if (distance(begin, end) == 1) {
      if (auto op = dynamic_cast<IntLiteral*>(*begin))
        return op;
      else if (auto op = dynamic_cast<StrLiteral*>(*begin))
        return op;
      else if (auto op = dynamic_cast<IdLiteral*>(*begin))
        return op;
      else if (auto op = dynamic_cast<TypeLiteral*>(*begin))
        return op;
      else if (auto op = dynamic_cast<Tuple*>(*begin))
        return op;
      else
        throw ParserError((*begin)->begin, "Expected literal");
    }

    int64_t max_priority = -zhdata.INF, true_priority = 0;
    bool is_bin = false;
    auto pos = end;

    for (auto i = begin; i != end; ++i) {
      if (Operator* op = dynamic_cast<Operator*>(*i)) {
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
    if (zhdata.bools["exp_parser_logs"]) {
      for (auto i = begin; i != end; ++i) {
        std::cout << (*i)->toString() << ",";
      }
      std::cout << "\n";
    }
    if (pos == end) {
      throw ParserError((*begin)->begin, "Expected operator");
    } else if (!dynamic_cast<Operator*>(*pos)) {
      throw ParserError((*pos)->begin, "Unknown binary operator");
    }
    auto op = static_cast<Operator*>(*pos);
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

  std::vector<Exp*> preprocess(tokeniter begin, tokeniter end) {
    auto res = std::vector<Exp*>{};
    int pcount = 0;

    if (std::distance(begin, end) < 1) {
      throw ParserError(0, "Empty expression");
    }


    /** C++ code injection */
    if (begin->token == "id" and begin->val == "#") {
      std::string code;
      for (auto i = begin + 1; i != end; ++i) {
        code += i->val;
      }
      return {new CCode(*begin, *begin, code)};
    }
   
    if (begin->token == "id" and zhdata.flow_ops.count(begin->val)) {
      res.push_back(new FlowOperator(*begin, *begin, begin->val, nullptr));
      ++begin;
    }
    
    /** Find which tokens are operators */
    for (auto i = begin; i != end; ++i) {
      if (i->token == "id") {
        if (zhdata.operators.count(i->val)) {
          i->token = "operator";
        } else if (zhdata.functions.count(i->val)) {
          auto next = i + 1;
          if (next == end) continue;
          if (next->token == "p(") {
            i->token = "operator";
          }
        }
      }
    }

    for (auto i = begin; i != end; ++i) {
      if (i == begin) {
        if (i->token == "space") continue;
      }
      if (i + 1 == end) {
        if (i->token == "space") continue;
      }

      try {
        auto pos = i->pos;
        auto type = types::parse(i);
        res.push_back(new TypeLiteral(*i, *i, type));
        --i;
        continue;
      } catch (std::runtime_error err) {
      }

      bool lhs = false, rhs = false;
      if (i->token == "space") {
        if (i != begin)
          if (std::set<std::string>{"p)", "int", "str", "id"}.count((i - 1)->token))
            lhs = true;
        if (i + 1 != end)
          if (std::set<std::string>{"p(", "int", "str", "id"}.count((i + 1)->token))
            rhs = true;
        if (lhs and rhs) {
          res.push_back(new Operator(*i, *i, ",", -zhdata.parentheses_offset * pcount, 0, i->val.size()));
        }
      } else {
        if (i != begin) if (std::set<std::string>{"p)", "int", "str", "id"}.count((i - 1)->token))
          lhs = true;
        if (lhs and rhs) {
          res.push_back(new Operator(*i, *i, ",", -zhdata.parentheses_offset * pcount, 0, 0));
        }
        if (zhdata.operators.count(i->val)) rhs = false;
      }

      if (i->token == "p(") {
        ++pcount;
      } else if (i->token == "p)") {
        --pcount;
        /** () parse and push empty tuple */
        if (i != begin and (i-1)->token == "p(") {
          res.push_back(new Tuple(*i, *i));
        }
      }
      if (pcount < 0) throw ParserError(i->pos, "Too many ')'");
      int bpriority = -zhdata.parentheses_offset * pcount;

      if (i->token == "operator") {
        /* Get spaces */
        int64_t spaces_lhs = 0, spaces_rhs = 0;
        if (i != begin) {
          if ((i - 1)->token == "space") spaces_lhs = (i - 1)->val.size();
        } else {
          spaces_lhs = zhdata.INF;
        }
        if (i != end - 1) {
          if ((i + 1)->token == "space") spaces_rhs = (i + 1)->val.size();
        } else {
          spaces_rhs = zhdata.INF;
        }
        /** Member call */
        if (i->val == "." and
          i != end - 1 and
          i != end - 2 and
          (i + 1)->token == "id" and
          (i + 2)->token == "p("
        ) {
          ++i;
          res.push_back(new Operator(*i, *i, ".call." + i->val, bpriority, spaces_lhs, spaces_rhs));
        } else {
          res.push_back(new Operator(*i, *i, i->val, bpriority, spaces_lhs, spaces_rhs));
        }
      } else if (i->token == "int") {
        res.push_back(new IntLiteral(*i, *i, std::stoll(i->val)));
      } else if (i->token == "str") {
        res.push_back(new StrLiteral(*i, *i, i->val.substr(1, i->val.size() - 2)));
      } else if (i->token == "id") {
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

  // std::string parseName(Exp* exp) {
  //   if (auto id = dynamic_cast<IdLiteral*>(exp)) {
  //     return id->val;
  //   } else {
  //     throw ParserError(0, "Expected name");
  //   }
  // }

  Exp* postprocess(Exp* exp, ScopeInfo& scope_info) {
    if (auto op = dynamic_cast<CCode*>(exp)) {
      return op;
    }
    if (auto op = dynamic_cast<FlowOperator*>(exp)) {
      exp->type = types::Type(types::TYPE::voidT);
      if (op->operand) op->operand = postprocess(op->operand, scope_info);
    } else if (auto op = dynamic_cast<IntLiteral*>(exp)) {
      exp->type = types::Type(types::TYPE::i64T);
    } else if (auto op = dynamic_cast<StrLiteral*>(exp)) {
      exp->type = types::Type(types::TYPE::strT);
    } else if (auto op = dynamic_cast<IdLiteral*>(exp)) {
      if (scope_info.vars.count(op->val)) {
        auto tmp = new Variable(op->begin, op->end);
        tmp->name = op->val;
        tmp->type = scope_info.vars[op->val];
        exp = tmp;
      }
      else
        throw ParserError(op->begin, op->end, "Unknown variable '" + op->val + "'");
    } else if (auto op = dynamic_cast<BinOperator*>(exp)) {
      if (op->val == ",") {
        op->lhs = postprocess(op->lhs, scope_info);
        op->rhs = postprocess(op->rhs, scope_info);

        bool b = true;
        if (auto t = dynamic_cast<Tuple*>(op->lhs)) {
          if (t->priority == op->priority) {
            t->content.insert(t->content.end(), op->rhs);
            exp = t;
            b = false;
          }
        }
        if (b) {
          auto t = new Tuple(op->begin, op->end);
          t->priority = op->priority;
          t->content = { op->lhs, op->rhs };
          exp = t;
          exp->type = types::Type(types::TYPE::voidT);
        }
      } else if (op->val == "=") {
        op->lhs = postprocess(op->lhs, scope_info);
        op->rhs = postprocess(op->rhs, scope_info);

        if (op->lhs->type.rvalClone() <=> op->rhs->type.rvalClone() != 0) {
          throw ParserError(op->begin, op->end, "Types (" +
            op->lhs->type.toString() + " " +
            op->rhs->type.toString() +
          ") for '=' are different");
        }

        if (op->lhs->type.getLval()) {
          op->type = op->lhs->type;
        } else {
          throw ParserError(op->lhs->begin, op->end, "Left operant for '=' must be lval");
        }
      }
      /** Member acces */
      else if (op->val == ".") {
        op->lhs = postprocess(op->lhs, scope_info);
        if (auto id = dynamic_cast<IdLiteral*>(op->rhs)) {
          if (static_cast<int>(op->lhs->type.getTypeId()) >= types::first_struct_id) {
            if (types::structs[static_cast<int>(op->lhs->type.getTypeId())].members.count(id->val)) {
              if (op->lhs->type.getPtr() > 1) {
                throw ParserError(op->begin, op->end,
                  "Can't use member access with 2 or more pointer modifiers (" +
                  std::to_string(op->lhs->type.getPtr()) + " found)");
              }
              op->type = types::structs[static_cast<int>(op->lhs->type.getTypeId())].members[id->val];
              op->type.setLval(op->lhs->type.getLval());
            } else {
              throw ParserError(op->begin, op->end, "Type '" + op->lhs->type.toString() + "' doesn't have '" + id->val + "' member");
            }
          } else {
            throw ParserError(op->begin, op->end, "Expression type can't be '" + op->lhs->type.toString() + "'");
          }
        } else {
          throw ParserError(op->begin, op->end, "Expected identifier near '.");
        }
      } else if (op->val == "as") {
        op->lhs = postprocess(op->lhs, scope_info);
        if (auto type_l = dynamic_cast<TypeLiteral*>(op->rhs)) {
          op->type = type_l->literal_type;
          op->type.setLval(op->lhs->type.getLval());
        } else {
          throw ParserError(op->begin, op->end, "Expected type literal");
        }
      } else {
        op->lhs = postprocess(op->lhs, scope_info);
        op->rhs = postprocess(op->rhs, scope_info);
        
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

        op->lhs->type.setLval(false);
        op->rhs->type.setLval(false);
        
        std::vector<types::Type> types;
        types.push_back(op->lhs->type);
        types.back().setLval(false);
        if (auto tuple = dynamic_cast<Tuple*>(op->rhs)) {
          for (auto exp : tuple->content) {
            types.push_back(exp->type);
            types.back().setLval(false);
          }
        } else {
          types.push_back(op->rhs->type);
          types.back().setLval(false);
        }

        types::funcHead func_head{op->val, types};
        if (zhdata.B_OD.count(func_head)) {
          op->func_head = &zhdata.B_OD.find(func_head)->first;
          exp->type = zhdata.B_OD[func_head];
        } else {
          throw ParserError(
            op->begin, op->end, "There is no instance of binary operator '" + op->val +
            "' for types: " + op->lhs->type.toString() + ", " +
            op->rhs->type.toString());
        }
      }
    } else if (auto op = dynamic_cast<PostfixOperator*>(exp)) {
      op->child = postprocess(op->child, scope_info);
      std::vector<types::Type> types;
      if (auto tuple = dynamic_cast<Tuple*>(op->child)) {
        for (auto exp : tuple->content) {
          types.push_back(exp->type);
        }
      } else {
        types.push_back(op->child->type);
      }

      /** Implicit lval to rval conversion */
      for (auto& i : types) i.setLval(false);

      types::funcHead func_head{op->val, types};
      if (zhdata.PO_OD.count(func_head)) {
        op->func_head = &zhdata.PO_OD.find(func_head)->first;
        exp->type = zhdata.PO_OD[func_head];
      } else
        throw ParserError(
          op->begin, op->end, "There is no instance of postfix operator '" + op->val +
          "' for type: " + op->child->type.toString());
    } else if (auto op = dynamic_cast<PrefixOperator*>(exp)) {
      op->child = postprocess(op->child, scope_info);
      
      if (op->val == "&") {
        if (!op->child->type.getLval())
          throw ParserError(op->begin, op->end, "Cannot get ptr of rval");
        exp->type = op->child->type;
        exp->type.setPtr(op->child->type.getPtr() + 1);
        exp->type.setLval(false);
        
        return exp;
      } else if (op->val == "*") {
        if (op->child->type.getPtr() == 0)
          throw ParserError(op->begin, op->end, "Cannot dereference non ptr");
        exp->type = op->child->type;
        exp->type.setPtr(op->child->type.getPtr() - 1);
        exp->type.setLval(true);
        
        return exp;
      }
      
      std::vector<types::Type> types;
      if (auto tuple = dynamic_cast<Tuple*>(op->child)) {
        for (auto exp : tuple->content) {
          types.push_back(exp->type);
        }
      } else {
        types.push_back(op->child->type);
      }

      /* implicit lval to rval conversion */
      for (auto& i : types) i.setLval(false);

      types::funcHead func_head{op->val, types};
      if (zhdata.PR_OD.contains(func_head)) {
        op->func_head = &zhdata.PR_OD.find(func_head)->first;
        exp->type = zhdata.PR_OD[func_head];
      } else if (zhdata.FN_OD.contains(func_head)) {
        op->func_head = &zhdata.FN_OD.find(func_head)->first;
        exp->type = zhdata.FN_OD[func_head];
      } else {
        std::string types_str;
        for (auto& i : types) {
          types_str += i.toString() + " ";
        }
        throw ParserError(op->begin, op->end, "There is no instance of prefix operator '" +
          op->val +
          "' for types: " + types_str);
      }
    }
    return exp;
  }

  Exp* parse(std::vector<Token>::iterator begin, std::vector<Token>::iterator end, ScopeInfo& scope_info) {
    auto exp_res = preprocess(begin, end);
    Exp* exp = buildExp(exp_res.begin(), exp_res.end());
    if (zhdata.bools["exp_parser_logs"]) zhexp::printExpTree(exp);
    exp = postprocess(exp, scope_info);
    if (zhdata.bools["exp_parser_logs"]) zhexp::printExpTree(exp);
    return exp;
  }
};