#pragma once
#include <set>
#include <utility>

#include "..\Lexer.hpp"
#include "..\OperatorTables.hpp"
#include "Expression.hpp"
#include "..\Lang\Scope.hpp"
#include "..\..\TreeLib/TreePrinterASCII.hpp"

struct ParserError {
  size_t pos = 0;
  size_t end_pos = 0;
  size_t line = 0;
  std::string message;
  ParserError(size_t new_pos, std::string new_message) {
    pos = new_pos;
    message = new_message;
  }
  std::string toString(std::string source_code = "") {
    std::string res;
    res += "line ";
    res += std::to_string(line);
    res += ": ";
    size_t offset = res.size();
    res += source_code;
    res += "\n";
    res += std::string(offset + pos, ' ');
    if (end_pos) res += std::string(end_pos - pos, ' ');
    res += "\n";
    res += "Err: ";
    res += message;
    res += "\n";
    return res;
  }
};
namespace ExpParser {
  TreeNode<std::string>* toGenericTree(Exp* exp) {
    auto node = new TreeNode<std::string>;
    if (auto op = dynamic_cast<FlowOperator*>(exp)) {
      node->data = "'" + op->val + "'";
      node->branches.push_back(toGenericTree(op->operand));
    }
    if (auto op = dynamic_cast<IntLiteral*>(exp)) {
      node->data = "'" + std::to_string(op->val) + "' iL";
    }
    if (auto op = dynamic_cast<StrLiteral*>(exp)) {
      node->data = "'" + op->val + "' sL";
    }
    if (auto op = dynamic_cast<IdLiteral*>(exp)) {
      node->data = "'" + op->val + "' idL,";
    }
    
    if (auto t = dynamic_cast<Tuple*>(exp)) {
      node->data = "tuple";
      for (auto& i : t->content) {
        node->branches.push_back(toGenericTree(i)); 
      }
    }

    if (BinOperator* op = dynamic_cast<BinOperator*>(exp)) {
      node->data = "'" + op->val + "'b" + std::to_string((int)op->priority);
      node->branches.push_back(toGenericTree(op->lhs));
      node->branches.push_back(toGenericTree(op->rhs));
    }
    if (UnaryOperator* op = dynamic_cast<UnaryOperator*>(exp)) {
      node->data = "'" + op->val +
        (dynamic_cast<PrefixOperator*>(op) ? "'pr" : "'po") +
        std::to_string((int)op->priority);
      node->branches.push_back(toGenericTree(op->child));
    }
    node->data += "," + exp->type.toString();
    return node;
  }
  void printGenericTree(Exp* exp) {
    auto tree = toGenericTree(exp);
    std::cout << "ascii:" << std::endl;
    printASCII(tree);
    deleteTree(tree);
  }
  void printExpTree(Exp* exp, std::string prefix = "") {
    auto tree = toGenericTree(exp);
    std::cout << "ascii:" << std::endl;
    printCompact(tree);
    deleteTree(tree);
  }

  std::unordered_map<std::string, bool> settings = {
      {"DEBUG", true}, {"SHOW_TREE", true}, {"SHOW_ERROR", true} };

  const double INF = 1000000000000.0;
  const double priority_offset = 100;
  const double parentheses_offset = 1000000;
  std::unordered_map<std::string, double> bin_operators = tables::bin_operators;
  std::unordered_set<std::string> operators = tables::operators;
  std::unordered_map<std::string, double> prefix_operators = tables::prefix_operators;
  std::unordered_map<std::string, double> postfix_operators = { {"++", 2},
                                                                    {"--", 2} };

