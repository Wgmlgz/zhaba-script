#pragma once
#include <cinttypes>

#include <utility>
#include <vector>

namespace zhin {

typedef uint8_t byte;
typedef std::vector<byte> bytevec;

enum class instr : byte {
  /** does nothing */
  nop,

  /** labels */
  label,       // labels
  label_data,  // data labels

  /** arithmetic */
#define MAKE_INT_B(type) \
  type ## _add,          \
  type ## _sub,          \
  type ## _mul,          \
  type ## _div,          \
  type ## _mod,          \
  type ## _less,         \
  type ## _eq,           \
  type ## _uneq,         \
  type ## _more,         \
  type ## _lesseq,       \
  type ## _moreeq,       \
  type ## _bit_xor,      \
  type ## _bit_and,      \
  type ## _bit_or,       \
  type ## _bit_not,      \
  type ## _not,          \
  type ## _in,           \
  type ## _put,          \
  type ## _out,          \
  type ## _neg,         

  MAKE_INT_B(i8)
  MAKE_INT_B(i16)
  MAKE_INT_B(i32)
  MAKE_INT_B(i64)
  MAKE_INT_B(u8)
  MAKE_INT_B(u16)
  MAKE_INT_B(u32)
  MAKE_INT_B(u64)

#define MAKE_FLOAT_B(type) \
  type ## _add,            \
  type ## _sub,            \
  type ## _mul,            \
  type ## _div,            \
  type ## _less,           \
  type ## _eq,             \
  type ## _uneq,           \
  type ## _more,           \
  type ## _lesseq,         \
  type ## _moreeq,         \
  type ## _not,            \
  type ## _in,             \
  type ## _put,            \
  type ## _out,            \
  type ## _neg,   

  MAKE_FLOAT_B(f32)
  MAKE_FLOAT_B(f64)

  /** control flow */
  jmp,          // jumps to label (label:i32)
  jmp_if_bool,  // jumps to label if 64
  call,         // jumps to label and updates call stack
  ret,          // pops call stack and clears args (args_size:i32, ret_size:i32)

  /** stack pushers */
  push_8,            // pushes const 8 to TOS
  push_16,           // pushes const 16 to TOS
  push_32,           // pushes const 32 to TOS
  push_64,           // pushes const 64 to TOS
  push_literal_ptr,  // pushes ptr by literal id
  push_stack_ptr,    // equal to push_i64; push_frame; add_i64;
  push_bytes,        // allocates n bytes at TOS
  pop_bytes,         // deallocates n bytes at TOS
  push_frame,        // pushes current frame pointer

  /** data mutation */
  deref,   // copies n bytes from ptr to TOS
  assign,  // copies n bytes from TOS to ptr

  /** IO */
  put_str,  // out TOS str to stdin         :: str -> void
  out_str,  // out TOS str with \n to stdin :: str -> void
  in_str,   // reads str from stdin         :: void -> str

  put_char,  // out TOS char to stdin         :: char -> void
  out_char,  // out TOS char with \n to stdin :: char -> void
  in_char,   // reads char from stdin         :: void -> char

  put_bool,  // out TOS bool to stdin         :: bool -> void
  out_bool,  // out TOS bool with \n to stdin :: bool -> void
  in_bool,   // reads bool from stdin         :: void -> bool

  /** logic */
  and_bool,   // a && b :: bool bool -> bool
  or_bool,    // a || b :: bool bool -> bool
  not_bool,   // not a  :: bool -> bool

  /** memory management */
  malloc,  // allocates n bytes :: i64 -> i64
  free,    // frees ptr   :: i64 -> void
};

}  // namespace zhin
