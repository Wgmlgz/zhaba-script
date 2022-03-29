#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef char* str;

typedef float f4;
typedef double f8;
typedef long double f10;

i64 alloc(i64 size) {
  void* ptr = calloc(size, 1);
  return ptr;
}
i8 in_i8() {
  i8 tmp;
  scanf("%i", &tmp);
  return tmp;
}
i16 in_i16() {
  i16 tmp;
  scanf("%i", &tmp);
  return tmp;
}
i32 in_i32() {
  i32 tmp;
  scanf("%i", &tmp);
  return tmp;
}
i64 in_i64() {
  i64 tmp;
  scanf("%i", &tmp);
  return tmp;
}
u8 in_u8() {
  u8 tmp;
  scanf("%i", &tmp);
  return tmp;
}
u16 in_u16() {
  u16 tmp;
  scanf("%i", &tmp);
  return tmp;
}
u32 in_u32() {
  u32 tmp;
  scanf("%i", &tmp);
  return tmp;
}
u64 in_u64() {
  u64 tmp;
  scanf("%i", &tmp);
  return tmp;
}
char in_char() {
  char tmp;
  scanf("%i", &tmp);
  return tmp;
}
char* in_str() {
  char* tmp;
  scanf("%i", &tmp);
  return tmp;
}
bool in_bool() {
  bool tmp;
  scanf("%i", &tmp);
  return tmp;
}
float in_f4() {
  float tmp;
  scanf("%i", &tmp);
  return tmp;
}
double in_f8() {
  double tmp;
  scanf("%i", &tmp);
  return tmp;
}
long double in_f10() {
  long double tmp;
  scanf("%i", &tmp);
  return tmp;
}
struct __PROT_ZH_TYPE_Out;
typedef struct __PROT_ZH_TYPE_Out __ZH_TYPE_Out;
struct __PROT_ZH_TYPE_Range;
typedef struct __PROT_ZH_TYPE_Range __ZH_TYPE_Range;
struct __PROT_ZH_TYPE_Vec_lessi64_greater;
typedef struct __PROT_ZH_TYPE_Vec_lessi64_greater __ZH_TYPE_Vec_lessi64_greater;
struct __PROT_ZH_TYPE_VecIter_lessi64_greater;
typedef struct __PROT_ZH_TYPE_VecIter_lessi64_greater __ZH_TYPE_VecIter_lessi64_greater;
struct __PROT_ZH_TYPE_Vec_lesschar_greater;
typedef struct __PROT_ZH_TYPE_Vec_lesschar_greater __ZH_TYPE_Vec_lesschar_greater;
struct __PROT_ZH_TYPE_VecIter_lesschar_greater;
typedef struct __PROT_ZH_TYPE_VecIter_lesschar_greater __ZH_TYPE_VecIter_lesschar_greater;
struct __PROT_ZH_TYPE_Str;
typedef struct __PROT_ZH_TYPE_Str __ZH_TYPE_Str;

