#include "./to_c.hpp"

size_t tab_size = 2;


std::string id2C(const std::string& str) {
  std::string ans;
  for (auto ch : str) {
    if (std::isalpha(ch)) ans += ch;
    else if (std::isdigit(ch)) ans += ch;
    else if (ch == '_')  ans += ch;
    else if (ch == '.')  ans += "_dot";
    else if (ch == '+')  ans += "_plus";
    else if (ch == '-')  ans += "_minus";
    else if (ch == '*')  ans += "_asterisk";
    else if (ch == '\\') ans += "_backslash";
    else if (ch == '/')  ans += "_slash";
    else if (ch == '%')  ans += "_percent";
    else if (ch == '<')  ans += "_less";
    else if (ch == '>')  ans += "_greater";
    else if (ch == '=')  ans += "_equal";
    else if (ch == '^')  ans += "_caret";
    else if (ch == '&')  ans += "_ampersand";
    else if (ch == ':')  ans += "_colon";
    else if (ch == '|')  ans += "_pipe";
    else if (ch == '!')  ans += "_exclamation";
    else if (ch == '#')  ans += "_hash";
    else if (ch == '$')  ans += "_dollar";
    else if (ch == '@')  ans += "_at";
    else if (ch == '?')  ans += "_question";
    else if (ch == '~')  ans += "_tilda";
    else if (ch == ',')  ans += "_comma";
    else if (ch == ' ')  ans += "_space";
    else throw std::runtime_error(std::string("cannot use '") + ch + "'");
  }
  return ans;
}

std::string toC(ZHModule* block) {
  std::string res = R"(#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef char* str;

typedef float f32;
typedef double f64;

i64 alloc(i64 size) {
  void* ptr = calloc(size, 1);
  return (i64)ptr;
}

char *inputString(){
    size_t size = 10;
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(*str)*size);
    if(!str)return str;
    while(EOF!=(ch=fgetc(stdin)) && ch != '\n'){
        str[len++]=ch;
        if(len==size){
            str = realloc(str, sizeof(*str)*(size+=16));
            if(!str)return str;
        }
    }
    str[len++]='\0';

    return realloc(str, sizeof(*str)*len);
}
)";

#define MAKE_ABOBA(name, type, mod)  \
res += #type " " #name"() {\n";                      \
res +=  "  " #type " tmp;\n"     ;                    \
res +=  "  scanf(" #mod ", &tmp);\n" ;                 \
res +=  "  return tmp;\n"          ;               \
res += "}\n";

MAKE_ABOBA(in_i8, i8, "%i")
MAKE_ABOBA(in_i16, i16, "%i")
MAKE_ABOBA(in_i32, i32, "%i")
MAKE_ABOBA(in_i64, i64, "%i")
MAKE_ABOBA(in_u8, u8, "%i")
MAKE_ABOBA(in_u16, u16, "%i")
MAKE_ABOBA(in_u32, u32, "%i")
MAKE_ABOBA(in_u64, u64, "%i")
MAKE_ABOBA(in_char, char, "%i")
MAKE_ABOBA(in_str, char*, "%s")
MAKE_ABOBA(in_bool, bool, "%i")
MAKE_ABOBA(in_f32, float, "%f")
MAKE_ABOBA(in_f64, double, "%lf")

  for (auto i : zhdata.structs_order) {
    auto id = static_cast<types::TYPE>(i);
    res += structHead2C(id);
    res += ";\n";
    res += "typedef struct __PROT_ZH_TYPE_" + id2C(zhdata.struct_names[id]);
    res += " __ZH_TYPE_" + id2C(zhdata.struct_names[id]);
    res += ";\n";
  }

  res += "\n";

  for (auto i : zhdata.structs_order) {
    auto id = static_cast<types::TYPE>(i);
    res += struct2C(id);
  }

  for (auto i : zhdata.functions) {
    res += funcHead2C(i);
    res += ";\n";
  }

  res += "\n";

  for (auto i : zhdata.functions) {
    res += func2C(i);
  }
  return res;
}

