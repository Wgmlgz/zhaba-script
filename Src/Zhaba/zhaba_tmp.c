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
void __ZH_BOP_dotequal_intint(i64 ptr, i64 val);
i64 __ZH_LOP_ptr_get_int(i64 ptr);
i64 __ZH_LOP_malloc_int(i64 size);
void __ZH_LOP_free_int(i64 p);
void __ZH_LOP_sleep_int(i64 n);
u64 __ZH_LOP_rng_();
__ZH_TYPE_Vec __ZH_LOP_newVec_();
i64 __ZH_BOP_dotgetX_VecP(__ZH_TYPE_Vec* self);
i64 __ZH_BOP_dotgetY_VecP(__ZH_TYPE_Vec* self);
void __ZH_BOP_dotsetX_VecPint(__ZH_TYPE_Vec* self, i64 x);
void __ZH_BOP_dotsetY_VecPint(__ZH_TYPE_Vec* self, i64 y);
i64 __ZH_LOP_vecGet_VecP(__ZH_TYPE_Vec* v);
void __ZH_LOP_vecSet_VecPint(__ZH_TYPE_Vec* v, i64 val);
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
__ZH_TYPE_Vec __ZH_LOP_newVec_() {
  __ZH_TYPE_Vec v;
  ((v).x) = (0);
  return (v);
}
i64 __ZH_BOP_dotgetX_VecP(__ZH_TYPE_Vec* self) {
  return ((self)->x);
}
i64 __ZH_BOP_dotgetY_VecP(__ZH_TYPE_Vec* self) {
  return ((self)->y);
}
void __ZH_BOP_dotsetX_VecPint(__ZH_TYPE_Vec* self, i64 x) {
  ((self)->x) = (x);
}
void __ZH_BOP_dotsetY_VecPint(__ZH_TYPE_Vec* self, i64 y) {
  ((self)->y) = (y);
}
i64 __ZH_LOP_vecGet_VecP(__ZH_TYPE_Vec* v) {
  return ((v)->x);
}
void __ZH_LOP_vecSet_VecPint(__ZH_TYPE_Vec* v, i64 val) {
  ((v)->x) = (val);
}
int main(int argc, char *argv[])  {
  __ZH_TYPE_Vec vec;
  i64 i;
  (i) = (0);
  (i) = (0);
  while (__ZH_BOP_less_intint(i, 10)) {
    __ZH_LOP_out_int(__ZH_BOP_percent_int(__ZH_LOP_rng_(), 10));
    (i) = (__ZH_BOP_plus_intint(i, 1));
  };
}
