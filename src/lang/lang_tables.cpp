#include "lang_tables.hpp"

namespace types {
const TYPE voidT =
    new TypeInfo{.name = "void", .complete = true, .defined = DEFINED::core};
const TYPE charT =
    new TypeInfo{.name = "char", .complete = true, .defined = DEFINED::core};
const TYPE strT =
    new TypeInfo{.name = "str", .complete = true, .defined = DEFINED::core};
const TYPE boolT =
    new TypeInfo{.name = "bool", .complete = true, .defined = DEFINED::core};
const TYPE i8T = new TypeInfo{.name = "i8", .complete = true, .defined = DEFINED::core};
const TYPE i16T =
    new TypeInfo{.name = "i16", .complete = true, .defined = DEFINED::core};
const TYPE i32T =
    new TypeInfo{.name = "i32", .complete = true, .defined = DEFINED::core};
const TYPE i64T =
    new TypeInfo{.name = "i64", .complete = true, .defined = DEFINED::core};
const TYPE u8T = new TypeInfo{.name = "u8", .complete = true, .defined = DEFINED::core};
const TYPE u16T =
    new TypeInfo{.name = "u16", .complete = true, .defined = DEFINED::core};
const TYPE u32T =
    new TypeInfo{.name = "u32", .complete = true, .defined = DEFINED::core};
const TYPE u64T =
    new TypeInfo{.name = "u64", .complete = true, .defined = DEFINED::core};
const TYPE f32T =
    new TypeInfo{.name = "f32", .complete = true, .defined = DEFINED::core};
const TYPE f64T =
    new TypeInfo{.name = "f64", .complete = true, .defined = DEFINED::core};
const TYPE FT = new TypeInfo{.name = "F", .complete = true, .defined = DEFINED::core};
}
namespace tables {

const std::vector<std::pair<TOKEN, std::string>> lexer_tokens{
    {TOKEN::str_literal, R"(('(\\.|[^'\\])*'|`(?:\\`|[^`])*`))"},
    {TOKEN::id,
     R"((([\~\,\.\+\-\*\\\%\<\>\=\^\&\:\;\|\/\!\#\$\@\?]*\.[\.]+[\~\,\.\+\-\*\\\%\<\>\=\^\&\:\;\|\/\!\#\$\@\?]*)))"},
    {TOKEN::int_literal,
     R"(((?:0x[0-9a-fA-F]+|0b[01]+|[0-9]+(?:\.(?!\.)[0-9]*)?|\.[0-9]+)([iuf][0-9]*)?|true|false|tru|fls))"},
    {TOKEN::space, R"((( *(?:(?:\/\/.*)|(?:\/\*[\s\S]*?\*\/)) *| +)))"},
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

const std::unordered_map<std::string, bool> operators{
    {"!", true},       {".", true},      {"=", true},       {":=", true},
    {",", true},       {"*", true},      {"&", true},       {"as", true},
    {"+", true},       {"/", true},      {"%", true},       {"-", true},
    {"!=", true},      {"==", true},     {"out", true},     {"put", true},
    {"sizeof", true},  {"malloc", true}, {"free", true},    {"<", true},
    {">", true},       {"<=", true},     {">=", true},      {"||", true},
    {"<<", true},      {">>", true},     {"^", true},       {"~", true},
    {"|||", true},     {"&&", true},     {"in_i8", true},   {"in_i16", true},
    {"in_i32", true},  {"in_i64", true}, {"in_u8", true},   {"in_u16", true},
    {"in_u32", true},  {"in_u64", true}, {"in_char", true}, {"in_str", true},
    {"in_bool", true}, {"->", true},
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
    {"void", types::voidT},

    {"char", types::charT},
    {"str", types::strT},

    {"bool", types::boolT},

    {"i8", types::i8T},
    {"i16", types::i16T},
    {"i32", types::i32T},
    {"i64", types::i64T},

    {"u8", types::u8T},
    {"u16", types::u16T},
    {"u32", types::u32T},
    {"u64", types::u64T},

    {"f32", types::f32T},
    {"f64", types::f64T},

    {"int", types::i64T},
    {"F", types::FT},
};

const std::unordered_map<types::TYPE, std::string> cpp_type_names{
    {types::voidT, "void"},

    {types::charT, "char"}, {types::strT, "str"},

    {types::boolT, "bool"},

    {types::i8T, "i8"},     {types::i16T, "i16"}, {types::i32T, "i32"},
    {types::i64T, "i64"},

    {types::u8T, "u8"},     {types::u16T, "u16"}, {types::u32T, "u32"},
    {types::u64T, "u64"},

    {types::f32T, "f32"},   {types::f64T, "f64"}, {types::FT, "undefined"},
};

const std::unordered_map<types::TYPE, size_t> sizes{
    {types::voidT, 0},

    {types::charT, 1},
    {types::strT, 8},

    {types::boolT, 1},

    {types::i8T, 1},
    {types::i16T, 2},
    {types::i32T, 4},
    {types::i64T, 8},

    {types::u8T, 1},
    {types::u16T, 2},
    {types::u32T, 4},
    {types::u64T, 8},

    {types::f32T, 4},
    {types::f64T, 8},
    {types::FT, 4},
};

const std::map<types::FnHead, Function *> B_OD = {
#define MAKE_C_BOP(name, lhst, rhst, rt)                                       \
  {                                                                            \
    {#name, {types::Type(types::lhst), types::Type(types::rhst)}},             \
    new Function {                                                             \
      #name,                                                                   \
      {{"a", types::Type(types::lhst)},                                        \
        {"b", types::Type(types::rhst)}},                                      \
      types::Type(types::rt), OpType::bin, DEFINED::core             \
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

const std::map<types::FnHead, Function *> PR_OD{
#define MAKE_C_FN_0_ARGS(name, rt)                      \
  {                                                     \
    {(#name), {}}, new Function {                       \
      (#name), {}, types::Type(types::rt), OpType::lhs, \
          DEFINED::core                       \
    }                                                   \
  }
#define MAKE_C_FN_1_ARGS(name, arg1_t, rt)                                  \
  {                                                                         \
    {#name, {types::Type(types::arg1_t)}}, new Function {                   \
      (#name), {{"a", types::Type(types::arg1_t)}}, types::Type(types::rt), \
          OpType::lhs, DEFINED::core                              \
    }                                                                       \
  }

#define MAKE_C_FN_INT(type)                 \
    MAKE_C_FN_1_ARGS(!, type##T, boolT),    \
    MAKE_C_FN_1_ARGS(-, type##T, type##T),  \
    MAKE_C_FN_1_ARGS(+, type##T, type##T),  \
    MAKE_C_FN_1_ARGS(~, type##T, type##T),  \
    MAKE_C_FN_1_ARGS(out, type##T, voidT),  \
    MAKE_C_FN_1_ARGS(put, type##T, voidT),  \
    MAKE_C_FN_0_ARGS(in_##type, type##T),   \
    MAKE_C_FN_1_ARGS(bool, type##T, boolT), \
    MAKE_C_FN_1_ARGS(char, type##T, charT),


    MAKE_C_FN_INT(i8)
    MAKE_C_FN_INT(i16)
    MAKE_C_FN_INT(i32)
    MAKE_C_FN_INT(i64)

    MAKE_C_FN_INT(u8)
    MAKE_C_FN_INT(u16)
    MAKE_C_FN_INT(u32)
    MAKE_C_FN_INT(u64)

    MAKE_C_FN_INT(char)
    MAKE_C_FN_INT(bool)

#define MAKE_C_FN_FLOAT(type)              \
    MAKE_C_FN_1_ARGS(!, type##T, boolT),   \
    MAKE_C_FN_1_ARGS(-, type##T, type##T), \
    MAKE_C_FN_1_ARGS(+, type##T, type##T), \
    MAKE_C_FN_1_ARGS(out, type##T, voidT), \
    MAKE_C_FN_1_ARGS(put, type##T, voidT), \
    MAKE_C_FN_0_ARGS(in_##type, type##T), 

MAKE_C_FN_FLOAT(f32)
MAKE_C_FN_FLOAT(f64)

    MAKE_C_FN_1_ARGS(out, strT, voidT),
    MAKE_C_FN_1_ARGS(put, strT, voidT),
    MAKE_C_FN_0_ARGS(in_str, strT),

    MAKE_C_FN_1_ARGS(malloc, i64T, i64T),
    MAKE_C_FN_1_ARGS(calloc, i64T, voidT),
    MAKE_C_FN_1_ARGS(free, i64T, voidT),
};
}  // namespace tables
