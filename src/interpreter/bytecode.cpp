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

#define INT_LABELS(type)      \
  case instr::type##_add:     \
    break;                    \
  case instr::type##_sub:     \
    break;                    \
  case instr::type##_mul:     \
    break;                    \
  case instr::type##_div:     \
    break;                    \
  case instr::type##_mod:     \
    break;                    \
  case instr::type##_bit_xor: \
    break;                    \
  case instr::type##_bit_or:  \
    break;                    \
  case instr::type##_bit_and: \
    break;                    \
  case instr::type##_bit_not: \
    break;                    \
  case instr::type##_eq:      \
    break;                    \
  case instr::type##_uneq:    \
    break;                    \
  case instr::type##_less:    \
    break;                    \
  case instr::type##_more:    \
    break;                    \
  case instr::type##_lesseq:  \
    break;                    \
  case instr::type##_moreeq:  \
    break;                    \
  case instr::type##_put:     \
    break;                    \
  case instr::type##_not:     \
    break;                    \
  case instr::type##_neg:     \
    break;                    \
  case instr::type##_out:     \
    break;                    \
  case instr::type##_in:      \
    break;

        INT_LABELS(i8)
        INT_LABELS(i16)
        INT_LABELS(i32)
        INT_LABELS(i64)
        INT_LABELS(u8)
        INT_LABELS(u16)
        INT_LABELS(u32)
        INT_LABELS(u64)

#define FLOAT_LABELS(type)   \
  case instr::type##_add:    \
    break;                   \
  case instr::type##_sub:    \
    break;                   \
  case instr::type##_mul:    \
    break;                   \
  case instr::type##_div:    \
    break;                   \
  case instr::type##_not:    \
    break;                   \
  case instr::type##_less:   \
    break;                   \
  case instr::type##_more:   \
    break;                   \
  case instr::type##_lesseq: \
    break;                   \
  case instr::type##_moreeq: \
    break;                   \
  case instr::type##_put:    \
    break;                   \
  case instr::type##_out:    \
    break;                   \
  case instr::type##_in:     \
    break;

        FLOAT_LABELS(f32)
        FLOAT_LABELS(f64)

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

#define INT_INSTR(type) \
  INSTR(type##_add)     \
  INSTR(type##_sub)     \
  INSTR(type##_mul)     \
  INSTR(type##_div)     \
  INSTR(type##_mod)     \
  INSTR(type##_bit_xor) \
  INSTR(type##_bit_or)  \
  INSTR(type##_bit_and) \
  INSTR(type##_bit_not) \
  INSTR(type##_uneq)    \
  INSTR(type##_eq)      \
  INSTR(type##_less)    \
  INSTR(type##_more)    \
  INSTR(type##_lesseq)  \
  INSTR(type##_moreeq)  \
  INSTR(type##_put)     \
  INSTR(type##_out)     \
  INSTR(type##_neg)     \
  INSTR(type##_not)     \
  INSTR(type##_in)

      INT_INSTR(i8)
      INT_INSTR(i16)
      INT_INSTR(i32)
      INT_INSTR(i64)

      INT_INSTR(u8)
      INT_INSTR(u16)
      INT_INSTR(u32)
      INT_INSTR(u64)

#define FLOAT_INSTR(type) \
  INSTR(type##_add)       \
  INSTR(type##_sub)       \
  INSTR(type##_mul)       \
  INSTR(type##_div)       \
  INSTR(type##_uneq)      \
  INSTR(type##_eq)        \
  INSTR(type##_less)      \
  INSTR(type##_more)      \
  INSTR(type##_lesseq)    \
  INSTR(type##_moreeq)    \
  INSTR(type##_put)       \
  INSTR(type##_out)       \
  INSTR(type##_neg)       \
  INSTR(type##_not)       \
  INSTR(type##_in)

      FLOAT_INSTR(f32)
      FLOAT_INSTR(f64)

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
