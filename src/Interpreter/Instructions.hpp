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
  std::string what() { return msg; }
};

enum class instr : byte {
  /** does nothing*/
  nop,

  /** labels */
  label,       // labes
  label_data,  // data labes

  /** arithmetic */
  add_i32,  // pops and '+' 2 TOS 32 and pushes res
  add_i64,  // pops and '+' 2 TOS 64 and pushes res

  sub_i32,  // pops and '-' 2 TOS 32 and pushes res
  sub_i64,  // pops and '-' 2 TOS 64 and pushes res

  mul_i32,  // pops and '*' 2 TOS 32 and pushes res
  mul_i64,  // pops and '*' 2 TOS 64 and pushes res

  div_i32,  // pops and '/' 2 TOS 32 and pushes res
  div_i64,  // pops and '/' 2 TOS 64 and pushes res

  mod_i32,  // pops and '%' 2 TOS 32 and pushes res
  mod_i64,  // pops and '%' 2 TOS 64 and pushes res

  less_i32,  // pops and '<' 2 TOS 32 and pushes res
  less_i64,  // pops and '<' 2 TOS 64 and pushes res

  more_i32,  // pops and '>' 2 TOS 32 and pushes res
  more_i64,  // pops and '>' 2 TOS 64 and pushes res

  lesseq_i32,  // pops and '<=' 2 TOS 32 and pushes res
  lesseq_i64,  // pops and '<=' 2 TOS 64 and pushes res

  moreeq_i32,  // pops and '>=' 2 TOS 32 and pushes res
  moreeq_i64,  // pops and '>=' 2 TOS 64 and pushes res

  eq_64,  // pops and '==' 2 TOS 64 and pushes res
  eq_32,  // pops and '==' 2 TOS 32 and pushes res

  uneq_64,  // pops and '!=' 2 TOS 64 and pushes res
  uneq_32,  // pops and '!=' 2 TOS 32 and pushes res

  /** control flow */
  jmp,       // jumps to label (label:i32)
  jmp_if64,  // jumpls to label if 64
  call,      // jumps to label and updates call stack
  ret,       // pops call stack and clears args (args_size:i32, ret_size:i32)

  /** stack pushers */
  push_i32,          // pushes const 32 to TOS
  push_i64,          // pushes const 64 to TOS
  push_literal_ptr,  // pushes ptr by literal id
  push_stack_ptr,    // equal to push_i64; push_frame; add_i64;
  push_bytes,        // allocates n bytes at TOS
  pop_bytes,         // deallocates n bytes at TOS
  push_frame,        // pushes current frame pointer

  /** data mutation */
  deref,   // copies n bytes from ptr to TOS
  assign,  // copies n bytes from TOS to ptr

  /** IO */
  put_i32,  // out TOS i32    (i32)
  put_i64,  // out TOS i64    (i64)
  put_str,  // out TOS char*  (i64)

  out_i32,  // out TOS i32 with \n    (i32)
  out_i64,  // out TOS i64 with \n    (i64)
  out_str,  // out TOS char* with \n  (i64)

  /** memory managment */
  malloc,   // same as C malloc  (i64)
  free,     //  same as C free   (i64)
  realloc,  // same as C realloc (i64, i64)
};

}  // namespace zhin
