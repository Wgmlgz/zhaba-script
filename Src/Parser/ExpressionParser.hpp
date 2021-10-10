#pragma once
#include <set>
#include <utility>

#include "ParserError.hpp"
#include "Lexer.hpp"
#include "../Lang/Lang.hpp"
#include "../TreeLib/TreeLib.hpp"

namespace zhexp {
  std::unordered_map<std::string, bool> settings = {
      {"DEBUG", true}, {"SHOW_TREE", true}, {"SHOW_ERROR", true}
  };

  const int64_t INF = 1000000000000.0;
  const int64_t priority_offset = 100;
  const int64_t parentheses_offset = 1000000;

  std::unordered_set<std::string> flow_ops                   = tables::flow_ops;
  std::unordered_map<std::string, int64_t> bin_operators     = tables::bin_operators;
  std::unordered_set<std::string> operators                  = tables::operators;
  std::unordered_map<std::string, int64_t> prefix_operators  = tables::prefix_operators;
  std::unordered_map<std::string, int64_t> postfix_operators = tables::postfix_operators;

  /**
   * @brief Converts expression to expression tree
   */
  Exp* buildExp(const std::vector<Exp*>::iterator begin,
    const std::vector<Exp*>::iterator end, int depth = 0) {
    if (distance(begin, end) == 0)
      throw ParserError(0, "Unknown error (empty buildExp range)");
    if (auto op = dynamic_cast<CppCode*>(*begin)) {
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
      else
        throw ParserError(op->pos, "Expected int literal");
    }

    int64_t max_priority = -INF, true_priority = 0;
    bool is_bin = false;
    auto pos = end;

    for (auto i = begin; i != end; ++i) {
      if (Operator* op = dynamic_cast<Operator*>(*i)) {
        true_priority = op->priority;
        if (i == begin) {
          if (!prefix_operators.count(op->val))
            throw ParserError(op->pos, "Unknown prefix operator '" + op->val + "'");

          true_priority +=
            2 * op->spr * priority_offset + prefix_operators[op->val];
        } else if (i == end - 1) {
          if (!postfix_operators.count(op->val))
            throw ParserError(op->pos, "Unknown postfix operator");

          true_priority +=
            2 * op->spl * priority_offset + postfix_operators[op->val];
        } else {
          if (bin_operators.count(op->val)) {
            true_priority +=
              (op->spl + op->spr) * priority_offset + bin_operators[op->val];
          } else {
            true_priority = -INF;
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

    if (pos == end) {
      throw ParserError((*begin)->pos, "Expected operator");
    } else if (!dynamic_cast<Operator*>(*pos)) {
      throw ParserError((*pos)->pos, "Unknown binary operator");
    }
    auto op = static_cast<Operator*>(*pos);
    if (pos == begin) {
      return new PrefixOperator(op->pos, op->val, max_priority,
        buildExp(pos + 1, end, depth + 1));
    } else if (pos == end - 1) {
      return new PostfixOperator(op->pos, op->val, max_priority,
        buildExp(begin, pos, depth + 1));
    } else {
      return new BinOperator(op->pos, op->val, max_priority,
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
    /* cpp code injection */
    if (begin->token == "id" and begin->val == "#") {
      std::string code;
      for (auto i = begin + 1; i != end; ++i) {
        code += i->val;
      }
      return {new CppCode(code)};
    }
    if (begin->token == "id" and flow_ops.count(begin->val)) {
      res.push_back(new FlowOperator(begin->pos, begin->val, nullptr));
      ++begin;
    }
    for (auto i = begin; i != end; ++i) {
      if (i->token == "id") if (operators.count(i->val)) i->token = "operator";
    }
    for (auto i = begin; i != end; ++i) {
      if (i == begin) {
        if (i->token == "space") continue;
      }
      if (i + 1 == end) {
        if (i->token == "space") continue;
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
          res.push_back(new Operator(i->pos, ",", -parentheses_offset * pcount, 0, i->val.size()));
        }
      } else {
        if (i != begin) if (std::set<std::string>{"p)", "int", "str", "id"}.count((i - 1)->token))
          lhs = true;
        if (lhs and rhs) {
          res.push_back(new Operator(i->pos, ",", -parentheses_offset * pcount, 0, 0));
        }
        if (operators.count(i->val)) rhs = false;
      }

      if (i->token == "p(") {
        ++pcount;
      } else if (i->token == "p)") {
        --pcount;
      }
      if (pcount < 0) throw ParserError(i->pos, "Too many ')'");
      int bpriority = -parentheses_offset * pcount;

      if (i->token == "operator") {
        // get spaces
        int64_t spaces_lhs = 0, spaces_rhs = 0;
        if (i != begin) {
          if ((i - 1)->token == "space") spaces_lhs = (i - 1)->val.size();
        } else {
          spaces_lhs = INF;
        }
        if (i != end - 1) {
          if ((i + 1)->token == "space") spaces_rhs = (i + 1)->val.size();
        } else {
          spaces_rhs = INF;
        }
        res.push_back(new Operator(i->pos, i->val, bpriority, spaces_lhs, spaces_rhs));
      } else if (i->token == "int") {
        res.push_back(new IntLiteral(i->pos, std::stoll(i->val)));
      } else if (i->token == "str") {
        res.push_back(new StrLiteral(i->pos, i->val.substr(1, i->val.size() - 2)));
      } else if (i->token == "id") {
        res.push_back(new IdLiteral(i->pos, i->val));
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

  std::map<std::tuple<std::string, types::Type, types::Type>, types::Type> B_OD;
  std::map<std::pair<std::string, std::vector<types::Type>>, types::Type> PR_OD;
  std::map<std::pair<std::string, std::vector<types::Type>>, types::Type> PO_OD;

  types::Type parseType(Exp* exp, ScopeInfo& scope_info) {
    if (auto id = dynamic_cast<IdLiteral*>(exp)) {
      if (types::prim_types.count(id->val)) {
        return types::Type(types::prim_types[id->val]);
      } else {
        throw ParserError(exp->pos, id->val.size(), "Unknown type");
      }
    } else {
      throw ParserError(exp->pos, "Expected type name");
    }
  }

  std::string parseName(Exp* exp) {
    if (auto id = dynamic_cast<IdLiteral*>(exp)) {
      return id->val;
    } else {
      throw ParserError(0, "Expected name");
    }
  }

  Exp* postprocess(Exp* exp, ScopeInfo& scope_info) {
    if (auto op = dynamic_cast<CppCode*>(exp)) {
      return op;
    }
    if (auto op = dynamic_cast<FlowOperator*>(exp)) {
      exp->type = types::Type(types::TYPE::voidT);
      if (op->operand) op->operand = postprocess(op->operand, scope_info);
    }
    if (auto op = dynamic_cast<IntLiteral*>(exp)) {
      exp->type = types::Type(types::TYPE::intT);
      // exp->type.is_const = true;
    }
    if (auto op = dynamic_cast<StrLiteral*>(exp)) {
      exp->type = types::Type(types::TYPE::strT);
      // exp->type.is_const = true;
    }
    if (auto op = dynamic_cast<IdLiteral*>(exp)) {
      if (scope_info.vars.count(op->val)) {
        auto tmp = new Variable;
        tmp->name = op->val;
        tmp->type = scope_info.vars[op->val];
        exp = tmp;
        // exp->type = scope_info.vars[op->val];
        
        // exp = reinterpret_cast<Variable*>(exp);
      }
      else
        throw ParserError(op->pos, "Unknown variable '" + op->val + "'");
    }

    if (auto op = dynamic_cast<BinOperator*>(exp)) {
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
          auto t = new Tuple;
          t->priority = op->priority;
          t->content = { op->lhs, op->rhs };
          exp = t;
          exp->type = types::Type(types::TYPE::voidT);
        }
      } else if (op->val == "=") {
        op->lhs = postprocess(op->lhs, scope_info);
        op->rhs = postprocess(op->rhs, scope_info);

        if (op->lhs->type.getTypeId() != op->rhs->type.getTypeId()) {
          throw ParserError(op->pos, "Types (" +
            op->lhs->type.toString() + " " +
            op->rhs->type.toString() +
          ") for '=' are different");
        }

        if (op->lhs->type.isLval()) {
          op->type = op->lhs->type;
        } else {
          throw ParserError(op->lhs->pos, op->pos - op->lhs->pos, "Left operant for '=' must be lval");
        }
      } else if (op->val == ".") {
        op->lhs = postprocess(op->lhs, scope_info);
        if (auto id = dynamic_cast<IdLiteral*>(op->rhs)) {
          if (static_cast<int>(op->lhs->type.getTypeId()) >= types::first_struct_id) {
            if (types::structs[static_cast<int>(op->lhs->type.getTypeId())].members.count(id->val)) {
              op->type = types::structs[static_cast<int>(op->lhs->type.getTypeId())].members[id->val];
              op->type.setLval(op->lhs->type.isLval());
            } else {
              throw ParserError(op->pos, "Type '" + op->lhs->type.toString() + "' doesn't have '" + id->val + "' member");
            }
          } else {
            throw ParserError(op->pos, "Expression type can't be '" + op->lhs->type.toString() + "'");
          }
        } else {
          throw ParserError(op->pos, "Expected identifier near '" + op->val + "'");
        }
      } else {
        op->lhs = postprocess(op->lhs, scope_info);
        op->rhs = postprocess(op->rhs, scope_info);
        
        /** Implicit lval to rval conversion */
        op->lhs->type.setLval(false);
        op->rhs->type.setLval(false);
        
        if (B_OD.count({ op->val, op->lhs->type, op->rhs->type})) {
          exp->type =
            B_OD[{op->val, op->lhs->type, op->rhs->type}];
        } else {
          throw ParserError(
            op->pos, "There is no instance of binary operator '" + op->val +
            "' for types: " + op->lhs->type.toString() + ", " +
            op->rhs->type.toString());
        }
      }
    }

    if (auto op = dynamic_cast<PostfixOperator*>(exp)) {
      op->child = postprocess(op->child, scope_info);
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
      
      if (PO_OD.count({ op->val, types })) {
        exp->type = PO_OD[{op->val,types}];
      } else
        throw ParserError(
          op->pos, "There is no instance of postfix operator '" + op->val +
          "' for type: " + op->child->type.toString());
    }

    if (auto op = dynamic_cast<PrefixOperator*>(exp)) {
      op->child = postprocess(op->child, scope_info);
      // zhexp::printExpTree(op->child);
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

      if (PR_OD.count({ op->val, types })) {
        exp->type = PR_OD[{op->val, types}];
      } else {
        std::string types_str;
        for (auto& i : types) {
          types_str += i.toString() + " ";
        }
        throw ParserError(op->pos, "There is no instance of prefix operator '" +
          op->val +
          "' for types: " + types_str);
      }
    }
    return exp;
  }

  Exp* parse(std::vector<Token>::iterator begin, std::vector<Token>::iterator end, ScopeInfo& scope_info) {
    auto exp_res = preprocess(begin, end);
    Exp* exp = buildExp(exp_res.begin(), exp_res.end());
    zhexp::printExpTree(exp);

    exp = postprocess(exp, scope_info);
    // printExpTree(exp);
    return exp;
  }
};