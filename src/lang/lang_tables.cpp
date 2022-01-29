#include "lang_tables.hpp"

namespace tables {

const std::unordered_map<std::string, bool> flags{
    {"tokens", false},
    {"exp_parser_logs", false},
    {"show_ast", false},
    {"show_st", false},
    {"show_st_cool", false},
    {"show_err", false},
    {"show_cpp", false},
    {"show_original", false},
    {"show_preprocessed", false},
    {"show_exp_tmp_tree", false},
    {"B", true},
    {"stack_trace", false},
    {"show_bytecode", false},
    {"show_type", false},
    {"pure", false},
};

const std::vector<std::pair<TOKEN, std::string>> lexer_tokens{
    {TOKEN::comment_block, R"(((\/\*[\s\S]*?\*\/)))"},
    {TOKEN::comment_line, R"((((\/\/.*))))"},
    {TOKEN::str_literal, R"(('(\\.|[^'\\])*'|`(?:\\`|[^`])*`))"},
    {TOKEN::int_literal, R"(((?:0x[0-9a-fA-F]+|0b[01]+|[0-9]+)([iu][0-9]*)?|true|false|tru|fls))"},
    {TOKEN::space, R"((( |\\\\\\ *\n)+))"},
    {TOKEN::id, R"((([_a-zA-Z][_a-zA-Z0-9]*|[\~\,\.\+\-\*\\\%\<\>\=\^\&\:\;\|\/\!\#\$\@\?]+|\[\])))"},
    {TOKEN::line_end, R"(((\n)))"},
    {TOKEN::open_p, R"(((\()))"},
    {TOKEN::close_p, R"(((\))))"},
};

const std::unordered_set<std::string> banned_ids{
    "?", "@", "<<<", ":=", "as", "|", "\\", ";"
};

const std::unordered_set<std::string> flow_ops{
    "?", "@", "<<<"
};

const std::unordered_map<std::string, int64_t> bin_operators{
    {".", 2}, {"=", 10}, {":=", 10}, {",", 17}, {"as", 4}, {"+", 6},
    {"-", 6}, {"/", 5}, {"%", 5}, {"*", 5}, {"==", 10}, {"!=", 10},
    {"<", 9}, {">", 9}, {"<=", 9}, {">=", 9}, {"&&", 14}, {"||", 15}
};

const std::unordered_set<std::string> operators{
    "!", ".", "=", ":=", ",", "*",
    "&", "as", "+", "/", "%", "-",
    "!=", "==", "out", "put", "sizeof", "malloc",
    "free", "<", ">", "<=", ">=", "||",
    "&&", "in_i8", "in_i16", "in_i32", "in_i64", "in_u8",
    "in_u16", "in_u32", "in_u64", "in_char", "in_str", "in_bool",
};

const std::unordered_set<std::string> functions{

};

const std::unordered_map<std::string, int64_t> prefix_operators{
    {"*", 3}, {"!", 3}, {"&", 3}, {"out", 3},
    {"put", 3}, {"sizeof", 3}, {"malloc", 3}, {"free", 3},

    {"in_i8", 3}, {"in_i16", 3}, {"in_i32", 3}, {"in_i64", 3},
    {"in_u8", 3}, {"in_u16", 3}, {"in_u32", 3}, {"in_u64", 3},
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

    {"f4", types::TYPE::f4T},
    {"f8", types::TYPE::f8T},
    {"f10", types::TYPE::f10T},

    {"int", types::TYPE::i64T},
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

    {types::TYPE::f4T, "f4"},
    {types::TYPE::f8T, "f8"},
    {types::TYPE::f10T, "f10"},
};

const std::unordered_map<types::TYPE, std::string> cpp_type_names{
    {types::TYPE::voidT, "void"},
    {types::TYPE::charT, "char"},
    {types::TYPE::i64T, "i64"},
    {types::TYPE::i32T, "i32"},
    {types::TYPE::u64T, "u64"},
    {types::TYPE::u32T, "u32"},
    {types::TYPE::strT, "char*"},
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

    {types::TYPE::f4T, 4},
    {types::TYPE::f8T, 8},
    {types::TYPE::f10T, 10},
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

    MAKE_C_BOP(+, i8T, i8T, i8T),
    MAKE_C_BOP(-, i8T, i8T, i8T),
    MAKE_C_BOP(*, i8T, i8T, i8T),
    MAKE_C_BOP(/, i8T, i8T, i8T),
    MAKE_C_BOP(%, i8T, i8T, i8T),
    MAKE_C_BOP(==, i8T, i8T, boolT),
    MAKE_C_BOP(!=, i8T, i8T, boolT),
    MAKE_C_BOP(<, i8T, i8T, boolT),
    MAKE_C_BOP(>, i8T, i8T, boolT),
    MAKE_C_BOP(<=, i8T, i8T, boolT),
    MAKE_C_BOP(>=, i8T, i8T, boolT),

    MAKE_C_BOP(+, i16T, i16T, i16T),
    MAKE_C_BOP(-, i16T, i16T, i16T),
    MAKE_C_BOP(*, i16T, i16T, i16T),
    MAKE_C_BOP(/, i16T, i16T, i16T),
    MAKE_C_BOP(%, i16T, i16T, i16T),
    MAKE_C_BOP(==, i16T, i16T, boolT),
    MAKE_C_BOP(!=, i16T, i16T, boolT),
    MAKE_C_BOP(<, i16T, i16T, boolT),
    MAKE_C_BOP(>, i16T, i16T, boolT),
    MAKE_C_BOP(<=, i16T, i16T, boolT),
    MAKE_C_BOP(>=, i16T, i16T, boolT),

    MAKE_C_BOP(+, i32T, i32T, i32T),
    MAKE_C_BOP(-, i32T, i32T, i32T),
    MAKE_C_BOP(*, i32T, i32T, i32T),
    MAKE_C_BOP(/, i32T, i32T, i32T),
    MAKE_C_BOP(%, i32T, i32T, i32T),
    MAKE_C_BOP(==, i32T, i32T, boolT),
    MAKE_C_BOP(!=, i32T, i32T, boolT),
    MAKE_C_BOP(<, i32T, i32T, boolT),
    MAKE_C_BOP(>, i32T, i32T, boolT),
    MAKE_C_BOP(<=, i32T, i32T, boolT),
    MAKE_C_BOP(>=, i32T, i32T, boolT),

    MAKE_C_BOP(+, i64T, i64T, i64T),
    MAKE_C_BOP(-, i64T, i64T, i64T),
    MAKE_C_BOP(*, i64T, i64T, i64T),
    MAKE_C_BOP(/, i64T, i64T, i64T),
    MAKE_C_BOP(%, i64T, i64T, i64T),
    MAKE_C_BOP(==, i64T, i64T, boolT),
    MAKE_C_BOP(!=, i64T, i64T, boolT),
    MAKE_C_BOP(<, i64T, i64T, boolT),
    MAKE_C_BOP(>, i64T, i64T, boolT),
    MAKE_C_BOP(<=, i64T, i64T, boolT),
    MAKE_C_BOP(>=, i64T, i64T, boolT),

    MAKE_C_BOP(+, u8T, u8T, u8T),
    MAKE_C_BOP(-, u8T, u8T, u8T),
    MAKE_C_BOP(*, u8T, u8T, u8T),
    MAKE_C_BOP(/, u8T, u8T, u8T),
    MAKE_C_BOP(%, u8T, u8T, u8T),
    MAKE_C_BOP(==, u8T, u8T, boolT),
    MAKE_C_BOP(!=, u8T, u8T, boolT),
    MAKE_C_BOP(<, u8T, u8T, boolT),
    MAKE_C_BOP(>, u8T, u8T, boolT),
    MAKE_C_BOP(<=, u8T, u8T, boolT),
    MAKE_C_BOP(>=, u8T, u8T, boolT),

    MAKE_C_BOP(+, u16T, u16T, u16T),
    MAKE_C_BOP(-, u16T, u16T, u16T),
    MAKE_C_BOP(*, u16T, u16T, u16T),
    MAKE_C_BOP(/, u16T, u16T, u16T),
    MAKE_C_BOP(%, u16T, u16T, u16T),
    MAKE_C_BOP(==, u16T, u16T, boolT),
    MAKE_C_BOP(!=, u16T, u16T, boolT),
    MAKE_C_BOP(<, u16T, u16T, boolT),
    MAKE_C_BOP(>, u16T, u16T, boolT),
    MAKE_C_BOP(<=, u16T, u16T, boolT),
    MAKE_C_BOP(>=, u16T, u16T, boolT),

    MAKE_C_BOP(+, u32T, u32T, u32T),
    MAKE_C_BOP(-, u32T, u32T, u32T),
    MAKE_C_BOP(*, u32T, u32T, u32T),
    MAKE_C_BOP(/, u32T, u32T, u32T),
    MAKE_C_BOP(%, u32T, u32T, u32T),
    MAKE_C_BOP(==, u32T, u32T, boolT),
    MAKE_C_BOP(!=, u32T, u32T, boolT),
    MAKE_C_BOP(<, u32T, u32T, boolT),
    MAKE_C_BOP(>, u32T, u32T, boolT),
    MAKE_C_BOP(<=, u32T, u32T, boolT),
    MAKE_C_BOP(>=, u32T, u32T, boolT),

    MAKE_C_BOP(+, u64T, u64T, u64T),
    MAKE_C_BOP(-, u64T, u64T, u64T),
    MAKE_C_BOP(*, u64T, u64T, u64T),
    MAKE_C_BOP(/, u64T, u64T, u64T),
    MAKE_C_BOP(%, u64T, u64T, u64T),
    MAKE_C_BOP(==, u64T, u64T, boolT),
    MAKE_C_BOP(!=, u64T, u64T, boolT),
    MAKE_C_BOP(<, u64T, u64T, boolT),
    MAKE_C_BOP(>, u64T, u64T, boolT),
    MAKE_C_BOP(<=, u64T, u64T, boolT),
    MAKE_C_BOP(>=, u64T, u64T, boolT),

    MAKE_C_BOP(==, charT, charT, boolT),
    MAKE_C_BOP(!=, charT, charT, boolT),
    MAKE_C_BOP(<, charT, charT, boolT),
    MAKE_C_BOP(>, charT, charT, boolT),
    MAKE_C_BOP(<=, charT, charT, boolT),
    MAKE_C_BOP(>=, charT, charT, boolT),

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

    MAKE_C_FN_1_ARGS(out, f4T, voidT),
    MAKE_C_FN_1_ARGS(out, f8T, voidT),
    MAKE_C_FN_1_ARGS(out, f10T, voidT),

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

    MAKE_C_FN_1_ARGS(put, f4T, voidT),
    MAKE_C_FN_1_ARGS(put, f8T, voidT),
    MAKE_C_FN_1_ARGS(put, f10T, voidT),

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

    MAKE_C_FN_0_ARGS(in_f4, f4T),
    MAKE_C_FN_0_ARGS(in_f8, f8T),
    MAKE_C_FN_0_ARGS(in_f10, f10T),

    MAKE_C_FN_1_ARGS(malloc, i64T, i64T),
    MAKE_C_FN_1_ARGS(calloc, i64T, voidT),
    MAKE_C_FN_1_ARGS(free, i64T, voidT),
};
}  // namespace tables