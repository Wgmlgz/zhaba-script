#pragma once
#include <inttypes.h>

#include <vector>

namespace zhin {

typedef uint8_t byte;
typedef std::vector<byte> bytevec;

std::string hexbyte(byte i) {
  std::stringstream stream;
  stream << std::setfill('0') << std::setw(2) << std::hex << (int)(i);
  return stream.str();
}

struct RuntimeError {
  std::string msg;
  RuntimeError(const std::string& new_msg) : msg(new_msg) {}
  std::string what() { return "ZHVM runtime error:" + msg; }
};

enum class instr : byte {
  /** does nothing*/
  nop,

  /** labels */
  label,       // labes
  label_data,  // data labes

  /** arithmetic */
  add_i8,
  sub_i8,
  mul_i8,
  div_i8,
  mod_i8,
  less_i8,
  more_i8,
  lesseq_i8,
  moreeq_i8,

  add_i16,
  sub_i16,
  mul_i16,
  div_i16,
  mod_i16,
  less_i16,
  more_i16,
  lesseq_i16,
  moreeq_i16,

  add_i32,
  sub_i32,
  mul_i32,
  div_i32,
  mod_i32,
  less_i32,
  more_i32,
  lesseq_i32,
  moreeq_i32,

  add_i64,
  sub_i64,
  mul_i64,
  div_i64,
  mod_i64,
  less_i64,
  more_i64,
  lesseq_i64,
  moreeq_i64,

  add_u8,
  sub_u8,
  mul_u8,
  div_u8,
  mod_u8,
  less_u8,
  more_u8,
  lesseq_u8,
  moreeq_u8,

  add_u16,
  sub_u16,
  mul_u16,
  div_u16,
  mod_u16,
  less_u16,
  more_u16,
  lesseq_u16,
  moreeq_u16,

  add_u32,
  sub_u32,
  mul_u32,
  div_u32,
  mod_u32,
  less_u32,
  more_u32,
  lesseq_u32,
  moreeq_u32,

  add_u64,
  sub_u64,
  mul_u64,
  div_u64,
  mod_u64,
  less_u64,
  more_u64,
  lesseq_u64,
  moreeq_u64,

  eq_8,
  uneq_8,

  eq_16,
  uneq_16,

  eq_32,
  uneq_32,

  uneq_64,
  eq_64,

  /** control flow */
  jmp,          // jumps to label (label:i32)
  jmp_if_bool,  // jumpls to label if 64
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
  put_i8,  // out TOS i8 to stdin         :: i8 -> void
  out_i8,  // out TOS i8 with \n to stdin :: i8 -> void
  in_i8,   // reads i8 from stdin         :: void -> i8

  put_i16,  // out TOS i16 to stdin         :: i16 -> void
  out_i16,  // out TOS i16 with \n to stdin :: i16 -> void
  in_i16,   // reads i16 from stdin         :: void -> i16

  put_i32,  // out TOS i32 to stdin         :: i32 -> void
  out_i32,  // out TOS i32 with \n to stdin :: i32 -> void
  in_i32,   // reads i32 from stdin         :: void -> i32

  put_i64,  // out TOS i64 to stdin         :: i64 -> void
  out_i64,  // out TOS i64 with \n to stdin :: i64 -> void
  in_i64,   // reads i64 from stdin         :: void -> i64

  put_u8,  // out TOS u8 to stdin         :: u8 -> void
  out_u8,  // out TOS u8 with \n to stdin :: u8 -> void
  in_u8,   // reads u8 from stdin         :: void -> u8

  put_u16,  // out TOS u16 to stdin         :: u16 -> void
  out_u16,  // out TOS u16 with \n to stdin :: u16 -> void
  in_u16,   // reads u16 from stdin         :: void -> u16

  put_u32,  // out TOS u32 to stdin         :: u32 -> void
  out_u32,  // out TOS u32 with \n to stdin :: u32 -> void
  in_u32,   // reads u32 from stdin         :: void -> u32

  put_u64,  // out TOS u64 to stdin         :: u64 -> void
  out_u64,  // out TOS u64 with \n to stdin :: u64 -> void
  in_u64,   // reads u64 from stdin         :: void -> u64

  put_str,  // out TOS str to stdin         :: str -> void
  out_str,  // out TOS str with \n to stdin :: str -> void
  in_str,   // reads str from stdin         :: void -> str

  put_char,  // out TOS char to stdin         :: char -> void
  out_char,  // out TOS char with \n to stdin :: char -> void
  in_char,   // reads char from stdin         :: void -> char

  put_bool,  // out TOS bool to stdin         :: bool -> void
  out_bool,  // out TOS bool with \n to stdin :: bool -> void
  in_bool,   // reads bool from stdin         :: void -> bool

  put_f4,  // out TOS f4 to stdin         :: f4 -> void
  out_f4,  // out TOS f4 with \n to stdin :: f4 -> void
  in_f4,   // reads f4 from stdin         :: void -> f4

  put_f8,  // out TOS f8 to stdin         :: f8 -> void
  out_f8,  // out TOS f8 with \n to stdin :: f8 -> void
  in_f8,   // reads f8 from stdin         :: void -> f8

  put_f10,  // out TOS f10 to stdin         :: f10 -> void
  out_f10,  // out TOS f10 with \n to stdin :: f10 -> void
  in_f10,   // reads f10 from stdin         :: void -> f10

  /** logic */
  and_bool,   // a && b :: bool bool -> bool
  or_bool,    // a || b :: bool bool -> bool
  not_bool,   // not a  :: bool -> bool
  not_bytes,  // not a  :: bytes -> bool

  /** memory managment */
  malloc,  // allocates n bytes :: i64 -> i64
  free,    // frees ptr   :: i64 -> void
};

}  // namespace zhin
