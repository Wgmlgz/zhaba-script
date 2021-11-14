#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>
typedef int32_t i32;
typedef int64_t i64;
typedef uint32_t u32;
typedef uint64_t u64;

struct __PROT_ZH_TYPE_VecInt;
typedef struct __PROT_ZH_TYPE_VecInt __ZH_TYPE_VecInt;
struct __PROT_ZH_TYPE_Range;
typedef struct __PROT_ZH_TYPE_Range __ZH_TYPE_Range;

struct __PROT_ZH_TYPE_VecInt {
  i64* head;
  i64 capacity;
  i64 size;
};
struct __PROT_ZH_TYPE_Range {
  i64 init;
  i64 end;
  i64 begin;
  i64 cur;
};
i64 __ZH_LOP_minus_int(i64 a);
i64 __ZH_LOP_exclamation_int(i64 a);
i64 __ZH_BOP_slash_intint(i64 a, i64 b);
i64 __ZH_BOP_percent_intint(i64 a, i64 b);
i64 __ZH_BOP_percent_int(u64 a, i64 b);
i64 __ZH_BOP_asterisk_intint(i64 a, i64 b);
i64 __ZH_BOP_plus_intint(i64 a, i64 b);
i64 __ZH_BOP_minus_intint(i64 a, i64 b);
i64 __ZH_BOP_less_intint(i64 a, i64 b);
i64 __ZH_BOP_greater_intint(i64 a, i64 b);
i64 __ZH_BOP_lessequal_intint(i64 a, i64 b);
i64 __ZH_BOP_greaterequal_intint(i64 a, i64 b);
i64 __ZH_BOP_equalequal_intint(i64 a, i64 b);
i64 __ZH_BOP_equalequal_charchar(char a, char b);
i64 __ZH_BOP_ampersandampersand_intint(i64 a, i64 b);
i64 __ZH_BOP_pipepipe_intint(i64 a, i64 b);
i64 __ZH_LOP_plus_int(i64 a);
i64 __ZH_BOP_percentpercent_intint(i64 a, i64 b);
i64 __ZH_BOP_exclamationequal_intint(i64 a, i64 b);
i64 __ZH_BOP_exclamationequal_charchar(char a, char b);
i64 __ZH_BOP_plusequal_intPint(i64* a, i64 b);
i64 __ZH_BOP_minusequal_intPint(i64* a, i64 b);
i64 __ZH_BOP_slashequal_intPint(i64* a, i64 b);
i64 __ZH_BOP_percentequal_intPint(i64* a, i64 b);
i64 __ZH_BOP_asteriskequal_intPint(i64* a, i64 b);
void __ZH_LOP_put_str(char* s);
void __ZH_LOP_put_int(i64 n);
void __ZH_LOP_put_char(char ch);
void __ZH_LOP_out_int(i64 x);
void __ZH_LOP_out_(u64 x);
void __ZH_LOP_out_str(char* s);
void __ZH_LOP_out_char(char ch);
void __ZH_LOP_outs_int(i64 i);
i64 __ZH_LOP_realloc_intint(i64 ptr, i64 new_size);
i64 __ZH_LOP_malloc_int(i64 size);
void __ZH_LOP_free_int(i64 ptr);
i64* __ZH_BOP_plus_intPint(i64* a, i64 b);
i64* __ZH_BOP_plus_intintP(i64 b, i64* a);
i64* __ZH_BOP_minus_intPint(i64* a, i64 b);
i64* __ZH_BOP_minus_intintP(i64 b, i64* a);
i64 __ZH_BOP_less_intPintP(i64* a, i64* b);
i64 __ZH_BOP_equalequal_intPintP(i64* a, i64* b);
i64 __ZH_BOP_exclamationequal_intPintP(i64* a, i64* b);
void __ZH_BOP_dotcalldotfree_mem_VecIntP(__ZH_TYPE_VecInt* slf);
void __ZH_BOP_dotcalldotdouble_capacity_VecIntP(__ZH_TYPE_VecInt* slf);
i64* __ZH_BOP_dotcalldotatP_VecIntPint(__ZH_TYPE_VecInt* slf, i64 pos);
i64 __ZH_BOP_dotcalldotat_VecIntPint(__ZH_TYPE_VecInt* slf, i64 pos);
void __ZH_BOP_dotcalldotpush_back_VecIntPint(__ZH_TYPE_VecInt* slf, i64 val);
i64* __ZH_BOP_dotcalldotbegin_VecIntP(__ZH_TYPE_VecInt* slf);
i64* __ZH_BOP_dotcalldotend_VecIntP(__ZH_TYPE_VecInt* slf);
i64 __ZH_BOP_dotcalldotfront_VecIntP(__ZH_TYPE_VecInt* slf);
i64 __ZH_BOP_dotcalldotback_VecIntP(__ZH_TYPE_VecInt* slf);
i64* __ZH_BOP_dotcalldotfrontP_VecIntP(__ZH_TYPE_VecInt* slf);
i64* __ZH_BOP_dotcalldotbackP_VecIntP(__ZH_TYPE_VecInt* slf);
void __ZH_BOP_dotcalldotdtor_VecIntP(__ZH_TYPE_VecInt* slf);
__ZH_TYPE_VecInt __ZH_LOP_newVecInt_int(i64 size);
__ZH_TYPE_VecInt __ZH_LOP_newVecInt_();
void __ZH_LOP_out_VecIntP(__ZH_TYPE_VecInt* vec);
void __ZH_LOP_deb_VecIntP(__ZH_TYPE_VecInt* vec);
__ZH_TYPE_Range __ZH_LOP_newRange_intint(i64 begin, i64 end);
__ZH_TYPE_Range __ZH_BOP_dotdot_intint(i64 begin, i64 end);
i64 __ZH_BOP_dotcalldotvalid_RangeP(__ZH_TYPE_Range* slf);
i64 __ZH_BOP_dotcalldotnxt_RangeP(__ZH_TYPE_Range* slf);
void __ZH_LOP_sleep_int(i64 n);
u64 __ZH_LOP_rng_();
void __ZH_LOP_swap_intPintP(i64* a, i64* b);
i64* __ZH_LOP_partition_intPintP(i64* low, i64* high);
void __ZH_LOP_qsort_intPintP(i64* lhs, i64* rhs);
int main(int argc, char *argv[]) ;

