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

struct __PROT_ZH_TYPE_Range {
  i64 end;
  i64 begin;
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
i64 __ZH_LOP_plusplus_intP(i64* val);
void __ZH_LOP_plusplus_intPP(i64** val);
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
i64 __ZH_BOP_dotcalldotbegin_RangeP(__ZH_TYPE_Range* slf);
i64 __ZH_BOP_dotcalldotend_RangeP(__ZH_TYPE_Range* slf);
__ZH_TYPE_Range __ZH_LOP_newRange_intint(i64 begin, i64 end);
__ZH_TYPE_Range __ZH_BOP_dotdot_intint(i64 begin, i64 end);
i64 __ZH_LOP_begin_RangeP(__ZH_TYPE_Range* r);
i64 __ZH_LOP_end_RangeP(__ZH_TYPE_Range* r);
void __ZH_LOP_fizz_buzz_int(i64 mx);
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
i64 __ZH_LOP_plusplus_intP(i64* val) {
  return (__ZH_BOP_plusequal_intPint(val, 1));
}
void __ZH_LOP_plusplus_intPP(i64** val) {
  ((*(val))) = (((i64*)(__ZH_BOP_plus_intint(((i64)((*(val)))), 8))));
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
i64 __ZH_BOP_dotcalldotbegin_RangeP(__ZH_TYPE_Range* slf) {
  return ((slf)->begin);
}
i64 __ZH_BOP_dotcalldotend_RangeP(__ZH_TYPE_Range* slf) {
  return ((slf)->end);
}
__ZH_TYPE_Range __ZH_LOP_newRange_intint(i64 begin, i64 end) {
  __ZH_TYPE_Range slf;
  ((slf).begin) = (begin);
  ((slf).end) = (end);
  return (slf);
}
__ZH_TYPE_Range __ZH_BOP_dotdot_intint(i64 begin, i64 end) {
  return (__ZH_LOP_newRange_intint(begin, end));
}
i64 __ZH_LOP_begin_RangeP(__ZH_TYPE_Range* r) {
  return ((r)->begin);
}
i64 __ZH_LOP_end_RangeP(__ZH_TYPE_Range* r) {
  return ((r)->end);
}
void __ZH_LOP_fizz_buzz_int(i64 mx) {
  {
  i64 i;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  (__range) = (__ZH_BOP_dotdot_intint(1, __ZH_BOP_plus_intint(mx, 1)));
  (__begin) = (__ZH_BOP_dotcalldotbegin_RangeP((&(__range))));
  (__end) = (__ZH_BOP_dotcalldotend_RangeP((&(__range))));
  (i) = (__begin);
  while (__ZH_BOP_exclamationequal_intint(i, __end)) {
    if (__ZH_BOP_percentpercent_intint(i, 15)) {
      __ZH_LOP_out_str("FizzBuzz");
    } else if (__ZH_BOP_percentpercent_intint(i, 3)) {
      __ZH_LOP_out_str("Fizz");
    } else if (__ZH_BOP_percentpercent_intint(i, 5)) {
      __ZH_LOP_out_str("Buzz");
    } else {
      __ZH_LOP_out_int(i);
    }
    __ZH_LOP_plusplus_intP((&(i)));
  };
};
}
int main(int argc, char *argv[])  {
  __ZH_LOP_fizz_buzz_int(20);
}