std::string type2C(const types::Type& type, std::string name = "") {
  std::string res;
  if (type.isFn()) {
    const auto& types = type.getTypes();
    res += type2C(types.front());
    res += "(*";
    res += name;
    res += ")(";
    bool start = true;
    for (int i = 1; i < types.size(); ++i) {
      if (!start) res += ", ";
      res += type2C(types[i]);
      start = false;
    }
    res += ")";
  } else if (static_cast<int>(type.getTypeId()) < 50) {
    res += zhdata.cpp_type_names.at(type.getTypeId());
  } else {
    res += id2C("__ZH_TYPE_" + zhdata.struct_names.at(type.getTypeId()));
  }
  res += std::string(type.getPtr(), '*');
  if (type.getRef()) res += "*";
  return res;
}

std::string func2C(const Function& head) {
  std::string res;
  res += id2C(head.name);
  res += "_";
  for (const auto& i : head.args) {
    res += id2C(i.type.toString());
  }
  return res;
}

std::string bop2C(const Function& head) { return "__ZH_BOP_" + func2C(head); }
std::string lop2C(const Function& head) { return "__ZH_LOP_" + func2C(head); }
std::string rop2C(const Function& head) { return "__ZH_ROP_" + func2C(head); }

std::string bop2C(const Function* head) {
  if (!head) throw std::runtime_error("null head bop");
  return bop2C(*head);
}
std::string lop2C(const Function* head) {
  if (!head) throw std::runtime_error("null head lop");
  return lop2C(*head);
}
std::string rop2C(const Function* head) {
  if (!head) throw std::runtime_error("null head rop");
  return rop2C(*head);
}

