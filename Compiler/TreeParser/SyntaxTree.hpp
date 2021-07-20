#pragma once
#include "..\..\TreeLib/Tree.hpp"
#include "..\Expressions\ExpressionParser.hpp"
#include "AbstractSyntaxTree.hpp"

struct STNode {
  virtual ~STNode() {}
};
struct STBlock {
  std::vector<std::pair<Type, std::string>> vars;
  std::vector<STNode*> nodes;
};
struct STExp : public STNode {
  Exp* exp;
};
struct STIf : STNode {
  Exp* contition = nullptr;
  STBlock* body = nullptr;
  std::vector<std::pair<Exp*, STBlock*>> elseif_body;
  STBlock* else_body = nullptr;
};

struct TLoop : ASTNode {
  Exp* exp;
  STBlock* body;
};

TreeNode<std::string>* toGenericTree(STBlock* block) {
  auto node = new TreeNode<std::string>;
  node->data = "<block>";
  for (auto i :  block->nodes) {
    if (auto ifs = dynamic_cast<STIf*>(i)) {
      auto tmp = new TreeNode<std::string>("<if>");
      tmp->branches.push_back(
        new TreeNode<std::string>("<contition>", {
          ExpParser::toGenericTree(ifs->contition)
        })
      );
      tmp->branches.push_back(
        new TreeNode<std::string>("<body>", {
          toGenericTree(ifs->body)
        })
      );
      // tmp->branches.push_back(toGenericTree(ifs->body));
      for (auto& i : ifs->elseif_body) {
        tmp->branches.push_back(new TreeNode<std::string>("<elif>", {
          new TreeNode<std::string>("<contition>", {
          ExpParser::toGenericTree(i.first)
          }),
          new TreeNode<std::string>("<body>", {
            toGenericTree(i.second)
          })
        }
        ));
      }
      if (ifs->else_body) {
        tmp->branches.push_back(new TreeNode<std::string>("<else>", 
        {toGenericTree(ifs->else_body)}));
      }
      node->branches.push_back(tmp);
    }
    if (auto exp = dynamic_cast<STExp*>(i)) {
      node->branches.push_back(ExpParser::toGenericTree(exp->exp));
    }
  }
  return node;
};

STBlock* parseAST(ASTBlock* main_block) {
  auto res = new STBlock;
  std::cout << "ast tree:\n";
  for (auto i = main_block->nodes.begin(); i != main_block->nodes.end(); ++i) {
    if (auto line = dynamic_cast<ASTLine*>(*i)) {
      // std::cout << "da" <<std::endl;
      // std::cout << "line:'"<<ASTParser::lineToStr(line->begin, line->end) << "'\n";
      auto exp = ExpParser::parse(line->begin, line->end);
      if (auto ctr = dynamic_cast<FlowOperator*>(exp)) {
        // if statement
        if (ctr->val == "?") {
          if (ctr->operand->type.type == "bool") {
            auto tmp_if = new STIf;
            tmp_if->contition = ctr->operand;
            if (i + 1 != main_block->nodes.end()) {
              if (auto body = dynamic_cast<ASTBlock*>(*(i+1))) {
                tmp_if->body = parseAST(body);
                ++i;
                while (i + 1 != main_block->nodes.end()) {
                  if (auto elseif_body = dynamic_cast<ASTBlock*>(*(i+1))) {
                    if (elseif_body->btype != ASTBlock::nextB) break;
                    if (elseif_body->nodes.size() == 2) {
                      if (auto line = dynamic_cast<ASTLine*>(elseif_body->nodes[0])) {
                        auto exp = ExpParser::parse(line->begin, line->end);
                        if (auto block = dynamic_cast<ASTBlock*>(elseif_body->nodes[1])) {
                          tmp_if->elseif_body.emplace_back(exp, parseAST(block));
                        } else throw ParserError(0, "Exprected block in '|(else if)' statement");
                      } else throw ParserError(0, "Expected expression in '|(else if)' statement");
                    } else {
                      throw ParserError(0, "Expected condition and block in '|(else if)' statement");
                    }
                    ++i;
                  } else break;
                }
                if (i + 1 != main_block->nodes.end()) {
                  if (auto else_body = dynamic_cast<ASTBlock*>(*(i+1))) {
                    tmp_if->else_body = parseAST(else_body);
                    ++i;
                  }
                }
                res->nodes.push_back(tmp_if);
              } else {
                throw ParserError(0, "Expected block after '?(if)' statement");
              }
            }

            // res->nodes.push_back(tmp);
          } else {
            throw ParserError(ctr->pos, "Expected bool expression in '?(if)' contition");
          }
        } else {
          throw ParserError(0, "Random error lol (unknown flow control operator)");
        }
      } else {
        auto tmp = new STExp;
        tmp->exp = exp;
        res->nodes.push_back(tmp);
      }
    } else if (auto block = dynamic_cast<ASTBlock*>(*i)) {
      throw ParserError(0, "Unexprected block");
    } else {
      throw ParserError(0, "Random error lol (cannot cast ast node)");
    }
  }
  return res;
}
