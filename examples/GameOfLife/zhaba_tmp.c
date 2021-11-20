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
struct __PROT_ZH_TYPE_Canvas;
typedef struct __PROT_ZH_TYPE_Canvas __ZH_TYPE_Canvas;

struct __PROT_ZH_TYPE_Range {
  i64 end;
  i64 begin;
};
struct __PROT_ZH_TYPE_Canvas {
  i64 h;
  i64 w;
  char* head;
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
void __ZH_LOP_sleep_int(i64 n);
void __ZH_LOP_cls_();
u64 __ZH_LOP_rng_();
void __ZH_LOP_swap_intPintP(i64* a, i64* b);
char __ZH_LOP_asch_str(char* s);
i64 __ZH_BOP_dotcalldotbegin_RangeP(__ZH_TYPE_Range* slf);
i64 __ZH_BOP_dotcalldotend_RangeP(__ZH_TYPE_Range* slf);
__ZH_TYPE_Range __ZH_LOP_newRange_intint(i64 begin, i64 end);
__ZH_TYPE_Range __ZH_BOP_dotdot_intint(i64 begin, i64 end);
i64 __ZH_LOP_begin_RangeP(__ZH_TYPE_Range* r);
i64 __ZH_LOP_end_RangeP(__ZH_TYPE_Range* r);
__ZH_TYPE_Canvas __ZH_LOP_newCnv_intint(i64 w, i64 h);
char* __ZH_BOP_dotcalldotat_CanvasPintint(__ZH_TYPE_Canvas* slf, i64 x, i64 y);
char __ZH_BOP_dotcalldotget_CanvasPintint(__ZH_TYPE_Canvas* slf, i64 x, i64 y);
void __ZH_BOP_dotcalldotfill_CanvasPchar(__ZH_TYPE_Canvas* slf, char ch);
void __ZH_LOP_out_CanvasP(__ZH_TYPE_Canvas* c);
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
  (t) = ((*(a)));
  ((*(a))) = ((*(b)));
  ((*(b))) = (t);
}
char __ZH_LOP_asch_str(char* s) {
  return ((*(((char*)(s)))));
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
__ZH_TYPE_Canvas __ZH_LOP_newCnv_intint(i64 w, i64 h) {
  __ZH_TYPE_Canvas res;
  ((res).w) = (w);
  ((res).h) = (h);
  ((res).head) = (((char*)(__ZH_LOP_malloc_int(__ZH_BOP_asterisk_intint(w, h)))));
  return (res);
}
char* __ZH_BOP_dotcalldotat_CanvasPintint(__ZH_TYPE_Canvas* slf, i64 x, i64 y) {
  return (((char*)(__ZH_BOP_plus_intint(__ZH_BOP_plus_intint(((i64)((slf)->head)), __ZH_BOP_asterisk_intint((slf)->w, y)), x))));
}
char __ZH_BOP_dotcalldotget_CanvasPintint(__ZH_TYPE_Canvas* slf, i64 x, i64 y) {
  return ((*(__ZH_BOP_dotcalldotat_CanvasPintint(slf, x, y))));
}
void __ZH_BOP_dotcalldotfill_CanvasPchar(__ZH_TYPE_Canvas* slf, char ch) {
  {
  i64 i;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  (__range) = (__ZH_BOP_dotdot_intint(0, (slf)->h));
  (__begin) = (__ZH_BOP_dotcalldotbegin_RangeP((&(__range))));
  (__end) = (__ZH_BOP_dotcalldotend_RangeP((&(__range))));
  (i) = (__begin);
  while (__ZH_BOP_exclamationequal_intint(i, __end)) {
    {
  i64 j;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  (__range) = (__ZH_BOP_dotdot_intint(0, (slf)->w));
  (__begin) = (__ZH_BOP_dotcalldotbegin_RangeP((&(__range))));
  (__end) = (__ZH_BOP_dotcalldotend_RangeP((&(__range))));
  (j) = (__begin);
  while (__ZH_BOP_exclamationequal_intint(j, __end)) {
    ((*(__ZH_BOP_dotcalldotat_CanvasPintint(slf, i, j)))) = (ch);
    __ZH_LOP_plusplus_intP((&(j)));
  };
};
    __ZH_LOP_plusplus_intP((&(i)));
  };
};
}
void __ZH_LOP_out_CanvasP(__ZH_TYPE_Canvas* c) {
  {
  i64 i;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  (__range) = (__ZH_BOP_dotdot_intint(0, (c)->h));
  (__begin) = (__ZH_BOP_dotcalldotbegin_RangeP((&(__range))));
  (__end) = (__ZH_BOP_dotcalldotend_RangeP((&(__range))));
  (i) = (__begin);
  while (__ZH_BOP_exclamationequal_intint(i, __end)) {
    {
  i64 j;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  (__range) = (__ZH_BOP_dotdot_intint(0, (c)->w));
  (__begin) = (__ZH_BOP_dotcalldotbegin_RangeP((&(__range))));
  (__end) = (__ZH_BOP_dotcalldotend_RangeP((&(__range))));
  (j) = (__begin);
  while (__ZH_BOP_exclamationequal_intint(j, __end)) {
    __ZH_LOP_out_char((*(__ZH_BOP_dotcalldotat_CanvasPintint(c, i, j))));
    __ZH_LOP_out_char(((char)(32)));
    __ZH_LOP_plusplus_intP((&(j)));
  };
};
    __ZH_LOP_out_str("");
    __ZH_LOP_plusplus_intP((&(i)));
  };
};
}
int main(int argc, char *argv[])  {
  char live;
  char dead;
  i64 r;
  __ZH_TYPE_Canvas c;
  i64 h;
  i64 w;
  (w) = (30), (h) = (30);
  (c) = (__ZH_LOP_newCnv_intint(w, h));
  (r) = (54);
  (dead) = (__ZH_LOP_asch_str(".")), (live) = (__ZH_LOP_asch_str("#"));
  __ZH_BOP_dotcalldotfill_CanvasPchar((&(c)), dead);
  {
  i64 i;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  (__range) = (__ZH_BOP_dotdot_intint(0, (c).h));
  (__begin) = (__ZH_BOP_dotcalldotbegin_RangeP((&(__range))));
  (__end) = (__ZH_BOP_dotcalldotend_RangeP((&(__range))));
  (i) = (__begin);
  while (__ZH_BOP_exclamationequal_intint(i, __end)) {
    {
  i64 j;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  (__range) = (__ZH_BOP_dotdot_intint(0, (c).w));
  (__begin) = (__ZH_BOP_dotcalldotbegin_RangeP((&(__range))));
  (__end) = (__ZH_BOP_dotcalldotend_RangeP((&(__range))));
  (j) = (__begin);
  while (__ZH_BOP_exclamationequal_intint(j, __end)) {
    if (__ZH_BOP_percent_intint(((i64)(__ZH_LOP_rng_())), 2)) {
      ((*(__ZH_BOP_dotcalldotat_CanvasPintint((&(c)), i, j)))) = (live);
    }
    __ZH_LOP_plusplus_intP((&(j)));
  };
};
    __ZH_LOP_plusplus_intP((&(i)));
  };
};
  {
  i64 k;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  (__range) = (__ZH_BOP_dotdot_intint(0, 500));
  (__begin) = (__ZH_BOP_dotcalldotbegin_RangeP((&(__range))));
  (__end) = (__ZH_BOP_dotcalldotend_RangeP((&(__range))));
  (k) = (__begin);
  while (__ZH_BOP_exclamationequal_intint(k, __end)) {
    __ZH_TYPE_Canvas nc;
    (nc) = (__ZH_LOP_newCnv_intint(w, h));
    __ZH_BOP_dotcalldotfill_CanvasPchar((&(nc)), dead);
    {
  i64 i;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  (__range) = (__ZH_BOP_dotdot_intint(1, __ZH_BOP_minus_intint((c).h, 1)));
  (__begin) = (__ZH_BOP_dotcalldotbegin_RangeP((&(__range))));
  (__end) = (__ZH_BOP_dotcalldotend_RangeP((&(__range))));
  (i) = (__begin);
  while (__ZH_BOP_exclamationequal_intint(i, __end)) {
    {
  i64 j;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  (__range) = (__ZH_BOP_dotdot_intint(1, __ZH_BOP_minus_intint((c).h, 1)));
  (__begin) = (__ZH_BOP_dotcalldotbegin_RangeP((&(__range))));
  (__end) = (__ZH_BOP_dotcalldotend_RangeP((&(__range))));
  (j) = (__begin);
  while (__ZH_BOP_exclamationequal_intint(j, __end)) {
    i64 near;
    (near) = (0);
    {
  i64 x;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  (__range) = (__ZH_BOP_dotdot_intint(__ZH_LOP_minus_int(1), 2));
  (__begin) = (__ZH_BOP_dotcalldotbegin_RangeP((&(__range))));
  (__end) = (__ZH_BOP_dotcalldotend_RangeP((&(__range))));
  (x) = (__begin);
  while (__ZH_BOP_exclamationequal_intint(x, __end)) {
    {
  i64 y;
  i64 __end;
  i64 __begin;
  __ZH_TYPE_Range __range;
  (__range) = (__ZH_BOP_dotdot_intint(__ZH_LOP_minus_int(1), 2));
  (__begin) = (__ZH_BOP_dotcalldotbegin_RangeP((&(__range))));
  (__end) = (__ZH_BOP_dotcalldotend_RangeP((&(__range))));
  (y) = (__begin);
  while (__ZH_BOP_exclamationequal_intint(y, __end)) {
    if (__ZH_BOP_ampersandampersand_intint(__ZH_LOP_exclamation_int(__ZH_BOP_ampersandampersand_intint(__ZH_BOP_equalequal_intint(y, 0), __ZH_BOP_equalequal_intint(x, 0))), __ZH_BOP_equalequal_charchar(__ZH_BOP_dotcalldotget_CanvasPintint((&(c)), __ZH_BOP_plus_intint(i, x), __ZH_BOP_plus_intint(j, y)), live))) {
      __ZH_BOP_plusequal_intPint((&(near)), 1);
    }
    __ZH_LOP_plusplus_intP((&(y)));
  };
};
    __ZH_LOP_plusplus_intP((&(x)));
  };
};
    if (__ZH_BOP_pipepipe_intint(__ZH_BOP_ampersandampersand_intint(__ZH_BOP_equalequal_charchar((*(__ZH_BOP_dotcalldotat_CanvasPintint((&(c)), i, j))), live), __ZH_BOP_equalequal_intint(near, 2)), __ZH_BOP_equalequal_intint(near, 3))) {
      ((*(__ZH_BOP_dotcalldotat_CanvasPintint((&(nc)), i, j)))) = (live);
    } else if (__ZH_BOP_equalequal_intint(near, 3)) {
      ((*(__ZH_BOP_dotcalldotat_CanvasPintint((&(nc)), i, j)))) = (live);
    }
    __ZH_LOP_plusplus_intP((&(j)));
  };
};
    __ZH_LOP_plusplus_intP((&(i)));
  };
};
    (c) = (nc);
    __ZH_LOP_cls_();
    __ZH_LOP_out_CanvasP((&(c)));
    __ZH_LOP_sleep_int(50);
    __ZH_LOP_plusplus_intP((&(k)));
  };
};
}