std::string exp2C(zhexp::Exp* exp) {
  std::string res;
  res += "(";
  if (auto lt = dynamic_cast<zhexp::I8Literal*>(exp)) {
    res += "(i8)" + std::to_string(lt->val);
  } else if (auto lt = dynamic_cast<zhexp::I16Literal*>(exp)) {
    res += "(i16)" + std::to_string(lt->val);
  } else if (auto lt = dynamic_cast<zhexp::I32Literal*>(exp)) {
    res += "(i32)" + std::to_string(lt->val);
  } else if (auto lt = dynamic_cast<zhexp::I64Literal*>(exp)) {
    res += "(i64)" + std::to_string(lt->val);
  } else if (auto lt = dynamic_cast<zhexp::U8Literal*>(exp)) {
    res += "(u8)" + std::to_string(lt->val);
  } else if (auto lt = dynamic_cast<zhexp::U16Literal*>(exp)) {
    res += "(u16)" + std::to_string(lt->val);
  } else if (auto lt = dynamic_cast<zhexp::U32Literal*>(exp)) {
    res += "(u32)" + std::to_string(lt->val);
  } else if (auto lt = dynamic_cast<zhexp::U64Literal*>(exp)) {
    res += "(u64)" + std::to_string(lt->val);
  } else if (auto lt = dynamic_cast<zhexp::F32Literal*>(exp)) {
    res += "(f32)" + std::to_string(lt->val);
  } else if (auto lt = dynamic_cast<zhexp::F64Literal*>(exp)) {
    res += "(f64)" + std::to_string(lt->val);
  } else if (auto lt = dynamic_cast<zhexp::BoolLiteral*>(exp)) {
    res += "(bool)" + std::to_string(lt->val);
  } else if (auto lt = dynamic_cast<zhexp::CharLiteral*>(exp)) {
    res += "(char)" + std::to_string(lt->val);
  } else if (auto lt = dynamic_cast<zhexp::StrLiteral*>(exp)) {
    res += "(str)";
    res += "\"";
    for (auto i : lt->val) {
      if (i == '\"')
        res += R"(\")";
      else if (i == '\\')
        res += R"(\\)";
      else if (i == '\b')
        res += R"(\b)";
      else if (i == '\n')
        res += R"(\n)";
      else if (i == '\t')
        res += R"(\t)";
      else if (i == '\0')
        res += R"(\0)";
      else
        res += i;
    }
    res += "\"";
  } else if (auto lt = dynamic_cast<zhexp::FnLiteral*>(exp)) {
    res += funcName2C(lt->val);
  } else if (auto op = dynamic_cast<zhexp::BinOperator*>(exp)) {
    if (op->val == "as") {
      /** I believe in weak typing supremacy 💪 */
      auto type_a = op->lhs->type;
      auto type_b = static_cast<zhexp::TypeLiteral*>(op->rhs)->literal_type;
      auto size_a = type_a.getSize();
      auto size_b = type_b.getSize();
      if (size_a != size_b)
        throw ParserError(
            op->begin, op->end,
            "Attempt to cast types with different sizes: " + type_a.toString() +
                "(" + std::to_string(size_a) + ") and " + type_a.toString() +
                "(" + std::to_string(size_b) + ")");
      if (!(type_b.getPtr() || type_b.getRef() || type_b.getTypeId() < (types::TYPE)(zhdata.first_struct_id)) ||
          !(type_a.getPtr() || type_a.getRef() || type_a.getTypeId() < (types::TYPE)(zhdata.first_struct_id)))
        throw ParserError(
            op->begin, op->end,
            "C doesn't allow conversion to non-scalar type `" + type_b.toString() + "`");
      res += "(";
      res += type2C(type_b);
      res += ")";
      res += exp2C(op->lhs);
    } else if (op->val == "=") {
      res += exp2C(op->lhs);
      res += "=";
      res += exp2C(op->rhs);
    } else if (op->val == ".") {
      if (op->type.getRef()) {
        res += "*";
      }
      res += "(";
      if (!op->lhs->type.getPtr()) {
        res += "&";
      }
      res += exp2C(op->lhs);
      res += ")->";
      res += static_cast<zhexp::IdLiteral*>(op->rhs)->val;
    } else if (op->val == ".call.call" && op->lhs->type.isFn()) {
      res += "(*";
      res += exp2C(op->lhs);
      res += ")";
      res += "(";
      auto rhs_tuple = castToTuple(op->rhs);
      auto types = op->lhs->type.getTypes();
      types.erase(types.begin());
      res += args2C(rhs_tuple, types);
      res += ")";
    } else {
      if (op->func && op->func->is_C) {
        res += "(";
        res += args2C(op->lhs, {types::Type()});
        res += ")";
        res += op->func->name != "|||" ? op->func->name : "|";
        res += "(";
        res += args2C(op->rhs, {types::Type()});
        res += ")";
      } else {
        auto lhs_tuple = castToTuple(op->lhs);
        auto rhs_tuple = castToTuple(op->rhs);
        *lhs_tuple += *rhs_tuple;

        if (op->type.getRef()) res += "*";
        res +=  (
          op->func->op_type == Function::OpType::bin ? bop2C(op->func) : (
          op->func->op_type == Function::OpType::lhs ? lop2C(op->func) : rop2C(op->func)
        )) + "(";
        res += args2C(lhs_tuple, op->func->getHead().second);
        res += ")";
      }
    }
  } else if (auto op = dynamic_cast<zhexp::PrefixOperator*>(exp)) {
    if (op->func && op->func->is_C) {
      if (0) {
      }
#define MAKE_LOP_C(name, type_, impl_)                          \
  else if (op->val == #name &&                                  \
           op->child->type.getTypeId() == types::TYPE::type_) { \
    res += impl_;                                               \
    res += args2C(op->child, {types::Type()});                  \
    res += ")";                                                 \
  }

#define MAKE_C_FN_INT(type)                     \
  MAKE_LOP_C(!, type##T, "!(")                  \
  MAKE_LOP_C(-, type##T, "-(")                  \
  MAKE_LOP_C(+, type##T, "+(")                  \
  MAKE_LOP_C(~, type##T, "~(")                  \
  MAKE_LOP_C(in_##type, voidT, "in_" #type "(") \
  MAKE_LOP_C(i8, type##T, "(i8)(")                \
  MAKE_LOP_C(i16, type##T, "(i16)(")              \
  MAKE_LOP_C(i32, type##T, "(i32)(")              \
  MAKE_LOP_C(i64, type##T, "(i64)(")              \
  MAKE_LOP_C(u8, type##T, "(u8)(")                \
  MAKE_LOP_C(u16, type##T, "(u16)(")              \
  MAKE_LOP_C(u32, type##T, "(u32)(")              \
  MAKE_LOP_C(u64, type##T, "(u64)(")              \
  MAKE_LOP_C(f32, type##T, "(f32)(")              \
  MAKE_LOP_C(f64, type##T, "(f64)(")              \
  MAKE_LOP_C(bool, type##T, "(bool)(")            \
  MAKE_LOP_C(char, type##T, "(char)(")

  MAKE_C_FN_INT(i8)
  MAKE_C_FN_INT(i16)
  MAKE_C_FN_INT(i32)
  MAKE_C_FN_INT(i64)
  MAKE_C_FN_INT(u8)
  MAKE_C_FN_INT(u16)
  MAKE_C_FN_INT(u32)
  MAKE_C_FN_INT(u64)
  MAKE_C_FN_INT(bool)
  MAKE_C_FN_INT(char)

#define MAKE_C_FN_FLOAT(type)                   \
  MAKE_LOP_C(!, type##T, "!(")                  \
  MAKE_LOP_C(-, type##T, "-(")                  \
  MAKE_LOP_C(+, type##T, "+(")                  \
  MAKE_LOP_C(in_##type, voidT, "in_" #type "(") \
  MAKE_LOP_C(i8, type##T, "(i8)(")                \
  MAKE_LOP_C(i16, type##T, "(i16)(")              \
  MAKE_LOP_C(i32, type##T, "(i32)(")              \
  MAKE_LOP_C(i64, type##T, "(i64)(")              \
  MAKE_LOP_C(u8, type##T, "(u8)(")                \
  MAKE_LOP_C(u16, type##T, "(u16)(")              \
  MAKE_LOP_C(u32, type##T, "(u32)(")              \
  MAKE_LOP_C(u64, type##T, "(u64)(")              \
  MAKE_LOP_C(f32, type##T, "(f32)(")              \
  MAKE_LOP_C(f64, type##T, "(f64)(")              \
  MAKE_LOP_C(bool, type##T, "(bool)(")            \
  MAKE_LOP_C(char, type##T, "(char)(")

  MAKE_C_FN_FLOAT(f32)
  MAKE_C_FN_FLOAT(f64)

  MAKE_LOP_C(in_str, voidT, "in_str(")

  MAKE_LOP_C(put, i8T, "printf(\"%d\", ")
  MAKE_LOP_C(out, i8T, "printf(\"%d\\n\", ")

  MAKE_LOP_C(put, i16T, "printf(\"%hd\", ")
  MAKE_LOP_C(out, i16T, "printf(\"%hd\\n\", ")

  MAKE_LOP_C(put, i32T, "printf(\"%d\", ")
  MAKE_LOP_C(out, i32T, "printf(\"%d\\n\", ")

  MAKE_LOP_C(put, i64T, "printf(\"%lld\", ")
  MAKE_LOP_C(out, i64T, "printf(\"%lld\\n\", ")

  MAKE_LOP_C(put, u8T, "printf(\"%d\", ")
  MAKE_LOP_C(out, u8T, "printf(\"%d\\n\", ")

  MAKE_LOP_C(put, u16T, "printf(\"%hd\", ")
  MAKE_LOP_C(out, u16T, "printf(\"%hd\\n\", ")

  MAKE_LOP_C(put, u32T, "printf(\"%u\", ")
  MAKE_LOP_C(out, u32T, "printf(\"%u\\n\", ")

  MAKE_LOP_C(put, u64T, "printf(\"%llu\", ")
  MAKE_LOP_C(out, u64T, "printf(\"%llu\\n\", ")

  MAKE_LOP_C(put, f32T, "printf(\"%f\", ")
  MAKE_LOP_C(out, f32T, "printf(\"%f\\n\", ")

  MAKE_LOP_C(put, f64T, "printf(\"%f\", ")
  MAKE_LOP_C(out, f64T, "printf(\"%f\\n\", ")

  MAKE_LOP_C(put, strT, "printf(\"%s\", ")
  MAKE_LOP_C(out, strT, "printf(\"%s\\n\", ")

  MAKE_LOP_C(put, charT, "printf(\"%c\", ")
  MAKE_LOP_C(out, charT, "printf(\"%c\\n\", ")

  MAKE_LOP_C(put, boolT, "printf(\"%d\", ")
  MAKE_LOP_C(out, boolT, "printf(\"%d\\n\", ")

  MAKE_LOP_C(malloc, i64T, "alloc(")
  MAKE_LOP_C(free, i64T, "free((void*) ")

  else {
    throw ParserError(op->begin, op->end, "unimplemented C op " + op->val);
      }
    } else if (op->val == "&") {
      res += "&";
      res += exp2C(op->child);
    } else if (op->val == "*" && op->func == nullptr) {
      res += "*";
      res += exp2C(op->child);
    } else {
      if (op->type.getRef()) res += "*";
      res +=  (
        op->func->op_type == Function::OpType::bin ? bop2C(op->func) : (
        op->func->op_type == Function::OpType::lhs ? lop2C(op->func) : rop2C(op->func)
      )) + "(";
      res += args2C(op->child, op->func->getHead().second );
      res += ")";
    }
  } else if (auto var = dynamic_cast<zhexp::Variable*>(exp)) {
    if (var->getType().getRef()) res += "*";
    res += "v" + std::to_string(var->getId());
  } else if (auto op = dynamic_cast<zhexp::PostfixOperator*>(exp)) {
    if (op->type.getRef()) res += "*";
    res += rop2C(op->func) + "(";
    res += args2C(op->child, op->func->getHead().second);
    res += ")";
  } else if (auto tuple = dynamic_cast<zhexp::Tuple*>(exp)) {
    for (size_t i = 0; i < tuple->content.size(); ++i) {
      if (i) res += ", ";
      res += exp2C(tuple->content[i]);
    }
  } else {
    throw std::runtime_error("unimplemented expToC ");
  }
  res += ")";
  return res;
}

std::string args2C(zhexp::Exp* exp, const std::vector<types::Type>& types) {
  std::string res;
  auto tuple = zhexp::castToTuple(exp);
  for (int i = 0; i < tuple->content.size(); ++i) {
    if (i) res += ", ";
    if (types[i].getRef()) {
      if (!tuple->content[i]->type.getLval() &&
          !tuple->content[i]->type.getRef())
        throw ParserError(
            tuple->content[i]->begin, tuple->content[i]->end,
            "Expression must be lval to be able pass by reference");
      res += "&";
    }
    res += exp2C(tuple->content[i]);
  }
  return res;
}

std::string block2C(STBlock* block, Function* fn, size_t depth) {
  std::string res;
  res += "{\n";

  for (const auto [name, varInfo] : *block->scope_info.getVars()) {
    res += std::string((depth+1) * tab_size , ' ');
    if (varInfo->type.isFn()) {
      res += type2C(varInfo->type, "v" + std::to_string(varInfo->id));
      res += ";\n";
    } else {
      res += type2C(varInfo->type);
      res += " ";
      res += "v" + std::to_string(varInfo->id);
      res += ";\n";
    }
  }

  for (auto& i : block->nodes) {
    res += node2C(i, fn, depth + 1);
    res += "\n";
  }

  res += std::string(depth * tab_size, ' ');
  res += "}";
  return res;
}

std::string node2C(STNode* node, Function* fn, size_t depth) {
  std::string res;
  res += std::string(depth * tab_size, ' ');
  if (auto exp = dynamic_cast<STExp*>(node)) {
    res += exp2C(exp->exp);
    res += ";";
  } else if (auto ret = dynamic_cast<STRet*>(node)) {
    res += "return ";
    if (fn->type.getRef()) res += "&";
    res += exp2C(ret->exp);
    res += ";";
  } else if (auto stif = dynamic_cast<STIf*>(node)) {
    res += "if (";
    res += exp2C(stif->condition);
    res += ") ";

    res += block2C(stif->body, fn, depth);
    for (int i = 0; i < stif->elseif_body.size(); ++i) {
      res += "\n else if (";
      res += exp2C(stif->elseif_body[i].first);
      res += ") ";
      res += block2C(stif->elseif_body[i].second, fn, depth);
    }

    /** <else> */
    if (stif->else_body) {
      res += " else ";
      res += block2C(stif->else_body, fn, depth);
    }
  } else if (auto stwhile = dynamic_cast<STWhile*>(node)) {
    res += "while (" + exp2C(stwhile->condition) + ") ";
    res += block2C(stwhile->body, fn, depth);
  } else if (auto block = dynamic_cast<STBlock*>(node)) {
    res += block2C(block, fn, depth + 1);
  } else {
    throw std::runtime_error("unimplemented nodeToB");
  }
  return res;
};

std::string funcName2C(Function* func) {
  return (func->op_type == Function::OpType::bin
              ? bop2C(func)
              : (func->op_type == Function::OpType::lhs ? lop2C(func)
                                                        : rop2C(func)));
}

std::string funcHead2C(Function* func) {
  std::string str;
  if (func->name == "main") {
    str += "int main(int argc, char *argv[]) ";
  } else {
    str += type2C(func->type) + " ";
    str += funcName2C(func) + "(";
    bool start = true;
    for (auto& [name, type] : func->args) {
      if (!start) str += ", ";
      if (type.isFn()) {
        str +=
            type2C(type, "v" + std::to_string(func->args_scope.getVarId(name)));
      } else {
        str += type2C(type) + " ";
        str += "v" + std::to_string(func->args_scope.getVarId(name));
      }
      start = false;
    }
    str += ")";
  }
  return str;
}

std::string funcHead2FnPtr(Function* func) {
  std::string str;
  if (func->name == "main") {
    str += "int main(int argc, char *argv[]) ";
  } else {
    str += type2C(func->type) + " ";
    str += (func->op_type == Function::OpType::bin
                ? bop2C(func)
                : (func->op_type == Function::OpType::lhs ? lop2C(func)
                                                          : rop2C(func))) +
           "(";
    bool start = true;
    for (auto& [name, type] : func->args) {
      if (!start) str += ", ";
      str += type2C(type) + " ";
      str += "v" + std::to_string(func->args_scope.getVarId(name));
      start = false;
    }
    str += ")";
  }
  return str;
}

std::string func2C(Function* fn) {
  bool is_void = fn->type.getTypeId() == types::TYPE::voidT;
  std::string res = funcHead2C(fn) + (is_void ? "" : " {") +
                    block2C(fn->body, fn) + (is_void ? "" : ";");
  if (!is_void) {
    /** Emergency exit */
    res += "printf(\"%s\", \"reached function end without returning anything ";
    res += fn->toUniqueStr();
    res += "\\n\"); exit(EXIT_FAILURE);}";
  }
  res += "\n";
  return res;
}

std::string structHead2C(types::TYPE id) {
  return "struct __PROT_ZH_TYPE_" + id2C(zhdata.struct_names[id]);
}

std::string struct2C(types::TYPE id) {
  std::string res = structHead2C(id);
  res += " {\n";
  for (const auto& [name, type] : zhdata.structs[id].members) {
    res += "  " +
           (type.isFn() ? type2C(type, name) : type2C(type) + " " + id2C(name)) +
           ";\n";
  }
  res += "};\n";
  return res;
}