  Exp* build_exp(const std::vector<Exp*>::iterator begin,
    const std::vector<Exp*>::iterator end, int depth = 0) {
    if (distance(begin, end) == 0)
      throw ParserError(0, "Unknown error (empty build_exp range)");
    if (auto op = dynamic_cast<FlowOperator*>(*begin)) {
      if (distance(begin, end) != 1) 
        op->operand = build_exp(begin + 1, end);
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

    double max_priority = -INF;
    bool is_bin = false;
    auto pos = end;
    double true_priority = 0;
    for (auto i = begin; i != end; ++i) {
      if (Operator* op = dynamic_cast<Operator*>(*i)) {
        true_priority = op->priority;
        if (i == begin) {
          if (!prefix_operators.count(op->val))
            throw ParserError(op->pos, "Unknown prefix operator");

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
        if (true_priority > max_priority) {
          max_priority = true_priority;
          pos = i;
        }
      }
    }
    if (pos == end) throw ParserError((*begin)->pos, "Expected operator");
    else if (!dynamic_cast<Operator*>(*pos)){
      throw ParserError((*pos)->pos, "Unknown binary operator");
    }
    auto op = static_cast<Operator*>(*pos);
    if (pos == begin) {
      return new PrefixOperator(op->pos, op->val, max_priority,
        build_exp(pos + 1, end, depth + 1));
    } else if (pos == end - 1) {
      return new PostfixOperator(op->pos, op->val, max_priority,
        build_exp(begin, pos, depth + 1));
    } else {
      return new BinOperator(op->pos, op->val, max_priority,
        build_exp(begin, pos, depth + 1),
        build_exp(pos + 1, end, depth + 1));
    }
  }
  std::vector<Exp*> preprocess(std::vector<Token>::iterator begin,
    std::vector<Token>::iterator end) {
    auto res = std::vector<Exp*>{};
    int pcount = 0;

    if (std::distance(begin, end) < 1) {
      throw ParserError(0, "Empty expression");
    }
    if (begin->token == "id" and std::set<std::string>{"?", "#", "@", "??", "$$"}.count(begin->val)) {
      res.push_back(new FlowOperator(begin->pos, begin->val, nullptr));
      ++begin;
    }
    for (auto i = begin; i != end; ++i) {
      if (i->token == "id") if(operators.count(i->val)) i->token = "operator";
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
          res.push_back(new Operator(i->pos, ",", bin_operators[","], 0, i->val.size()));
        }
      } else {
        if (i != begin) if (std::set<std::string>{"p)", "int", "str", "id"}.count((i - 1)->token))
          lhs = true;
        if (lhs and rhs) {
          res.push_back(new Operator(i->pos, ",", bin_operators[","], 0, 0));
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
        double spaces_lhs = 0, spaces_rhs = 0;
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
        throw ParserError((begin + std::distance(begin, end) - 1)->pos,
          "Not enought ')'");
      else
        throw ParserError((begin + std::distance(begin, end) - 1)->pos,
          "Too many ')'");
    }
    return res;
  }

  int calcExp(Exp* exp) {
    if (IntLiteral* op = dynamic_cast<IntLiteral*>(exp)) return op->val;

    if (BinOperator* op = dynamic_cast<BinOperator*>(exp)) {
      int lhs = calcExp(op->lhs);
      int rhs = calcExp(op->rhs);

      if (op->val == "+") return lhs + rhs;
      if (op->val == "-") return lhs - rhs;
      if (op->val == "*") return lhs * rhs;
      if (op->val == "/") return lhs / rhs;
      if (op->val == "%") return lhs % rhs;
      if (op->val == "%%") return (lhs % rhs) == 0;
      if (op->val == "&&") return lhs && rhs;
      if (op->val == "||") return lhs || rhs;
      if (op->val == "==") return lhs == rhs;
    }

    if (UnaryOperator* op = dynamic_cast<UnaryOperator*>(exp)) {
      if (op->val == "++") return calcExp(op->child) + 1;
      if (op->val == "--") return calcExp(op->child) - 1;
      if (op->val == "-") return -calcExp(op->child);
      if (op->val == "!") return !calcExp(op->child);
    }
    return -666;
  }
  template<class... args>
  struct OD {
    std::string val;
    std::tuple<args...> types;
    bool operator< (const OD& od) {
      if (val == od.val) {

      } else {
        return val < od.val;
      }
    }
  };
  std::map<std::tuple<std::string, std::string, std::string>, std::string> B_OD = tables::B_OD;
  std::map<std::tuple<std::string, std::string>, std::string> PR_OD{
    {{"++", "int"}, "int"},
    {{"--", "int"}, "int"},
  };
  std::map<std::tuple<std::string, std::string>, std::string> PO_OD{
    {{"++", "int"}, "int"},
    {{"--", "int"}, "int"},
  };
  enum expected_val {undef, var, id, val};
  Exp* postprocess(Exp* exp, ScopeInfo& scope_info, ScopeInfo& cur_scope, expected_val eval = undef, Type varT = {}){
    if (auto op = dynamic_cast<FlowOperator*>(exp)) {
      exp->type.type = "flow control";
      postprocess(op->operand, scope_info, cur_scope, val);
    }
    if (auto op = dynamic_cast<IntLiteral*>(exp)) {
      exp->type.type = "int";
      exp->type.is_const = true;
    }
    if (auto op = dynamic_cast<StrLiteral*>(exp)) {
      exp->type.type = "str";
      exp->type.is_const = true;
    }
    if (auto op = dynamic_cast<IdLiteral*>(exp)) {
      if (eval == id or eval == undef) {
        exp->type.type = "id";
        exp->type.is_const = true;
      } else if (eval == var) {
        if (scope_info.vars.count(op->val)) {
          exp->type = scope_info.vars[op->val];
          if (exp->type.is_const)
            throw ParserError(0, "Cannot modify const variable");
          if (exp->type.type != varT.type)
            throw ParserError(0, "Type for '=' are different");
        } else {
          exp->type = varT;
          exp->type.is_const = false;
          cur_scope.vars.insert({op->val, exp->type});
          scope_info.vars.insert({op->val, exp->type});
        }
      } else if (eval == val){
        if (scope_info.vars.count(op->val)) {
          exp->type = scope_info.vars[op->val];
        } else throw ParserError(0, "'" + op->val + "' is undefined");
      }
    }

    if (auto op = dynamic_cast<BinOperator*>(exp)) {
      if (op->val == ",") {
        op->lhs = postprocess(op->lhs, scope_info, cur_scope);
        op->rhs = postprocess(op->rhs, scope_info, cur_scope);

        bool b = true;
        if (auto t = dynamic_cast<Tuple*>(op->rhs)) {
          if (t->priority == op->priority) {
            t->content.insert(t->content.begin(), op->lhs);
            t->type.is_const = t->type.is_const and op->lhs->type.is_const;
            delete exp;
            exp = t;
            b = false;
          }
        }
        if (b) {
          auto t = new Tuple;
          t->priority = op->priority;
          t->content = {op->lhs, op->rhs};
          if (op->lhs->type.is_const and op->rhs->type.is_const) {
            t->type.is_const = true;
          }
          delete exp;
          exp = t;
          exp->type.type = "tuple";
        }
      } else if (op->val == "=") {
        op->rhs = postprocess(op->rhs, scope_info, cur_scope, val);
        op->lhs = postprocess(op->lhs, scope_info, cur_scope, var, op->rhs->type);
      } else {
        op->lhs = postprocess(op->lhs, scope_info, cur_scope, val);
        op->rhs = postprocess(op->rhs, scope_info, cur_scope, val);
        if (B_OD.count({op->val, op->lhs->type.type, op->rhs->type.type})) {
          exp->type.type =
              B_OD[{op->val, op->lhs->type.type, op->rhs->type.type}];
        } else
          throw ParserError(
              op->pos, "There is no instance of binary operator '" + op->val +
                           "' for types: " + op->lhs->type.type + ", " +
                           op->rhs->type.type);
        if (op->lhs->type.is_const and op->rhs->type.is_const) {
          exp->type.is_const = true;
        }
      }

      
    }

    if (auto op = dynamic_cast<PostfixOperator*>(exp)) {
      op->child = postprocess(op->child, scope_info, cur_scope, val);
      if (PO_OD.count({ op->val, op->child->type.type })) {
        exp->type.type = PO_OD[{op->val, op->child->type.type}];
        if (op->child->type.is_const) {
          exp->type.is_const = true;
        }
      } else
        throw ParserError(
            op->pos, "There is no instance of postfix operator '" + op->val +
                         "' for type: " + op->child->type.type);
    }

    if (auto op = dynamic_cast<PrefixOperator*>(exp)) {
      op->child = postprocess(op->child, scope_info, cur_scope, val);
      if (PR_OD.count({ op->val, op->child->type.type })) {
        exp->type.type = PR_OD[{op->val, op->child->type.type}];
        if (op->child->type.is_const) {
          exp->type.is_const = true;
        }
      } else
        throw ParserError(op->pos, "There is no instance of prefix operator '" +
                                       op->val +
                                       "' for type: " + op->child->type.type);
    }
    return exp;
  }
  Exp* parse(std::vector<Token>::iterator begin, std::vector<Token>::iterator end, ScopeInfo& scope_info, ScopeInfo& cur_scope) {
    auto exp_res = preprocess(begin, end);
    Exp* exp = build_exp(exp_res.begin(), exp_res.end());
    exp = postprocess(exp, scope_info, cur_scope);
    return exp;
  }
  // int calc(const std::string& str) {
  //   try {
  //     Lexer parser(tables::lexer_tokens);
  //     auto parse_res = parser.parse(str, settings["DEBUG"]);
  //     auto exp_res = preprocess(parse_res.begin(), parse_res.end());

  //     // for (auto exp : exp_res) {
  //     //   if (IntLiteral* op = dynamic_cast<IntLiteral*>(exp)) {
  //     //     std::cout << "'" + std::to_string(op->val) + "' int";
  //     //   }

  //     //   if (BinOperator* op = dynamic_cast<BinOperator*>(exp)) {
  //     //     std::cout << "'" + op->val + "' bin " + std::to_string((int)op->priority);
  //     //   }
  //     //   if (UnaryOperator* op = dynamic_cast<UnaryOperator*>(exp)) {
  //     //     std::cout << "'" + op->val +
  //     //       (dynamic_cast<PrefixOperator*>(op) ? "' pref " : "' post ") +
  //     //       std::to_string((int)op->priority);
  //     //   }
  //     // }
  //     // std::cout << std::endl;
  //     Exp* exp = build_exp(exp_res.begin(), exp_res.end());
  //     exp = postprocess(exp, );
  //     if (settings["SHOW_TREE"]) printExpTree(exp);
  //     if (settings["SHOW_COOL_TREE"]) printGenericTree(exp);

  //     return calcExp(exp);
  //   }
  //   catch (ParserError error) {
  //     std::cout << str << std::endl;
  //     std::cout << std::string(error.pos, ' ') << "^" << std::endl;
  //     std::cout << error.message << std::endl;
  //   }
  //   return -1;
  // }
};