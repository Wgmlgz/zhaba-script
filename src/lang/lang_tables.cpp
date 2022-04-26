#include "lang_tables.hpp"

namespace tables {

const std::unordered_map<std::string, bool> flags{
    {"tokens", false},
    {"exp_parser_logs", false},
    {"show_ast", false},
    {"show_st", false},
    {"show_st_cool", false},
    {"show_c", false},
    {"show_original", false},
    {"show_preprocessed", false},
    {"B", false},
    {"stack_trace", false},
    {"show_bytecode", false},
    {"pure", false},
};

const std::vector<std::pair<TOKEN, std::string>> lexer_tokens{
    {TOKEN::comment_block, R"(((\/\*[\s\S]*?\*\/)))"},
    {TOKEN::comment_line, R"((((\/\/.*))))"},
    {TOKEN::str_literal, R"(('(\\.|[^'\\])*'|`(?:\\`|[^`])*`))"},
    {TOKEN::id,
     R"((([\~\,\.\+\-\*\\\%\<\>\=\^\&\:\;\|\/\!\#\$\@\?]*\.[\.]+[\~\,\.\+\-\*\\\%\<\>\=\^\&\:\;\|\/\!\#\$\@\?]*)))"},
    {TOKEN::int_literal,
     R"(((?:0x[0-9a-fA-F]+|0b[01]+|[0-9]+(?:\.(?!\.)[0-9]*)?|\.[0-9]+)([iuf][0-9]*)?|true|false|tru|fls))"},
    {TOKEN::space, R"((( |\\\\\\ *\n)+))"},
    {TOKEN::id,
     R"((([_a-zA-Z][_a-zA-Z0-9]*|[\~\,\.\+\-\*\\\%\<\>\=\^\&\:\;\|\/\!\#\$\@\?]+)))"},
    {TOKEN::line_end, R"(((\n)))"},
    {TOKEN::open_p, R"(((\(|\[|\{)))"},
    {TOKEN::close_p, R"(((\)|\]|\})))"},
};

const std::unordered_set<std::string> banned_ids{
    "?", "??", "@", "<<<", ":=", "as", "|", "\\", ";"};

const std::unordered_set<std::string> flow_ops{"?", "??", "@", "<<<"};

const std::unordered_map<std::string, int64_t> bin_operators{
    {"(", 2},  {"[", 2},   {"{", 2},    {".", 2},   {"as", 4},  {"/", 5},
    {"%", 5},  {"*", 5},   {"+", 6},    {"-", 6},   {">>", 7},  {"<<", 7},
    {"<", 9},  {">", 9},   {"<=", 9},   {">=", 9},  {"==", 10}, {"!=", 10},
    {"&", 11}, {"^", 12},  {"|||", 13}, {"&&", 14}, {"||", 15}, {"->", 16},
    {"=", 17}, {":=", 17}, {",", 18},
};

const std::unordered_set<std::string> operators{
    "!",      ".",      "=",      ":=",      ",",      "*",       "&",
    "as",     "+",      "/",      "%",       "-",      "!=",      "==",
    "out",    "put",    "sizeof", "malloc",  "free",   "<",       ">",
    "<=",     ">=",     "||",     "<<",      ">>",     "^",       "~",
    "|||",    "&&",     "in_i8",  "in_i16",  "in_i32", "in_i64",  "in_u8",
    "in_u16", "in_u32", "in_u64", "in_char", "in_str", "in_bool", "->",
};

const std::unordered_set<std::string> functions{

};

const std::unordered_map<std::string, int64_t> prefix_operators{
    {"*", 3},       {"!", 3},      {"~", 3},       {"+", 3},
    {"-", 3},       {"&", 3},      {"out", 3},     {"put", 3},
    {"sizeof", 3},  {"malloc", 3}, {"free", 3},

    {"in_i8", 3},   {"in_i16", 3}, {"in_i32", 3},  {"in_i64", 3},
    {"in_u8", 3},   {"in_u16", 3}, {"in_u32", 3},  {"in_u64", 3},
    {"in_char", 3}, {"in_str", 3}, {"in_bool", 3},
};

const std::unordered_map<std::string, int64_t> postfix_operators{

};

const std::unordered_map<std::string, types::TYPE> prim_types{
    {"void", types::TYPE::voidT},

    {"char", types::TYPE::charT},
    {"str", types::TYPE::strT},

    {"bool", types::TYPE::boolT},

    {"i8", types::TYPE::i8T},
    {"i16", types::TYPE::i16T},
    {"i32", types::TYPE::i32T},
    {"i64", types::TYPE::i64T},

    {"u8", types::TYPE::u8T},
    {"u16", types::TYPE::u16T},
    {"u32", types::TYPE::u32T},
    {"u64", types::TYPE::u64T},

    {"f32", types::TYPE::f32T},
    {"f64", types::TYPE::f64T},

    {"int", types::TYPE::i64T},
    {"F", types::TYPE::FT},
};

const std::unordered_map<types::TYPE, std::string> type_names{
    {types::TYPE::voidT, "void"},

    {types::TYPE::charT, "char"},
    {types::TYPE::strT, "str"},

    {types::TYPE::boolT, "bool"},

    {types::TYPE::i8T, "i8"},
    {types::TYPE::i16T, "i16"},
    {types::TYPE::i32T, "i32"},
    {types::TYPE::i64T, "i64"},

    {types::TYPE::u8T, "u8"},
    {types::TYPE::u16T, "u16"},
    {types::TYPE::u32T, "u32"},
    {types::TYPE::u64T, "u64"},

    {types::TYPE::f32T, "f32"},
    {types::TYPE::f64T, "f64"},
    {types::TYPE::FT, "F"},
};

const std::unordered_map<types::TYPE, std::string> cpp_type_names{
    {types::TYPE::voidT, "void"},

    {types::TYPE::charT, "char"},
    {types::TYPE::strT, "str"},

    {types::TYPE::boolT, "bool"},

    {types::TYPE::i8T, "i8"},
    {types::TYPE::i16T, "i16"},
    {types::TYPE::i32T, "i32"},
    {types::TYPE::i64T, "i64"},

    {types::TYPE::u8T, "u8"},
    {types::TYPE::u16T, "u16"},
    {types::TYPE::u32T, "u32"},
    {types::TYPE::u64T, "u64"},

    {types::TYPE::f32T, "f32"},
    {types::TYPE::f64T, "f64"},
    {types::TYPE::FT, "undefined"},
};

const std::unordered_map<types::TYPE, size_t> sizes{
    {types::TYPE::voidT, 0},

    {types::TYPE::charT, 1},
    {types::TYPE::strT, 8},

    {types::TYPE::boolT, 1},

    {types::TYPE::i8T, 1},
    {types::TYPE::i16T, 2},
    {types::TYPE::i32T, 4},
    {types::TYPE::i64T, 8},

    {types::TYPE::u8T, 1},
    {types::TYPE::u16T, 2},
    {types::TYPE::u32T, 4},
    {types::TYPE::u64T, 8},

    {types::TYPE::f32T, 4},
    {types::TYPE::f64T, 8},
    {types::TYPE::FT, 4},
};

const std::map<types::funcHead, Function *> B_OD = {
#define MAKE_C_BOP(name, lhst, rhst, rt)                                             \
  {                                                                            \
    {#name, {types::Type(types::TYPE::lhst), types::Type(types::TYPE::rhst)}}, \
    new Function {                                                             \
      #name,                                                                   \
      {{"a", types::Type(types::TYPE::lhst)},                                  \
        {"b", types::Type(types::TYPE::rhst)}},                                \
      types::Type(types::TYPE::rt), Function::OpType::bin, true                \
    }                                                                          \
  }

#define MAKE_INT_OPS(type)              \
    MAKE_C_BOP(+, type, type, type),    \
    MAKE_C_BOP(-, type, type, type),    \
    MAKE_C_BOP(*, type, type, type),    \
    MAKE_C_BOP(/, type, type, type),    \
    MAKE_C_BOP(%, type, type, type),    \
    MAKE_C_BOP(|||, type, type, type),    \
    MAKE_C_BOP(^, type, type, type),    \
    MAKE_C_BOP(&, type, type, type),    \
    MAKE_C_BOP(==, type, type, boolT),  \
    MAKE_C_BOP(!=, type, type, boolT),  \
    MAKE_C_BOP(<, type, type, boolT),   \
    MAKE_C_BOP(>, type, type, boolT),   \
    MAKE_C_BOP(<=, type, type, boolT),  \
    MAKE_C_BOP(>=, type, type, boolT), 

    MAKE_INT_OPS(i8T)
    MAKE_INT_OPS(i16T)
    MAKE_INT_OPS(i32T)
    MAKE_INT_OPS(i64T)
    MAKE_INT_OPS(u8T)
    MAKE_INT_OPS(u16T)
    MAKE_INT_OPS(u32T)
    MAKE_INT_OPS(u64T)
    MAKE_INT_OPS(charT)

    MAKE_C_BOP(+, f32T, f32T, f32T),
    MAKE_C_BOP(-, f32T, f32T, f32T),
    MAKE_C_BOP(*, f32T, f32T, f32T),
    MAKE_C_BOP(/, f32T, f32T, f32T),
    MAKE_C_BOP(==, f32T, f32T, boolT),
    MAKE_C_BOP(!=, f32T, f32T, boolT),
    MAKE_C_BOP(<, f32T, f32T, boolT),
    MAKE_C_BOP(>, f32T, f32T, boolT),
    MAKE_C_BOP(<=, f32T, f32T, boolT),
    MAKE_C_BOP(>=, f32T, f32T, boolT),

    MAKE_C_BOP(+, f64T, f64T, f64T),
    MAKE_C_BOP(-, f64T, f64T, f64T),
    MAKE_C_BOP(*, f64T, f64T, f64T),
    MAKE_C_BOP(/, f64T, f64T, f64T),
    MAKE_C_BOP(==, f64T, f64T, boolT),
    MAKE_C_BOP(!=, f64T, f64T, boolT),
    MAKE_C_BOP(<, f64T, f64T, boolT),
    MAKE_C_BOP(>, f64T, f64T, boolT),
    MAKE_C_BOP(<=, f64T, f64T, boolT),
    MAKE_C_BOP(>=, f64T, f64T, boolT),

    MAKE_C_BOP(&&, boolT, boolT, boolT),
    MAKE_C_BOP(||, boolT, boolT, boolT),
};

const std::map<types::funcHead, Function *> PR_OD{
#define MAKE_C_FN_0_ARGS(name, rt)                                           \
  {                                                                          \
    {(#name), {}}, new Function {                                            \
      (#name), {}, types::Type(types::TYPE::rt), Function::OpType::lhs, true \
    }                                                                        \
  }
#define MAKE_C_FN_1_ARGS(name, arg1_t, rt)                          \
  {                                                                 \
    {#name, {types::Type(types::TYPE::arg1_t)}}, new Function {     \
      (#name), {{"a", types::Type(types::TYPE::arg1_t)}},           \
          types::Type(types::TYPE::rt), Function::OpType::lhs, true \
    }                                                               \
  }

    MAKE_C_FN_1_ARGS(!, boolT, boolT),
    MAKE_C_FN_1_ARGS(!, charT, boolT),
    MAKE_C_FN_1_ARGS(!, i8T, boolT),
    MAKE_C_FN_1_ARGS(!, i16T, boolT),
    MAKE_C_FN_1_ARGS(!, i32T, boolT),
    MAKE_C_FN_1_ARGS(!, i64T, boolT),
    MAKE_C_FN_1_ARGS(!, u8T, boolT),
    MAKE_C_FN_1_ARGS(!, u16T, boolT),
    MAKE_C_FN_1_ARGS(!, u32T, boolT),
    MAKE_C_FN_1_ARGS(!, u64T, boolT),
    MAKE_C_FN_1_ARGS(!, f32T, boolT),
    MAKE_C_FN_1_ARGS(!, f64T, boolT),
    
    MAKE_C_FN_1_ARGS(-, boolT, boolT),
    MAKE_C_FN_1_ARGS(-, charT, charT),
    MAKE_C_FN_1_ARGS(-, i8T, i8T),
    MAKE_C_FN_1_ARGS(-, i16T, i16T),
    MAKE_C_FN_1_ARGS(-, i32T, i32T),
    MAKE_C_FN_1_ARGS(-, i64T, i64T),
    MAKE_C_FN_1_ARGS(-, u8T, u8T),
    MAKE_C_FN_1_ARGS(-, u16T, u16T),
    MAKE_C_FN_1_ARGS(-, u32T, u32T),
    MAKE_C_FN_1_ARGS(-, u64T, u64T),
    MAKE_C_FN_1_ARGS(-, f32T, f32T),
    MAKE_C_FN_1_ARGS(-, f64T, f64T),

    MAKE_C_FN_1_ARGS(+, boolT, boolT),
    MAKE_C_FN_1_ARGS(+, charT, charT),
    MAKE_C_FN_1_ARGS(+, i8T, i8T),
    MAKE_C_FN_1_ARGS(+, i16T, i16T),
    MAKE_C_FN_1_ARGS(+, i32T, i32T),
    MAKE_C_FN_1_ARGS(+, i64T, i64T),
    MAKE_C_FN_1_ARGS(+, u8T, u8T),
    MAKE_C_FN_1_ARGS(+, u16T, u16T),
    MAKE_C_FN_1_ARGS(+, u32T, u32T),
    MAKE_C_FN_1_ARGS(+, u64T, u64T),

    MAKE_C_FN_1_ARGS(~, boolT, boolT),
    MAKE_C_FN_1_ARGS(~, charT, charT),
    MAKE_C_FN_1_ARGS(~, i8T, i8T),
    MAKE_C_FN_1_ARGS(~, i16T, i16T),
    MAKE_C_FN_1_ARGS(~, i32T, i32T),
    MAKE_C_FN_1_ARGS(~, i64T, i64T),
    MAKE_C_FN_1_ARGS(~, u8T, u8T),
    MAKE_C_FN_1_ARGS(~, u16T, u16T),
    MAKE_C_FN_1_ARGS(~, u32T, u32T),
    MAKE_C_FN_1_ARGS(~, u64T, u64T),

    MAKE_C_FN_1_ARGS(out, i8T, voidT),
    MAKE_C_FN_1_ARGS(out, i16T, voidT),
    MAKE_C_FN_1_ARGS(out, i32T, voidT),
    MAKE_C_FN_1_ARGS(out, i64T, voidT),

    MAKE_C_FN_1_ARGS(out, u8T, voidT),
    MAKE_C_FN_1_ARGS(out, u16T, voidT),
    MAKE_C_FN_1_ARGS(out, u32T, voidT),
    MAKE_C_FN_1_ARGS(out, u64T, voidT),

    MAKE_C_FN_1_ARGS(out, strT, voidT),
    MAKE_C_FN_1_ARGS(out, charT, voidT),

    MAKE_C_FN_1_ARGS(out, boolT, voidT),

    MAKE_C_FN_1_ARGS(out, f32T, voidT),
    MAKE_C_FN_1_ARGS(out, f64T, voidT),

    MAKE_C_FN_1_ARGS(put, i8T, voidT),
    MAKE_C_FN_1_ARGS(put, i16T, voidT),
    MAKE_C_FN_1_ARGS(put, i32T, voidT),
    MAKE_C_FN_1_ARGS(put, i64T, voidT),

    MAKE_C_FN_1_ARGS(put, u8T, voidT),
    MAKE_C_FN_1_ARGS(put, u16T, voidT),
    MAKE_C_FN_1_ARGS(put, u32T, voidT),
    MAKE_C_FN_1_ARGS(put, u64T, voidT),

    MAKE_C_FN_1_ARGS(put, strT, voidT),
    MAKE_C_FN_1_ARGS(put, charT, voidT),

    MAKE_C_FN_1_ARGS(put, boolT, voidT),

    MAKE_C_FN_1_ARGS(put, f32T, voidT),
    MAKE_C_FN_1_ARGS(put, f64T, voidT),

    MAKE_C_FN_0_ARGS(in_i8, i8T),
    MAKE_C_FN_0_ARGS(in_i16, i16T),
    MAKE_C_FN_0_ARGS(in_i32, i32T),
    MAKE_C_FN_0_ARGS(in_i64, i64T),

    MAKE_C_FN_0_ARGS(in_u8, u8T),
    MAKE_C_FN_0_ARGS(in_u16, u16T),
    MAKE_C_FN_0_ARGS(in_u32, u32T),
    MAKE_C_FN_0_ARGS(in_u64, u64T),

    MAKE_C_FN_0_ARGS(in_char, charT),
    MAKE_C_FN_0_ARGS(in_str, strT),

    MAKE_C_FN_0_ARGS(in_bool, boolT),

    MAKE_C_FN_0_ARGS(in_f32, f32T),
    MAKE_C_FN_0_ARGS(in_f64, f64T),

    MAKE_C_FN_1_ARGS(malloc, i64T, i64T),
    MAKE_C_FN_1_ARGS(calloc, i64T, voidT),
    MAKE_C_FN_1_ARGS(free, i64T, voidT),
};
}  // namespace tables