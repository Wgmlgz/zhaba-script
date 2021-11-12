#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>
typedef int32_t i32;
typedef int64_t i64;
typedef uint32_t u32;
typedef uint64_t u64;

struct __PROT_ZH_TYPE_Vec;
typedef struct __PROT_ZH_TYPE_Vec __ZH_TYPE_Vec;

struct __PROT_ZH_TYPE_Vec {
  i64 y;
  i64 x;
};
i64 __ZH_LOP_minus_int(i64 a);
i64 __ZH_LOP_plus_int(i64 a);
i64 __ZH_LOP_exclamation_int(i64 a);
i64 __ZH_BOP_slash_intint(i64 a, i64 b);
i64 __ZH_BOP_percent_intint(i64 a, i64 b);
i64 __ZH_BOP_percent_int(u64 a, i64 b);
i64 __ZH_BOP_asterisk_intint(i64 a, i64 b);
i64 __ZH_BOP_percentpercent_intint(i64 a, i64 b);
i64 __ZH_BOP_plus_intint(i64 a, i64 b);
i64 __ZH_BOP_minus_intint(i64 a, i64 b);
i64 __ZH_BOP_less_intint(i64 a, i64 b);
i64 __ZH_BOP_greater_intint(i64 a, i64 b);
i64 __ZH_BOP_lessequal_intint(i64 a, i64 b);
i64 __ZH_BOP_greaterequal_intint(i64 a, i64 b);
i64 __ZH_BOP_equalequal_intint(i64 a, i64 b);
i64 __ZH_BOP_equalequal_charchar(char a, char b);
i64 __ZH_BOP_exclamationequal_intint(i64 a, i64 b);
i64 __ZH_BOP_ampersandampersand_intint(i64 a, i64 b);
i64 __ZH_BOP_pipepipe_intint(i64 a, i64 b);
void __ZH_LOP_out_int(i64 x);
void __ZH_LOP_out_(u64 x);
void __ZH_LOP_out_char(char ch);
void __ZH_LOP_outs_int(i64 i);
void __ZH_BOP_dotequal_intint(i64 ptr, i64 val);
i64 __ZH_LOP_ptr_get_int(i64 ptr);
i64 __ZH_LOP_malloc_int(i64 size);
void __ZH_LOP_free_int(i64 p);
void __ZH_LOP_sleep_int(i64 n);
u64 __ZH_LOP_rng_();
void __ZH_BOP_dotset_VecPintint(__ZH_TYPE_Vec* self, i64 x, i64 y);
i64 __ZH_BOP_dotdist_VecP(__ZH_TYPE_Vec* self);
__ZH_TYPE_Vec __ZH_LOP_newVec_intint(i64 x, i64 y);
int main(int argc, char *argv[]) ;

i64 __ZH_LOP_minus_int(i64 a) {
  return -a;
}
i64 __ZH_LOP_plus_int(i64 a) {
  return +a;
}
i64 __ZH_LOP_exclamation_int(i64 a) {
  return !a;
}
i64 __ZH_BOP_slash_intint(i64 a, i64 b) {
  return a / b;
}
i64 __ZH_BOP_percent_intint(i64 a, i64 b) {
  return a % b;
}
i64 __ZH_BOP_percent_int(u64 a, i64 b) {
  return a % b;
}
i64 __ZH_BOP_asterisk_intint(i64 a, i64 b) {
  return a * b;
}
i64 __ZH_BOP_percentpercent_intint(i64 a, i64 b) {
  return !(a % b);
}
i64 __ZH_BOP_plus_intint(i64 a, i64 b) {
  return a + b;
}
i64 __ZH_BOP_minus_intint(i64 a, i64 b) {
  return a - b;
}
i64 __ZH_BOP_less_intint(i64 a, i64 b) {
  return a < b;
}
i64 __ZH_BOP_greater_intint(i64 a, i64 b) {
  return a > b;
}
i64 __ZH_BOP_lessequal_intint(i64 a, i64 b) {
  return a <= b;
}
i64 __ZH_BOP_greaterequal_intint(i64 a, i64 b) {
  return a >= b;
}
i64 __ZH_BOP_equalequal_intint(i64 a, i64 b) {
  return a == b;
}
i64 __ZH_BOP_equalequal_charchar(char a, char b) {
  return a == b;
}
i64 __ZH_BOP_exclamationequal_intint(i64 a, i64 b) {
  return a != b;
}
i64 __ZH_BOP_ampersandampersand_intint(i64 a, i64 b) {
  return a && b;
}
i64 __ZH_BOP_pipepipe_intint(i64 a, i64 b) {
  return a || b;
}
void __ZH_LOP_out_int(i64 x) {
   printf("%d\n",x);;
}
void __ZH_LOP_out_(u64 x) {
   printf("%llu\n",x);;
}
void __ZH_LOP_out_char(char ch) {
   putchar(ch);;
}
void __ZH_LOP_outs_int(i64 i) {
   printf("%d ", i);;
}
void __ZH_BOP_dotequal_intint(i64 ptr, i64 val) {
   *((i64*)(ptr))=val;;
}
i64 __ZH_LOP_ptr_get_int(i64 ptr) {
  return *(i64*)(ptr);
}
i64 __ZH_LOP_malloc_int(i64 size) {
  return (i64)(malloc(size));
}
void __ZH_LOP_free_int(i64 p) {
  free((void*)p);
}
void __ZH_LOP_sleep_int(i64 n) {
  unsigned int retTime = clock() + n;
  while (clock() < retTime);
}
u64 __ZH_LOP_rng_() {
  static unsigned long long x = 666;
  x ^= x << 13;
  x ^= x >> 7;
  x ^= x << 17;
  return x;
}
void __ZH_BOP_dotset_VecPintint(__ZH_TYPE_Vec* self, i64 x, i64 y) {
  ((self)->x) = (x);
  ((self)->y) = (y);
}
i64 __ZH_BOP_dotdist_VecP(__ZH_TYPE_Vec* self) {
  return (__ZH_BOP_plus_intint((self)->x, (self)->y));
}
__ZH_TYPE_Vec __ZH_LOP_newVec_intint(i64 x, i64 y) {
  __ZH_TYPE_Vec v;
  __ZH_BOP_dotset_VecPintint((&(v)), x, y);
  return (v);
}
int main(int argc, char *argv[])  {
  __ZH_TYPE_Vec vec;
  i64 i;
  (i) = (0);
  __ZH_BOP_dotset_VecPintint((&(vec)), 2, 3);
  (i) = (0);
  while (__ZH_BOP_less_intint(i, 10)) {
    __ZH_TYPE_Vec t;
    (t) = (__ZH_LOP_newVec_intint(__ZH_BOP_percent_int(__ZH_LOP_rng_(), 10), __ZH_BOP_percent_int(__ZH_LOP_rng_(), 10)));
    if (__ZH_BOP_less_intint(__ZH_BOP_dotdist_VecP((&(t))), 5)) {
      __ZH_LOP_out_int(1);
    } else {
      __ZH_LOP_out_int(0);
    }
    (i) = (__ZH_BOP_plus_intint(i, 1));
  };
}