struct __PROT_ZH_TYPE_Out {
  bool complex;
};
struct __PROT_ZH_TYPE_Range {
  i64 end;
  i64 begin;
};
struct __PROT_ZH_TYPE_Vec_lessi64_greater {
  i64* head;
  i64 capacity;
  i64 size;
};
struct __PROT_ZH_TYPE_VecIter_lessi64_greater {
  i64* ptr;
};
struct __PROT_ZH_TYPE_Vec_lesschar_greater {
  char* head;
  i64 capacity;
  i64 size;
};
struct __PROT_ZH_TYPE_VecIter_lesschar_greater {
  char* ptr;
};
struct __PROT_ZH_TYPE_Str {
  i64 size;
  __ZH_TYPE_Vec_lesschar_greater data;
};
i64 __ZH_LOP__plus_i64(i64 v101);
bool __ZH_BOP__percent_percent_i64i64(i64 v102, i64 v103);
void __ZH_BOP__plus_equal_i64Ri64(i64* v104, i64 v105);
void __ZH_BOP__minus_equal_i64Ri64(i64* v106, i64 v107);
void __ZH_BOP__slash_equal_i64Ri64(i64* v108, i64 v109);
void __ZH_BOP__percent_equal_i64Ri64(i64* v110, i64 v111);
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v112, i64 v113);
void __ZH_LOP__plus_plus_i64R(i64* v114);
void __ZH_LOP__minus_minus_i64R(i64* v115);
void __ZH_LOP__plus_plus_u8R(u8* v116);
void __ZH_LOP__minus_minus_u8R(u8* v117);
i8 __ZH_LOP__minus_i8(i8 v118);
i16 __ZH_LOP__minus_i16(i16 v119);
i32 __ZH_LOP__minus_i32(i32 v120);
i64 __ZH_LOP__minus_i64(i64 v121);
__ZH_TYPE_Out __ZH_LOP_Out_();
__ZH_TYPE_Out __ZH_LOP__Out_();
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v123, __ZH_TYPE_Out v124);
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v125);
__ZH_TYPE_Out __ZH_ROP__less_str(str v126);
__ZH_TYPE_Out __ZH_LOP__less_str(str v127);
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v128, str v129);
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v130);
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v131, str* v132);
__ZH_TYPE_Out __ZH_ROP__less_char(char v133);
__ZH_TYPE_Out __ZH_LOP__less_char(char v134);
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v135, char v136);
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v137);
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v138, char* v139);
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v140);
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v141);
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v142, i8 v143);
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v144);
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v145, i8* v146);
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v147);
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v148);
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v149, i16 v150);
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v151);
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v152, i16* v153);
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v154);
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v155);
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v156, i32 v157);
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v158);
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v159, i32* v160);
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v161);
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v162);
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v163, i64 v164);
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v165);
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v166, i64* v167);
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v168);
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v169);
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v170, u8 v171);
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v172);
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v173, u8* v174);
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v175);
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v176);
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v177, u16 v178);
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v179);
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v180, u16* v181);
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v182);
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v183);
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v184, u32 v185);
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v186);
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v187, u32* v188);
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v189);
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v190);
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v191, u64 v192);
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v193);
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v194, u64* v195);
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v196);
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v197, i64 v198);
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v199);
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v200);
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v201, i64 v202);
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v204, i64 v205);
i64 __ZH_LOP_rangeMin_();
i64 __ZH_LOP_rangeMax_();
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v206);
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v207);
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v208);
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v209);
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v210, i64 v211);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v212);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v213);
bool __ZH_BOP__equal_equal_i64Range(i64 v214, __ZH_TYPE_Range v215);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v235);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v237);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v238, __ZH_TYPE_VecIter_lessi64_greater v239);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v240);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v216, i64 v217);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v218, i64 v219);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v220);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v225);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v232, i64 v233);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v234);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v241);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v242);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v243);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v244);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v245);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v246);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v248, i64 v249);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v255);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v261, i64 v262);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v263, __ZH_TYPE_Vec_lessi64_greater* v264);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v269);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v270);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v271);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v272);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v273, __ZH_TYPE_Vec_lessi64_greater* v274);
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v275, i64 v276);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v277, i64 v278, i64 v279);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v285, __ZH_TYPE_Range v286);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v289);
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v290, __ZH_TYPE_Vec_lessi64_greater* v291);
void __ZH_LOP_swap_i64Pi64P(i64* v292, i64* v293);
i64* __ZH_LOP_partition_i64Pi64P(i64* v295, i64* v296);
void __ZH_LOP_qsort_i64Pi64P(i64* v300, i64* v301);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v305);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v308);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v309, i64 v310);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v316);
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v322, i64 v323);
char __ZH_BOP__caret_stri64(str v324, i64 v325);
bool __ZH_BOP__equal_equal_charstr(char v326, str v327);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v347);
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v349);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v350, __ZH_TYPE_VecIter_lesschar_greater v351);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v352);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v328, i64 v329);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v330, i64 v331);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v332);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v337);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v344, char v345);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v346);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v353);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v354);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v355);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v356);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v357);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v358);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v360, char v361);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v367);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v373, char v374);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v375, __ZH_TYPE_Vec_lesschar_greater* v376);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v381);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v382);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v383);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v384);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v385, __ZH_TYPE_Vec_lesschar_greater* v386);
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v387, i64 v388);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v389, i64 v390, i64 v391);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v397, __ZH_TYPE_Range v398);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v401);
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v402, __ZH_TYPE_Vec_lesschar_greater* v403);
void __ZH_LOP_swap_charPcharP(char* v404, char* v405);
char* __ZH_LOP_partition_charPcharP(char* v407, char* v408);
void __ZH_LOP_qsort_charPcharP(char* v412, char* v413);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v417);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v420);
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v422);
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v423);
char __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v425, i64 v426);
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v427, i64 v428);
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v429, char v430);
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v431);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v432);
i64 __ZH_LOP_len_str(str v434);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v436);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v437);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v438, char v439);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v440, __ZH_TYPE_Str* v441);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v447, str v448);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v454);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v455);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v456, __ZH_TYPE_Str* v457);
__ZH_TYPE_Str __ZH_LOP_frog_escaped_();
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_();
str __ZH_LOP_frog_raw_();
str __ZH_LOP_frog_();
int main(int argc, char *argv[]) ;

