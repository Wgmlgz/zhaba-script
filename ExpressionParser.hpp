#pragma once
#include "Lexer.hpp"
#include <set>
#include "TreeLib/TreePrinterASCII.hpp"

struct Exp {
  int pos;
  Exp(int new_pos = 0) { pos = new_pos; }
  virtual ~Exp() {}
};
struct IntLiteral : public Exp {
  int val;
  IntLiteral(int new_pos, int new_val) {
    pos = new_pos;
    val = new_val;
  }
};
struct Operator : public Exp {
  std::string val;
  double priority;
  size_t spl = 0, spr = 0;
  Operator() {}
  Operator(int new_pos, std::string new_val, double new_priority,
    size_t new_spl, size_t new_spr) {
    pos = new_pos;
    val = new_val;
    priority = new_priority;
    spl = new_spl;
    spr = new_spr;
  }
};
struct BinOperator : public Operator {
  Exp* lhs;
  Exp* rhs;
  BinOperator(int new_pos, std::string new_val, double new_priority,
    Exp* new_lhs, Exp* new_rhs) {
    pos = new_pos;
    val = new_val;
    priority = new_priority;
    lhs = new_lhs;
    rhs = new_rhs;
  }
};
struct UnaryOperator : public Operator {
  Exp* child;
  UnaryOperator(int new_pos, std::string new_val, double new_priority,
    Exp* new_child) {
    pos = new_pos;
    val = new_val;
    priority = new_priority;
    child = new_child;
  }
};
struct PrefixOperator : public UnaryOperator {
  PrefixOperator(int new_pos, std::string new_val, double new_priority,
    Exp* new_child)
    : UnaryOperator(new_pos, new_val, new_priority, new_child) {}
};
struct PostfixOperator : public UnaryOperator {
  PostfixOperator(int new_pos, std::string new_val, double new_priority,
    Exp* new_child)
    : UnaryOperator(new_pos, new_val, new_priority, new_child) {}
};
struct Tuple : public Exp {
  std::vector<Exp*> content;
};
class ExpParser {
  struct ExpParserError {
    size_t pos;
    std::string message;
    ExpParserError(size_t new_pos, std::string new_message) {
      pos = new_pos;
      message = new_message;
    }
  };

