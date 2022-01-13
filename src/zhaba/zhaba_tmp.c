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
struct __PROT_ZH_TYPE_Str;
typedef struct __PROT_ZH_TYPE_Str __ZH_TYPE_Str;

struct __PROT_ZH_TYPE_Range {
  i64 end;
  i64 begin;
};
struct __PROT_ZH_TYPE_Veclesschargreater {
  char* head;
  i64 capacity;
  i64 size;
};
struct __PROT_ZH_TYPE_Str {
  i64 size;
  __ZH_TYPE_Veclesschargreater data;
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
void __ZH_BOP_plusequal_intRint(i64* a, i64 b);
void __ZH_BOP_minusequal_intRint(i64* a, i64 b);
void __ZH_BOP_slashequal_intRint(i64* a, i64 b);
void __ZH_BOP_percentequal_intRint(i64* a, i64 b);
void __ZH_BOP_asteriskequal_intRint(i64* a, i64 b);
i64 __ZH_BOP_less_charchar(char a, char b);
i64 __ZH_LOP_plusplus_intR(i64* val);
i64 __ZH_LOP_minusminus_intR(i64* val);
void __ZH_LOP_plusplus_intPP(i64** val);
void __ZH_LOP_put_int(i64 n);
void __ZH_LOP_put_(u64 n);
void __ZH_LOP_put_str(char* s);
void __ZH_LOP_put_char(char ch);
void __ZH_LOP_out_int(i64 x);
void __ZH_LOP_out_(u64 x);
void __ZH_LOP_out_str(char* s);
void __ZH_LOP_out_char(char ch);
void __ZH_LOP_sut_int(i64 n);
void __ZH_LOP_sut_(u64 n);
void __ZH_LOP_sut_str(char* s);
void __ZH_LOP_sut_char(char ch);
void __ZH_LOP_deb_strint(char* msg, i64 n);
void __ZH_LOP_deb_str(char* msg, u64 n);
void __ZH_LOP_deb_strstr(char* msg, char* s);
void __ZH_LOP_deb_strchar(char* msg, char ch);
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
i64 __ZH_BOP_dotcalldotbegin_RangePampersand(__ZH_TYPE_Range* slf);
i64 __ZH_BOP_dotcalldotend_RangePampersand(__ZH_TYPE_Range* slf);
__ZH_TYPE_Range __ZH_LOP_newRange_intint(i64 begin, i64 end);
__ZH_TYPE_Range __ZH_BOP_dotdot_intint(i64 begin, i64 end);
i64 __ZH_LOP_begin_RangeP(__ZH_TYPE_Range* r);
i64 __ZH_LOP_end_RangeP(__ZH_TYPE_Range* r);
void __ZH_LOP_sleep_int(i64 n);
void __ZH_LOP_cls_();
u64 __ZH_LOP_rng_();
void __ZH_LOP_swap_intPintP(i64* a, i64* b);
char __ZH_LOP_asch_str(char* s);
char __ZH_BOP_dotcalldotat_strPampersandint(char** slf, i64 pos);
void __ZH_BOP_dotcalldotfree_mem_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotdouble_capacity_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
char* __ZH_BOP_dotcalldotatP_VeclesschargreaterPampersandint(__ZH_TYPE_Veclesschargreater* slf, i64 pos);
char __ZH_BOP_dotcalldotat_VeclesschargreaterPampersandint(__ZH_TYPE_Veclesschargreater* slf, i64 pos);
void __ZH_BOP_dotcalldotpush_back_VeclesschargreaterPampersandchar(__ZH_TYPE_Veclesschargreater* slf, char val);
void __ZH_BOP_dotcalldotpop_back_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
char* __ZH_BOP_dotcalldotbegin_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
char* __ZH_BOP_dotcalldotend_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
char __ZH_BOP_dotcalldotfront_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
char __ZH_BOP_dotcalldotback_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
char* __ZH_BOP_dotcalldotfrontP_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
char* __ZH_BOP_dotcalldotbackP_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotdtor_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotctor_VeclesschargreaterPampersandint(__ZH_TYPE_Veclesschargreater* slf, i64 size);
void __ZH_BOP_dotcalldotctor_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotprint_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotswap_VeclesschargreaterPampersandcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* a, char* b);
i64 __ZH_BOP_dotcalldotget_item_size_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotnext_ptr_VeclesschargreaterPampersandcharPP(__ZH_TYPE_Veclesschargreater* slf, char** ptr);
void __ZH_BOP_dotcalldotprev_ptr_VeclesschargreaterPampersandcharPP(__ZH_TYPE_Veclesschargreater* slf, char** ptr);
i64 __ZH_BOP_dotcalldotptr_uneq_VeclesschargreaterPampersandcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* a, char* b);
char* __ZH_BOP_dotcalldotpartition_VeclesschargreaterPampersandcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* low, char* high);
void __ZH_BOP_dotcalldotqsort_VeclesschargreaterPampersandcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* lhs, char* rhs);
void __ZH_BOP_dotcalldotsort_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf);
void __ZH_BOP_dotcalldotctor_StrPampersand(__ZH_TYPE_Str* slf);
void __ZH_BOP_dotcalldotdtor_StrPampersand(__ZH_TYPE_Str* slf);
char* __ZH_BOP_dotcalldotcstr_StrPampersand(__ZH_TYPE_Str* slf);
char __ZH_BOP_dotcalldotat_StrPampersandint(__ZH_TYPE_Str* slf, i64 pos);
char* __ZH_BOP_dotcalldotatP_StrPampersandint(__ZH_TYPE_Str* slf, i64 pos);
void __ZH_BOP_dotcalldotpush_back_StrPampersandchar(__ZH_TYPE_Str* slf, char ch);
void __ZH_BOP_dotcalldotpop_back_StrPampersand(__ZH_TYPE_Str* slf);
void __ZH_BOP_dotcalldotsort_StrPampersand(__ZH_TYPE_Str* slf);
i64 __ZH_LOP_strlen_str(char* s);
__ZH_TYPE_Str __ZH_LOP_asStr_str(char* s);
i64 __ZH_BOP_plusequal_StrRchar(__ZH_TYPE_Str* a, char ch);
void __ZH_BOP_plusequal_StrRStrR(__ZH_TYPE_Str* a, __ZH_TYPE_Str* b);
void __ZH_BOP_plusequal_StrRstr(__ZH_TYPE_Str* a, char* b);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* s);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* s);
void __ZH_LOP_sut_StrR(__ZH_TYPE_Str* s);
void __ZH_LOP_deb_strStrR(char* msg, __ZH_TYPE_Str* s);
__ZH_TYPE_Str __ZH_LOP_frog_();
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
  return ((a));
}
i64 __ZH_BOP_percentpercent_intint(i64 a, i64 b) {
  return (__ZH_LOP_exclamation_int((__ZH_BOP_percent_intint(((a)),((b))))));
}
i64 __ZH_BOP_exclamationequal_intint(i64 a, i64 b) {
  return (__ZH_LOP_exclamation_int((__ZH_BOP_equalequal_intint(((a)),((b))))));
}
i64 __ZH_BOP_exclamationequal_charchar(char a, char b) {
  return (__ZH_LOP_exclamation_int((__ZH_BOP_equalequal_charchar(((a)),((b))))));
}
void __ZH_BOP_plusequal_intRint(i64* a, i64 b) {
  ((*a)) = (__ZH_BOP_plus_intint(((*a)),((b))));
}
void __ZH_BOP_minusequal_intRint(i64* a, i64 b) {
  ((*a)) = (__ZH_BOP_minus_intint(((*a)),((b))));
}
void __ZH_BOP_slashequal_intRint(i64* a, i64 b) {
  ((*a)) = (__ZH_BOP_slash_intint(((*a)),((b))));
}
void __ZH_BOP_percentequal_intRint(i64* a, i64 b) {
  ((*a)) = (__ZH_BOP_percent_intint(((*a)),((b))));
}
void __ZH_BOP_asteriskequal_intRint(i64* a, i64 b) {
  ((*a)) = (__ZH_BOP_asterisk_intint(((*a)),((b))));
}
i64 __ZH_BOP_less_charchar(char a, char b) {
  return (__ZH_BOP_less_intint((((i64)((a)))),(((i64)((b))))));
}
i64 __ZH_LOP_plusplus_intR(i64* val) {
  __ZH_BOP_plusequal_intRint((&(*val)),(1));
}
i64 __ZH_LOP_minusminus_intR(i64* val) {
  __ZH_BOP_minusequal_intRint((&(*val)),(1));
}
void __ZH_LOP_plusplus_intPP(i64** val) {
  ((*((val)))) = (((i64*)(__ZH_BOP_plus_intint((((i64)((*((val)))))),(8)))));
}
void __ZH_LOP_put_int(i64 n) {
   printf("%d",n);;
}
void __ZH_LOP_put_(u64 n) {
   printf("%llu",n);;
}
void __ZH_LOP_put_str(char* s) {
   printf("%s",s);;
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
void __ZH_LOP_sut_int(i64 n) {
   printf("%d ",n);;
}
void __ZH_LOP_sut_(u64 n) {
   printf("%llu ",n);;
}
void __ZH_LOP_sut_str(char* s) {
   printf("%s ",s);;
}
void __ZH_LOP_sut_char(char ch) {
   printf("%c ",ch);;
}
void __ZH_LOP_deb_strint(char* msg, i64 n) {
   printf("%s:%d\n",msg,n);;
}
void __ZH_LOP_deb_str(char* msg, u64 n) {
   printf("%s:%llu\n",msg,n);;
}
void __ZH_LOP_deb_strstr(char* msg, char* s) {
   printf("%s:\"%s\"\n",msg,s);;
}
void __ZH_LOP_deb_strchar(char* msg, char ch) {
   printf("%s:%c\n",msg,ch);;
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
  return (((i64*)(__ZH_BOP_plus_intint((((i64)((a)))),(__ZH_BOP_asterisk_intint(((b)),(8)))))));
}
i64* __ZH_BOP_plus_intintP(i64 b, i64* a) {
  return (((i64*)(__ZH_BOP_plus_intint((((i64)((a)))),(__ZH_BOP_asterisk_intint(((b)),(8)))))));
}
i64* __ZH_BOP_minus_intPint(i64* a, i64 b) {
  return (((i64*)(__ZH_BOP_minus_intint((((i64)((a)))),(__ZH_BOP_asterisk_intint(((b)),(8)))))));
}
i64* __ZH_BOP_minus_intintP(i64 b, i64* a) {
  return (((i64*)(__ZH_BOP_minus_intint((((i64)((a)))),(__ZH_BOP_asterisk_intint(((b)),(8)))))));
}
i64 __ZH_BOP_less_intPintP(i64* a, i64* b) {
  return (__ZH_BOP_less_intint((((i64)((a)))),(((i64)((b))))));
}
i64 __ZH_BOP_equalequal_intPintP(i64* a, i64* b) {
  return (__ZH_BOP_equalequal_intint((((i64)((a)))),(((i64)((b))))));
}
i64 __ZH_BOP_exclamationequal_intPintP(i64* a, i64* b) {
  return (__ZH_BOP_exclamationequal_intint((((i64)((a)))),(((i64)((b))))));
}
i64 __ZH_BOP_dotcalldotbegin_RangePampersand(__ZH_TYPE_Range* slf) {
  return (((slf))->begin);
}
i64 __ZH_BOP_dotcalldotend_RangePampersand(__ZH_TYPE_Range* slf) {
  return (((slf))->end);
}
__ZH_TYPE_Range __ZH_LOP_newRange_intint(i64 begin, i64 end) {
  __ZH_TYPE_Range slf;
  (((slf)).begin) = ((begin));
  (((slf)).end) = ((end));
  return ((slf));
}
__ZH_TYPE_Range __ZH_BOP_dotdot_intint(i64 begin, i64 end) {
  return (__ZH_LOP_newRange_intint(((begin)),((end))));
}
i64 __ZH_LOP_begin_RangeP(__ZH_TYPE_Range* r) {
  return (((r))->begin);
}
i64 __ZH_LOP_end_RangeP(__ZH_TYPE_Range* r) {
  return (((r))->end);
}
void __ZH_LOP_sleep_int(i64 n) {
  unsigned int retTime = clock() + n;
  while (clock() < retTime);
}
void __ZH_LOP_cls_() {
   system("cls");
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
  ((t)) = ((*((a))));
  ((*((a)))) = ((*((b))));
  ((*((b)))) = ((t));
}
char __ZH_LOP_asch_str(char* s) {
  return ((*(((char*)((s))))));
}
char __ZH_BOP_dotcalldotat_strPampersandint(char** slf, i64 pos) {
  return ((*(((char*)(__ZH_BOP_plus_intint((((i64)((*((slf)))))),((pos))))))));
}
void __ZH_BOP_dotcalldotfree_mem_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  if (((i64)(((slf))->head))) {
    __ZH_LOP_free_int((((i64)(((slf))->head))));
  }
  (((slf))->size) = (0);
  (((slf))->capacity) = (0);
  (((slf))->head) = (((char*)(0)));
}
void __ZH_BOP_dotcalldotdouble_capacity_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  i64 item_size;
  char item;
  i64 new_capacity;
  ((new_capacity)) = (((slf))->capacity);
   item_size = sizeof(item);
  if (__ZH_BOP_equalequal_intint(((new_capacity)),(0))) {
    ((new_capacity)) = (1);
    (((slf))->head) = (((char*)(__ZH_LOP_malloc_int(((item_size))))));
  } else {
    __ZH_BOP_asteriskequal_intRint((&(new_capacity)),(2));
    (((slf))->head) = (((char*)(__ZH_LOP_realloc_intint((((i64)(((slf))->head))),(__ZH_BOP_asterisk_intint(((new_capacity)),((item_size))))))));
  }
  (((slf))->capacity) = ((new_capacity));
}
char* __ZH_BOP_dotcalldotatP_VeclesschargreaterPampersandint(__ZH_TYPE_Veclesschargreater* slf, i64 pos) {
  i64 item_size;
  char item;
   item_size = sizeof(item);
  return (((char*)(__ZH_BOP_plus_intint((((i64)(((slf))->head))),(__ZH_BOP_asterisk_intint(((pos)),((item_size))))))));
}
char __ZH_BOP_dotcalldotat_VeclesschargreaterPampersandint(__ZH_TYPE_Veclesschargreater* slf, i64 pos) {
  return ((*(__ZH_BOP_dotcalldotatP_VeclesschargreaterPampersandint(((slf)),((pos))))));
}
void __ZH_BOP_dotcalldotpush_back_VeclesschargreaterPampersandchar(__ZH_TYPE_Veclesschargreater* slf, char val) {
  if (__ZH_BOP_equalequal_intint((((slf))->size),(((slf))->capacity))) {
    __ZH_BOP_dotcalldotdouble_capacity_VeclesschargreaterPampersand(((slf)));
  }
  ((*(__ZH_BOP_dotcalldotatP_VeclesschargreaterPampersandint(((slf)),(((slf))->size))))) = ((val));
  __ZH_LOP_plusplus_intR((&((slf))->size));
}
void __ZH_BOP_dotcalldotpop_back_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  __ZH_LOP_minusminus_intR((&((slf))->size));
}
char* __ZH_BOP_dotcalldotbegin_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  return (((slf))->head);
}
char* __ZH_BOP_dotcalldotend_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  return (__ZH_BOP_dotcalldotatP_VeclesschargreaterPampersandint(((slf)),(((slf))->size)));
}
char __ZH_BOP_dotcalldotfront_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  return ((*(((slf))->head)));
}
char __ZH_BOP_dotcalldotback_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  return ((*(__ZH_BOP_dotcalldotatP_VeclesschargreaterPampersandint(((slf)),(__ZH_BOP_minus_intint((((slf))->size),(1)))))));
}
char* __ZH_BOP_dotcalldotfrontP_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  return (((slf))->head);
}
char* __ZH_BOP_dotcalldotbackP_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  return (__ZH_BOP_dotcalldotatP_VeclesschargreaterPampersandint(((slf)),(__ZH_BOP_minus_intint((((slf))->size),(1)))));
}
void __ZH_BOP_dotcalldotdtor_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  __ZH_BOP_dotcalldotfree_mem_VeclesschargreaterPampersand(((slf)));
}
void __ZH_BOP_dotcalldotctor_VeclesschargreaterPampersandint(__ZH_TYPE_Veclesschargreater* slf, i64 size) {
  (((slf))->head) = (((char*)(0)));
  (((slf))->size) = (0);
  (((slf))->capacity) = (0);
  while (__ZH_BOP_less_intint((((slf))->capacity),((size)))) {
    __ZH_BOP_dotcalldotdouble_capacity_VeclesschargreaterPampersand(((slf)));
  };
  (((slf))->size) = ((size));
}
void __ZH_BOP_dotcalldotctor_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  __ZH_BOP_dotcalldotctor_VeclesschargreaterPampersandint(((slf)),(0));
}
void __ZH_BOP_dotcalldotprint_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  i64 i;
  ((i)) = (0);
  __ZH_LOP_put_str(("["));
  {
  i64 i;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  ((__range)) = (__ZH_BOP_dotdot_intint((0),(((slf))->size)));
  ((__begin)) = (__ZH_BOP_dotcalldotbegin_RangePampersand(((&((__range))))));
  ((__end)) = (__ZH_BOP_dotcalldotend_RangePampersand(((&((__range))))));
  ((i)) = ((__begin));
  while (__ZH_BOP_exclamationequal_intint(((i)),((__end)))) {
    if ((i)) {
      __ZH_LOP_put_str((" "));
    }
    __ZH_LOP_put_char((__ZH_BOP_dotcalldotat_VeclesschargreaterPampersandint(((slf)),((i)))));
    __ZH_LOP_plusplus_intR((&(i)));
  };
};
  __ZH_LOP_out_str(("]"));
}
void __ZH_BOP_dotcalldotswap_VeclesschargreaterPampersandcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* a, char* b) {
  char t;
  ((t)) = ((*((a))));
  ((*((a)))) = ((*((b))));
  ((*((b)))) = ((t));
}
i64 __ZH_BOP_dotcalldotget_item_size_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  i64 item_size;
  char item;
   item_size = sizeof(item);
  return ((item_size));
}
void __ZH_BOP_dotcalldotnext_ptr_VeclesschargreaterPampersandcharPP(__ZH_TYPE_Veclesschargreater* slf, char** ptr) {
  ((*((ptr)))) = (((char*)(__ZH_BOP_plus_intint((((i64)((*((ptr)))))),(__ZH_BOP_dotcalldotget_item_size_VeclesschargreaterPampersand(((slf))))))));
}
void __ZH_BOP_dotcalldotprev_ptr_VeclesschargreaterPampersandcharPP(__ZH_TYPE_Veclesschargreater* slf, char** ptr) {
  ((*((ptr)))) = (((char*)(__ZH_BOP_minus_intint((((i64)((*((ptr)))))),(__ZH_BOP_dotcalldotget_item_size_VeclesschargreaterPampersand(((slf))))))));
}
i64 __ZH_BOP_dotcalldotptr_uneq_VeclesschargreaterPampersandcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* a, char* b) {
  return (__ZH_BOP_exclamationequal_intint((((i64)((a)))),(((i64)((b))))));
}
char* __ZH_BOP_dotcalldotpartition_VeclesschargreaterPampersandcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* low, char* high) {
  char* j;
  char* i;
  char* pivot;
  __ZH_BOP_dotcalldotprev_ptr_VeclesschargreaterPampersandcharPP(((slf)),((&((high)))));
  ((pivot)) = ((high));
  ((i)) = ((low));
  ((j)) = ((low));
  ((i)) = ((low));
  ((j)) = ((low));
  while (__ZH_BOP_dotcalldotptr_uneq_VeclesschargreaterPampersandcharPcharP(((slf)),((j)),((pivot)))) {
    if (__ZH_BOP_less_charchar(((*((j)))),((*((pivot)))))) {
      __ZH_BOP_dotcalldotswap_VeclesschargreaterPampersandcharPcharP(((slf)),((i)),((j)));
      __ZH_BOP_dotcalldotnext_ptr_VeclesschargreaterPampersandcharPP(((slf)),((&((i)))));
    }
    __ZH_BOP_dotcalldotnext_ptr_VeclesschargreaterPampersandcharPP(((slf)),((&((j)))));
  };
  __ZH_BOP_dotcalldotswap_VeclesschargreaterPampersandcharPcharP(((slf)),((i)),((pivot)));
  return ((i));
}
void __ZH_BOP_dotcalldotqsort_VeclesschargreaterPampersandcharPcharP(__ZH_TYPE_Veclesschargreater* slf, char* lhs, char* rhs) {
  if (__ZH_BOP_greater_intint((__ZH_BOP_minus_intint((((i64)((rhs)))),(((i64)((lhs)))))),(__ZH_BOP_dotcalldotget_item_size_VeclesschargreaterPampersand(((slf)))))) {
    char* pi;
    ((pi)) = (__ZH_BOP_dotcalldotpartition_VeclesschargreaterPampersandcharPcharP(((slf)),((lhs)),((rhs))));
    __ZH_BOP_dotcalldotqsort_VeclesschargreaterPampersandcharPcharP(((slf)),((lhs)),((pi)));
    __ZH_BOP_dotcalldotnext_ptr_VeclesschargreaterPampersandcharPP(((slf)),((&((pi)))));
    __ZH_BOP_dotcalldotqsort_VeclesschargreaterPampersandcharPcharP(((slf)),((pi)),((rhs)));
  }
}
void __ZH_BOP_dotcalldotsort_VeclesschargreaterPampersand(__ZH_TYPE_Veclesschargreater* slf) {
  __ZH_BOP_dotcalldotqsort_VeclesschargreaterPampersandcharPcharP(((slf)),(__ZH_BOP_dotcalldotbegin_VeclesschargreaterPampersand(((slf)))),(__ZH_BOP_dotcalldotend_VeclesschargreaterPampersand(((slf)))));
}
void __ZH_BOP_dotcalldotctor_StrPampersand(__ZH_TYPE_Str* slf) {
  __ZH_BOP_dotcalldotctor_VeclesschargreaterPampersand(((&(((slf))->data))));
  __ZH_BOP_dotcalldotpush_back_VeclesschargreaterPampersandchar(((&(((slf))->data))),(((char)(0))));
  (((slf))->size) = (0);
}
void __ZH_BOP_dotcalldotdtor_StrPampersand(__ZH_TYPE_Str* slf) {
  __ZH_BOP_dotcalldotdtor_VeclesschargreaterPampersand(((&(((slf))->data))));
}
char* __ZH_BOP_dotcalldotcstr_StrPampersand(__ZH_TYPE_Str* slf) {
  return (((char*)(__ZH_BOP_dotcalldotbegin_VeclesschargreaterPampersand(((&(((slf))->data)))))));
}
char __ZH_BOP_dotcalldotat_StrPampersandint(__ZH_TYPE_Str* slf, i64 pos) {
  return (__ZH_BOP_dotcalldotat_VeclesschargreaterPampersandint(((&(((slf))->data))),((pos))));
}
char* __ZH_BOP_dotcalldotatP_StrPampersandint(__ZH_TYPE_Str* slf, i64 pos) {
  return (__ZH_BOP_dotcalldotatP_VeclesschargreaterPampersandint(((&(((slf))->data))),((pos))));
}
void __ZH_BOP_dotcalldotpush_back_StrPampersandchar(__ZH_TYPE_Str* slf, char ch) {
  __ZH_BOP_dotcalldotpop_back_VeclesschargreaterPampersand(((&(((slf))->data))));
  __ZH_BOP_dotcalldotpush_back_VeclesschargreaterPampersandchar(((&(((slf))->data))),((ch)));
  __ZH_BOP_dotcalldotpush_back_VeclesschargreaterPampersandchar(((&(((slf))->data))),(((char)(0))));
}
void __ZH_BOP_dotcalldotpop_back_StrPampersand(__ZH_TYPE_Str* slf) {
  __ZH_BOP_dotcalldotpop_back_VeclesschargreaterPampersand(((&(((slf))->data))));
  __ZH_BOP_dotcalldotpop_back_VeclesschargreaterPampersand(((&(((slf))->data))));
  __ZH_BOP_dotcalldotpush_back_VeclesschargreaterPampersandchar(((&(((slf))->data))),(((char)(0))));
}
void __ZH_BOP_dotcalldotsort_StrPampersand(__ZH_TYPE_Str* slf) {
  __ZH_BOP_dotcalldotpop_back_VeclesschargreaterPampersand(((&(((slf))->data))));
  __ZH_BOP_dotcalldotsort_VeclesschargreaterPampersand(((&(((slf))->data))));
  __ZH_BOP_dotcalldotpush_back_VeclesschargreaterPampersandchar(((&(((slf))->data))),(((char)(0))));
}
i64 __ZH_LOP_strlen_str(char* s) {
  i64 res;
  ((res)) = (0);
  while (((i64)((*(((char*)((s)))))))) {
    __ZH_LOP_plusplus_intR((&(res)));
    ((s)) = (((char*)(__ZH_BOP_plus_intint((((i64)((s)))),(1)))));
  };
  return ((res));
}
__ZH_TYPE_Str __ZH_LOP_asStr_str(char* s) {
  __ZH_TYPE_Str res;
  __ZH_BOP_dotcalldotctor_StrPampersand(((&((res)))));
  __ZH_BOP_dotcalldotpop_back_VeclesschargreaterPampersand(((&(((res)).data))));
  while (((i64)((*(((char*)((s)))))))) {
    __ZH_BOP_dotcalldotpush_back_VeclesschargreaterPampersandchar(((&(((res)).data))),((*(((char*)((s)))))));
    ((s)) = (((char*)(__ZH_BOP_plus_intint((((i64)((s)))),(1)))));
  };
  __ZH_BOP_dotcalldotpush_back_VeclesschargreaterPampersandchar(((&(((res)).data))),(((char)(0))));
  (((res)).size) = (__ZH_BOP_minus_intint(((((res)).data).size),(1)));
  return ((res));
}
i64 __ZH_BOP_plusequal_StrRchar(__ZH_TYPE_Str* a, char ch) {
  __ZH_BOP_dotcalldotpush_back_StrPampersandchar(((&((*a)))),((ch)));
}
void __ZH_BOP_plusequal_StrRStrR(__ZH_TYPE_Str* a, __ZH_TYPE_Str* b) {
  {
  i64 i;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  ((__range)) = (__ZH_BOP_dotdot_intint((0),(((*b)).size)));
  ((__begin)) = (__ZH_BOP_dotcalldotbegin_RangePampersand(((&((__range))))));
  ((__end)) = (__ZH_BOP_dotcalldotend_RangePampersand(((&((__range))))));
  ((i)) = ((__begin));
  while (__ZH_BOP_exclamationequal_intint(((i)),((__end)))) {
    __ZH_BOP_plusequal_StrRchar((&(*a)),(__ZH_BOP_dotcalldotat_StrPampersandint(((&((*b)))),((i)))));
    __ZH_LOP_plusplus_intR((&(i)));
  };
};
}
void __ZH_BOP_plusequal_StrRstr(__ZH_TYPE_Str* a, char* b) {
  i64 len;
  ((len)) = (__ZH_LOP_strlen_str(((b))));
  {
  i64 i;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  ((__range)) = (__ZH_BOP_dotdot_intint((0),((len))));
  ((__begin)) = (__ZH_BOP_dotcalldotbegin_RangePampersand(((&((__range))))));
  ((__end)) = (__ZH_BOP_dotcalldotend_RangePampersand(((&((__range))))));
  ((i)) = ((__begin));
  while (__ZH_BOP_exclamationequal_intint(((i)),((__end)))) {
    __ZH_BOP_plusequal_StrRchar((&(*a)),(__ZH_BOP_dotcalldotat_strPampersandint(((&((b)))),((i)))));
    __ZH_LOP_plusplus_intR((&(i)));
  };
};
}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* s) {
  __ZH_LOP_out_str((__ZH_BOP_dotcalldotcstr_StrPampersand(((&((*s)))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* s) {
  __ZH_LOP_put_str((__ZH_BOP_dotcalldotcstr_StrPampersand(((&((*s)))))));
}
void __ZH_LOP_sut_StrR(__ZH_TYPE_Str* s) {
  __ZH_LOP_sut_str((__ZH_BOP_dotcalldotcstr_StrPampersand(((&((*s)))))));
}
void __ZH_LOP_deb_strStrR(char* msg, __ZH_TYPE_Str* s) {
  __ZH_LOP_deb_strstr(((msg)),(__ZH_BOP_dotcalldotcstr_StrPampersand(((&((*s)))))));
}
__ZH_TYPE_Str __ZH_LOP_frog_() {
  __ZH_TYPE_Str s;
  ((s)) = (__ZH_LOP_asStr_str(("")));
  __ZH_BOP_plusequal_StrRstr((&(s)),("         _____         \n"));
  __ZH_BOP_plusequal_StrRstr((&(s)),("       /       \\__     \n"));
  __ZH_BOP_plusequal_StrRstr((&(s)),("     /             \\   \n"));
  __ZH_BOP_plusequal_StrRstr((&(s)),("   /   0    0        | \n"));
  __ZH_BOP_plusequal_StrRstr((&(s)),("  |     ..            |\n"));
  __ZH_BOP_plusequal_StrRstr((&(s)),("  /|        _/       / \n"));
  __ZH_BOP_plusequal_StrRstr((&(s)),(" / .\\_____/         /  \n"));
  __ZH_BOP_plusequal_StrRstr((&(s)),("/U\\|    \\___|   |__/   \n"));
  __ZH_BOP_plusequal_StrRstr((&(s)),("            /  /       \n"));
  __ZH_BOP_plusequal_StrRstr((&(s)),("            |/U        \n"));
  return ((s));
}
int main(int argc, char *argv[])  {
  __ZH_TYPE_Str frog;
  __ZH_TYPE_Str b;
  char* a;
  __ZH_TYPE_Str s;
  __ZH_LOP_out_str(("str and str examples"));
  __ZH_LOP_out_str((""));
  __ZH_LOP_out_str((""));
  __ZH_LOP_deb_strint(("stlen(\'12345\')"),(__ZH_LOP_strlen_str(("12345"))));
  ((s)) = (__ZH_LOP_asStr_str(("")));
  ((a)) = ("toad");
  ((b)) = (__ZH_LOP_asStr_str((" frog")));
  __ZH_LOP_deb_strStrR(("s(Str)"),(&(s)));
  __ZH_LOP_deb_strstr(("a(str)"),((a)));
  __ZH_LOP_deb_strStrR(("b(Str)"),(&(b)));
  __ZH_LOP_out_str((""));
  __ZH_BOP_plusequal_StrRstr((&(s)),((a)));
  __ZH_BOP_plusequal_StrRStrR((&(s)),(&(b)));
  __ZH_LOP_deb_strStrR(("s + a + b"),(&(s)));
  __ZH_LOP_out_str((""));
  __ZH_LOP_deb_strStrR(("before sort"),(&(s)));
  __ZH_BOP_dotcalldotsort_StrPampersand(((&((s)))));
  __ZH_LOP_deb_strStrR(("after sort"),(&(s)));
  ((frog)) = (__ZH_LOP_frog_());
  __ZH_LOP_out_StrR((&(frog)));
  __ZH_BOP_dotcalldotdtor_StrPampersand(((&((frog)))));
  __ZH_BOP_dotcalldotdtor_StrPampersand(((&((s)))));
  __ZH_BOP_dotcalldotdtor_StrPampersand(((&((b)))));
}