i64 __ZH_LOP__plus_i64(i64 v101) {
  return (v101);
}
bool __ZH_BOP__percent_percent_i64i64(i64 v102, i64 v103) {
  return (!((((v102))%((v103)))));
}
void __ZH_BOP__plus_equal_i64Ri64(i64* v104, i64 v105) {
  (((*v104)=(((*v104))+((v105)))));
}
void __ZH_BOP__minus_equal_i64Ri64(i64* v106, i64 v107) {
  (((*v106)=(((*v106))-((v107)))));
}
void __ZH_BOP__slash_equal_i64Ri64(i64* v108, i64 v109) {
  (((*v108)=(((*v108))/((v109)))));
}
void __ZH_BOP__percent_equal_i64Ri64(i64* v110, i64 v111) {
  (((*v110)=(((*v110))%((v111)))));
}
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v112, i64 v113) {
  (((*v112)=(((*v112))*((v113)))));
}
void __ZH_LOP__plus_plus_i64R(i64* v114) {
  (__ZH_BOP__plus_equal_i64Ri64(&(*v114), (((i64)1))));
}
void __ZH_LOP__minus_minus_i64R(i64* v115) {
  (__ZH_BOP__minus_equal_i64Ri64(&(*v115), (((i64)1))));
}
void __ZH_LOP__plus_plus_u8R(u8* v116) {
  (((*v116)=(((*v116))+((((u8)1))))));
}
void __ZH_LOP__minus_minus_u8R(u8* v117) {
  (((*v117)=(((*v117))-((((u8)1))))));
}
i8 __ZH_LOP__minus_i8(i8 v118) {
  return (((((i8)0)))-((v118)));
}
i16 __ZH_LOP__minus_i16(i16 v119) {
  return (((((i16)0)))-((v119)));
}
i32 __ZH_LOP__minus_i32(i32 v120) {
  return (((((i32)0)))-((v120)));
}
i64 __ZH_LOP__minus_i64(i64 v121) {
  return (((((i64)0)))-((v121)));
}
__ZH_TYPE_Out __ZH_LOP_Out_() {
  __ZH_TYPE_Out v122;
  return (v122);
}
__ZH_TYPE_Out __ZH_LOP__Out_() {
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v123, __ZH_TYPE_Out v124) {
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v125) {
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_str(str v126) {
  (printf("%s\n", (v126)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_str(str v127) {
  ((printf("%s", (v127))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v128, str v129) {
  ((printf("%s", (v129))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v130) {
  (((*v130)=(in_str())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v131, str* v132) {
  (((*v132)=(in_str())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_char(char v133) {
  (printf("%c\n", (v133)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_char(char v134) {
  ((printf("%c", (v134))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v135, char v136) {
  ((printf("%c", (v136))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v137) {
  (((*v137)=(in_char())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v138, char* v139) {
  (((*v139)=(in_char())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v140) {
  (printf("%d\n", (v140)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v141) {
  ((printf("%d", (v141))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v142, i8 v143) {
  ((printf("%d", (v143))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v144) {
  (((*v144)=(in_i8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v145, i8* v146) {
  (((*v146)=(in_i8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v147) {
  (printf("%hd\n", (v147)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v148) {
  ((printf("%hd", (v148))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v149, i16 v150) {
  ((printf("%hd", (v150))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v151) {
  (((*v151)=(in_i16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v152, i16* v153) {
  (((*v153)=(in_i16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v154) {
  (printf("%d\n", (v154)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v155) {
  ((printf("%d", (v155))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v156, i32 v157) {
  ((printf("%d", (v157))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v158) {
  (((*v158)=(in_i32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v159, i32* v160) {
  (((*v160)=(in_i32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v161) {
  (printf("%lld\n", (v161)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v162) {
  ((printf("%lld", (v162))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v163, i64 v164) {
  ((printf("%lld", (v164))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v165) {
  (((*v165)=(in_i64())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v166, i64* v167) {
  (((*v167)=(in_i64())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v168) {
  (printf("%d\n", (v168)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v169) {
  ((printf("%d", (v169))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v170, u8 v171) {
  ((printf("%d", (v171))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v172) {
  (((*v172)=(in_u8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v173, u8* v174) {
  (((*v174)=(in_u8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v175) {
  (printf("%hd\n", (v175)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v176) {
  ((printf("%hd", (v176))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v177, u16 v178) {
  ((printf("%hd", (v178))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v179) {
  (((*v179)=(in_u16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v180, u16* v181) {
  (((*v181)=(in_u16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v182) {
  (printf("%u\n", (v182)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v183) {
  ((printf("%u", (v183))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v184, u32 v185) {
  ((printf("%u", (v185))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v186) {
  (((*v186)=(in_u32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v187, u32* v188) {
  (((*v188)=(in_u32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v189) {
  (printf("%llu\n", (v189)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v190) {
  ((printf("%llu", (v190))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v191, u64 v192) {
  ((printf("%llu", (v192))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v193) {
  (((*v193)=(in_u64())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v194, u64* v195) {
  (((*v195)=(in_u64())));
  return (__ZH_LOP__Out_());
}
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v196) {
  (((*((v196)))=(((*((v196))))+((((i64)1))))));
}
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v197, i64 v198) {
  return (((*((v197))))!=((v198)));
}
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v199) {
  return ((((v199))->begin));
}
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v200) {
  return ((((v200))->end));
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v201, i64 v202) {
  __ZH_TYPE_Range v203;
  (((((&(v203))->begin))=(v201)));
  (((((&(v203))->end))=(v202)));
  return (v203);
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v204, i64 v205) {
  return (__ZH_BOP__dot_dot_i64i64((v204), (__ZH_LOP__minus_i64((v205)))));
}
i64 __ZH_LOP_rangeMin_() {
  return (__ZH_LOP__minus_i64((((i64)9223372036854775807))));
}
i64 __ZH_LOP_rangeMax_() {
  return (((i64)9223372036854775807));
}
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v206) {
  return (__ZH_BOP__dot_dot_i64i64((v206), (__ZH_LOP_rangeMax_())));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v207) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (v207)));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v208) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (__ZH_LOP__minus_i64((v208)))));
}
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v209) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP__minus_i64((((&(v209))->begin)))), (((&(v209))->end))));
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v210, i64 v211) {
  return (__ZH_BOP__dot_dot_i64i64((v210), (((v211))+((((i64)1))))));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v212) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((v212))+((((i64)1))))));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v213) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((__ZH_LOP__minus_i64((v213))))+((((i64)1))))));
}
bool __ZH_BOP__equal_equal_i64Range(i64 v214, __ZH_TYPE_Range v215) {
  if ((((((&(v215))->begin)))<((((&(v215))->end))))) {
    return (((((((&(v215))->begin)))<=((v214))))&&((((v214))<((((&(v215))->end))))));
  } else {
    return (((((((&(v215))->end)))<=((v214))))&&((((v214))<((((&(v215))->begin))))));
  }
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v235) {
  __ZH_TYPE_VecIter_lessi64_greater v236;
  (((((&(v236))->ptr))=(v235)));
  return (v236);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v237) {
  ((((((v237))->ptr))=(((i64*)(((((i64)((((v237))->ptr)))))+((((((i64)1)))*((((i64)8))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v238, __ZH_TYPE_VecIter_lessi64_greater v239) {
  return (((((i64)((((v238))->ptr)))))!=((((i64)(((&(v239))->ptr))))));
}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v240) {
  return &(*((((&(v240))->ptr))));
}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v216, i64 v217) {
  return (((i64*)(((i64*)(((((i64)((((v216))->head)))))+((((v217))*((((i64)8))))))))));
}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v218, i64 v219) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v218), (v219)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v220) {
  (printf("%s", ("[")));
  {
      i64 v224;
      i64 v223;
      i64 v222;
      __ZH_TYPE_Range v221;
      (((v221)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v220))->size))))));
      (((v222)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v221)))))));
      (((v223)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v221)))))));
      (((v224)=(v222)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v224))), (v223)))) {
        if ((!((!((v224)))))) {
          (printf("%s", (" ")));
        }
        (printf("%lld", (*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v220), (v224)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v224)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v225) {
  i64 v226;
  (((v226)=((((v225))->capacity))));
  if ((((v226))==((((i64)0))))) {
    (((v226)=(((i64)1))));
    ((((((v225))->head))=(((i64*)(alloc((((i64)8))))))));
    ((((((v225))->capacity))=(v226)));
  } else {
    i64* v227;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v226), (((i64)2))));
    (((v227)=(((i64*)(alloc((((v226))*((((i64)8))))))))));
    {
        i64 v231;
        i64 v230;
        i64 v229;
        __ZH_TYPE_Range v228;
        (((v228)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v225))->size))))));
        (((v229)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v228)))))));
        (((v230)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v228)))))));
        (((v231)=(v229)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v231))), (v230)))) {
          (((*((((i64*)(((((i64)(v227))))+((((v231))*((((i64)8))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v225), (v231)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v231)))));
        }
      }
    (free((void*) (((i64)((((v225))->head))))));
    ((((((v225))->head))=(v227)));
  }
  ((((((v225))->capacity))=(v226)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v232, i64 v233) {
  if (((((((v232))->size)))==(((((v232))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((v232)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v232), ((((v232))->size))))=(v233)));
  (__ZH_LOP__plus_plus_i64R(&((((v232))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v234) {
  (__ZH_LOP__minus_minus_i64R(&((((v234))->size))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v241) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P(((((v241))->head))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v242) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v242), ((((v242))->size))))));
}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v243) {
  return &(*(((((v243))->head))));
}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v244) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v244), ((((((v244))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v245) {
  if ((!((!((((i64)((((v245))->head))))))))) {
    (free((void*) (((i64)((((v245))->head))))));
    ((((((v245))->size))=(((i64)0))));
    ((((((v245))->capacity))=(((i64)0))));
    ((((((v245))->head))=(((i64*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v246) {
  __ZH_TYPE_Vec_lessi64_greater v247;
  (((((&(v247))->head))=(((i64*)(((i64)0))))));
  (((((&(v247))->size))=(((i64)0))));
  (((((&(v247))->capacity))=(((i64)0))));
  while ((((((&(v247))->capacity)))<((v246)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((&((v247)))));
  }
  (((((&(v247))->size))=(v246)));
  (((((&(v247))->capacity))=(v246)));
  return (v247);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v247)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v248, i64 v249) {
  __ZH_TYPE_Vec_lessi64_greater v250;
  (((v250)=(__ZH_LOP_Vec_lessi64_greater_i64((v248)))));
  {
      i64 v254;
      i64 v253;
      i64 v252;
      __ZH_TYPE_Range v251;
      (((v251)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v250))->size))))));
      (((v252)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v251)))))));
      (((v253)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v251)))))));
      (((v254)=(v252)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v254))), (v253)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v250))), (v254)))=(v249)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v254)))));
      }
    }
  return (v250);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v250)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {
  return (__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v255) {
  __ZH_TYPE_Vec_lessi64_greater v256;
  (((v256)=(__ZH_LOP_Vec_lessi64_greater_i64((((&(*v255))->size))))));
  {
      i64 v260;
      i64 v259;
      i64 v258;
      __ZH_TYPE_Range v257;
      (((v257)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v255))->size))))));
      (((v258)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v257)))))));
      (((v259)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v257)))))));
      (((v260)=(v258)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v260))), (v259)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v256))), (v260)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((*v255))), (v260)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v260)))));
      }
    }
  return (v256);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v256)))));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v261, i64 v262) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v261))), (v262)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v263, __ZH_TYPE_Vec_lessi64_greater* v264) {
  {
      __ZH_TYPE_VecIter_lessi64_greater v268;
      __ZH_TYPE_VecIter_lessi64_greater v267;
      __ZH_TYPE_VecIter_lessi64_greater v266;
      __ZH_TYPE_Vec_lessi64_greater v265;
      (((v265)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v264)))));
      (((v266)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((&((v265)))))));
      (((v267)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((&((v265)))))));
      (((v268)=(v266)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater((&((v268))), (v267)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v263))), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v268)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand((&((v268)))));
      }
    }
}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v269) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v269)))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v270) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v270)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v271) {
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v271)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v272) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v272))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v273, __ZH_TYPE_Vec_lessi64_greater* v274) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v274))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v275, i64 v276) {
  if ((((v276))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v276), ((((v275))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v275), (v276)));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v277, i64 v278, i64 v279) {
  __ZH_TYPE_Vec_lessi64_greater v280;
  (((v280)=(__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))))));
  {
      i64 v284;
      i64 v283;
      i64 v282;
      __ZH_TYPE_Range v281;
      (((v281)=(__ZH_BOP__dot_dot_i64i64((v278), (v279)))));
      (((v282)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v281)))))));
      (((v283)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v281)))))));
      (((v284)=(v282)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v284))), (v283)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((v280))), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v277), (v284)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v284)))));
      }
    }
  return (v280);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v280)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v285, __ZH_TYPE_Range v286) {
  i64 v288;
  i64 v287;
  ((((v287)=(((&(v286))->begin)))), (((v288)=(((&(v286))->end)))));
  if ((((v287))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v287), ((((v285))->size))));
  }
  if ((((v287))<((((i64)0))))) {
    (((v287)=(((i64)0))));
  }
  if ((((v288))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v288), ((((v285))->size))));
  }
  if ((((v288))>(((((v285))->size))))) {
    (((v288)=((((v285))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v285), (v287), (v288)));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v289) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v289), (((i64)0)), ((((v289))->size))));
}
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v290, __ZH_TYPE_Vec_lessi64_greater* v291) {
  return (((bool)0));
}
void __ZH_LOP_swap_i64Pi64P(i64* v292, i64* v293) {
  i64 v294;
  (((v294)=(*((v292)))));
  (((*((v292)))=(*((v293)))));
  (((*((v293)))=(v294)));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v295, i64* v296) {
  i64* v299;
  i64* v298;
  i64* v297;
  ((((v297)=(((i64*)(((((i64)(v296))))-((((((i64)1)))*((((i64)8)))))))))), (((v298)=(v295))), (((v299)=(v295))));
  (((v299)=(v295)));
  while ((((((i64)(v299))))!=((((i64)(v297)))))) {
    if ((((*((v299))))<((*((v297)))))) {
      (__ZH_LOP_swap_i64Pi64P((v298), (v299)));
      (((v298)=(((i64*)(((((i64)(v298))))+((((((i64)1)))*((((i64)8))))))))));
    }
    (((v299)=(((i64*)(((((i64)(v299))))+((((((i64)1)))*((((i64)8))))))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v298), (v297)));
  return (v298);
}
void __ZH_LOP_qsort_i64Pi64P(i64* v300, i64* v301) {
  i64 v303;
  i64 v302;
  (((v302)=(((((i64)(v301))))-((((i64)(v300)))))));
  (((v303)=(((i64)8))));
  if ((((v302))>((v303)))) {
    i64* v304;
    (((v304)=(__ZH_LOP_partition_i64Pi64P((v300), (v301)))));
    (__ZH_LOP_qsort_i64Pi64P((v300), (v304)));
    (((v304)=(((i64*)(((((i64)(v304))))+((((((i64)1)))*((((i64)8))))))))));
    (__ZH_LOP_qsort_i64Pi64P((v304), (v301)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v305) {
  __ZH_TYPE_VecIter_lessi64_greater v307;
  __ZH_TYPE_VecIter_lessi64_greater v306;
  (((v306)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((v305)))));
  (((v307)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((v305)))));
  (__ZH_LOP_qsort_i64Pi64P((((&(v306))->ptr)), (((&(v307))->ptr))));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v308) {
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand((&((*v308)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v309, i64 v310) {
  __ZH_TYPE_Vec_lessi64_greater v311;
  (((v311)=(__ZH_LOP_Vec_lessi64_greater_i64((((v310))-((v309)))))));
  {
      i64 v315;
      i64 v314;
      i64 v313;
      __ZH_TYPE_Range v312;
      (((v312)=(__ZH_BOP__dot_dot_i64i64((v309), (v310)))));
      (((v313)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v312)))))));
      (((v314)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v312)))))));
      (((v315)=(v313)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v315))), (v314)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v311))), (((v315))-((v309)))))=(v315)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v315)))));
      }
    }
  return (v311);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v311)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v316) {
  __ZH_TYPE_Vec_lessi64_greater v317;
  (((v317)=(__ZH_LOP_Vec_lessi64_greater_())));
  {
      i64 v321;
      i64 v320;
      i64 v319;
      __ZH_TYPE_Range v318;
      (((v318)=(*((v316)))));
      (((v319)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v318)))))));
      (((v320)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v318)))))));
      (((v321)=(v319)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v321))), (v320)))) {
        (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v317), (v321)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v321)))));
      }
    }
  return (v317);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v317)))));
}
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v322, i64 v323) {
  return (*((((char*)(((((i64)(*((v322))))))+((v323)))))));
}
char __ZH_BOP__caret_stri64(str v324, i64 v325) {
  return (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v324))), (v325)));
}
bool __ZH_BOP__equal_equal_charstr(char v326, str v327) {
  return (((v326))==((__ZH_BOP__caret_stri64((v327), (((i64)0))))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v347) {
  __ZH_TYPE_VecIter_lesschar_greater v348;
  (((((&(v348))->ptr))=(v347)));
  return (v348);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v349) {
  ((((((v349))->ptr))=(((char*)(((((i64)((((v349))->ptr)))))+((((((i64)1)))*((((i64)1))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v350, __ZH_TYPE_VecIter_lesschar_greater v351) {
  return (((((i64)((((v350))->ptr)))))!=((((i64)(((&(v351))->ptr))))));
}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v352) {
  return &(*((((&(v352))->ptr))));
}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v328, i64 v329) {
  return (((char*)(((char*)(((((i64)((((v328))->head)))))+((((v329))*((((i64)1))))))))));
}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v330, i64 v331) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v330), (v331)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v332) {
  (printf("%s", ("[")));
  {
      i64 v336;
      i64 v335;
      i64 v334;
      __ZH_TYPE_Range v333;
      (((v333)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v332))->size))))));
      (((v334)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v333)))))));
      (((v335)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v333)))))));
      (((v336)=(v334)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v336))), (v335)))) {
        if ((!((!((v336)))))) {
          (printf("%s", (" ")));
        }
        (printf("%c", (*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v332), (v336)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v336)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v337) {
  i64 v338;
  (((v338)=((((v337))->capacity))));
  if ((((v338))==((((i64)0))))) {
    (((v338)=(((i64)1))));
    ((((((v337))->head))=(((char*)(alloc((((i64)1))))))));
    ((((((v337))->capacity))=(v338)));
  } else {
    char* v339;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v338), (((i64)2))));
    (((v339)=(((char*)(alloc((((v338))*((((i64)1))))))))));
    {
        i64 v343;
        i64 v342;
        i64 v341;
        __ZH_TYPE_Range v340;
        (((v340)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v337))->size))))));
        (((v341)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v340)))))));
        (((v342)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v340)))))));
        (((v343)=(v341)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v343))), (v342)))) {
          (((*((((char*)(((((i64)(v339))))+((((v343))*((((i64)1))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v337), (v343)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v343)))));
        }
      }
    (free((void*) (((i64)((((v337))->head))))));
    ((((((v337))->head))=(v339)));
  }
  ((((((v337))->capacity))=(v338)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v344, char v345) {
  if (((((((v344))->size)))==(((((v344))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((v344)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v344), ((((v344))->size))))=(v345)));
  (__ZH_LOP__plus_plus_i64R(&((((v344))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v346) {
  (__ZH_LOP__minus_minus_i64R(&((((v346))->size))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v353) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP(((((v353))->head))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v354) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v354), ((((v354))->size))))));
}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v355) {
  return &(*(((((v355))->head))));
}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v356) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v356), ((((((v356))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v357) {
  if ((!((!((((i64)((((v357))->head))))))))) {
    (free((void*) (((i64)((((v357))->head))))));
    ((((((v357))->size))=(((i64)0))));
    ((((((v357))->capacity))=(((i64)0))));
    ((((((v357))->head))=(((char*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v358) {
  __ZH_TYPE_Vec_lesschar_greater v359;
  (((((&(v359))->head))=(((char*)(((i64)0))))));
  (((((&(v359))->size))=(((i64)0))));
  (((((&(v359))->capacity))=(((i64)0))));
  while ((((((&(v359))->capacity)))<((v358)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((&((v359)))));
  }
  (((((&(v359))->size))=(v358)));
  (((((&(v359))->capacity))=(v358)));
  return (v359);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v359)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v360, char v361) {
  __ZH_TYPE_Vec_lesschar_greater v362;
  (((v362)=(__ZH_LOP_Vec_lesschar_greater_i64((v360)))));
  {
      i64 v366;
      i64 v365;
      i64 v364;
      __ZH_TYPE_Range v363;
      (((v363)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v362))->size))))));
      (((v364)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v363)))))));
      (((v365)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v363)))))));
      (((v366)=(v364)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v366))), (v365)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v362))), (v366)))=(v361)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v366)))));
      }
    }
  return (v362);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v362)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {
  return (__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v367) {
  __ZH_TYPE_Vec_lesschar_greater v368;
  (((v368)=(__ZH_LOP_Vec_lesschar_greater_i64((((&(*v367))->size))))));
  {
      i64 v372;
      i64 v371;
      i64 v370;
      __ZH_TYPE_Range v369;
      (((v369)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v367))->size))))));
      (((v370)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v369)))))));
      (((v371)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v369)))))));
      (((v372)=(v370)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v372))), (v371)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v368))), (v372)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((*v367))), (v372)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v372)))));
      }
    }
  return (v368);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v368)))));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v373, char v374) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v373))), (v374)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v375, __ZH_TYPE_Vec_lesschar_greater* v376) {
  {
      __ZH_TYPE_VecIter_lesschar_greater v380;
      __ZH_TYPE_VecIter_lesschar_greater v379;
      __ZH_TYPE_VecIter_lesschar_greater v378;
      __ZH_TYPE_Vec_lesschar_greater v377;
      (((v377)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v376)))));
      (((v378)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&((v377)))))));
      (((v379)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((&((v377)))))));
      (((v380)=(v378)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater((&((v380))), (v379)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v375))), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v380)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand((&((v380)))));
      }
    }
}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v381) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v381)))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v382) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v382)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v383) {
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v383)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v384) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v384))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v385, __ZH_TYPE_Vec_lesschar_greater* v386) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v386))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v387, i64 v388) {
  if ((((v388))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v388), ((((v387))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v387), (v388)));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v389, i64 v390, i64 v391) {
  __ZH_TYPE_Vec_lesschar_greater v392;
  (((v392)=(__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))))));
  {
      i64 v396;
      i64 v395;
      i64 v394;
      __ZH_TYPE_Range v393;
      (((v393)=(__ZH_BOP__dot_dot_i64i64((v390), (v391)))));
      (((v394)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v393)))))));
      (((v395)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v393)))))));
      (((v396)=(v394)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v396))), (v395)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((v392))), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v389), (v396)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v396)))));
      }
    }
  return (v392);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v392)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v397, __ZH_TYPE_Range v398) {
  i64 v400;
  i64 v399;
  ((((v399)=(((&(v398))->begin)))), (((v400)=(((&(v398))->end)))));
  if ((((v399))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v399), ((((v397))->size))));
  }
  if ((((v399))<((((i64)0))))) {
    (((v399)=(((i64)0))));
  }
  if ((((v400))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v400), ((((v397))->size))));
  }
  if ((((v400))>(((((v397))->size))))) {
    (((v400)=((((v397))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v397), (v399), (v400)));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v401) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v401), (((i64)0)), ((((v401))->size))));
}
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v402, __ZH_TYPE_Vec_lesschar_greater* v403) {
  return (((bool)0));
}
void __ZH_LOP_swap_charPcharP(char* v404, char* v405) {
  char v406;
  (((v406)=(*((v404)))));
  (((*((v404)))=(*((v405)))));
  (((*((v405)))=(v406)));
}
char* __ZH_LOP_partition_charPcharP(char* v407, char* v408) {
  char* v411;
  char* v410;
  char* v409;
  ((((v409)=(((char*)(((((i64)(v408))))-((((((i64)1)))*((((i64)1)))))))))), (((v410)=(v407))), (((v411)=(v407))));
  (((v411)=(v407)));
  while ((((((i64)(v411))))!=((((i64)(v409)))))) {
    if ((((*((v411))))<((*((v409)))))) {
      (__ZH_LOP_swap_charPcharP((v410), (v411)));
      (((v410)=(((char*)(((((i64)(v410))))+((((((i64)1)))*((((i64)1))))))))));
    }
    (((v411)=(((char*)(((((i64)(v411))))+((((((i64)1)))*((((i64)1))))))))));
  }
  (__ZH_LOP_swap_charPcharP((v410), (v409)));
  return (v410);
}
void __ZH_LOP_qsort_charPcharP(char* v412, char* v413) {
  i64 v415;
  i64 v414;
  (((v414)=(((((i64)(v413))))-((((i64)(v412)))))));
  (((v415)=(((i64)1))));
  if ((((v414))>((v415)))) {
    char* v416;
    (((v416)=(__ZH_LOP_partition_charPcharP((v412), (v413)))));
    (__ZH_LOP_qsort_charPcharP((v412), (v416)));
    (((v416)=(((char*)(((((i64)(v416))))+((((((i64)1)))*((((i64)1))))))))));
    (__ZH_LOP_qsort_charPcharP((v416), (v413)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v417) {
  __ZH_TYPE_VecIter_lesschar_greater v419;
  __ZH_TYPE_VecIter_lesschar_greater v418;
  (((v418)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((v417)))));
  (((v419)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((v417)))));
  (__ZH_LOP_qsort_charPcharP((((&(v418))->ptr)), (((&(v419))->ptr))));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v420) {
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand((&((*v420)))));
}
__ZH_TYPE_Str __ZH_LOP_Str_() {
  __ZH_TYPE_Str v421;
  (((((&(v421))->data))=(__ZH_LOP_Vec_lesschar_greater_())));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v421))->data)))), (((char)(((u8)0))))));
  (((((&(v421))->size))=(((i64)0))));
  return (v421);
}
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v422) {
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(((((v422))->data))))));
}
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v423) {
  __ZH_TYPE_VecIter_lesschar_greater v424;
  (((v424)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&(((((v423))->data))))))));
  return (((str)(((&(v424))->ptr))));
}
char __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v425, i64 v426) {
  return (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(((((v425))->data)))), (v426)));
}
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v427, i64 v428) {
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((&(((((v427))->data)))), (v428)));
}
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v429, char v430) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v429))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v429))->data)))), (v430)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v429))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__plus_plus_i64R(&((((v429))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v431) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v431))->data))))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v431))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v431))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__minus_minus_i64R(&((((v431))->size))));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v432) {
  __ZH_TYPE_Str v433;
  (((v433)=(__ZH_LOP_Str_())));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&((((&(v433))->data))))));
  while ((((*((((char*)(v432))))))!=((((char)(((u8)0))))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v433))->data)))), (*((((char*)(v432)))))));
    (((v432)=(((str)(((((i64)(v432))))+((((i64)1))))))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v433))->data)))), (((char)(((u8)0))))));
  (((((&(v433))->size))=(((((&(((&(v433))->data)))->size)))-((((i64)1))))));
  return (v433);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v433)))));
}
i64 __ZH_LOP_len_str(str v434) {
  i64 v435;
  (((v435)=(((i64)0))));
  while ((((*((((char*)(v434))))))!=((((char)(((u8)0))))))) {
    (__ZH_LOP__plus_plus_i64R(&(v435)));
    (((v434)=(((str)(((((i64)(v434))))+((((i64)1))))))));
  }
  return (v435);
}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v436) {
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v436)))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v437) {
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v437)))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v438, char v439) {
  (__ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar((&((*v438))), (v439)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v440, __ZH_TYPE_Str* v441) {
  {
      i64 v445;
      i64 v444;
      i64 v443;
      __ZH_TYPE_Range v442;
      (((v442)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v441))->size))))));
      (((v443)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v442)))))));
      (((v444)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v442)))))));
      (((v445)=(v443)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v445))), (v444)))) {
        char v446;
        (((v446)=(((char)(((i8)115))))));
        (((v446)=(__ZH_BOP__dotcall_dotat_StrP_ampersandi64((&((*v441))), (v445)))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v440), (v446)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v445)))));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v447, str v448) {
  i64 v449;
  (((v449)=(__ZH_LOP_len_str((v448)))));
  {
      i64 v453;
      i64 v452;
      i64 v451;
      __ZH_TYPE_Range v450;
      (((v450)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (v449)))));
      (((v451)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v450)))))));
      (((v452)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v450)))))));
      (((v453)=(v451)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v453))), (v452)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v447), (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v448))), (v453)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v453)))));
      }
    }
}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v454) {
  (__ZH_LOP_out_StrR(&(*v454)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v455) {
  ((__ZH_LOP_put_StrR(&(*v455))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v456, __ZH_TYPE_Str* v457) {
  ((__ZH_LOP_put_StrR(&(*v457))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_() {
  __ZH_TYPE_Str v458;
  (((v458)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v458), ("         _____ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v458), ("       /       \\\\__ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v458), ("     /             \\\\\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v458), ("   /   0    0        |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v458), ("  |     ..            |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v458), ("  /|        _/       /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v458), (" / .\\\\_____/         /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v458), ("/U\\\\|    \\\\___|   |__/\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v458), ("            /  /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v458), ("            |/U\\\\\\n")));
  return (v458);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v458)))));
}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_() {
  __ZH_TYPE_Str v459;
  (((v459)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v459), ("         _____         \\n       /       \\\\__     \\n     /             \\\\   \\n   /   0    0        | \\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\")));
  return (v459);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v459)))));
}
str __ZH_LOP_frog_raw_() {
  return ("         _____\\n       /       \\\\__\\n     /             \\\\\\n   /   0    0        |\\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\ ");
}
str __ZH_LOP_frog_() {
  return (__ZH_LOP_frog_raw_());
}
int main(int argc, char *argv[])  {
  str v460;
  (((v460)=(__ZH_LOP_frog_())));
  (__ZH_LOP__less_Out((__ZH_ROP__less_str((v460)))));
}
