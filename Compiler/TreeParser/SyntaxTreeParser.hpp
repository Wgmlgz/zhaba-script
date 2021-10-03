#pragma once
#include "SyntaxTree.hpp"
#include "..\..\TreeLib/Tree.hpp"
#include "DefinitionsParser.hpp"


STBlock* parseASTblock(ASTBlock* main_block, ScopeInfo cur_scope, ScopeInfo& parent_scope) {
  auto res = new STBlock;
  for (auto i = main_block->nodes.begin(); i != main_block->nodes.end(); ++i) {
    if (auto line = dynamic_cast<ASTLine*>(*i)) {
      // std::cout << "da" <<std::endl;
      // std::cout << "line:'"<<ASTParser::lineToStr(line->begin, line->end) << "'\n";
      auto exp = ExpParser::parse(line->begin, line->end, cur_scope, res->scope_info);
      if (auto ctr = dynamic_cast<FlowOperator*>(exp)) {
        // if statement
        if (ctr->val == "?") {
          if (ctr->operand->type.type == blT) {
            auto tmp_if = new STIf;
            tmp_if->contition = ctr->operand;
            if (i + 1 != main_block->nodes.end()) {
              if (auto body = dynamic_cast<ASTBlock*>(*(i + 1))) {
                tmp_if->body = parseASTblock(body, cur_scope, res->scope_info);
                ++i;
                while (i + 1 != main_block->nodes.end()) {
                  if (auto elseif_body = dynamic_cast<ASTBlock*>(*(i + 1))) {
                    if (elseif_body->btype != ASTBlock::nextB) break;
                    if (elseif_body->nodes.size() == 2) {
                      if (auto line = dynamic_cast<ASTLine*>(elseif_body->nodes[0])) {
                        auto exp =
                          ExpParser::parse(line->begin, line->end, cur_scope,
                            main_block->scope_info);
                        if (auto block = dynamic_cast<ASTBlock*>(elseif_body->nodes[1])) {
                          tmp_if->elseif_body.emplace_back(
                            exp, parseASTblock(block, cur_scope, res->scope_info));
                        } else throw ParserError(0, "Exprected block in '|(else if)' statement");
                      } else throw ParserError(0, "Expected expression in '|(else if)' statement");
                    } else {
                      throw ParserError(0, "Expected condition and block in '|(else if)' statement");
                    }
                    ++i;
                  } else break;
                }
                if (i + 1 != main_block->nodes.end()) {
                  if (auto else_body = dynamic_cast<ASTBlock*>(*(i + 1))) {
                    tmp_if->else_body =
                      parseASTblock(else_body, cur_scope, res->scope_info);
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

STBlock* parseASTblock(ASTBlock* block) {
  auto res = new STBlock;
  return parseASTblock(block, res->scope_info, res->scope_info);
}

struct STTree {
  std::vector<Function*> functions;

  TreeNode<std::string>* toGenericTree() {
    auto main_node = new TreeNode<std::string>;
    main_node->data = "<STree>";
    
    auto functions_node = new TreeNode<std::string>;
    main_node->branches.push_back(functions_node);
    functions_node->data = "<Functions>";
    for (auto& func : functions) {
      auto func_node = new TreeNode<std::string>;
      func_node->data = func->headToStr();
      func_node->branches.push_back(func->body->toGenericTree());
      functions_node->branches.push_back(func_node);
    }
    return main_node;
  };
};

STTree* parseAST(ASTBlock* main_block) {
  STTree* res = new STTree;
  auto cur = main_block->nodes.begin();
  ScopeInfo main_scope;
  while (cur != main_block->nodes.end()) {
    if (auto line = dynamic_cast<ASTLine*>(*cur)) {
      // parse function header
      res->functions.push_back(parseFunctionHeader(line->begin, line->end));
      auto& func = res->functions.back();
      ExpParser::prefix_operators[func->name] = func->priority;
      ExpParser::operators.insert(func->name);
      std::vector<int> types;
      for (auto& [_, type] : func->args) {
        types.push_back(type.type);
      }
      ExpParser::PR_OD[{func->name, types}] = func->type.type;
      ++cur;
      ScopeInfo scope;
      for (auto& [name, type] : func->args) {
        scope.vars[name] = type;
      }
      // and then parse body
      if (cur == main_block->nodes.end())
        throw ParserError(line->end->pos, "Expected function body");
      if (auto block = dynamic_cast<ASTBlock*>(*cur)) {
        res->functions.back()->body = parseASTblock(block, scope, main_scope);
      } else {
        throw ParserError(line->end->pos, "Expected function body");
      }
      ++cur;
    } else {
      throw ParserError(1, "Random error lol (cannot cast ast node)");
    }
    // auto function_header = parseFunctionHeader(cur->);
  }
  return res;
}