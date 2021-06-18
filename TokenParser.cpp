/*

Test expression calculator with space char wieght:

2 + 2 * 2 = 6
  ^   ^ equal amaunt of spaces   ->   regual priorities

2 + 2  *  2 = 8
  ^    ^ there is 2 spaces near '*'   ->   this caluculated later
  ^ there is 1 space near '+'   ->   this calculated earlier

allowed symbols:
 numbers like: 0 666 54
 operators: +/*
 space: ' ' (for magic separation)

*/

#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <iterator>
#include <regex>
#include <map>
#include <algorithm>
#include <numeric>
#include <unordered_map>

// token
struct Token {
  std::string token;
  std::string val;
  size_t pos;
  Token(std::string new_token, std::string new_type, size_t new_pos) {
    token = new_token;
    val = new_type;
    pos = new_pos;
  }
};
class Parser {
  std::vector<std::pair<std::string, std::string>> tokens;
public:
  Parser(const std::vector<std::pair<std::string, std::string>>& new_tokens) { tokens = new_tokens; }
  std::vector<Token> parse(const std::string& str) {
    std::string tokens_str = std::accumulate(tokens.begin(), tokens.end(), std::string(),
      [](std::string& ss, std::pair<std::string, std::string>& s) {
        return ss.empty() ? s.second : ss + "|" + s.second;
      });

    std::cout << tokens_str << std::endl;
    std::vector<Token> parse_res;
    const std::regex r(tokens_str);
    for (std::sregex_iterator i = std::sregex_iterator(str.begin(), str.end(), r);
      i != std::sregex_iterator();
      ++i) {
      std::smatch m = *i;

      std::string log_str;
      log_str += "val:\"";
      std::string token_val = m.str();
      log_str += token_val;
      log_str += "\"    pos:";
      log_str += std::to_string(m.position());
      log_str += "    gid: ";

      int index;
      for (auto i = 1; i < m.size(); ++i) if (!m[i].str().empty()) {
        index = i - 1;
        break;
      }
      log_str += std::to_string(index);

      parse_res.push_back(Token(tokens[index].first, token_val, m.position()));

      std::cout << log_str << std::endl;
    }

    return parse_res;
  }
};


// exp
struct Exp {
  int pos; Exp(int new_pos = 0) {
    pos = new_pos;
  }
  virtual ~Exp() {}
};
struct IntLiteral : public Exp {
  int val;
  IntLiteral(int new_pos, int new_val) {
    pos = new_pos;
    val = new_val;
  }
};
struct BinOperator : public  Exp {
  std::string val;
  Exp* lhs;
  Exp* rhs;
  int priority;
  BinOperator(int new_pos, std::string new_val, int new_priority, Exp* new_lhs, Exp* new_rhs) {
    pos = new_pos;
    val = new_val;
    priority = new_priority;
    lhs = new_lhs;
    rhs = new_rhs;
  }
};

void printExp(Exp* exp, int offset = 0) {

  if (IntLiteral* op = dynamic_cast<IntLiteral*>(exp)) {
    std::cout << std::string(offset, ' ');

    std::cout << op->val;
  }

  if (BinOperator* op = dynamic_cast<BinOperator*>(exp)) {
    printExp(op->lhs, offset + 2);
    std::cout << std::string(offset, ' ');

    std::cout << op->val << std::endl;
    printExp(op->rhs, offset + 2);

  }

  std::cout << std::endl;
}

struct ExpParserError {
  size_t pos;
  std::string message;
  ExpParserError(size_t new_pos, std::string new_message) {
    pos = new_pos;
    message = new_message;
  }
};
class ExpParser {
  const int MAX_PRIORITY = 1000 * 1000;
  std::unordered_map<std::string, int> priority_table = {
    {"+", 1},
    {"*", 2}
  };
  int priority_offset = 10;


  Exp* build_exp(const std::vector<Exp*>::iterator begin, const std::vector<Exp*>::iterator end) {
    if (distance(begin, end) == 1) {
      if (IntLiteral* op = dynamic_cast<IntLiteral*>(*begin)) {
        return op;
      } else {
        throw ExpParserError(op->pos, "Expected int literal");
      }
    }

    int low_priority = MAX_PRIORITY;
    std::vector<Exp*>::iterator pos = end;
    for (auto i = begin; i != end; ++i) {
      if (BinOperator* op = dynamic_cast<BinOperator*>(*i)) {
        if (op->priority < low_priority) {
          low_priority = op->priority;
          pos = i;
        }
      }
    }
    if (pos == end) {
      throw ExpParserError((*begin)->pos, "Expected operator");
    }
    BinOperator* op = dynamic_cast<BinOperator*>(*pos);

    return new BinOperator(op->pos, op->val, op->priority, build_exp(begin, pos), build_exp(pos + 1, end));

  }
  std::vector<Exp*> evaluate(const std::vector<Token>::iterator begin, const std::vector<Token>::iterator end) {
    std::vector<Exp*> res;
    for (auto i = begin; i != end; ++i) {
      if (i->token == "operator") { // only binary operators for now
        if (i != begin and i != end - 1) {
          if ((i - 1)->token == "space" and (i + 1)->token == "space") {

            if ((i - 1)->val.size() != (i + 1)->val.size())
              throw ExpParserError(i->pos + i->val.size() / 2, "Expected equal amount of spaces near binary operator");

            res.push_back(new BinOperator(i->pos, i->val, (-priority_offset) * (i - 1)->val.size() + priority_table[i->val], 0, 0));
          } else if ((i - 1)->token == "int" and (i + 1)->token == "int") {
            res.push_back(new BinOperator(i->pos, i->val, priority_table[i->val], 0, 0));
          } else {
            throw ExpParserError(i->pos + i->val.size() / 2, "Expected spaces or int literals near binary operator");
          }
        }
      } else if (i->token == "int") {
        res.push_back(new IntLiteral(i->pos, stoi(i->val)));
      }
    }
    return res;
  }

  int calc_exp(Exp* exp) {
    if (IntLiteral* op = dynamic_cast<IntLiteral*>(exp)) {
      return op->val;
    }

    if (BinOperator* op = dynamic_cast<BinOperator*>(exp)) {
      int lhs = calc_exp(op->lhs);
      int rhs = calc_exp(op->rhs);

      if (op->val == "+")
        return lhs + rhs;
      if (op->val == "*")
        return lhs * rhs;

    }

    return -1;
  }
public:
  int calc(const std::string& str) {
    try {
      Parser parser({
        { "int", "([0-9]+)" },
        { "space", "(\\ +)" },
        { "operator", "(\\+|\\*)" },
        });
      auto parse_res = parser.parse(str);
      auto exp_res = evaluate(parse_res.begin(), parse_res.end());

      Exp* exp = build_exp(exp_res.begin(), exp_res.end());
      printExp(exp);

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


// driver code 
int main() {
  ExpParser prs;

  std::string s;
  while (1) {
    std::cout << "Enter expression: ";
    std::getline(std::cin, s);
    if (s == "!") break;

    int res = prs.calc(s);
    std::cout << "Ans: " << res << std::endl;
  }

}