i64 __ZH_LOP_minus_int(i64 a) {
  return -a;
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
i64 __ZH_BOP_ampersandampersand_intint(i64 a, i64 b) {
  return a && b;
}
i64 __ZH_BOP_pipepipe_intint(i64 a, i64 b) {
  return a || b;
}
i64 __ZH_LOP_plus_int(i64 a) {
  return (a);
}
i64 __ZH_BOP_percentpercent_intint(i64 a, i64 b) {
  return (__ZH_LOP_exclamation_int(__ZH_BOP_percent_intint(a, b)));
}
i64 __ZH_BOP_exclamationequal_intint(i64 a, i64 b) {
  return (__ZH_LOP_exclamation_int(__ZH_BOP_equalequal_intint(a, b)));
}
i64 __ZH_BOP_exclamationequal_charchar(char a, char b) {
  return (__ZH_LOP_exclamation_int(__ZH_BOP_equalequal_charchar(a, b)));
}
i64 __ZH_BOP_plusequal_intPint(i64* a, i64 b) {
  ((*(a))) = (__ZH_BOP_plus_intint((*(a)), b));
}
i64 __ZH_BOP_minusequal_intPint(i64* a, i64 b) {
  ((*(a))) = (__ZH_BOP_minus_intint((*(a)), b));
}
i64 __ZH_BOP_slashequal_intPint(i64* a, i64 b) {
  ((*(a))) = (__ZH_BOP_slash_intint((*(a)), b));
}
i64 __ZH_BOP_percentequal_intPint(i64* a, i64 b) {
  ((*(a))) = (__ZH_BOP_percent_intint((*(a)), b));
}
i64 __ZH_BOP_asteriskequal_intPint(i64* a, i64 b) {
  ((*(a))) = (__ZH_BOP_asterisk_intint((*(a)), b));
}
void __ZH_LOP_put_str(char* s) {
   printf("%s",s);;
}
void __ZH_LOP_put_int(i64 n) {
   printf("%d",n);;
}
void __ZH_LOP_put_char(char ch) {
   printf("%c",ch);;
}
void __ZH_LOP_out_int(i64 x) {
   printf("%d\n",x);;
}
void __ZH_LOP_out_(u64 x) {
   printf("%llu\n",x);;
}
void __ZH_LOP_out_str(char* s) {
   printf("%s\n",s);;
}
void __ZH_LOP_out_char(char ch) {
   putchar(ch);;
}
void __ZH_LOP_outs_int(i64 i) {
   printf("%d ", i);;
}
i64 __ZH_LOP_realloc_intint(i64 ptr, i64 new_size) {
   return (i64)realloc((void*)ptr, new_size);
}
i64 __ZH_LOP_malloc_int(i64 size) {
   return (i64)malloc(size);
}
void __ZH_LOP_free_int(i64 ptr) {
   free((void*)ptr);
}
i64* __ZH_BOP_plus_intPint(i64* a, i64 b) {
  return (((i64*)(__ZH_BOP_plus_intint(((i64)(a)), __ZH_BOP_asterisk_intint(b, 8)))));
}
i64* __ZH_BOP_plus_intintP(i64 b, i64* a) {
  return (((i64*)(__ZH_BOP_plus_intint(((i64)(a)), __ZH_BOP_asterisk_intint(b, 8)))));
}
i64* __ZH_BOP_minus_intPint(i64* a, i64 b) {
  return (((i64*)(__ZH_BOP_minus_intint(((i64)(a)), __ZH_BOP_asterisk_intint(b, 8)))));
}
i64* __ZH_BOP_minus_intintP(i64 b, i64* a) {
  return (((i64*)(__ZH_BOP_minus_intint(((i64)(a)), __ZH_BOP_asterisk_intint(b, 8)))));
}
i64 __ZH_BOP_less_intPintP(i64* a, i64* b) {
  return (__ZH_BOP_less_intint(((i64)(a)), ((i64)(b))));
}
i64 __ZH_BOP_equalequal_intPintP(i64* a, i64* b) {
  return (__ZH_BOP_equalequal_intint(((i64)(a)), ((i64)(b))));
}
i64 __ZH_BOP_exclamationequal_intPintP(i64* a, i64* b) {
  return (__ZH_BOP_exclamationequal_intint(((i64)(a)), ((i64)(b))));
}
void __ZH_BOP_dotcalldotfree_mem_VecIntP(__ZH_TYPE_VecInt* slf) {
  if (((i64)((slf)->head))) {
    __ZH_LOP_free_int(((i64)((slf)->head)));
  }
  ((slf)->size) = (0);
  ((slf)->capacity) = (0);
  ((slf)->head) = (((i64*)(0)));
}
void __ZH_BOP_dotcalldotdouble_capacity_VecIntP(__ZH_TYPE_VecInt* slf) {
  i64 new_capacity;
  (new_capacity) = ((slf)->capacity);
  if (__ZH_BOP_equalequal_intint(new_capacity, 0)) {
    (new_capacity) = (1);
    ((slf)->head) = (((i64*)(__ZH_LOP_malloc_int(__ZH_BOP_asterisk_intint(1, 8)))));
  } else {
    __ZH_BOP_asteriskequal_intPint((&(new_capacity)), 2);
    ((slf)->head) = (((i64*)(__ZH_LOP_realloc_intint(((i64)((slf)->head)), __ZH_BOP_asterisk_intint(new_capacity, 8)))));
  }
  ((slf)->capacity) = (new_capacity);
}
i64* __ZH_BOP_dotcalldotatP_VecIntPint(__ZH_TYPE_VecInt* slf, i64 pos) {
  return (((i64*)(__ZH_BOP_plus_intint(((i64)((slf)->head)), __ZH_BOP_asterisk_intint(pos, 8)))));
}
i64 __ZH_BOP_dotcalldotat_VecIntPint(__ZH_TYPE_VecInt* slf, i64 pos) {
  return ((*(__ZH_BOP_dotcalldotatP_VecIntPint(slf, pos))));
}
void __ZH_BOP_dotcalldotpush_back_VecIntPint(__ZH_TYPE_VecInt* slf, i64 val) {
  if (__ZH_BOP_equalequal_intint((slf)->size, (slf)->capacity)) {
    __ZH_BOP_dotcalldotdouble_capacity_VecIntP(slf);
  }
  ((*(__ZH_BOP_dotcalldotatP_VecIntPint(slf, (slf)->size)))) = (val);
  __ZH_BOP_plusequal_intPint((&((slf)->size)), 1);
}
i64* __ZH_BOP_dotcalldotbegin_VecIntP(__ZH_TYPE_VecInt* slf) {
  return ((slf)->head);
}
i64* __ZH_BOP_dotcalldotend_VecIntP(__ZH_TYPE_VecInt* slf) {
  return (__ZH_BOP_dotcalldotatP_VecIntPint(slf, (slf)->size));
}
i64 __ZH_BOP_dotcalldotfront_VecIntP(__ZH_TYPE_VecInt* slf) {
  return ((*((slf)->head)));
}
i64 __ZH_BOP_dotcalldotback_VecIntP(__ZH_TYPE_VecInt* slf) {
  return ((*(__ZH_BOP_dotcalldotatP_VecIntPint(slf, __ZH_BOP_minus_intint((slf)->size, 1)))));
}
i64* __ZH_BOP_dotcalldotfrontP_VecIntP(__ZH_TYPE_VecInt* slf) {
  return ((slf)->head);
}
i64* __ZH_BOP_dotcalldotbackP_VecIntP(__ZH_TYPE_VecInt* slf) {
  return (__ZH_BOP_dotcalldotatP_VecIntPint(slf, __ZH_BOP_minus_intint((slf)->size, 1)));
}
void __ZH_BOP_dotcalldotdtor_VecIntP(__ZH_TYPE_VecInt* slf) {
  __ZH_BOP_dotcalldotfree_mem_VecIntP(slf);
}
__ZH_TYPE_VecInt __ZH_LOP_newVecInt_int(i64 size) {
  __ZH_TYPE_VecInt slf;
  ((slf).head) = (((i64*)(0)));
  ((slf).size) = (0);
  ((slf).capacity) = (0);
  while (__ZH_BOP_less_intint((slf).capacity, size)) {
    __ZH_BOP_dotcalldotdouble_capacity_VecIntP((&(slf)));
  };
  ((slf).size) = (size);
}
__ZH_TYPE_VecInt __ZH_LOP_newVecInt_() {
  return (__ZH_LOP_newVecInt_int(0));
}
void __ZH_LOP_out_VecIntP(__ZH_TYPE_VecInt* vec) {
  i64 i;
  (i) = (0);
  __ZH_LOP_put_str("[");
  (i) = (0);
  while (__ZH_BOP_less_intint(i, (vec)->size)) {
    if (i) {
      __ZH_LOP_put_str(" ");
    }
    __ZH_LOP_put_int(__ZH_BOP_dotcalldotat_VecIntPint(vec, i));
    __ZH_BOP_plusequal_intPint((&(i)), 1);
  };
  __ZH_LOP_out_str("]");
}
void __ZH_LOP_deb_VecIntP(__ZH_TYPE_VecInt* vec) {
  __ZH_LOP_put_str("size: ");
  __ZH_LOP_out_int((vec)->size);
  __ZH_LOP_put_str("capacity: ");
  __ZH_LOP_out_int((vec)->capacity);
  __ZH_LOP_put_str("head: ");
  __ZH_LOP_out_(((u64)((vec)->head)));
  __ZH_LOP_put_str("content: ");
  __ZH_LOP_out_VecIntP(vec);
}
__ZH_TYPE_Range __ZH_LOP_newRange_intint(i64 begin, i64 end) {
  __ZH_TYPE_Range slf;
  ((slf).begin) = (begin);
  ((slf).end) = (end);
  ((slf).cur) = (begin);
  ((slf).init) = (0);
  return (slf);
}
__ZH_TYPE_Range __ZH_BOP_dotdot_intint(i64 begin, i64 end) {
  return (__ZH_LOP_newRange_intint(begin, end));
}
i64 __ZH_BOP_dotcalldotvalid_RangeP(__ZH_TYPE_Range* slf) {
  return (__ZH_BOP_exclamationequal_intint((slf)->cur, (slf)->end));
}
i64 __ZH_BOP_dotcalldotnxt_RangeP(__ZH_TYPE_Range* slf) {
  if ((slf)->init) {
    if (__ZH_BOP_less_intint((slf)->begin, (slf)->end)) {
      __ZH_BOP_plusequal_intPint((&((slf)->cur)), 1);
    } else {
      __ZH_BOP_minusequal_intPint((&((slf)->cur)), 1);
    }
  } else {
    ((slf)->init) = (1);
  }
  return (__ZH_BOP_dotcalldotvalid_RangeP(slf));
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
void __ZH_LOP_swap_intPintP(i64* a, i64* b) {
  i64 t;
  (t) = ((*(a)));
  ((*(a))) = ((*(b)));
  ((*(b))) = (t);
}
i64* __ZH_LOP_partition_intPintP(i64* low, i64* high) {
  i64* j;
  i64* i;
  i64* pivot;
  (pivot) = (__ZH_BOP_minus_intPint(high, 1));
  (i) = (low);
  (j) = (low);
  (i) = (low);
  (j) = (low);
  while (__ZH_BOP_exclamationequal_intPintP(j, pivot)) {
    if (__ZH_BOP_less_intint((*(j)), (*(pivot)))) {
      __ZH_LOP_swap_intPintP(i, j);
      (i) = (__ZH_BOP_plus_intPint(i, 1));
    }
    (j) = (__ZH_BOP_plus_intPint(j, 1));
  };
  __ZH_LOP_swap_intPintP(i, pivot);
  return (i);
}
void __ZH_LOP_qsort_intPintP(i64* lhs, i64* rhs) {
  if (__ZH_BOP_greater_intint(__ZH_BOP_minus_intint(((i64)(rhs)), ((i64)(lhs))), 8)) {
    i64* pi;
    (pi) = (__ZH_LOP_partition_intPintP(lhs, rhs));
    __ZH_LOP_qsort_intPintP(lhs, pi);
    __ZH_LOP_qsort_intPintP(__ZH_BOP_plus_intPint(pi, 1), rhs);
  }
}
int main(int argc, char *argv[])  {
  __ZH_TYPE_Range r;
  __ZH_TYPE_VecInt vec;
  (vec) = (__ZH_LOP_newVecInt_());
  (r) = (__ZH_BOP_dotdot_intint(0, 10));
  while (__ZH_BOP_dotcalldotnxt_RangeP((&(r)))) {
    __ZH_BOP_dotcalldotpush_back_VecIntPint((&(vec)), __ZH_BOP_percent_int(__ZH_LOP_rng_(), 100));
  };
  __ZH_LOP_put_str("before sort: ");
  __ZH_LOP_out_VecIntP((&(vec)));
  __ZH_LOP_qsort_intPintP(__ZH_BOP_dotcalldotbegin_VecIntP((&(vec))), __ZH_BOP_dotcalldotend_VecIntP((&(vec))));
  __ZH_LOP_put_str("after sort:  ");
  __ZH_LOP_out_VecIntP((&(vec)));
  __ZH_LOP_out_int(__ZH_BOP_dotcalldotback_VecIntP((&(vec))));
  __ZH_BOP_dotcalldotdtor_VecIntP((&(vec)));
}
