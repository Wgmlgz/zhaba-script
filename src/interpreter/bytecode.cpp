#include "bytecode.hpp"

namespace zhin {
void ByteCode::push_pop_bytes(int val) {
  if (val == 0) return;
  pushVal(zhin::instr::pop_bytes);
  pushVal((int32_t) (val));
}
void ByteCode::push_push_bytes(int val) {
  if (val == 0) return;
  pushVal(zhin::instr::push_bytes);
  pushVal((int32_t) (val));
}
void ByteCode::pushLabel(int32_t label, const std::string &comment) {
  pushVal(zhin::instr::label);
  pushVal((int32_t)(label));
  labels_comments.emplace(label, comment);
}
int ByteCode::label(int t) {
  if (labels[t] == -1) throw std::runtime_error("undefined label");
  return labels[t];
}
void ByteCode::loadLabels() {
  labels.fill(-1);
  literals_labels.fill(-1);
  size_t cur = 0;
  while (cur != bytes.size()) {
    auto op = *loadInstr(cur);
    ++cur;
    switch (op) {
      case instr::nop: break;
      case instr::label: {
        labels[*loadI32(cur)] = cur + 4;
        cur += 4;
      }
        break;
      case instr::label_data : {
        literals_labels[*loadI32(cur)] = cur + 8;
        cur += 4;
        auto size = *loadI32(cur);
        cur += 4;
        cur += size;
      }
        break;
      case instr::add_i8: break;
      case instr::sub_i8: break;
      case instr::mul_i8: break;
      case instr::div_i8: break;
      case instr::mod_i8: break;
      case instr::less_i8: break;
      case instr::more_i8: break;
      case instr::lesseq_i8: break;
      case instr::moreeq_i8: break;

      case instr::add_i16: break;
      case instr::sub_i16: break;
      case instr::mul_i16: break;
      case instr::div_i16: break;
      case instr::mod_i16: break;
      case instr::less_i16: break;
      case instr::more_i16: break;
      case instr::lesseq_i16: break;
      case instr::moreeq_i16: break;

      case instr::add_i32: break;
      case instr::sub_i32: break;
      case instr::mul_i32: break;
      case instr::div_i32: break;
      case instr::mod_i32: break;
      case instr::less_i32: break;
      case instr::more_i32: break;
      case instr::lesseq_i32: break;
      case instr::moreeq_i32: break;

      case instr::add_i64: break;
      case instr::sub_i64: break;
      case instr::mul_i64: break;
      case instr::div_i64: break;
      case instr::mod_i64: break;
      case instr::less_i64: break;
      case instr::more_i64: break;
      case instr::lesseq_i64: break;
      case instr::moreeq_i64: break;

      case instr::add_u8: break;
      case instr::sub_u8: break;
      case instr::mul_u8: break;
      case instr::div_u8: break;
      case instr::mod_u8: break;
      case instr::less_u8: break;
      case instr::more_u8: break;
      case instr::lesseq_u8: break;
      case instr::moreeq_u8: break;

      case instr::add_u16: break;
      case instr::sub_u16: break;
      case instr::mul_u16: break;
      case instr::div_u16: break;
      case instr::mod_u16: break;
      case instr::less_u16: break;
      case instr::more_u16: break;
      case instr::lesseq_u16: break;
      case instr::moreeq_u16: break;

      case instr::add_u32: break;
      case instr::sub_u32: break;
      case instr::mul_u32: break;
      case instr::div_u32: break;
      case instr::mod_u32: break;
      case instr::less_u32: break;
      case instr::more_u32: break;
      case instr::lesseq_u32: break;
      case instr::moreeq_u32: break;

      case instr::add_u64: break;
      case instr::sub_u64: break;
      case instr::mul_u64: break;
      case instr::div_u64: break;
      case instr::mod_u64: break;
      case instr::less_u64: break;
      case instr::more_u64: break;
      case instr::lesseq_u64: break;
      case instr::moreeq_u64: break;

      case instr::add_f32: break;
      case instr::sub_f32: break;
      case instr::mul_f32: break;
      case instr::div_f32: break;
      case instr::less_f32: break;
      case instr::more_f32: break;
      case instr::lesseq_f32: break;
      case instr::moreeq_f32: break;

      case instr::add_f64: break;
      case instr::sub_f64: break;
      case instr::mul_f64: break;
      case instr::div_f64: break;
      case instr::less_f64: break;
      case instr::more_f64: break;
      case instr::lesseq_f64: break;
      case instr::moreeq_f64: break;

      case instr::eq_8: break;
      case instr::uneq_8: break;
      case instr::eq_16: break;
      case instr::uneq_16: break;
      case instr::eq_32: break;
      case instr::uneq_32: break;
      case instr::eq_64: break;
      case instr::uneq_64: break;

      case instr::jmp: cur += 4;
        break;
      case instr::call: cur += 4;
        break;
      case instr::ret: cur += 4 + 4;
        break;

      case instr::jmp_if_bool: cur += 4;
        break;
      case instr::push_8: cur += 1;
        break;
      case instr::push_16: cur += 2;
        break;
      case instr::push_32: cur += 4;
        break;
      case instr::push_64: cur += 8;
        break;
      case instr::push_frame: break;
      case instr::deref: cur += 4;
        break;
      case instr::assign: cur += 4;
        break;
      case instr::push_literal_ptr: cur += 4;
        break;
      case instr::push_stack_ptr: cur += 8;
        break;
      case instr::push_bytes: cur += 4;
        break;
      case instr::pop_bytes: cur += 4;
        break;

      case instr::out_i8: break;
      case instr::put_i8: break;
      case instr::in_i8: break;

      case instr::out_i16: break;
      case instr::put_i16: break;
      case instr::in_i16: break;

      case instr::out_i32: break;
      case instr::put_i32: break;
      case instr::in_i32: break;

      case instr::put_i64: break;
      case instr::out_i64: break;
      case instr::in_i64: break;

      case instr::out_u8: break;
      case instr::put_u8: break;
      case instr::in_u8: break;

      case instr::out_u16: break;
      case instr::put_u16: break;
      case instr::in_u16: break;

      case instr::out_u32: break;
      case instr::put_u32: break;
      case instr::in_u32: break;

      case instr::put_u64: break;
      case instr::out_u64: break;
      case instr::in_u64: break;

      case instr::put_f32: break;
      case instr::out_f32: break;
      case instr::in_f32: break;

      case instr::put_f64: break;
      case instr::out_f64: break;
      case instr::in_f64: break;

      case instr::put_str: break;
      case instr::out_str: break;
      case instr::in_str: break;

      case instr::put_char: break;
      case instr::out_char: break;
      case instr::in_char: break;

      case instr::malloc: break;
      case instr::free: break;

      case instr::and_bool: break;
      case instr::or_bool: break;
      case instr::not_bool: break;

      case instr::not_bytes: cur += 4;
        break;

      default:
        throw std::runtime_error("unimplemented loadLabels: " +
            std::to_string(static_cast<int>(op)));
        break;
    }
  }
}
size_t ByteCode::size() const { return bytes.size(); }
byte *ByteCode::loadBytes(size_t index, size_t size) {
  if (index + size > bytes.size())
    throw RuntimeError("read outside bytecode");
  return bytes.data() + index;
}
instr *ByteCode::loadInstr(size_t index) {
  return (instr *)(loadBytes(index, 1));
}
int8_t *ByteCode::loadI8(size_t index) {
  return (int8_t *)(loadBytes(index, 1));
}
int16_t *ByteCode::loadI16(size_t index) {
  return (int16_t *)(loadBytes(index, 2));
}
int32_t *ByteCode::loadI32(size_t index) {
  return (int32_t *)(loadBytes(index, 4));
}
int64_t *ByteCode::loadI64(size_t index) {
  return (int64_t *)(loadBytes(index, 8));
}
uint8_t *ByteCode::loadU8(size_t index) {
  return (uint8_t *)(loadBytes(index, 1));
}
uint16_t *ByteCode::loadU16(size_t index) {
  return (uint16_t *)(loadBytes(index, 2));
}
uint32_t *ByteCode::loadU32(size_t index) {
  return (uint32_t *)(loadBytes(index, 4));
}
uint64_t *ByteCode::loadU64(size_t index) {
  return (uint64_t *)(loadBytes(index, 8));
}
void ByteCode::popBytes(size_t size) {
  for (int i = 0; i < size; ++i) bytes.pop_back();
}
byte *ByteCode::loadLiteral(int64_t ptr, int size) {
  if ((ptr & 0xff54000000000000) != 0xff54000000000000)
    throw RuntimeError("ptr is not literals member");
  /** Unsafe as fck */
  return bytes.data() + (ptr & 0x0000FFFFFFFFFFFF);
}

std::pair<std::string, std::map<size_t, std::string>> ByteCode::dis() {
  size_t cur = 0;
  std::string all;
  std::map<size_t, std::string> mp;
  while (cur != bytes.size()) {
    std::stringstream ss;
    ss << std::setfill('0') << std::setw(4) << std::hex << cur;
    std::string res;
    res += ss.str();
    size_t old_cur = cur;
    auto op = *loadInstr(cur);
    ++cur;
    switch (op) {
#define INSTR(name)           \
  case instr::name:           \
    res += "    " #name "\n"; \
    break;
#define INSTR_I8(name)                   \
  case instr::name:                       \
    res += "    " #name " ";              \
    res += std::to_string(*loadI8(cur)); \
    res += "\n";                          \
    cur += 1;                             \
    break;
#define INSTR_I16(name)                   \
  case instr::name:                       \
    res += "    " #name " ";              \
    res += std::to_string(*loadI16(cur)); \
    res += "\n";                          \
    cur += 2;                             \
    break;
#define INSTR_I32(name)                   \
  case instr::name:                       \
    res += "    " #name " ";              \
    res += std::to_string(*loadI32(cur)); \
    res += "\n";                          \
    cur += 4;                             \
    break;
#define INSTR_I32_2(name)                 \
  case instr::name:                       \
    res += "    " #name " ";              \
    res += std::to_string(*loadI32(cur)); \
    res += " ";                           \
    cur += 4;                             \
    res += std::to_string(*loadI32(cur)); \
    res += "\n";                          \
    cur += 4;                             \
    break;
#define INSTR_I64(name)                   \
  case instr::name:                       \
    res += "    " #name " ";              \
    res += std::to_string(*loadI64(cur)); \
    res += "\n";                          \
    cur += 8;                             \
    break;
#define INSTR_U8(name)                   \
  case instr::name:                      \
    res += "    " #name " ";             \
    res += std::to_string(*loadU8(cur)); \
    res += "\n";                         \
    cur += 1;                            \
    break;
#define INSTR_U16(name)                   \
  case instr::name:                       \
    res += "    " #name " ";              \
    res += std::to_string(*loadU16(cur)); \
    res += "\n";                          \
    cur += 2;                             \
    break;
#define INSTR_U32(name)                   \
  case instr::name:                       \
    res += "    " #name " ";              \
    res += std::to_string(*loadU32(cur)); \
    res += "\n";                          \
    cur += 4;                             \
    break;
#define INSTR_U64(name)                   \
  case instr::name:                       \
    res += "    " #name " ";              \
    res += std::to_string(*loadU64(cur)); \
    res += "\n";                          \
    cur += 8;                             \
    break;
      INSTR(nop)
      case instr::label: {
        res += "  label ";
        auto label = *loadI32(cur);
        res += std::to_string(label);
        res += " ";
        res += labels_comments[label];
        res += "\n";
        cur += 4;
      } break;
      case instr::label_data: {
        auto id = *loadI32(cur);
        // literals_labels[id] = cur + 4;
        cur += 4;
        auto size = *loadI32(cur);
        cur += 4;
        res += "  label_data " + std::to_string(id) +
            " " + std::to_string(size) + " ";
        res += std::string(reinterpret_cast<char *>(loadBytes(cur, 1)));
        cur += size;
        res += "\n";
      }
        break;
      INSTR_I32(jmp)
      INSTR_I32(call)
      INSTR_I32(jmp_if_bool)
      INSTR_I32_2(ret)
      INSTR_I32(push_literal_ptr)

      INSTR(add_i8)
      INSTR(sub_i8)
      INSTR(mul_i8)
      INSTR(div_i8)
      INSTR(mod_i8)
      INSTR(less_i8)
      INSTR(more_i8)
      INSTR(lesseq_i8)
      INSTR(moreeq_i8)
      INSTR(put_i8)
      INSTR(out_i8)
      INSTR(in_i8)

      INSTR(add_i16)
      INSTR(sub_i16)
      INSTR(mul_i16)
      INSTR(div_i16)
      INSTR(mod_i16)
      INSTR(less_i16)
      INSTR(more_i16)
      INSTR(lesseq_i16)
      INSTR(moreeq_i16)
      INSTR(put_i16)
      INSTR(out_i16)
      INSTR(in_i16)

      INSTR(add_i32)
      INSTR(sub_i32)
      INSTR(mul_i32)
      INSTR(div_i32)
      INSTR(mod_i32)
      INSTR(less_i32)
      INSTR(more_i32)
      INSTR(lesseq_i32)
      INSTR(moreeq_i32)
      INSTR(put_i32)
      INSTR(out_i32)
      INSTR(in_i32)

      INSTR(add_i64)
      INSTR(sub_i64)
      INSTR(mul_i64)
      INSTR(div_i64)
      INSTR(mod_i64)
      INSTR(less_i64)
      INSTR(more_i64)
      INSTR(lesseq_i64)
      INSTR(moreeq_i64)
      INSTR(put_i64)
      INSTR(out_i64)
      INSTR(in_i64)

      INSTR(add_u8)
      INSTR(sub_u8)
      INSTR(mul_u8)
      INSTR(div_u8)
      INSTR(mod_u8)
      INSTR(less_u8)
      INSTR(more_u8)
      INSTR(lesseq_u8)
      INSTR(moreeq_u8)
      INSTR(put_u8)
      INSTR(out_u8)
      INSTR(in_u8)

      INSTR(add_u16)
      INSTR(sub_u16)
      INSTR(mul_u16)
      INSTR(div_u16)
      INSTR(mod_u16)
      INSTR(less_u16)
      INSTR(more_u16)
      INSTR(lesseq_u16)
      INSTR(moreeq_u16)
      INSTR(put_u16)
      INSTR(out_u16)
      INSTR(in_u16)

      INSTR(add_u32)
      INSTR(sub_u32)
      INSTR(mul_u32)
      INSTR(div_u32)
      INSTR(mod_u32)
      INSTR(less_u32)
      INSTR(more_u32)
      INSTR(lesseq_u32)
      INSTR(moreeq_u32)
      INSTR(put_u32)
      INSTR(out_u32)
      INSTR(in_u32)

      INSTR(add_u64)
      INSTR(sub_u64)
      INSTR(mul_u64)
      INSTR(div_u64)
      INSTR(mod_u64)
      INSTR(less_u64)
      INSTR(more_u64)
      INSTR(lesseq_u64)
      INSTR(moreeq_u64)
      INSTR(put_u64)
      INSTR(out_u64)
      INSTR(in_u64)

      INSTR(add_f32)
      INSTR(sub_f32)
      INSTR(mul_f32)
      INSTR(div_f32)
      INSTR(less_f32)
      INSTR(more_f32)
      INSTR(lesseq_f32)
      INSTR(moreeq_f32)
      INSTR(put_f32)
      INSTR(out_f32)
      INSTR(in_f32)

      INSTR(add_f64)
      INSTR(sub_f64)
      INSTR(mul_f64)
      INSTR(div_f64)
      INSTR(less_f64)
      INSTR(more_f64)
      INSTR(lesseq_f64)
      INSTR(moreeq_f64)
      INSTR(put_f64)
      INSTR(out_f64)
      INSTR(in_f64)

      INSTR(uneq_8)
      INSTR(eq_8)

      INSTR(uneq_16)
      INSTR(eq_16)

      INSTR(uneq_32)
      INSTR(eq_32)

      INSTR(eq_64)
      INSTR(uneq_64)

      INSTR_I8(push_8)
      INSTR_I16(push_16)
      INSTR_I32(push_32)
      INSTR_I64(push_64)

      INSTR(put_str)
      INSTR(out_str)
      INSTR(in_str)

      INSTR(put_char)
      INSTR(out_char)
      INSTR(in_char)

      INSTR(push_frame)
      INSTR_I32(deref)
      INSTR_I32(assign)
      INSTR_I64(push_stack_ptr)
      INSTR_I32(push_bytes)
      INSTR_I32(pop_bytes)
      INSTR(and_bool)
      INSTR(or_bool)
      INSTR(not_bool)
      INSTR_I32(not_bytes)
      INSTR(malloc)
      INSTR(free)
      default:
        throw std::runtime_error("unimplemented dis" +
                                 std::to_string(static_cast<int>(op)));
        break;
    }
    all += res;
    mp[old_cur] = res;
  }
  return {all, mp};
}
}  // namespace zhin
