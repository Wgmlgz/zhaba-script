#include "TokenParser.h"

class ExpParser {
  struct ExpParserError {
    size_t pos;
    std::string message;
    ExpParserError(size_t new_pos, std::string new_message) {
      pos = new_pos;
      message = new_message;
    }
  };
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
  struct BinOperator : public Exp {
    std::string val;
    Exp* lhs;
    Exp* rhs;
    double priority;
    BinOperator(int new_pos, std::string new_val, double new_priority,
                Exp* new_lhs, Exp* new_rhs) {
      pos = new_pos;
      val = new_val;
      priority = new_priority;
      lhs = new_lhs;
      rhs = new_rhs;
    }
  };
  struct UnaryOperator : public Exp {
    std::string val;
    Exp* child;
    int priority;
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

  void printExpTree(Exp* exp, std::string prefix = "") {
    if (IntLiteral* op = dynamic_cast<IntLiteral*>(exp)) {
      std::cout << op->val << " <- int";
      std::cout << std::endl;
    }

    if (BinOperator* op = dynamic_cast<BinOperator*>(exp)) {
      std::cout << op->val << " <- bin op " << op->priority << std::endl;
      std::cout << prefix + "|__";
      printExpTree(op->lhs, prefix + "|  ");
      std::cout << prefix + "|__";
      printExpTree(op->rhs, prefix + "   ");
    }
    if (UnaryOperator* op = dynamic_cast<UnaryOperator*>(exp)) {
      std::cout << op->val << " <- un op" << op->priority << std::endl;
      std::cout << prefix + "|_";
      printExpTree(op->child, prefix + "| ");
    }
  }

 public:
  std::unordered_map<std::string, bool> settings = {
      {"DEBUG", true}, {"SHOW_TREE", true}, {"SHOW_ERROR", true}};

 private:
  const double INF = 1000 * 1000 * 1000;
  const double priority_offset = 100;

  std::unordered_map<std::string, double> bin_priority_table = {
      {"::", 1},  {".", 2},   {"->", 2},  {"*", 5},   {"/", 5},    {"%", 5},
      {"+", 6},   {"-", 6},   {"<<", 7},  {">>", 7},  {"<=>", 8},  {"<", 9},
      {"<=", 9},  {">", 9},   {">=", 9},  {"==", 10}, {"!=", 10},  {"&", 11},
      {"^", 12},  {"|", 13},  {"&&", 14}, {"||", 15}, {"=", 16},   {"+=", 16},
      {"-=", 16}, {"*=", 16}, {"/=", 16}, {"%=", 16}, {"<<=", 16}, {">>=", 16},
      {"&=", 16}, {"^=", 16}, {"|=", 16}, {",", 17}};
  std::unordered_map<std::string, double> prefix_priority_table = {
      {"++", 3}, {"--", 3}, {"!", 3}, {"~", 3}, {"*", 3}};
  std::unordered_map<std::string, double> postfix_priority_table = {{"++", 2},
                                                                    {"--", 2}};

