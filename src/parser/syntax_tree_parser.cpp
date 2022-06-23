#include "syntax_tree_parser.hpp"

STBlock* parseASTblock(ast::ASTBlock* main_block, Scope& parent_scope, Function* fn) {
  auto res = new STBlock(&parent_scope);

  for (auto i = main_block->nodes.begin(); i != main_block->nodes.end(); ++i) {
    if (auto line = dynamic_cast<ast::ASTLine*>(*i)) {
      /* decide if current line is line declaration or something */
      bool is_var_decl = true;
      auto cur = line->begin;
      bool autoT = cur->val == "auto";
      types::Type type;
      try {
        if (!autoT)
          type = types::parse(cur, res->scope_info);
        else ++cur;
      } catch (const types::TypeParsingError& err) {
        is_var_decl = false;
      }
      if (is_var_decl) {
        /* if line is variable declaration */
        auto exp = zhexp::buildExp(res->scope_info, cur, line->end);
        auto tuple = castTreeToTuple(exp);

        if (zhdata.flags["exp_parser_logs"]) {
          zhexp::printExpTree(tuple);
        }
        for (auto i : tuple->content) {
          if (auto id = dynamic_cast<zhexp::IdLiteral*>(i)) {
            /* just plane variable */
            if (autoT) throw ParserError(i->begin, i->end, "Cannot decide type for '" + id->val + "'");
            try {
              res->scope_info.setVar(id->val, type);
            } catch (const std::runtime_error& err) {
              throw ParserError(i->begin, i->end, err.what());
            }
            res->scope_info.vars.at(id->val)->type.setLval(true);
          } else {
            /* variable with assignment */
            if (auto assign = dynamic_cast<zhexp::BinOperator*>(i)) {
              if (assign->val != "=")
                throw ParserError(i->begin, i->end, "Expected assignment, but '" + assign->val + "' found");
              if (auto id = dynamic_cast<zhexp::IdLiteral*>(assign->lhs)) {
                assign->rhs = zhexp::postprocess(assign->rhs, res->scope_info);
                assign->rhs->type.setLval(false);
                /* push variable */
                if (autoT) {
                  try {
                    res->scope_info.setVar(id->val, assign->rhs->type);
                  } catch (const std::runtime_error& err) {
                    throw ParserError(assign->begin, assign->end, err.what());
                  }
                } else {
                  if (type <=> assign->rhs->type != 0) {
                    throw ParserError(assign->begin, assign->end,
                                      "Types (" + type.toString() +
                                          " " + assign->rhs->type.toString() +
                                          ") for '='(init) are different");
                  }
                  try {
                    res->scope_info.setVar(id->val, type);
                  } catch (const std::runtime_error& err) {
                    throw ParserError(assign->begin, assign->end, err.what());
                  }
                }
                res->scope_info.vars.at(id->val)->type.setLval(true);

                /* push assignment expression */
                assign->lhs = zhexp::postprocess(assign->lhs, res->scope_info);
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
        const auto& id = line->begin->val;
        if (id == "op" or id == "lop" or id == "rop" or id == "fn") {
          parseFn(zhdata.sttree, res->scope_info, line, main_block, i);
          --i;
        } else {
          /* not variable declaration so normal parsing */
          auto exp_builded = zhexp::buildExp(res->scope_info, line->begin, line->end);

          // auto exp = zhexp::parse(line->begin, line->end, cur_scope, &res->scope_info);
          if (auto ctr_ = dynamic_cast<zhexp::FlowOperator*>(exp_builded)) {

            /* "?" (if) statement parsing */
            if (ctr_->val == "?") {
              auto ctr = dynamic_cast<zhexp::FlowOperator*>(
                  zhexp::postprocess(exp_builded, res->scope_info));
              if (ctr->operand->type.getTypeId() == types::boolT) {
                auto tmp_if = new STIf;
                tmp_if->condition = ctr->operand;
                if (i + 1 != main_block->nodes.end()) {
                  if (auto body = dynamic_cast<ast::ASTBlock*>(*(i + 1))) {
                    tmp_if->body = parseASTblock(body, res->scope_info, fn);
                    ++i;
                    while (i + 1 != main_block->nodes.end()) {
                      if (auto elseif_body = dynamic_cast<ast::ASTBlock*>(*(i + 1))) {
                        if (elseif_body->btype != ast::ASTBlock::nextB) break;
                        if (elseif_body->nodes.size() == 2) {
                          if (auto line = dynamic_cast<ast::ASTLine*>(elseif_body->nodes[0])) {
                            auto exp =
                                zhexp::parse(line->begin, line->end, res->scope_info);
                            if (auto block = dynamic_cast<ast::ASTBlock*>(elseif_body->nodes[1])) {
                              tmp_if->elseif_body.emplace_back(
                                  exp, parseASTblock(block, res->scope_info, fn));
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
                            parseASTblock(else_body, res->scope_info, fn);
                        ++i;
                      }
                    }
                    res->nodes.push_back(tmp_if);
                  } else {
                    throw ParserError("Expected block after '?(if)' statement");
                  }
                }
              } else {
                throw ParserError(ctr->begin, ctr->end, "Expected bool expression in '?(if)' condition");
              }
            }
            /* "??" (switch) statement parsing */
            else if (ctr_-> val == "??") {
              auto switch_block = new STBlock(&res->scope_info);
              auto* scope = &switch_block->scope_info;
              auto ctr = dynamic_cast<zhexp::FlowOperator*>(exp_builded);
              zhexp::Exp* init_exp = new zhexp::BinOperator(
                  ctr_->begin, ctr_->end, ":=",
                  new zhexp::IdLiteral(ctr_->begin, ctr_->end, "switch"), ctr_->operand);
              init_exp = zhexp::postprocess(init_exp, *scope);
              auto init_node = new STExp;
              init_node->exp = init_exp;
              switch_block->nodes.push_back(init_node);

              if (i + 1 == main_block->nodes.end())
                throw ParserError("Expected block after '?(if)' statement");

              ++i;
              if (auto body = dynamic_cast<ast::ASTBlock*>(*i)) {
                auto j = body->nodes.begin();
                auto end = body->nodes.end();

                std::vector<std::pair<zhexp::Exp*, STBlock*>> variants;

                while (j != end) {
                  auto ast_node = *j;
                  auto line = dynamic_cast<ast::ASTLine*>(ast_node);
                  if (!line)
                    throw ParserError(ctr_->begin, ctr_->end,
                                      "Expected case expression");
                  ++j;

                  if (j == end)
                    throw ParserError(ctr_->begin, ctr_->end,
                                      "Expected block after case expression");
                  auto ast_block = *j;
                  auto block = dynamic_cast<ast::ASTBlock*>(ast_block);
                  if (!block)
                    throw ParserError(ctr_->begin, ctr_->end,
                                      "Expected block after case expression");
                  ++j;

                  auto exp_builded =
                      zhexp::buildExp(*scope, line->begin, line->end);
                  if (auto id = dynamic_cast<zhexp::IdLiteral*>(exp_builded)) {
                    if (id->val == "_") {
                      exp_builded = new zhexp::BoolLiteral(
                          *line->begin, *line->end, true);
                      exp_builded = zhexp::postprocess(exp_builded, *scope);
                    }
                  } else {
                    exp_builded = new zhexp::BinOperator(
                        *line->begin, *line->end, "==",
                        static_cast<zhexp::Exp*>(new zhexp::IdLiteral(
                            *line->begin, *line->end, "switch")),
                        exp_builded);
                    exp_builded = zhexp::postprocess(exp_builded, *scope);
                  }
                  auto processed_block = parseASTblock(block, *scope, fn);

                  variants.emplace_back(exp_builded, processed_block);
                }
                auto if_switcher = new STIf;
                if_switcher->condition = variants.front().first;
                if_switcher->body = variants.front().second;

                for (auto j = ++variants.begin(); j < variants.end(); ++j) {
                  if_switcher->elseif_body.push_back(*j);
                }
                switch_block->nodes.push_back(if_switcher);
              }


              res->nodes.push_back(switch_block);
              /* "@" (for) statement parsing */
            } else if (ctr_->val == "@") {
              auto tuple_ = castTreeToTuple(ctr_->operand);

              if (tuple_->content.size() < 1) {
                throw ParserError("Empty '@(while)' statement");
              }

              if (tuple_->content.size() > 3) {
                throw ParserError(
                    ctr_->begin, ctr_->end,
                    "You can privide max 3 expressions (init condition "
                    "iteration) '@(for)' in statement");
              }

              if (tuple_->content.size() == 1 or tuple_->content.size() == 3) {
                auto ctr = dynamic_cast<zhexp::FlowOperator*>(
                    zhexp::postprocess(exp_builded, res->scope_info));
                auto tuple = castToTuple(ctr->operand);
                /* for (;condition;) */
                if (tuple->content.size() == 1) {
                  tuple->content.insert(tuple->content.begin(), nullptr);
                  tuple->content.insert(tuple->content.end(), nullptr);
                }
                /** else for (init;condition;repeat) */
                if (tuple->content[1]->type.getTypeId() == types::boolT) {
                  if (tuple->content[0]) {
                    auto init = new STExp;
                    init->exp = tuple->content[0];
                    res->nodes.push_back(init);
                  }
                  auto tmp_while = new STWhile;
                  tmp_while->condition = tuple->content[1];
                  if (i + 1 != main_block->nodes.end()) {
                    if (auto body = dynamic_cast<ast::ASTBlock*>(*(i + 1))) {
                      tmp_while->body =
                          parseASTblock(body, res->scope_info, fn);
                      if (tuple->content[2]) {
                        auto iter = new STExp;
                        iter->exp = tuple->content[2];
                        tmp_while->body->nodes.push_back(iter);
                      }
                      res->nodes.push_back(tmp_while);
                      ++i;
                    } else {
                      throw ParserError(
                          0, "Expected block after '@(for)' statement");
                    }
                  }
                } else {
                  throw ParserError(
                      ctr->begin, ctr->end,
                      "Expected bool expression in '@(for)' condition, but '" +
                          tuple->content[1]->type.toString() + "' found");
                }
              }
              /* foreach loop */
              else {
                auto range_decl = tuple_->content[0];

                /** begin & end check */
                auto foreach_block = new STBlock(&res->scope_info);

                auto range_init = new STExp;
                auto begin = tuple_->content[1]->begin, end = tuple_->content[1]->end;
                range_init->exp = new zhexp::BinOperator(
                    begin, end, ":=",
                    new zhexp::IdLiteral(begin, end, "__range"),
                    new zhexp::PrefixOperator(begin, end, "iter",
                                              tuple_->content[1]));
                auto end_exp = new STExp;
                end_exp->exp = new zhexp::BinOperator(
                    tuple_->content[1]->begin, tuple_->content[1]->end,
                    ":=", 
                    new zhexp::IdLiteral(tuple_->content[1]->begin,
                                         tuple_->content[1]->end, "__end"),
                    new zhexp::BinOperator(
                        tuple_->content[1]->begin, tuple_->content[1]->end,
                        ".call.end",
                        new zhexp::PrefixOperator(
                            tuple_->content[1]->begin, tuple_->content[1]->end,
                            "&", 
                            new zhexp::IdLiteral(tuple_->content[1]->begin,
                                                 tuple_->content[1]->end,
                                                 "__range")),
                        new zhexp::Tuple(tuple_->content[1]->begin,
                                         tuple_->content[1]->end))

                );
                auto cur_init = new STExp;
                cur_init->exp = new zhexp::BinOperator(
                    tuple_->content[0]->begin, tuple_->content[1]->end,
                    ":=",
                    new zhexp::IdLiteral(tuple_->content[0]->begin,
                                         tuple_->content[0]->end, "__cur"),
                    new zhexp::BinOperator(
                        tuple_->content[1]->begin, tuple_->content[1]->end,
                        ".call.begin",
                        new zhexp::PrefixOperator(
                            tuple_->content[1]->begin, tuple_->content[1]->end,
                            "&", 
                            new zhexp::IdLiteral(tuple_->content[1]->begin,
                                                 tuple_->content[1]->end,
                                                 "__range")),
                        new zhexp::Tuple(tuple_->content[1]->begin,
                                         tuple_->content[1]->end)));

                zhexp::Exp* condition = new zhexp::BinOperator(
                    tuple_->content[0]->begin, tuple_->content[1]->end,
                    "!=",
                    new zhexp::IdLiteral(tuple_->content[0]->begin,
                                         tuple_->content[0]->end, "__cur"),
                    new zhexp::IdLiteral(tuple_->content[1]->begin,
                                         tuple_->content[1]->end, "__end"));
                
                auto iter = new STExp;
                iter->exp = new zhexp::PrefixOperator(
                    tuple_->content[1]->begin, tuple_->content[1]->end, "++",
                    new zhexp::IdLiteral(tuple_->content[0]->begin,
                                         tuple_->content[0]->end, "__cur"));
                
                auto var_init = new STExp;
                var_init->exp = new zhexp::BinOperator(
                    tuple_->content[1]->begin, tuple_->content[1]->end, ":=",
                    range_decl,
                    new zhexp::PrefixOperator(
                        tuple_->content[0]->begin, tuple_->content[0]->end, "*",
                        new zhexp::IdLiteral(tuple_->content[0]->begin,
                                             tuple_->content[0]->end,
                                             "__cur")));

                range_init->exp = zhexp::postprocess(range_init->exp,
                                                     foreach_block->scope_info);
                cur_init->exp = zhexp::postprocess(cur_init->exp,
                                                   foreach_block->scope_info);
                end_exp->exp =
                    zhexp::postprocess(end_exp->exp, foreach_block->scope_info);
                condition =
                    zhexp::postprocess(condition, foreach_block->scope_info);
                iter->exp =
                    zhexp::postprocess(iter->exp, foreach_block->scope_info);
                var_init->exp = zhexp::postprocess(var_init->exp,
                                                   foreach_block->scope_info);

                foreach_block->nodes.push_back(range_init);
                foreach_block->nodes.push_back(end_exp);
                foreach_block->nodes.push_back(cur_init);

                /** else for (init;condition;repeat) */
                if (condition->type.getTypeId() == types::boolT) {
                  auto tmp_while = new STWhile;
                  tmp_while->condition = condition;
                  if (i + 1 != main_block->nodes.end()) {
                    if (auto body = dynamic_cast<ast::ASTBlock*>(*(i + 1))) {
                      tmp_while->body =
                          parseASTblock(body, foreach_block->scope_info, fn);
                      tmp_while->body->nodes.insert(tmp_while->body->nodes.begin(), var_init);
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
                      "Expected bool expression in '@(for)' condition, but '" +
                          condition->type.toString() + "' found");
                }

                res->nodes.push_back(foreach_block);
                ++i;
              }
            }
            /* <(return) statement parsing */
            else if (ctr_->val == "<<<") {
              auto ctr = dynamic_cast<zhexp::FlowOperator*>(
                  zhexp::postprocess(exp_builded, res->scope_info));
              auto tmp_ret = new STRet;
              tmp_ret->exp = ctr->operand;
              if (fn->type.getTypeId() == types::voidT) {
                if (tmp_ret->exp)
                  throw ParserError(ctr->begin, ctr->end,
                                    "You cannot return something becouse "
                                    "return type is 'void'");
              } else {
                if (!tmp_ret->exp)
                  throw ParserError(ctr->begin, ctr->end,
                                    "Expected return value");
                if (tmp_ret->exp->type.getTypeId() != fn->type.getTypeId())
                  throw ParserError(ctr->begin, ctr->end,
                                    "Return type must be '" +
                                        fn->type.toString() + "', but '" +
                                        tmp_ret->exp->type.toString() +
                                        "' found");
              }

              /** Collect all destruction candidates */
              std::unordered_map<int64_t, Scope::VarInfo*> raw_map;
              res->scope_info.collectVars(fn->args_scope, raw_map);

              std::vector<std::pair<Scope::VarInfo*, Function*>> to_destroy;
              int64_t ret_id = -666;
              if (auto var = dynamic_cast<zhexp::Variable*>(tmp_ret->exp)) {
                ret_id = var->getId();
              }

              for (auto [id, var_info] : raw_map) {
                if (!var_info->type.getPtr() && !var_info->type.getRef() &&
                    id != ret_id) {
                  auto type = var_info->type;
                  type.setPtr(1);
                  type.setLval(false);
                  if (res->scope_info.B_OP.contains({".call.dtor", {type}})) {
                    to_destroy.push_back(
                        {var_info,
                         res->scope_info.B_OP.at({".call.dtor", {type}})});
                  }
                }
              }
              for (auto info : to_destroy)
                res->nodes.push_back(zhexp::callDtor(info));

              res->nodes.push_back(tmp_ret);
            } else {
              throw ParserError(
                  "Random error lol (unknown flow control operator)");
            }
          } else {
            auto exp = zhexp::postprocess(exp_builded, res->scope_info);
            /* just normal expression */
            auto tmp = new STExp;
            tmp->exp = exp;
            res->nodes.push_back(tmp); 
          }
        }
      }
    } else if (auto block = dynamic_cast<ast::ASTBlock*>(*i)) {
      throw ParserError("Unexpected block");
    } else {
      throw ParserError("Random error lol (cannot cast ast node)");
    }
  }

  /** Collect all destruction candidates */
  std::unordered_map<int64_t, Scope::VarInfo*> raw_map;
  res->scope_info.collectVars(&res->scope_info, raw_map);

  std::vector<std::pair<Scope::VarInfo*, Function*>> to_destroy;

  for (auto [id, var_info] : raw_map) {
    if (!var_info->type.getPtr() && !var_info->type.getRef() 
    ) {
      auto type = var_info->type;
      type.setPtr(1);
      type.setLval(false);
      if (res->scope_info.B_OP.contains(
              {".call.dtor", {type}})) {
        to_destroy.push_back(
            {var_info, res->scope_info.B_OP.at({".call.dtor", {type}})});
      }
    }
  }
  for (auto info : to_destroy) res->nodes.push_back(zhexp::callDtor(info));

  return res;
}

std::vector<Function*> parseImpl(ast::ASTBlock* block, const types::Type& type,
                                 Scope& main_scope, Scope& push_scope) {
  std::vector<Function*> res;
  for (auto i = block->nodes.begin(); i != block->nodes.end(); ++i) {
    auto line = dynamic_cast<ast::ASTLine*>(*i);
    if (!line) throw ParserError("Expected function decl");

    /** Function scope */
    auto func = parseOpHeader(line->begin, line->end, main_scope);
    func->args_scope = new Scope(&main_scope);
    Scope& scope = *func->args_scope;

    ++i;
    if (i == block->nodes.end()) throw ParserError("Expected block");

    auto block = dynamic_cast<ast::ASTBlock*>(*i);
    if (!block) throw ParserError("Expected block");
  
    if (func->name == "ctor") {
      if (func->type.getTypeId() == types::voidT) func->type = type;
      
      func->op_type = OpType::lhs;
    } else if (func->is_fn) {
      func->args.insert(
          func->args.begin(),
          {"slf", types::Type(type.getTypeId(), type.getPtr() + 1, 1)});
      func->name = ".call." + func->name;
      func->op_type = OpType::bin;
    }
    std::vector<types::Type> types;
    for (auto& [name, type] : func->args) {
      scope.setVar(name, type);
      scope.vars.at(name)->type.setLval(true);
      types.push_back(type);
      types.back().setLval(false);
      types.back().setRef(false);
    }
    if (func->name == "ctor") {
      func->name = type.toString();
      push_scope.setPrOp({func->name, types}, func);
      /** prefix operator priority */
      int64_t p = 3;
      if (!push_scope.prefix_operators.contains(func->name)) 
        push_scope.prefix_operators.emplace(func->name, p);
    } else if (func->is_fn) {
      push_scope.setBinOp({func->name, types}, func);
      /** '.' priority */
      int64_t p = 2;
      if (!push_scope.bin_operators.contains(func->name)) 
        push_scope.bin_operators.emplace(func->name, p);
    } else {
      if (func->op_type == OpType::bin) {
        push_scope.setBinOp({func->name, types}, func);
        if (!push_scope.bin_operators.contains(func->name))
          push_scope.bin_operators.emplace(func->name, func->priority);
      } else if (func->op_type == OpType::lhs) {
        push_scope.setPrOp({func->name, types}, func);
        /** prefix operator priority */
        int64_t p = 3;
        if (!push_scope.prefix_operators.contains(func->name))
          push_scope.prefix_operators.emplace(func->name, p);
      } else {
        push_scope.setPoOp({func->name, types}, func);
        /** postfix operator priority */
        int64_t p = 2;
        if (!push_scope.postfix_operators.contains(func->name))
          push_scope.postfix_operators.emplace(func->name, p);
      }
    }

    func->body = parseASTblock(block, scope, func);
    res.push_back(func);
  }
  return res;
}

Function* parseFn(ZHModule* res, Scope& push_scope, ast::ASTLine* line,
                  ast::ASTBlock* main_block,
                  std::vector<ast::ASTNode*>::iterator& cur,
                  bool allow_header_only) {
  /** Parse function header */
  auto func = parseOpHeader(line->begin, line->end, push_scope);

  zhdata.functions.push_back(func);

  /** Regiester function */
  std::vector<types::Type> types;
  for (const auto& [_, type] : func->args) {
    types.push_back(type);
    types.back().setLval(false);
    types.back().setRef(false);
  }

  if (func->op_type == OpType::bin) {
    push_scope.setBinOp({func->name, types}, func);
    if (push_scope.bin_operators.contains(func->name)) {
      if (func->priority != push_scope.bin_operators.at(func->name))
        throw ParserError(
            *line->begin, *line->end,
            "Operator priority doesn't match old one (" +
                std::to_string(push_scope.bin_operators.at(func->name)) +
                " <- old vs new -> " + std::to_string(func->priority) + ")");
    } else {
      push_scope.bin_operators.emplace(func->name, func->priority);
    }
  } else if (func->op_type == OpType::lhs) {
    push_scope.setPrOp({func->name, types}, func);
    if (!func->is_fn)
      if (!push_scope.prefix_operators.contains(func->name)) {
        push_scope.prefix_operators.emplace(func->name, func->priority);
      }
  } else if (func->op_type == OpType::rhs) {
    push_scope.setPoOp({func->name, types}, func);
    if (!push_scope.postfix_operators.contains(func->name)) {
      push_scope.postfix_operators.emplace(func->name, func->priority);
    }
  }

  /** And then parse body */
  ++cur;
  if (cur == main_block->nodes.end() || !dynamic_cast<ast::ASTBlock*>(*cur)) {
    if (allow_header_only) {
      return func;
    } else {
      throw ParserError(*line->end, "Expected function body");
    }
  }
  auto block = dynamic_cast<ast::ASTBlock*>(*cur);

  func->args_scope = new Scope(&push_scope);
  Scope& scope = *func->args_scope;

  for (auto& [name, type] : func->args) {
    scope.setVar(name, type);
    scope.vars.at(name)->type.setLval(true);
  }

  auto& t = zhdata.functions.back();
  t->body = parseASTblock(block, scope, func);
  
  ++cur;
  func->implemented = true;
  return func;
}

/**
 * @brief Parses .zh file to module
 */
ZHModule* parseZh(Path file_path) {
  ZHModule* res = new ZHModule(file_path);

  std::vector<Token>& tokens = *new std::vector<Token>(tokenizeFile(file_path));

  if (zhdata.flags["show_preprocessed"]) {
    std::cout << "preprocessed:\n";
    for (auto& i : tokens) {
      std::cout << (i.val);
    }
    std::cout << std::endl;
  }

  defineFlowTokens(tokens);

  auto main_block = ast::parse(tokens.begin(), tokens.end());

  if (zhdata.flags["show_ast"]) {
    auto ast_generic = ast::toGenericTree(main_block);
    std::cout << "ast:\n";
    printCompact(ast_generic);
  }

  zhdata.sttree = res;
  auto cur = main_block->nodes.begin();

  bool all_imported = false;

  while (cur != main_block->nodes.end()) {
    if (auto line = dynamic_cast<ast::ASTLine*>(*cur)) {
      const auto& id = line->begin->val;
      if (id == "use") {
        if (all_imported)
          throw ParserError(*line->begin, *line->end,
                            "`use` only allowed at the top");
        Str path = "";

        auto token = line->begin;
        ++token;
        while (token != line->end) {
          auto path_str = token->val;
          if (token->token == TOKEN::str_literal) {
            path_str.erase(path_str.begin());
            path_str.pop_back();
          }
          path += path_str;
          ++token;
        }

        while (!path.empty() && path.back() == ' ') path.pop_back();
        while (!path.empty() && path.front() == ' ') path.erase(path.begin());

        if (!Path(path).has_extension()) path += ".zh";

        if (std::filesystem::exists(zhdata.std_path / Path(path)))
          path = (zhdata.std_path / Path(path)).string();
          
        if (Path(path).is_relative())
          path = (file_path.parent_path() / path).string();

        path = resolvePath(path).string();

        if (!zhdata.used_modules.contains(path)) {
          zhdata.used_modules.emplace(path, nullptr);
          Path file_path = path;

          try {
            auto parsed_module = parseFile(file_path);

            res->dependencies.push_back(parsed_module);
            // res->scope.addParent(&parsed_module->scope);
            zhdata.sttree = res;
            zhdata.used_modules[path] = parsed_module;
          } catch (const json::parse_error& e) {
            throw ParserError(*line->begin, *line->end, e.what());
          } catch (const json::type_error& e) {
            throw ParserError(*line->begin, *line->end, e.what());
          } catch (const json::other_error& e) {
            throw ParserError(*line->begin, *line->end, e.what());
          }
        } else {
          if (zhdata.used_modules[path]) {
            // res->scope.addParent(&zhdata.used_modules[path]->scope);
          } else {
            throw ParserError(*line->begin, *line->end,
                              "module `" + path + "` isn't available yet");
          }
        }

        ++cur;
        continue;
      } else {
        all_imported = true;
      }
      if (id == "type") {
        /** Struct declaration */
        if (line->end - line->begin < 3)
          throw ParserError(*line->end, "Expected type name");
        if ((line->begin + 1)->token != TOKEN::space or
            (line->begin + 2)->token != TOKEN::id)
          throw ParserError(*line->end,
                            "Expected identifier token for struct type name");

        Str name = (line->begin + 2)->val;
        if (zhdata.global->types.contains(name)) {
          throw ParserError(*line->begin, *line->end,
                            "Type '" + name + "'already exist");
        }

        bool isGeneric = false;
        std::vector<Str> generic;

        auto token = line->begin + 3;
        while (token != line->end) {
          if (token->token == TOKEN::space)
            ++token;
          else if (token->token == TOKEN::id) {
            generic.push_back(token->val);
            ++token;
          } else {
            throw ParserError(*token, "Unexpected token");
          }
        }

        if (!generic.empty()) isGeneric = true;

        ++cur;

        /** Parse struct body */
        if (cur == main_block->nodes.end())
          throw ParserError(*line->end, "Expected type body");
        auto block = dynamic_cast<ast::ASTBlock*>(*cur);
        if (!block) throw ParserError(*line->end, "Expected type body");
        if (isGeneric) {
          try {
            types::pushGenericType(name, generic, block, zhdata.global);
          } catch (std::runtime_error err) {
            throw ParserError(*line->begin, *line->end, err.what());
          }
        } else {
          /** Push declared struct */
          types::parsePushStruct(name, block, *zhdata.global, *zhdata.global);
        }
        ++cur;
      } else if (id == "impl") {
        /** Struct implementation declaration */
        if (line->end - line->begin != 3)
          throw ParserError(*line->begin, *line->end,
                            "Expected type name and nothing else");
        if ((line->begin + 1)->token != TOKEN::space or
            (line->begin + 2)->token != TOKEN::id)
          throw ParserError(
              *(line->begin + 1), *line->end,
              "Expected identifier token for type implementation name");

        ++cur;

        auto block = dynamic_cast<ast::ASTBlock*>(*cur);
        if (!block) throw ParserError("Expected block");

        auto token = (line->begin + 2);
        auto v = token->val;
        if (zhdata.global->generics.contains(token->val)) {
          /** Push generic impl */
          zhdata.global->generics.at(token->val)->impl_blocks.push_back(block);
        } else {
          /** Parce regular implementation */
          types::Type type;
          try {
            type = types::parse(token, *zhdata.global);
          } catch (const types::TypeParsingError& err) {
            throw ParserError(*line->begin, *line->end,
                              "Fail to parse impl type");
          }

          auto funcs = parseImpl(block, type, *zhdata.global, *zhdata.global);
          for (auto i : funcs) zhdata.functions.push_back(i);
        }

        ++cur;
      } else if (id == "op" or id == "lop" or id == "rop" or id == "fn") {
        parseFn(res, *zhdata.global, line, main_block, cur);
      } else {
        throw ParserError(*line->begin, "Expected declaration");
      }
    } else {
      throw ParserError("Random error lol (cannot cast ast node)");
    }
  }

  /** save cache */
  res->saveCache();
  return res;
}

/**
 * @brief Parses `json` object to module
 */
ZHModule* moduleFromJson(json j) {
  ZHModule* res = new ZHModule(Path(
      Path(j["c_path"].get<Str>())));

  /** Store in heap for valid token refs */
  auto file_path_str = new Str(res->path.string());

  for (const auto& type : j["types"]) {
    Str zh_def, c_name, zh_name;

    if (type.is_array()) {
      zh_def = type.at(0).get<Str>();
      c_name = type.at(1).get<Str>();
      zh_name = type.size() >= 3 ? type.at(2).get<Str>() : c_name;
    } else if (type.is_object()) {
      zh_def = type.at("zh_def").get<Str>();
      c_name = type.at("c_name").get<Str>();
      zh_name =
          type.contains("zh_name") ? type.at("zh_name").get<Str>() : c_name;
    }

    auto& tokens = *(new Vec<Token>(lexer::parse(
        tables::lexer_tokens, zh_def, *file_path_str, zhdata.files_lines)));

    if (zhdata.flags["tokens"]) {
      json j;
      j["tokens"] = tokens;
      std::cout << j.dump(2) << std::endl;
    }

    auto ast = ast::parse(tokens.begin(), tokens.end());
    auto ast_iter = ast->nodes.begin();

    types::parsePushStruct(zh_name, ast, *zhdata.global, *zhdata.global);
    zhdata.global->types.at(zh_name)->defined = DEFINED::extern_c;
    zhdata.global->types.at(zh_name)->extern_name = c_name;
  }

  for (const auto& fn : j["functions"]) {
    Str zh_def, c_name;

    if (fn.is_array()) {
      zh_def = fn.at(0).get<Str>();
      c_name = fn.at(1).get<Str>();
    } else if (fn.is_object()) {
      zh_def = fn.at("zh_def").get<Str>();
      c_name = fn.at("c_name").get<Str>();
    }

    auto& tokens = *(new Vec<Token>(lexer::parse(
        tables::lexer_tokens, zh_def, *file_path_str, zhdata.files_lines)));

    if (zhdata.flags["tokens"]) {
      json j;
      j["tokens"] = tokens;
      std::cout << j.dump(2) << std::endl;
    }

    auto ast = ast::parse(tokens.begin(), tokens.end());
    auto ast_iter = ast->nodes.begin();

    auto header = parseFn(res, *zhdata.global,
                          dynamic_cast<ast::ASTLine*>(ast->nodes.front()), ast,
                          ast_iter, true);

    header->defined = DEFINED::extern_c;
    header->extern_name = c_name;
    zhdata.functions.push_back(header);
  }
  
  return res;
}

/**
 * @brief Parses .c file to module (or any file with c-like comments)
 */
ZHModule* parseC(Path file_path) {
  json j;
  j["c_path"] = file_path.string();
  j["functions"] = json::array();
  j["types"] = json::array();

  std::stringstream ss;
  auto fin = std::ifstream(file_path);
  ss << fin.rdbuf();
  Str str = ss.str();

  std::regex r{R"((\/\/.*)|(\/\*[\s\S]*?\*\/))"};
  for (auto i = std::sregex_iterator(str.begin(), str.end(), r);
       i != std::sregex_iterator(); ++i) {
    auto match = *i;

    Str str;
    if (match[1].length()) str = match[1].str().substr(2);
    if (match[2].length()) str = match[2].str().substr(2), str.pop_back(), str.pop_back();

    if (std::regex_match(str, std::regex(" *@zh-fn[\\S\\s]+"))) {
      str = std::regex_replace(str, std::regex(" *@zh-fn([\\S\\s]+)"), "$1");
      j["functions"].push_back(json::parse(str));
    }
    if (std::regex_match(str, std::regex(" *@zh-type[\\S\\s]+"))) {
      str = std::regex_replace(str, std::regex(" *@zh-type([\\S\\s]+)"), "$1");
      j["types"].push_back(json::parse(str));
    }
  }

  return moduleFromJson(j);
}

/**
 * @brief Parses file into module
 */
ZHModule* parseJson(Path file_path) {
  json j = jsonFile(file_path);

  /** Normalize path */ 
  auto c_path = Path(j["c_path"].get<Str>());
  if (Path(c_path).is_relative())
    c_path = file_path.parent_path() / c_path;
  j["c_path"] = c_path.string();

  return moduleFromJson(j);
}

/**
 * @brief Parses any into module (switches by file type)
 */
ZHModule* parseFile(Path file_path) {
  if (!zhdata.global) zhdata.global = makeCore();

  if (file_path.extension() == ".json") {
    return parseJson(file_path);
  } else if (file_path.extension() == ".zh") {
    return parseZh(file_path);
  } else {
    return parseC(file_path);
  }
}

Path resolvePath(Path file_path) {
  if (std::filesystem::exists(file_path))
    return file_path;

  if (std::filesystem::exists(zhdata.std_path / file_path))
    return zhdata.std_path / file_path;
  throw ParserError(-1, "Cannot open file '" + file_path.string() + "' ");
}
