#pragma once
#include "../Lang/Types.hpp"
#include "SyntaxTree.hpp"
#include "../../TreeLib/Tree.hpp"
#include "DefinitionsParser.hpp"


STBlock* parseASTblock(ASTBlock* main_block, ScopeInfo cur_scope, ScopeInfo& parent_scope, Type retT) {
  auto res = new STBlock;
  for (auto i = main_block->nodes.begin(); i != main_block->nodes.end(); ++i) {
    if (auto line = dynamic_cast<ASTLine*>(*i)) {
      /* if line is variable declaration */
      bool is_var_decl = true;
      bool autoT = line->begin->val == "auto";
      Type type;
      try {
        if (!autoT) type = Type::parse(line->begin);
        else ++line->begin;
      }  catch (...) { 
        is_var_decl = false;
      }
      if (is_var_decl) {
        auto exp_res = ExpParser::preprocess(line->begin, line->end);
        auto exp = ExpParser::buildExp(exp_res.begin(), exp_res.end());
        auto tuple = castToPlainTuple(exp);

        for (auto i : tuple->content) {
          if (auto id = dynamic_cast<IdLiteral*>(i)) {
            /* just plane variable */
            if (autoT) throw ParserError(i->pos, "Cannot decide type for '" + id->val + "'");
            res->scope_info.vars[id->val] = type;
            res->scope_info.vars[id->val].setLval(true);

            cur_scope.vars[id->val] = type;
            cur_scope.vars[id->val].setLval(true);
          } else {
            /* variable with assignment */ 
            if (auto assign = dynamic_cast<BinOperator*>(i)) {
              if (assign->val != "=")
                throw ParserError(i->pos, "Expected assignment, but '" + assign->val + "' found");
              if (auto id = dynamic_cast<IdLiteral*>(assign->lhs)) {
                ExpParser::postprocess(assign->rhs, cur_scope);
                /* push variable */
                if (autoT) {
                  res->scope_info.vars[id->val] = assign->rhs->type;
                  cur_scope.vars[id->val] = assign->rhs->type;
                } else {
                  res->scope_info.vars[id->val] = type;
                  cur_scope.vars[id->val] = type;
                }
                res->scope_info.vars[id->val].setLval(true);
                cur_scope.vars[id->val].setLval(true);

                /* push assignment expression */
                ExpParser::postprocess(assign->lhs, cur_scope);
                auto tmp = new STExp;
                tmp->exp = assign;
                res->nodes.push_back(tmp);
              } else {
                throw ParserError(i->pos, "Expected variable name");
              }
            }
          }
        }
      } else { 
        /* not variable declaration so normal parsing */
        auto exp = ExpParser::parse(line->begin, line->end, cur_scope);
        if (auto ctr = dynamic_cast<FlowOperator*>(exp)) {
          /* if statement parsing */
          if (ctr->val == "?") {
            if (ctr->operand->type.getType() == TYPE::blT) {
              auto tmp_if = new STIf;
              tmp_if->contition = ctr->operand;
              if (i + 1 != main_block->nodes.end()) {
                if (auto body = dynamic_cast<ASTBlock*>(*(i + 1))) {
                  tmp_if->body = parseASTblock(body, cur_scope, res->scope_info, retT);
                  ++i;
                  while (i + 1 != main_block->nodes.end()) {
                    if (auto elseif_body = dynamic_cast<ASTBlock*>(*(i + 1))) {
                      if (elseif_body->btype != ASTBlock::nextB) break;
                      if (elseif_body->nodes.size() == 2) {
                        if (auto line = dynamic_cast<ASTLine*>(elseif_body->nodes[0])) {
                          auto exp =
                            ExpParser::parse(line->begin, line->end, cur_scope);
                          if (auto block = dynamic_cast<ASTBlock*>(elseif_body->nodes[1])) {
                            tmp_if->elseif_body.emplace_back(
                              exp, parseASTblock(block, cur_scope, res->scope_info, retT));
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
                        parseASTblock(else_body, cur_scope, res->scope_info, retT);
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
          
          
          } else if (ctr->val == "<") {
            auto tmp_ret = new STRet;
            tmp_ret->exp = ctr->operand;
            if (retT.getType() == TYPE::voidT) {
              if (tmp_ret->exp)
                throw ParserError(ctr->pos, "You cannot return something becouse return type is 'void'");
            } else {
              if (!tmp_ret->exp)
                throw ParserError(ctr->pos, "Expected return value");
              if (tmp_ret->exp->type != retT)
                throw ParserError(ctr->pos, "Return must be '" + retT.toString() + "'");
            }
            res->nodes.push_back(tmp_ret);
          } else {
            throw ParserError(0, "Random error lol (unknown flow control operator)");
          }
        } else {
          auto tmp = new STExp;
          tmp->exp = exp;
          res->nodes.push_back(tmp);
        }
      }
    } else if (auto block = dynamic_cast<ASTBlock*>(*i)) {
      throw ParserError(0, "Unexprected block");
    } else {
      throw ParserError(0, "Random error lol (cannot cast ast node)");
    }
  }
  return res;
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
      std::vector<Type> types;
      for (auto& [_, type] : func->args) {
        types.push_back(type);
      }
        if (func->op_type == OpType::bin) {
        ExpParser::B_OD[{func->name, types[0], types[1]}] = func->type;
      } else if (func->op_type == OpType::lhs) {
        ExpParser::PR_OD[{func->name, types}] = func->type;
      } else if (func->op_type == OpType::rhs) {
        ExpParser::PO_OD[{func->name, types}] = func->type;
      }
      ++cur;
      ScopeInfo scope;
      for (auto& [name, type] : func->args) {
        scope.vars[name] = type;
        scope.vars[name].setLval(true);
      }
      // and then parse body
      if (cur == main_block->nodes.end())
        throw ParserError(line->end->pos, "Expected function body");
      if (auto block = dynamic_cast<ASTBlock*>(*cur)) {
        res->functions.back()->body = parseASTblock(block, scope, main_scope, func->type);
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