  Exp* build_exp(const std::vector<Exp*>::iterator begin,
                 const std::vector<Exp*>::iterator end, int depth = 0) {
    if (distance(begin, end) == 1) {
      if (IntLiteral* op = dynamic_cast<IntLiteral*>(*begin))
        return op;
      else
        throw ExpParserError(op->pos, "Expected int literal");
    }

    int low_priority = INF;
    std::vector<Exp*>::iterator pos = end;
    bool is_bin = false;
    for (auto i = begin; i != end; ++i) {
      if (BinOperator* op = dynamic_cast<BinOperator*>(*i)) {
        if (op->priority < low_priority) {
          low_priority = op->priority;
          pos = i;
          is_bin = true;
        }
      } else if (UnaryOperator* op = dynamic_cast<UnaryOperator*>(*i)) {
        if (op->priority < low_priority) {
          low_priority = op->priority;
          pos = i;
          is_bin = false;
        }
      }
    }
    if (pos == end) throw ExpParserError((*begin)->pos, "Expected operator");

    if (is_bin) {
      BinOperator* op = dynamic_cast<BinOperator*>(*pos);
      return new BinOperator(op->pos, op->val, op->priority,
                             build_exp(begin, pos, depth + 1),
                             build_exp(pos + 1, end, depth + 1));
    } else {
      if (PrefixOperator* pref_op = dynamic_cast<PrefixOperator*>(*pos)) {
        if (pos != begin) 
          throw ExpParserError(pref_op->pos, "Unexpected stuff before prefix operator");
        
        return new PrefixOperator(pref_op->pos, pref_op->val, pref_op->priority,
                                  build_exp(pos + 1, end, depth + 1));
      } else {
        PostfixOperator* post_op = dynamic_cast<PostfixOperator*>(*pos);
        if (pos + 1 != end)
          throw ExpParserError(post_op->pos,
                               "Unexpected stuff after postfix operator");
        return new PostfixOperator(post_op->pos, post_op->val,
                                   post_op->priority,
                                   build_exp(begin, pos, depth + 1));
      }
    }
  }
  std::vector<Exp*> evaluate(const std::vector<Token>::iterator begin,
                             const std::vector<Token>::iterator end) {
    std::vector<Exp*> res;
    for (auto i = begin; i != end; ++i) {
      if (i->token == "operator") {
        double spaces_lhs = 0, spaces_rhs = 0;
        if (i != begin) {
          if ((i - 1)->token == "space") spaces_lhs = (i - 1)->val.size();
        } else
          spaces_lhs = INF;
        if (i != end - 1) {
          if ((i + 1)->token == "space") spaces_rhs = (i + 1)->val.size();
        } else
          spaces_rhs = INF;
        if (spaces_lhs == spaces_rhs) {
          if (!bin_priority_table.count(i->val))
            throw ExpParserError(i->pos, "Unknown binary operator");
          res.push_back(new BinOperator(
              i->pos, i->val,
              (-priority_offset) * spaces_lhs + bin_priority_table[i->val], 0,
              0));
        } else {
          if (!postfix_priority_table.count(i->val))
            throw ExpParserError(i->pos, "Unknown postfix operator");
          if (spaces_lhs < spaces_rhs) {
            res.push_back(
                new PostfixOperator(i->pos, i->val,
                                    (-priority_offset) * spaces_lhs +
                                        postfix_priority_table[i->val],
                                    0));
          } else {
            if (!prefix_priority_table.count(i->val))
              throw ExpParserError(i->pos, "Unknown prefix operator");

            res.push_back(new PrefixOperator(
                i->pos, i->val,
                (-priority_offset) * spaces_rhs + prefix_priority_table[i->val],
                0));
          }
        }
      } else if (i->token == "int") {
        res.push_back(new IntLiteral(i->pos, stoi(i->val)));
      }
    }
    return res;
  }

  int calc_exp(Exp* exp) {
    if (IntLiteral* op = dynamic_cast<IntLiteral*>(exp)) return op->val;

    if (BinOperator* op = dynamic_cast<BinOperator*>(exp)) {
      int lhs = calc_exp(op->lhs);
      int rhs = calc_exp(op->rhs);

      if (op->val == "+") return lhs + rhs;
      if (op->val == "*") return lhs * rhs;
    }

    if (UnaryOperator* op = dynamic_cast<UnaryOperator*>(exp))
      if (op->val == "++") return calc_exp(op->child) + 1;

    return -1;
  }

 public:
  int calc(const std::string& str) {
    try {
      Parser parser({
          {"int", R"(([0-9]+))"},
          {"space", R"((\ +))"},
          {"operator", R"(([\+\-\*\\\%\<\>\=\^\&\|\/\!\#\$\@\?\:]+))"},
      });
      auto parse_res = parser.parse(str, settings["DEBUG"]);
      auto exp_res = evaluate(parse_res.begin(), parse_res.end());

      Exp* exp = build_exp(exp_res.begin(), exp_res.end());
      if (settings["SHOW_TREE"]) printExpTree(exp);

      return calc_exp(exp);
    } catch (ExpParserError error) {
      std::cout << str << std::endl;
      std::cout << std::string(error.pos, ' ') << "^" << std::endl;
      std::cout << error.message << std::endl;
    }
    return -1;
  }
};
