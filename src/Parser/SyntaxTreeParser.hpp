#pragma once
#include "../Lang/Lang.hpp"
#include "../TreeLib/Tree.hpp"
#include "DefinitionsParser.hpp"
#include "TypeParser.hpp"

STBlock* parseASTblock(ast::ASTBlock* main_block, ScopeInfo cur_scope, ScopeInfo& parent_scope, types::Type retT) {
  auto res = new STBlock;

  for (auto i = main_block->nodes.begin(); i != main_block->nodes.end(); ++i) {
    if (auto line = dynamic_cast<ast::ASTLine*>(*i)) {
      /* decide if current line is line declaration or something */
      bool is_var_decl = true;
      auto cur = line->begin;
      bool autoT = cur->val == "auto";
      types::Type type;
      try {
        if (!autoT) type = types::parse(cur, cur_scope);
        else ++cur;
      } catch (std::runtime_error err) {
        is_var_decl = false;
      }
      if (is_var_decl) {
        /* if line is variable declaration */
        auto exp_res = zhexp::preprocess(cur, line->end, cur_scope);
        auto exp = zhexp::buildExp(exp_res.begin(), exp_res.end());
        auto tuple = castTreeToTuple(exp);

        if (zhdata.bools["exp_parser_logs"]) {
          zhexp::printExpTree(tuple);
        }
        for (auto i : tuple->content) {
          if (auto id = dynamic_cast<zhexp::IdLiteral*>(i)) {
            /* just plane variable */
            if (autoT) throw ParserError(i->begin, i->end, "Cannot decide type for '" + id->val + "'");
            res->scope_info.vars[id->val] = type;
            res->scope_info.vars[id->val].setLval(true);

            cur_scope.vars[id->val] = type;
            cur_scope.vars[id->val].setLval(true);
          } else {
            /* variable with assignment */
            if (auto assign = dynamic_cast<zhexp::BinOperator*>(i)) {
              if (assign->val != "=")
                throw ParserError(i->begin, i->end, "Expected assignment, but '" + assign->val + "' found");
              if (auto id = dynamic_cast<zhexp::IdLiteral*>(assign->lhs)) {
                assign->rhs = zhexp::postprocess(assign->rhs, cur_scope, &res->scope_info);
                assign->rhs->type.setLval(false);
                /* push variable */
                if (autoT) {
                  res->scope_info.vars[id->val] = assign->rhs->type;
                  cur_scope.vars[id->val] = assign->rhs->type;
                } else {
                  if (type <=> assign->rhs->type != 0) {
                    throw ParserError(assign->begin, assign->end,
                      "Types (" + type.toString() +
                      " " + assign->rhs->type.toString() +
                      ") for '='(init) are different");
                  }
                  res->scope_info.vars[id->val] = type;
                  cur_scope.vars[id->val] = type;
                }
                res->scope_info.vars[id->val].setLval(true);
                cur_scope.vars[id->val].setLval(true);

                /* push assignment expression */
                assign->lhs = zhexp::postprocess(assign->lhs, cur_scope, &res->scope_info);
                auto tmp = new STExp;
                tmp->exp = assign;
                res->nodes.push_back(tmp);
              } else {
                throw ParserError(i->begin, i->end, "Expected variable name");
              }
            }
          }
        }
      } else {
        /* not variable declaration so normal parsing */
        auto exp_preprocessed =
            zhexp::preprocess(line->begin, line->end, cur_scope);
        auto exp_builded =
            buildExp(exp_preprocessed.begin(), exp_preprocessed.end());

          // auto exp = zhexp::parse(line->begin, line->end, cur_scope, &res->scope_info);
        if (auto ctr_ = dynamic_cast<zhexp::FlowOperator*>(exp_builded)) {
        
          /* "?" (if) statement parsing */
          if (ctr_->val == "?") {
            auto ctr = dynamic_cast<zhexp::FlowOperator*>(
                zhexp::postprocess(exp_builded, cur_scope, &res->scope_info));
            if (ctr->operand->type.getTypeId() == types::TYPE::i64T) {
              auto tmp_if = new STIf;
              tmp_if->contition = ctr->operand;
              if (i + 1 != main_block->nodes.end()) {
                if (auto body = dynamic_cast<ast::ASTBlock*>(*(i + 1))) {
                  tmp_if->body = parseASTblock(body, cur_scope, res->scope_info, retT);
                  ++i;
                  while (i + 1 != main_block->nodes.end()) {
                    if (auto elseif_body = dynamic_cast<ast::ASTBlock*>(*(i + 1))) {
                      if (elseif_body->btype != ast::ASTBlock::nextB) break;
                      if (elseif_body->nodes.size() == 2) {
                        if (auto line = dynamic_cast<ast::ASTLine*>(elseif_body->nodes[0])) {
                          auto exp =
                            zhexp::parse(line->begin, line->end, cur_scope, &res->scope_info);
                          if (auto block = dynamic_cast<ast::ASTBlock*>(elseif_body->nodes[1])) {
                            tmp_if->elseif_body.emplace_back(
                              exp, parseASTblock(block, cur_scope, res->scope_info, retT));
                          } else throw ParserError("Exprected block in '|(else if)' statement");
                        } else throw ParserError("Expected expression in '|(else if)' statement");
                      } else {
                        throw ParserError("Expected condition and block in '|(else if)' statement");
                      }
                      ++i;
                    } else break;
                  }
                  if (i + 1 != main_block->nodes.end()) {
                    if (auto else_body = dynamic_cast<ast::ASTBlock*>(*(i + 1))) {
                      tmp_if->else_body =
                        parseASTblock(else_body, cur_scope, res->scope_info, retT);
                      ++i;
                    }
                  }
                  res->nodes.push_back(tmp_if);
                } else {
                  throw ParserError("Expected block after '?(if)' statement");
                }
              }
            } else {
              throw ParserError(ctr->begin, ctr->end, "Expected int expression in '?(if)' contition");
            }
          }
          /* "@" (for) statement parsing */
          else if (ctr_->val == "@") {
            auto tuple_ = castTreeToTuple(ctr_->operand);

            if (tuple_->content.size() < 1) {
              throw ParserError("Empty '@(while)' statement");
            }

            if (tuple_->content.size() > 3) {
              throw ParserError(ctr_->begin, ctr_->end,
                "You can privide max 3 expressions (init condition iteration) '@(for)' in statement");
            }

            if (tuple_->content.size() == 1 or tuple_->content.size() == 3) {
              auto ctr = dynamic_cast<zhexp::FlowOperator*>(
                  zhexp::postprocess(exp_builded, cur_scope, &res->scope_info));
              auto tuple = castToTuple(ctr->operand);
              /* for (;condition;) */
              if (tuple->content.size() == 1) {
                tuple->content.insert(tuple->content.begin(), nullptr);
                tuple->content.insert(tuple->content.end(), nullptr);
              }
              /** else for (init;contition;repeat) */
              if (tuple->content[1]->type.getTypeId() == types::TYPE::i64T) {
                if (tuple->content[0]) {
                  auto init = new STExp;
                  init->exp = tuple->content[0];
                  res->nodes.push_back(init);
                }
                auto tmp_while = new STWhile;
                tmp_while->contition = tuple->content[1];
                if (i + 1 != main_block->nodes.end()) {
                  if (auto body = dynamic_cast<ast::ASTBlock*>(*(i + 1))) {
                    tmp_while->body =
                        parseASTblock(body, cur_scope, res->scope_info, retT);
                    if (tuple->content[2]) {
                      auto iter = new STExp;
                      iter->exp = tuple->content[2];
                      tmp_while->body->nodes.push_back(iter);
                    }
                    res->nodes.push_back(tmp_while);
                    ++i;
                  } else {
                    throw ParserError(0, "Expected block after '@(for)' statement");
                  }
                }
              } else {
                throw ParserError(
                    ctr->begin, ctr->end,
                    "Expected int expression in '@(for)' contition, but '" +
                        tuple->content[1]->type.toString() + "' found");
              }
            }
            /* foreach loop */
            else {
              auto id_l = dynamic_cast<zhexp::IdLiteral*>(tuple_->content[0]);
              if (!id_l) throw ParserError(
                tuple_->content[0]->begin,
                tuple_->content[0]->end,
                "Expected id literal"
              );

              /** begin & end check */
              auto foreach_block = new STBlock;
              auto foreach_scope = cur_scope;

              auto range_init = new STExp;
              range_init->exp = new zhexp::BinOperator(
                  tuple_->content[1]->begin, tuple_->content[1]->end, ":=", 666,
                  new zhexp::IdLiteral(tuple_->content[1]->begin,
                                       tuple_->content[1]->end, "__range"),
                  tuple_->content[1]
              );
              auto begin_exp = new STExp;
              begin_exp->exp = new zhexp::BinOperator(
                  tuple_->content[1]->begin, tuple_->content[1]->end, ":=", 666,
                  new zhexp::IdLiteral(tuple_->content[1]->begin,
                                       tuple_->content[1]->end, "__begin"),
                  new zhexp::BinOperator(
                      tuple_->content[1]->begin, tuple_->content[1]->end,
                      ".call.begin", 666,
                      new zhexp::PrefixOperator(
                          tuple_->content[1]->begin, tuple_->content[1]->end,
                          "&", 666,
                          new zhexp::IdLiteral(tuple_->content[1]->begin,
                                               tuple_->content[1]->end,
                                               "__range")),
                      new zhexp::Tuple(tuple_->content[1]->begin,
                                       tuple_->content[1]->end)
                  )

              );
              auto end_exp = new STExp;
              end_exp->exp = new zhexp::BinOperator(
                  tuple_->content[1]->begin, tuple_->content[1]->end, ":=", 666,
                  new zhexp::IdLiteral(tuple_->content[1]->begin,
                                       tuple_->content[1]->end, "__end"),
                  new zhexp::BinOperator(
                      tuple_->content[1]->begin, tuple_->content[1]->end,
                      ".call.end", 666,
                      new zhexp::PrefixOperator(
                          tuple_->content[1]->begin, tuple_->content[1]->end,
                          "&", 666,
                          new zhexp::IdLiteral(tuple_->content[1]->begin,
                                               tuple_->content[1]->end,
                                               "__range")),
                      new zhexp::Tuple(tuple_->content[1]->begin,
                                       tuple_->content[1]->end)
                  )

              );
              auto cur_init = new STExp;
              cur_init->exp = new zhexp::BinOperator(
                  tuple_->content[0]->begin, tuple_->content[1]->end, ":=", 666,
                  new zhexp::IdLiteral(tuple_->content[0]->begin,
                                       tuple_->content[0]->end, id_l->val),
                  new zhexp::IdLiteral(tuple_->content[1]->begin,
                                       tuple_->content[1]->end, "__begin")
              );

              zhexp::Exp* condition = new zhexp::BinOperator(
                  tuple_->content[0]->begin, tuple_->content[1]->end, "!=", 666,
                  new zhexp::IdLiteral(tuple_->content[0]->begin,
                                       tuple_->content[0]->end, id_l->val),
                  new zhexp::IdLiteral(tuple_->content[1]->begin,
                                       tuple_->content[1]->end, "__end"));
              auto iter = new STExp;
              iter->exp = new zhexp::PrefixOperator(
                  tuple_->content[1]->begin, tuple_->content[1]->end, "++", 666,
                  new zhexp::IdLiteral(tuple_->content[0]->begin,
                                      tuple_->content[0]->end, id_l->val)
              );
              range_init->exp = zhexp::postprocess(
                  range_init->exp, foreach_scope, &foreach_block->scope_info);
              begin_exp->exp = zhexp::postprocess(begin_exp->exp, foreach_scope,
                                                  &foreach_block->scope_info);
              end_exp->exp = zhexp::postprocess(end_exp->exp, foreach_scope,
                                                &foreach_block->scope_info);
              cur_init->exp = zhexp::postprocess(cur_init->exp, foreach_scope,
                                                 &foreach_block->scope_info);
              condition = zhexp::postprocess(condition, foreach_scope,
                                             &foreach_block->scope_info);
              iter->exp = zhexp::postprocess(iter->exp, foreach_scope,
                                             &foreach_block->scope_info);

              foreach_block->nodes.push_back(range_init);
              foreach_block->nodes.push_back(begin_exp);
              foreach_block->nodes.push_back(end_exp);
              foreach_block->nodes.push_back(cur_init);

              /** else for (init;contition;repeat) */
              if (condition->type.getTypeId() == types::TYPE::i64T) {
                auto tmp_while = new STWhile;
                tmp_while->contition = condition;
                if (i + 1 != main_block->nodes.end()) {
                  if (auto body = dynamic_cast<ast::ASTBlock*>(*(i + 1))) {
                    tmp_while->body = parseASTblock(body, foreach_scope,
                                                    res->scope_info, retT);
                    tmp_while->body->nodes.push_back(iter);
                    foreach_block->nodes.push_back(tmp_while);
                  } else {
                    throw ParserError(
                        0, "Expected block after '@(for)' statement");
                  }
                }
              } else {
                throw ParserError(
                    condition->begin, condition->end,
                    "Expected int expression in '@(for)' contition, but '" +
                        condition->type.toString() + "' found");
              }

              res->nodes.push_back(foreach_block);
              ++i;
            }
          }
          /* <(return) statement parsing */
          else if (ctr_->val == "<<<") {
            auto ctr = dynamic_cast<zhexp::FlowOperator*>(
                zhexp::postprocess(exp_builded, cur_scope, &res->scope_info));
            auto tmp_ret = new STRet;
            tmp_ret->exp = ctr->operand;
            if (retT.getTypeId() == types::TYPE::voidT) {
              if (tmp_ret->exp)
                throw ParserError(ctr->begin, ctr->end, "You cannot return something becouse return type is 'void'");
            } else {
              if (!tmp_ret->exp)
                throw ParserError(ctr->begin, ctr->end, "Expected return value");
              if (tmp_ret->exp->type.getTypeId() != retT.getTypeId())
                throw ParserError(ctr->begin, ctr->end,
                  "Return type must be '" + retT.toString() + "', but '" +
                  tmp_ret->exp->type.toString() + "' found");
            }
            res->nodes.push_back(tmp_ret);
          } else {
            throw ParserError("Random error lol (unknown flow control operator)");
          }
        } else {
          auto exp = zhexp::postprocess(exp_builded, cur_scope, &res->scope_info);
          /* just normal expression */
          auto tmp = new STExp;
          tmp->exp = exp;
          res->nodes.push_back(tmp);
        }
      }
    } else if (auto block = dynamic_cast<ast::ASTBlock*>(*i)) {
      throw ParserError("Unexprected block");
    } else {
      throw ParserError("Random error lol (cannot cast ast node)");
    }
  }
  return res;
}

