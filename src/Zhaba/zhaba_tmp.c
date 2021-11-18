#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>
typedef int32_t i32;
typedef int64_t i64;
typedef uint32_t u32;
typedef uint64_t u64;

struct __PROT_ZH_TYPE_Range;
typedef struct __PROT_ZH_TYPE_Range __ZH_TYPE_Range;
struct __PROT_ZH_TYPE_Veclesschargreater;
typedef struct __PROT_ZH_TYPE_Veclesschargreater __ZH_TYPE_Veclesschargreater;

struct __PROT_ZH_TYPE_Range {
  i64 init;
  i64 end;
  i64 begin;
  i64 cur;
};
struct __PROT_ZH_TYPE_Veclesschargreater {
  char* head;
  i64 capacity;
  i64 size;
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
i64 __ZH_BOP_less_charchar(char a, char b);
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
__ZH_TYPE_Range __ZH_LOP_newRange_intint(i64 begin, i64 end);
__ZH_TYPE_Range __ZH_BOP_dotdot_intint(i64 begin, i64 end);
i64 __ZH_BOP_dotcalldotvalid_RangeP(__ZH_TYPE_Range* slf);
i64 __ZH_BOP_dotcalldotnxt_RangeP(__ZH_TYPE_Range* slf);
void __ZH_LOP_sleep_int(i64 n);
u64 __ZH_LOP_rng_();
void __ZH_LOP_swap_intPintP(i64* a, i64* b);
char __ZH_LOP_aschar_str(char* s);
void __ZH_BOP_dotcalldotfree_mem_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotdouble_capacity_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
char* __ZH_BOP_dotcalldotatP_VeclesschargreaterPint(__ZH_TYPE_Veclesschargreater* slf, i64 pos);
char __ZH_BOP_dotcalldotat_VeclesschargreaterPint(__ZH_TYPE_Veclesschargreater* slf, i64 pos);
void __ZH_BOP_dotcalldotpush_back_VeclesschargreaterPchar(__ZH_TYPE_Veclesschargreater* slf, char val);
char* __ZH_BOP_dotcalldotbegin_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
char* __ZH_BOP_dotcalldotend_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
char __ZH_BOP_dotcalldotfront_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
char __ZH_BOP_dotcalldotback_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
char* __ZH_BOP_dotcalldotfrontP_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
char* __ZH_BOP_dotcalldotbackP_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotdtor_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotctor_VeclesschargreaterPint(__ZH_TYPE_Veclesschargreater* slf, i64 size);
void __ZH_BOP_dotcalldotctor_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotprint_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotswap_VeclesschargreaterPcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* a, char* b);
i64 __ZH_BOP_dotcalldotget_item_size_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotnext_ptr_VeclesschargreaterPcharPP(__ZH_TYPE_Veclesschargreater* slf, char** ptr);
void __ZH_BOP_dotcalldotprev_ptr_VeclesschargreaterPcharPP(__ZH_TYPE_Veclesschargreater* slf, char** ptr);
i64 __ZH_BOP_dotcalldotptr_uneq_VeclesschargreaterPcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* a, char* b);
char* __ZH_BOP_dotcalldotpartition_VeclesschargreaterPcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* low, char* high);
void __ZH_BOP_dotcalldotqsort_VeclesschargreaterPcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* lhs, char* rhs);
void __ZH_BOP_dotcalldotsort_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf);
__ZH_TYPE_Veclesschargreater __ZH_LOP_to_vec_str(char* s);
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
i64 __ZH_BOP_less_charchar(char a, char b) {
  return (__ZH_BOP_less_intint(((i64)(a)), ((i64)(b))));
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
char __ZH_LOP_aschar_str(char* s) {
  return ((*(((char*)(s)))));
}
void __ZH_BOP_dotcalldotfree_mem_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  if (((i64)((slf)->head))) {
    __ZH_LOP_free_int(((i64)((slf)->head)));
  }
  ((slf)->size) = (0);
  ((slf)->capacity) = (0);
  ((slf)->head) = (((char*)(0)));
}
void __ZH_BOP_dotcalldotdouble_capacity_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  i64 item_size;
  char item;
  i64 new_capacity;
  (new_capacity) = ((slf)->capacity);
   item_size = sizeof(item);
  if (__ZH_BOP_equalequal_intint(new_capacity, 0)) {
    (new_capacity) = (1);
    ((slf)->head) = (((char*)(__ZH_LOP_malloc_int(item_size))));
  } else {
    __ZH_BOP_asteriskequal_intPint((&(new_capacity)), 2);
    ((slf)->head) = (((char*)(__ZH_LOP_realloc_intint(((i64)((slf)->head)), __ZH_BOP_asterisk_intint(new_capacity, item_size)))));
  }
  ((slf)->capacity) = (new_capacity);
}
char* __ZH_BOP_dotcalldotatP_VeclesschargreaterPint(__ZH_TYPE_Veclesschargreater* slf, i64 pos) {
  i64 item_size;
  char item;
   item_size = sizeof(item);
  return (((char*)(__ZH_BOP_plus_intint(((i64)((slf)->head)), __ZH_BOP_asterisk_intint(pos, item_size)))));
}
char __ZH_BOP_dotcalldotat_VeclesschargreaterPint(__ZH_TYPE_Veclesschargreater* slf, i64 pos) {
  return ((*(__ZH_BOP_dotcalldotatP_VeclesschargreaterPint(slf, pos))));
}
void __ZH_BOP_dotcalldotpush_back_VeclesschargreaterPchar(__ZH_TYPE_Veclesschargreater* slf, char val) {
  if (__ZH_BOP_equalequal_intint((slf)->size, (slf)->capacity)) {
    __ZH_BOP_dotcalldotdouble_capacity_VeclesschargreaterP(slf);
  }
  ((*(__ZH_BOP_dotcalldotatP_VeclesschargreaterPint(slf, (slf)->size)))) = (val);
  __ZH_BOP_plusequal_intPint((&((slf)->size)), 1);
}
char* __ZH_BOP_dotcalldotbegin_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  return ((slf)->head);
}
char* __ZH_BOP_dotcalldotend_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  return (__ZH_BOP_dotcalldotatP_VeclesschargreaterPint(slf, (slf)->size));
}
char __ZH_BOP_dotcalldotfront_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  return ((*((slf)->head)));
}
char __ZH_BOP_dotcalldotback_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  return ((*(__ZH_BOP_dotcalldotatP_VeclesschargreaterPint(slf, __ZH_BOP_minus_intint((slf)->size, 1)))));
}
char* __ZH_BOP_dotcalldotfrontP_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  return ((slf)->head);
}
char* __ZH_BOP_dotcalldotbackP_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  return (__ZH_BOP_dotcalldotatP_VeclesschargreaterPint(slf, __ZH_BOP_minus_intint((slf)->size, 1)));
}
void __ZH_BOP_dotcalldotdtor_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  __ZH_BOP_dotcalldotfree_mem_VeclesschargreaterP(slf);
}
void __ZH_BOP_dotcalldotctor_VeclesschargreaterPint(__ZH_TYPE_Veclesschargreater* slf, i64 size) {
  ((slf)->head) = (((char*)(0)));
  ((slf)->size) = (0);
  ((slf)->capacity) = (0);
  while (__ZH_BOP_less_intint((slf)->capacity, size)) {
    __ZH_BOP_dotcalldotdouble_capacity_VeclesschargreaterP(slf);
  };
  ((slf)->size) = (size);
}
void __ZH_BOP_dotcalldotctor_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  __ZH_BOP_dotcalldotctor_VeclesschargreaterPint(slf, 0);
}
void __ZH_BOP_dotcalldotprint_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  i64 i;
  (i) = (0);
  __ZH_LOP_put_str("[");
  (i) = (0);
  while (__ZH_BOP_less_intint(i, (slf)->size)) {
    if (i) {
      __ZH_LOP_put_str(" ");
    }
    __ZH_LOP_put_char(__ZH_BOP_dotcalldotat_VeclesschargreaterPint(slf, i));
    __ZH_BOP_plusequal_intPint((&(i)), 1);
  };
  __ZH_LOP_out_str("]");
}
void __ZH_BOP_dotcalldotswap_VeclesschargreaterPcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* a, char* b) {
  char t;
  (t) = ((*(a)));
  ((*(a))) = ((*(b)));
  ((*(b))) = (t);
}
i64 __ZH_BOP_dotcalldotget_item_size_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  i64 item_size;
  char item;
   item_size = sizeof(item);
  return (item_size);
}
void __ZH_BOP_dotcalldotnext_ptr_VeclesschargreaterPcharPP(__ZH_TYPE_Veclesschargreater* slf, char** ptr) {
  ((*(ptr))) = (((char*)(__ZH_BOP_plus_intint(((i64)((*(ptr)))), __ZH_BOP_dotcalldotget_item_size_VeclesschargreaterP(slf)))));
}
void __ZH_BOP_dotcalldotprev_ptr_VeclesschargreaterPcharPP(__ZH_TYPE_Veclesschargreater* slf, char** ptr) {
  ((*(ptr))) = (((char*)(__ZH_BOP_minus_intint(((i64)((*(ptr)))), __ZH_BOP_dotcalldotget_item_size_VeclesschargreaterP(slf)))));
}
i64 __ZH_BOP_dotcalldotptr_uneq_VeclesschargreaterPcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* a, char* b) {
  return (__ZH_BOP_exclamationequal_intint(((i64)(a)), ((i64)(b))));
}
char* __ZH_BOP_dotcalldotpartition_VeclesschargreaterPcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* low, char* high) {
  char* j;
  char* i;
  char* pivot;
  __ZH_BOP_dotcalldotprev_ptr_VeclesschargreaterPcharPP(slf, (&(high)));
  (pivot) = (high);
  (i) = (low);
  (j) = (low);
  (i) = (low);
  (j) = (low);
  while (__ZH_BOP_dotcalldotptr_uneq_VeclesschargreaterPcharPcharP(slf, j, pivot)) {
    if (__ZH_BOP_less_charchar((*(j)), (*(pivot)))) {
      __ZH_BOP_dotcalldotswap_VeclesschargreaterPcharPcharP(slf, i, j);
      __ZH_BOP_dotcalldotnext_ptr_VeclesschargreaterPcharPP(slf, (&(i)));
    }
    __ZH_BOP_dotcalldotnext_ptr_VeclesschargreaterPcharPP(slf, (&(j)));
  };
  __ZH_BOP_dotcalldotswap_VeclesschargreaterPcharPcharP(slf, i, pivot);
  return (i);
}
void __ZH_BOP_dotcalldotqsort_VeclesschargreaterPcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* lhs, char* rhs) {
  if (__ZH_BOP_greater_intint(__ZH_BOP_minus_intint(((i64)(rhs)), ((i64)(lhs))), __ZH_BOP_dotcalldotget_item_size_VeclesschargreaterP(slf))) {
    char* pi;
    (pi) = (__ZH_BOP_dotcalldotpartition_VeclesschargreaterPcharPcharP(slf, lhs, rhs));
    __ZH_BOP_dotcalldotqsort_VeclesschargreaterPcharPcharP(slf, lhs, pi);
    __ZH_BOP_dotcalldotnext_ptr_VeclesschargreaterPcharPP(slf, (&(pi)));
    __ZH_BOP_dotcalldotqsort_VeclesschargreaterPcharPcharP(slf, pi, rhs);
  }
}
void __ZH_BOP_dotcalldotsort_VeclesschargreaterP(__ZH_TYPE_Veclesschargreater* slf) {
  __ZH_BOP_dotcalldotqsort_VeclesschargreaterPcharPcharP(slf, __ZH_BOP_dotcalldotbegin_VeclesschargreaterP(slf), __ZH_BOP_dotcalldotend_VeclesschargreaterP(slf));
}
__ZH_TYPE_Veclesschargreater __ZH_LOP_to_vec_str(char* s) {
  __ZH_TYPE_Veclesschargreater res;
}
int main(int argc, char *argv[])  {
  i64 i;
  (i) = (0);
  while (__ZH_BOP_less_intint(i, 10)) {
    __ZH_LOP_out_int(i);
    (i) = (__ZH_BOP_plus_intint(i, 1));
  };
}