  TreeNode<std::string>* toGenericTree(Exp* exp) {
    auto node = new TreeNode<std::string>;
    if (IntLiteral* op = dynamic_cast<IntLiteral*>(exp)) {
      node->data = "'" + std::to_string(op->val) + "' int";
    }

    if (BinOperator* op = dynamic_cast<BinOperator*>(exp)) {
      node->data = "'" + op->val + "' bin " + std::to_string((int)op->priority);
      node->branches.push_back(toGenericTree(op->lhs));
      node->branches.push_back(toGenericTree(op->rhs));
    }
    if (UnaryOperator* op = dynamic_cast<UnaryOperator*>(exp)) {
      node->data = "'" + op->val +
        (dynamic_cast<PrefixOperator*>(op) ? "' pref " : "' post ") +
        std::to_string((int)op->priority);
      node->branches.push_back(toGenericTree(op->child));
    }
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

public:
  std::unordered_map<std::string, bool> settings = {
      {"DEBUG", true}, {"SHOW_TREE", true}, {"SHOW_ERROR", true} };

private:
  const double INF = 1000000000000.0;
  const double priority_offset = 100;
  const double parentheses_offset = 1000000;
  std::unordered_map<std::string, double> bin_operators = {
      {"::", 1},   {".", 2},   {"->", 2},  {"*", 5},   {"/", 5},   {"%", 5},
      {"%%", 5},   {"+", 6},   {"-", 6},   {"<<", 7},  {">>", 7},  {"<=>", 8},
      {"<", 9},    {"<=", 9},  {">", 9},   {">=", 9},  {"==", 10}, {"!=", 10},
      {"&", 11},   {"^", 12},  {"|", 13},  {"&&", 14}, {"||", 15}, {"=", 16},
      {"+=", 16},  {"-=", 16}, {"*=", 16}, {"/=", 16}, {"%=", 16}, {"<<=", 16},
      {">>=", 16}, {"&=", 16}, {"^=", 16}, {"|=", 16}, {",", 17} };
  std::unordered_set<std::string> operators = {
      "::", ".",  "->", "*",  "/",  "%",   "%%",  "+",  "-",  "<<", ">>", "<=>",
      "<",  "<=", ">",  ">=", "==", "!=",  "&",   "^",  "|",  "&&", "||", "=",
      "+=", "-=", "*=", "/=", "%=", "<<=", ">>=", "&=", "^=", "|=", ",", "++", "--", "?" };
  std::unordered_map<std::string, double> prefix_operators = {
      {"?", 18},
      {"++", 3}, {"--", 3}, {"!", 3}, {"~", 3}, {"*", 3},  {"-", 3} };
  std::unordered_map<std::string, double> postfix_operators = { {"++", 2},
                                                                    {"--", 2} };

  Exp* build_exp(const std::vector<Exp*>::iterator begin,
    const std::vector<Exp*>::iterator end, int depth = 0) {
    if (distance(begin, end) == 0)
      throw ExpParserError(0, "Unknown error (empty build_exp range)");

    if (distance(begin, end) == 1) {
      if (IntLiteral* op = dynamic_cast<IntLiteral*>(*begin))
        return op;
      else
        throw ExpParserError(op->pos, "Expected int literal");
    }

    double max_priority = -INF;
    bool is_bin = false;
    auto pos = end;
    int true_priority = 0;
    for (auto i = begin; i != end; ++i) {
      if (Operator* op = dynamic_cast<Operator*>(*i)) {
        true_priority = op->priority;
        if (i == begin) {
          if (!prefix_operators.count(op->val))
            throw ExpParserError(op->pos, "Unknown prefix operator");

          true_priority +=
            2 * op->spr * priority_offset + prefix_operators[op->val];
        } else if (i == end - 1) {
          if (!postfix_operators.count(op->val))
            throw ExpParserError(op->pos, "Unknown postfix operator");

          true_priority +=
            2 * op->spl * priority_offset + postfix_operators[op->val];
        } else {
          if (!bin_operators.count(op->val))
            throw ExpParserError(op->pos, "Unknown binary operator");

          true_priority += (op->spl + op->spr) * priority_offset +
            bin_operators[op->val];
        }
        if (true_priority > max_priority) {
          max_priority = true_priority;
          pos = i;
        }
      }
    }
    if (pos == end) throw ExpParserError((*begin)->pos, "Expected operator");
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
  std::vector<Exp*> evaluate(const std::vector<Token>::iterator begin,
    const std::vector<Token>::iterator end) {
    auto res = std::vector<Exp*>{};
    int pcount = 0;

    for (auto i = begin; i != end; ++i) {
      if (i == begin) {
        if (i->token == "space") continue;
      }
      if (i + 1 == end) {
        if (i->token == "space") continue;
      }
      bool lhs = false, rhs = false;
      if (i->token == "space") {
        if (i != begin) if (std::set<std::string>{"p)", "int"}.count((i - 1)->token))
          lhs = true;
        if (i + 1 != end) if (std::set<std::string>{"p(", "int"}.count((i + 1)->token))
          rhs = true;
      } else {
        if (i != begin) if (std::set<std::string>{"p)", "int"}.count((i - 1)->token))
          lhs = true;
        // if (std::set<std::string>{"p(", "int", "id"}.count(i->token))
        //   rhs = true;
        if (operators.count(i->val)) rhs = false;
      }
      if (lhs and rhs) {
        res.push_back(new Operator(i->pos, ",", bin_operators[","], 0, 0));
      }
      if (i->token == "p(") {
        ++pcount;
      } else if (i->token == "p)") {
        --pcount;
      }
      if (pcount < 0) throw ExpParserError(i->pos, "Too many ')'");
      int bpriority = -parentheses_offset * pcount;

      if (i->token == "id" and operators.count(i->val)) {
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
        res.push_back(new IntLiteral(i->pos, stoi(i->val)));
      }
    }
    if (pcount) {
      if (pcount > 0)
        throw ExpParserError((begin + std::distance(begin, end) - 1)->pos,
          "Not enought ')'");
      else
        throw ExpParserError((begin + std::distance(begin, end) - 1)->pos,
          "Too many ')'");
    }
    return res;
  }

  int calc_exp(Exp* exp) {
    if (IntLiteral* op = dynamic_cast<IntLiteral*>(exp)) return op->val;

    if (BinOperator* op = dynamic_cast<BinOperator*>(exp)) {
      int lhs = calc_exp(op->lhs);
      int rhs = calc_exp(op->rhs);

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
      if (op->val == "++") return calc_exp(op->child) + 1;
      if (op->val == "++") return calc_exp(op->child) - 1;
      if (op->val == "--") return calc_exp(op->child) - 1;
      if (op->val == "-") return -calc_exp(op->child);
      if (op->val == "!") return !calc_exp(op->child);
    }
    return -666;
  }

public:
  int calc(const std::string& str) {
    try {
      Lexer parser({
          {"int", R"(([0-9]+))"},
          {"space", R"((\ +))"},
          {"id", R"(([_a-zA-Z][_a-zA-Z0-9]+|[\.\+\-\*\\\%\<\>\=\^\&\|\/\!\#\$\@\?]+))"},
          {"block decl", R"((\:))"},
          {"line end", R"((\n))"},
          {"p(", R"((\())"},
          {"p)", R"((\)))"},
        });
      auto parse_res = parser.parse(str, settings["DEBUG"]);
      auto exp_res = evaluate(parse_res.begin(), parse_res.end());

      for (auto exp : exp_res) {
        if (IntLiteral* op = dynamic_cast<IntLiteral*>(exp)) {
          std::cout << "'" + std::to_string(op->val) + "' int";
        }

        if (BinOperator* op = dynamic_cast<BinOperator*>(exp)) {
          std::cout << "'" + op->val + "' bin " + std::to_string((int)op->priority);
        }
        if (UnaryOperator* op = dynamic_cast<UnaryOperator*>(exp)) {
          std::cout << "'" + op->val +
            (dynamic_cast<PrefixOperator*>(op) ? "' pref " : "' post ") +
            std::to_string((int)op->priority);
        }
      }
      Exp* exp = build_exp(exp_res.begin(), exp_res.end());
      if (settings["SHOW_TREE"]) printExpTree(exp);
      if (settings["SHOW_COOL_TREE"]) printGenericTree(exp);

      return calc_exp(exp);
    }
    catch (ExpParserError error) {
      std::cout << str << std::endl;
      std::cout << std::string(error.pos, ' ') << "^" << std::endl;
      std::cout << error.message << std::endl;
    }
    return -1;
  }
};