std::vector<Function*> parseImpl(ast::ASTBlock* block, const types::Type& type,
                                 ScopeInfo& main_scope) {
  std::vector<Function*> res;
  for (auto i = block->nodes.begin(); i != block->nodes.end(); ++i) {
    auto line = dynamic_cast<ast::ASTLine*>(*i);
    if (!line) throw ParserError("Expected function decl");

    ScopeInfo scope = main_scope;
    auto func = parseOpHeader(line->begin, line->end, main_scope);

    ++i;
    if (i == block->nodes.end()) throw ParserError("Expected block");

    auto block = dynamic_cast<ast::ASTBlock*>(*i);
    if (!block) throw ParserError("Expected block");

    func->args.insert(
        func->args.begin(),
        {"slf", types::Type(type.getTypeId(), type.getPtr() + 1, 1)});
    func->op_type = OpType::bin;
    func->name = ".call." + func->name;
    std::vector<types::Type> types;
    for (auto& [name, type] : func->args) {
      scope.vars[name] = type;
      scope.vars[name].setLval(true);
      types.push_back(type);
      types.back().setLval(false);
      types.back().setRef(false);
    }

    zhdata.B_OD[{func->name, types}] = func;
    /** '.' priority */
    zhdata.bin_operators[func->name] = 2;
    zhdata.operators.insert(func->name);
    
    func->body = parseASTblock(block, scope, main_scope, func->type);

    res.push_back(func);
  }
  return res;
}

STTree* parseAST(ast::ASTBlock* main_block) {
  STTree* res = new STTree;
  zhdata.sttree = res;
  auto cur = main_block->nodes.begin();
  ScopeInfo main_scope;
  while (cur != main_block->nodes.end()) {
    if (auto line = dynamic_cast<ast::ASTLine*>(*cur)) {
      const auto& id = line->begin->val;
      if (id == "type") {
        /** Struct declaration */
        if (line->end - line->begin < 3)
          throw ParserError(*line->end, "Expected type name");
        if ((line->begin + 1)->token != "space" or (line->begin + 2)->token != "id")
          throw ParserError(*line->end, "Expected identifier token for struct type name");

        std::string name = (line->begin + 2)->val;
        if (types::getStructId(name) != types::TYPE(-1)) {
          throw ParserError(*line->begin, *line->end,
            "Type '" + name + "'already exist");
        }

        bool isGeneric = false;
        std::vector<std::string> generic;

        auto token = line->begin + 3;
        while (token->token != "line end") {
          if (token->token == "space") ++token;
          else if (token->token == "id") {
            generic.push_back(token->val);
            ++token;
          } else {
            throw ParserError(*token, "Unexpected token");
          }
        }

        if (generic.size()) isGeneric = true;

        ++cur;

        /** Parse struct body */
        if (cur == main_block->nodes.end())
          throw ParserError(*line->end, "Expected type body");
        auto block = dynamic_cast<ast::ASTBlock*>(*cur);
        if (!block)
        throw ParserError(*line->end, "Expected type body");
        if (isGeneric) {
          try {
            types::pushGenericType(name, generic, block);
          } catch (std::runtime_error err) {
            throw ParserError(*line->begin, *line->end, err.what());
          }
        } else {
          /** Push declarated struct */
          types::pushStruct(name, types::parseStruct(block, main_scope));
        }
        ++cur;
      } else if (id == "impl") {
        /** Struct implementation declaration */
        if (line->end - line->begin != 3)
          throw ParserError(*line->begin, *line->end, "Expected type name and nothing else");
        if ((line->begin + 1)->token != "space" or
            (line->begin + 2)->token != "id")
          throw ParserError(*(line->begin + 1), *line->end, "Expected identifier token for type implementation name");

        ++cur;

        auto block = dynamic_cast<ast::ASTBlock*>(*cur);
        if (!block) throw ParserError("Expected block");

        auto token = (line->begin + 2);
        if (types::generics.contains(token->val)) {
          /** Push generic impl */
          types::generics[token->val].impl_blocks.push_back(block);
        } else {
          /** Parce regular implementation */
          types::Type type;
          try {
            type = types::parse(token, main_scope);
          } catch (std::runtime_error err) {
            throw ParserError(*line->begin, *line->end,
              "Fail to parse impl type");
          }

          auto funcs = parseImpl(block, type, main_scope);
          for (auto i : funcs)
            res->functions.push_back(i);
        }

        ++cur;
      } else if (id == "op" or id == "lop" or id == "rop" or id == "fn") {
        /** Parse function header */
        res->functions.push_back(parseOpHeader(line->begin, line->end, main_scope));
        auto& func = res->functions.back();

        /** Regiester function */
        std::vector<types::Type> types;
        for (const auto& [_, type] : func->args) {
          types.push_back(type);
          types.back().setLval(false);
          types.back().setRef(false);
        }
        if (func->is_fn) {
          zhdata.functions.insert(func->name);
          zhdata.FN_OD[{func->name, types}] = func;
        } else {
          zhdata.operators.insert(func->name);
          if (func->op_type == OpType::bin) {
            zhdata.B_OD[{func->name, types}] = func;
            if (zhdata.bin_operators.contains(func->name) and
              func->priority != zhdata.bin_operators[func->name])
              throw ParserError(
                  *line->begin, *line->end,
                  "Operator priority doesn't match old one (" +
                      std::to_string(zhdata.bin_operators[func->name]) +
                      " <- old vs new -> " + std::to_string(func->priority) +
                      ")");
                  zhdata.bin_operators[func->name] = func->priority;
          } else if (func->op_type == OpType::lhs) {
            zhdata.PR_OD[{func->name, types}] = func;
            zhdata.prefix_operators[func->name] = func->priority;
          } else if (func->op_type == OpType::rhs) {
            zhdata.PO_OD[{func->name, types}] = func;
            zhdata.postfix_operators[func->name] = func->priority;
          }
        }

        ++cur;
        ScopeInfo scope;
        for (auto& [name, type] : func->args) {
          scope.vars[name] = type;
          scope.vars[name].setLval(true);
        }

        /** And then parse body */
        if (cur == main_block->nodes.end())
          throw ParserError(*line->end, "Expected function body");
        if (auto block = dynamic_cast<ast::ASTBlock*>(*cur)) {
          auto& t = res->functions.back()->body;
          t = parseASTblock(block, scope, main_scope, func->type);
        } else {
          throw ParserError(*line->end, "Expected function body");
        }
        ++cur;
      } else {
        throw ParserError(*line->begin, "Exptected declaratiion");
      }
    } else {
      throw ParserError("Random error lol (cannot cast ast node)");
    }
  }
  return res;
}
