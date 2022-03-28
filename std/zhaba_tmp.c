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
bool __ZH_BOP__equal_equal_i64Range(i64 v210, __ZH_TYPE_Range v211);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v231);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v233);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v234, __ZH_TYPE_VecIter_lessi64_greater v235);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v236);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v212, i64 v213);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v214, i64 v215);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v216);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v221);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v228, i64 v229);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v230);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v237);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v238);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v239);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v240);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v241);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v242);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v244, i64 v245);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v251);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v257, i64 v258);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v259, __ZH_TYPE_Vec_lessi64_greater* v260);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v265);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v266);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v267);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v268);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v269, __ZH_TYPE_Vec_lessi64_greater* v270);
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v271, i64 v272);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v273, i64 v274, i64 v275);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v281, __ZH_TYPE_Range v282);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v285);
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v286, __ZH_TYPE_Vec_lessi64_greater* v287);
void __ZH_LOP_swap_i64Pi64P(i64* v288, i64* v289);
i64* __ZH_LOP_partition_i64Pi64P(i64* v291, i64* v292);
void __ZH_LOP_qsort_i64Pi64P(i64* v296, i64* v297);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v301);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v304);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v305, i64 v306);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v312);
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v318, i64 v319);
char __ZH_BOP__caret_stri64(str v320, i64 v321);
bool __ZH_BOP__equal_equal_charstr(char v322, str v323);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v343);
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v345);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v346, __ZH_TYPE_VecIter_lesschar_greater v347);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v348);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v324, i64 v325);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v326, i64 v327);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v328);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v333);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v340, char v341);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v342);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v349);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v350);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v351);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v352);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v353);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v354);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v356, char v357);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v363);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v369, char v370);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v371, __ZH_TYPE_Vec_lesschar_greater* v372);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v377);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v378);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v379);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v380);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v381, __ZH_TYPE_Vec_lesschar_greater* v382);
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v383, i64 v384);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v385, i64 v386, i64 v387);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v393, __ZH_TYPE_Range v394);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v397);
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v398, __ZH_TYPE_Vec_lesschar_greater* v399);
void __ZH_LOP_swap_charPcharP(char* v400, char* v401);
char* __ZH_LOP_partition_charPcharP(char* v403, char* v404);
void __ZH_LOP_qsort_charPcharP(char* v408, char* v409);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v413);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v416);
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v418);
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v419);
char __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v421, i64 v422);
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v423, i64 v424);
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v425, char v426);
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v427);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v428);
i64 __ZH_LOP_len_str(str v430);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v432);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v433);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v434, char v435);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v436, __ZH_TYPE_Str* v437);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v443, str v444);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v450);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v451);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v452, __ZH_TYPE_Str* v453);
__ZH_TYPE_Str __ZH_LOP_frog_escaped_();
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_();
str __ZH_LOP_frog_raw_();
str __ZH_LOP_frog_();
void __ZH_LOP_brainfuck_str(str v456);
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
bool __ZH_BOP__equal_equal_i64Range(i64 v210, __ZH_TYPE_Range v211) {
  if ((((((&(v211))->begin)))<((((&(v211))->end))))) {
    return (((((((&(v211))->begin)))<=((v210))))&&((((v210))<((((&(v211))->end))))));
  } else {
    return (((((((&(v211))->end)))<=((v210))))&&((((v210))<((((&(v211))->begin))))));
  }
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v231) {
  __ZH_TYPE_VecIter_lessi64_greater v232;
  (((((&(v232))->ptr))=(v231)));
  return (v232);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v233) {
  ((((((v233))->ptr))=(((i64*)(((((i64)((((v233))->ptr)))))+((((((i64)1)))*((((i64)8))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v234, __ZH_TYPE_VecIter_lessi64_greater v235) {
  return (((((i64)((((v234))->ptr)))))!=((((i64)(((&(v235))->ptr))))));
}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v236) {
  return &(*((((&(v236))->ptr))));
}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v212, i64 v213) {
  return (((i64*)(((i64*)(((((i64)((((v212))->head)))))+((((v213))*((((i64)8))))))))));
}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v214, i64 v215) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v214), (v215)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v216) {
  (printf("%s", ("[")));
  {
      i64 v220;
      i64 v219;
      i64 v218;
      __ZH_TYPE_Range v217;
      (((v217)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v216))->size))))));
      (((v218)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v217)))))));
      (((v219)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v217)))))));
      (((v220)=(v218)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v220))), (v219)))) {
        if ((!((!((v220)))))) {
          (printf("%s", (" ")));
        }
        (printf("%lld", (*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v216), (v220)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v220)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v221) {
  i64 v222;
  (((v222)=((((v221))->capacity))));
  if ((((v222))==((((i64)0))))) {
    (((v222)=(((i64)1))));
    ((((((v221))->head))=(((i64*)(alloc((((i64)8))))))));
    ((((((v221))->capacity))=(v222)));
  } else {
    i64* v223;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v222), (((i64)2))));
    (((v223)=(((i64*)(alloc((((v222))*((((i64)8))))))))));
    {
        i64 v227;
        i64 v226;
        i64 v225;
        __ZH_TYPE_Range v224;
        (((v224)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v221))->size))))));
        (((v225)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v224)))))));
        (((v226)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v224)))))));
        (((v227)=(v225)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v227))), (v226)))) {
          (((*((((i64*)(((((i64)(v223))))+((((v227))*((((i64)8))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v221), (v227)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v227)))));
        }
      }
    (free((void*) (((i64)((((v221))->head))))));
    ((((((v221))->head))=(v223)));
  }
  ((((((v221))->capacity))=(v222)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v228, i64 v229) {
  if (((((((v228))->size)))==(((((v228))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((v228)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v228), ((((v228))->size))))=(v229)));
  (__ZH_LOP__plus_plus_i64R(&((((v228))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v230) {
  (__ZH_LOP__minus_minus_i64R(&((((v230))->size))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v237) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P(((((v237))->head))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v238) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v238), ((((v238))->size))))));
}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v239) {
  return &(*(((((v239))->head))));
}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v240) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v240), ((((((v240))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v241) {
  if ((!((!((((i64)((((v241))->head))))))))) {
    (free((void*) (((i64)((((v241))->head))))));
    ((((((v241))->size))=(((i64)0))));
    ((((((v241))->capacity))=(((i64)0))));
    ((((((v241))->head))=(((i64*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v242) {
  __ZH_TYPE_Vec_lessi64_greater v243;
  (((((&(v243))->head))=(((i64*)(((i64)0))))));
  (((((&(v243))->size))=(((i64)0))));
  (((((&(v243))->capacity))=(((i64)0))));
  while ((((((&(v243))->capacity)))<((v242)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((&((v243)))));
  }
  (((((&(v243))->size))=(v242)));
  (((((&(v243))->capacity))=(v242)));
  return (v243);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v243)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v244, i64 v245) {
  __ZH_TYPE_Vec_lessi64_greater v246;
  (((v246)=(__ZH_LOP_Vec_lessi64_greater_i64((v244)))));
  {
      i64 v250;
      i64 v249;
      i64 v248;
      __ZH_TYPE_Range v247;
      (((v247)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v246))->size))))));
      (((v248)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v247)))))));
      (((v249)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v247)))))));
      (((v250)=(v248)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v250))), (v249)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v246))), (v250)))=(v245)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v250)))));
      }
    }
  return (v246);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v246)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {
  return (__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v251) {
  __ZH_TYPE_Vec_lessi64_greater v252;
  (((v252)=(__ZH_LOP_Vec_lessi64_greater_i64((((&(*v251))->size))))));
  {
      i64 v256;
      i64 v255;
      i64 v254;
      __ZH_TYPE_Range v253;
      (((v253)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v251))->size))))));
      (((v254)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v253)))))));
      (((v255)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v253)))))));
      (((v256)=(v254)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v256))), (v255)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v252))), (v256)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((*v251))), (v256)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v256)))));
      }
    }
  return (v252);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v252)))));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v257, i64 v258) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v257))), (v258)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v259, __ZH_TYPE_Vec_lessi64_greater* v260) {
  {
      __ZH_TYPE_VecIter_lessi64_greater v264;
      __ZH_TYPE_VecIter_lessi64_greater v263;
      __ZH_TYPE_VecIter_lessi64_greater v262;
      __ZH_TYPE_Vec_lessi64_greater v261;
      (((v261)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v260)))));
      (((v262)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((&((v261)))))));
      (((v263)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((&((v261)))))));
      (((v264)=(v262)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater((&((v264))), (v263)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v259))), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v264)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand((&((v264)))));
      }
    }
}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v265) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v265)))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v266) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v266)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v267) {
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v267)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v268) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v268))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v269, __ZH_TYPE_Vec_lessi64_greater* v270) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v270))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v271, i64 v272) {
  if ((((v272))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v272), ((((v271))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v271), (v272)));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v273, i64 v274, i64 v275) {
  __ZH_TYPE_Vec_lessi64_greater v276;
  (((v276)=(__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))))));
  {
      i64 v280;
      i64 v279;
      i64 v278;
      __ZH_TYPE_Range v277;
      (((v277)=(__ZH_BOP__dot_dot_i64i64((v274), (v275)))));
      (((v278)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v277)))))));
      (((v279)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v277)))))));
      (((v280)=(v278)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v280))), (v279)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((v276))), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v273), (v280)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v280)))));
      }
    }
  return (v276);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v276)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v281, __ZH_TYPE_Range v282) {
  i64 v284;
  i64 v283;
  ((((v283)=(((&(v282))->begin)))), (((v284)=(((&(v282))->end)))));
  if ((((v283))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v283), ((((v281))->size))));
  }
  if ((((v283))<((((i64)0))))) {
    (((v283)=(((i64)0))));
  }
  if ((((v284))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v284), ((((v281))->size))));
  }
  if ((((v284))>(((((v281))->size))))) {
    (((v284)=((((v281))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v281), (v283), (v284)));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v285) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v285), (((i64)0)), ((((v285))->size))));
}
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v286, __ZH_TYPE_Vec_lessi64_greater* v287) {
  return (((bool)0));
}
void __ZH_LOP_swap_i64Pi64P(i64* v288, i64* v289) {
  i64 v290;
  (((v290)=(*((v288)))));
  (((*((v288)))=(*((v289)))));
  (((*((v289)))=(v290)));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v291, i64* v292) {
  i64* v295;
  i64* v294;
  i64* v293;
  ((((v293)=(((i64*)(((((i64)(v292))))-((((((i64)1)))*((((i64)8)))))))))), (((v294)=(v291))), (((v295)=(v291))));
  (((v295)=(v291)));
  while ((((((i64)(v295))))!=((((i64)(v293)))))) {
    if ((((*((v295))))<((*((v293)))))) {
      (__ZH_LOP_swap_i64Pi64P((v294), (v295)));
      (((v294)=(((i64*)(((((i64)(v294))))+((((((i64)1)))*((((i64)8))))))))));
    }
    (((v295)=(((i64*)(((((i64)(v295))))+((((((i64)1)))*((((i64)8))))))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v294), (v293)));
  return (v294);
}
void __ZH_LOP_qsort_i64Pi64P(i64* v296, i64* v297) {
  i64 v299;
  i64 v298;
  (((v298)=(((((i64)(v297))))-((((i64)(v296)))))));
  (((v299)=(((i64)8))));
  if ((((v298))>((v299)))) {
    i64* v300;
    (((v300)=(__ZH_LOP_partition_i64Pi64P((v296), (v297)))));
    (__ZH_LOP_qsort_i64Pi64P((v296), (v300)));
    (((v300)=(((i64*)(((((i64)(v300))))+((((((i64)1)))*((((i64)8))))))))));
    (__ZH_LOP_qsort_i64Pi64P((v300), (v297)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v301) {
  __ZH_TYPE_VecIter_lessi64_greater v303;
  __ZH_TYPE_VecIter_lessi64_greater v302;
  (((v302)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((v301)))));
  (((v303)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((v301)))));
  (__ZH_LOP_qsort_i64Pi64P((((&(v302))->ptr)), (((&(v303))->ptr))));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v304) {
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand((&((*v304)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v305, i64 v306) {
  __ZH_TYPE_Vec_lessi64_greater v307;
  (((v307)=(__ZH_LOP_Vec_lessi64_greater_i64((((v306))-((v305)))))));
  {
      i64 v311;
      i64 v310;
      i64 v309;
      __ZH_TYPE_Range v308;
      (((v308)=(__ZH_BOP__dot_dot_i64i64((v305), (v306)))));
      (((v309)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v308)))))));
      (((v310)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v308)))))));
      (((v311)=(v309)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v311))), (v310)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v307))), (((v311))-((v305)))))=(v311)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v311)))));
      }
    }
  return (v307);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v307)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v312) {
  __ZH_TYPE_Vec_lessi64_greater v313;
  (((v313)=(__ZH_LOP_Vec_lessi64_greater_())));
  {
      i64 v317;
      i64 v316;
      i64 v315;
      __ZH_TYPE_Range v314;
      (((v314)=(*((v312)))));
      (((v315)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v314)))))));
      (((v316)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v314)))))));
      (((v317)=(v315)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v317))), (v316)))) {
        (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v313), (v317)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v317)))));
      }
    }
  return (v313);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v313)))));
}
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v318, i64 v319) {
  return (*((((char*)(((((i64)(*((v318))))))+((v319)))))));
}
char __ZH_BOP__caret_stri64(str v320, i64 v321) {
  return (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v320))), (v321)));
}
bool __ZH_BOP__equal_equal_charstr(char v322, str v323) {
  return (((v322))==((__ZH_BOP__caret_stri64((v323), (((i64)0))))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v343) {
  __ZH_TYPE_VecIter_lesschar_greater v344;
  (((((&(v344))->ptr))=(v343)));
  return (v344);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v345) {
  ((((((v345))->ptr))=(((char*)(((((i64)((((v345))->ptr)))))+((((((i64)1)))*((((i64)1))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v346, __ZH_TYPE_VecIter_lesschar_greater v347) {
  return (((((i64)((((v346))->ptr)))))!=((((i64)(((&(v347))->ptr))))));
}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v348) {
  return &(*((((&(v348))->ptr))));
}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v324, i64 v325) {
  return (((char*)(((char*)(((((i64)((((v324))->head)))))+((((v325))*((((i64)1))))))))));
}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v326, i64 v327) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v326), (v327)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v328) {
  (printf("%s", ("[")));
  {
      i64 v332;
      i64 v331;
      i64 v330;
      __ZH_TYPE_Range v329;
      (((v329)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v328))->size))))));
      (((v330)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v329)))))));
      (((v331)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v329)))))));
      (((v332)=(v330)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v332))), (v331)))) {
        if ((!((!((v332)))))) {
          (printf("%s", (" ")));
        }
        (printf("%c", (*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v328), (v332)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v332)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v333) {
  i64 v334;
  (((v334)=((((v333))->capacity))));
  if ((((v334))==((((i64)0))))) {
    (((v334)=(((i64)1))));
    ((((((v333))->head))=(((char*)(alloc((((i64)1))))))));
    ((((((v333))->capacity))=(v334)));
  } else {
    char* v335;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v334), (((i64)2))));
    (((v335)=(((char*)(alloc((((v334))*((((i64)1))))))))));
    {
        i64 v339;
        i64 v338;
        i64 v337;
        __ZH_TYPE_Range v336;
        (((v336)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v333))->size))))));
        (((v337)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v336)))))));
        (((v338)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v336)))))));
        (((v339)=(v337)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v339))), (v338)))) {
          (((*((((char*)(((((i64)(v335))))+((((v339))*((((i64)1))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v333), (v339)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v339)))));
        }
      }
    (free((void*) (((i64)((((v333))->head))))));
    ((((((v333))->head))=(v335)));
  }
  ((((((v333))->capacity))=(v334)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v340, char v341) {
  if (((((((v340))->size)))==(((((v340))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((v340)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v340), ((((v340))->size))))=(v341)));
  (__ZH_LOP__plus_plus_i64R(&((((v340))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v342) {
  (__ZH_LOP__minus_minus_i64R(&((((v342))->size))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v349) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP(((((v349))->head))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v350) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v350), ((((v350))->size))))));
}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v351) {
  return &(*(((((v351))->head))));
}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v352) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v352), ((((((v352))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v353) {
  if ((!((!((((i64)((((v353))->head))))))))) {
    (free((void*) (((i64)((((v353))->head))))));
    ((((((v353))->size))=(((i64)0))));
    ((((((v353))->capacity))=(((i64)0))));
    ((((((v353))->head))=(((char*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v354) {
  __ZH_TYPE_Vec_lesschar_greater v355;
  (((((&(v355))->head))=(((char*)(((i64)0))))));
  (((((&(v355))->size))=(((i64)0))));
  (((((&(v355))->capacity))=(((i64)0))));
  while ((((((&(v355))->capacity)))<((v354)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((&((v355)))));
  }
  (((((&(v355))->size))=(v354)));
  (((((&(v355))->capacity))=(v354)));
  return (v355);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v355)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v356, char v357) {
  __ZH_TYPE_Vec_lesschar_greater v358;
  (((v358)=(__ZH_LOP_Vec_lesschar_greater_i64((v356)))));
  {
      i64 v362;
      i64 v361;
      i64 v360;
      __ZH_TYPE_Range v359;
      (((v359)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v358))->size))))));
      (((v360)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v359)))))));
      (((v361)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v359)))))));
      (((v362)=(v360)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v362))), (v361)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v358))), (v362)))=(v357)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v362)))));
      }
    }
  return (v358);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v358)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {
  return (__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v363) {
  __ZH_TYPE_Vec_lesschar_greater v364;
  (((v364)=(__ZH_LOP_Vec_lesschar_greater_i64((((&(*v363))->size))))));
  {
      i64 v368;
      i64 v367;
      i64 v366;
      __ZH_TYPE_Range v365;
      (((v365)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v363))->size))))));
      (((v366)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v365)))))));
      (((v367)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v365)))))));
      (((v368)=(v366)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v368))), (v367)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v364))), (v368)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((*v363))), (v368)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v368)))));
      }
    }
  return (v364);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v364)))));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v369, char v370) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v369))), (v370)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v371, __ZH_TYPE_Vec_lesschar_greater* v372) {
  {
      __ZH_TYPE_VecIter_lesschar_greater v376;
      __ZH_TYPE_VecIter_lesschar_greater v375;
      __ZH_TYPE_VecIter_lesschar_greater v374;
      __ZH_TYPE_Vec_lesschar_greater v373;
      (((v373)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v372)))));
      (((v374)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&((v373)))))));
      (((v375)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((&((v373)))))));
      (((v376)=(v374)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater((&((v376))), (v375)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v371))), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v376)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand((&((v376)))));
      }
    }
}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v377) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v377)))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v378) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v378)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v379) {
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v379)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v380) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v380))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v381, __ZH_TYPE_Vec_lesschar_greater* v382) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v382))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v383, i64 v384) {
  if ((((v384))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v384), ((((v383))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v383), (v384)));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v385, i64 v386, i64 v387) {
  __ZH_TYPE_Vec_lesschar_greater v388;
  (((v388)=(__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))))));
  {
      i64 v392;
      i64 v391;
      i64 v390;
      __ZH_TYPE_Range v389;
      (((v389)=(__ZH_BOP__dot_dot_i64i64((v386), (v387)))));
      (((v390)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v389)))))));
      (((v391)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v389)))))));
      (((v392)=(v390)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v392))), (v391)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((v388))), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v385), (v392)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v392)))));
      }
    }
  return (v388);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v388)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v393, __ZH_TYPE_Range v394) {
  i64 v396;
  i64 v395;
  ((((v395)=(((&(v394))->begin)))), (((v396)=(((&(v394))->end)))));
  if ((((v395))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v395), ((((v393))->size))));
  }
  if ((((v395))<((((i64)0))))) {
    (((v395)=(((i64)0))));
  }
  if ((((v396))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v396), ((((v393))->size))));
  }
  if ((((v396))>(((((v393))->size))))) {
    (((v396)=((((v393))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v393), (v395), (v396)));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v397) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v397), (((i64)0)), ((((v397))->size))));
}
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v398, __ZH_TYPE_Vec_lesschar_greater* v399) {
  return (((bool)0));
}
void __ZH_LOP_swap_charPcharP(char* v400, char* v401) {
  char v402;
  (((v402)=(*((v400)))));
  (((*((v400)))=(*((v401)))));
  (((*((v401)))=(v402)));
}
char* __ZH_LOP_partition_charPcharP(char* v403, char* v404) {
  char* v407;
  char* v406;
  char* v405;
  ((((v405)=(((char*)(((((i64)(v404))))-((((((i64)1)))*((((i64)1)))))))))), (((v406)=(v403))), (((v407)=(v403))));
  (((v407)=(v403)));
  while ((((((i64)(v407))))!=((((i64)(v405)))))) {
    if ((((*((v407))))<((*((v405)))))) {
      (__ZH_LOP_swap_charPcharP((v406), (v407)));
      (((v406)=(((char*)(((((i64)(v406))))+((((((i64)1)))*((((i64)1))))))))));
    }
    (((v407)=(((char*)(((((i64)(v407))))+((((((i64)1)))*((((i64)1))))))))));
  }
  (__ZH_LOP_swap_charPcharP((v406), (v405)));
  return (v406);
}
void __ZH_LOP_qsort_charPcharP(char* v408, char* v409) {
  i64 v411;
  i64 v410;
  (((v410)=(((((i64)(v409))))-((((i64)(v408)))))));
  (((v411)=(((i64)1))));
  if ((((v410))>((v411)))) {
    char* v412;
    (((v412)=(__ZH_LOP_partition_charPcharP((v408), (v409)))));
    (__ZH_LOP_qsort_charPcharP((v408), (v412)));
    (((v412)=(((char*)(((((i64)(v412))))+((((((i64)1)))*((((i64)1))))))))));
    (__ZH_LOP_qsort_charPcharP((v412), (v409)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v413) {
  __ZH_TYPE_VecIter_lesschar_greater v415;
  __ZH_TYPE_VecIter_lesschar_greater v414;
  (((v414)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((v413)))));
  (((v415)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((v413)))));
  (__ZH_LOP_qsort_charPcharP((((&(v414))->ptr)), (((&(v415))->ptr))));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v416) {
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand((&((*v416)))));
}
__ZH_TYPE_Str __ZH_LOP_Str_() {
  __ZH_TYPE_Str v417;
  (((((&(v417))->data))=(__ZH_LOP_Vec_lesschar_greater_())));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v417))->data)))), (((char)(((u8)0))))));
  (((((&(v417))->size))=(((i64)0))));
  return (v417);
}
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v418) {
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(((((v418))->data))))));
}
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v419) {
  __ZH_TYPE_VecIter_lesschar_greater v420;
  (((v420)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&(((((v419))->data))))))));
  return (((str)(((&(v420))->ptr))));
}
char __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v421, i64 v422) {
  return (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(((((v421))->data)))), (v422)));
}
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v423, i64 v424) {
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((&(((((v423))->data)))), (v424)));
}
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v425, char v426) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v425))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v425))->data)))), (v426)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v425))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__plus_plus_i64R(&((((v425))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v427) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v427))->data))))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v427))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v427))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__minus_minus_i64R(&((((v427))->size))));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v428) {
  __ZH_TYPE_Str v429;
  (((v429)=(__ZH_LOP_Str_())));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&((((&(v429))->data))))));
  while ((((*((((char*)(v428))))))!=((((char)(((u8)0))))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v429))->data)))), (*((((char*)(v428)))))));
    (((v428)=(((str)(((((i64)(v428))))+((((i64)1))))))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v429))->data)))), (((char)(((u8)0))))));
  (((((&(v429))->size))=(((((&(((&(v429))->data)))->size)))-((((i64)1))))));
  return (v429);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v429)))));
}
i64 __ZH_LOP_len_str(str v430) {
  i64 v431;
  (((v431)=(((i64)0))));
  while ((((*((((char*)(v430))))))!=((((char)(((u8)0))))))) {
    (__ZH_LOP__plus_plus_i64R(&(v431)));
    (((v430)=(((str)(((((i64)(v430))))+((((i64)1))))))));
  }
  return (v431);
}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v432) {
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v432)))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v433) {
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v433)))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v434, char v435) {
  (__ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar((&((*v434))), (v435)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v436, __ZH_TYPE_Str* v437) {
  {
      i64 v441;
      i64 v440;
      i64 v439;
      __ZH_TYPE_Range v438;
      (((v438)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v437))->size))))));
      (((v439)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v438)))))));
      (((v440)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v438)))))));
      (((v441)=(v439)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v441))), (v440)))) {
        char v442;
        (((v442)=(((char)(((i8)115))))));
        (((v442)=(__ZH_BOP__dotcall_dotat_StrP_ampersandi64((&((*v437))), (v441)))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v436), (v442)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v441)))));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v443, str v444) {
  i64 v445;
  (((v445)=(__ZH_LOP_len_str((v444)))));
  {
      i64 v449;
      i64 v448;
      i64 v447;
      __ZH_TYPE_Range v446;
      (((v446)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (v445)))));
      (((v447)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v446)))))));
      (((v448)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v446)))))));
      (((v449)=(v447)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v449))), (v448)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v443), (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v444))), (v449)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v449)))));
      }
    }
}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v450) {
  (__ZH_LOP_out_StrR(&(*v450)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v451) {
  ((__ZH_LOP_put_StrR(&(*v451))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v452, __ZH_TYPE_Str* v453) {
  ((__ZH_LOP_put_StrR(&(*v453))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_() {
  __ZH_TYPE_Str v454;
  (((v454)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v454), ("         _____ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v454), ("       /       \\\\__ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v454), ("     /             \\\\\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v454), ("   /   0    0        |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v454), ("  |     ..            |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v454), ("  /|        _/       /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v454), (" / .\\\\_____/         /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v454), ("/U\\\\|    \\\\___|   |__/\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v454), ("            /  /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v454), ("            |/U\\\\\\n")));
  return (v454);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v454)))));
}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_() {
  __ZH_TYPE_Str v455;
  (((v455)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v455), ("         _____         \\n       /       \\\\__     \\n     /             \\\\   \\n   /   0    0        | \\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\")));
  return (v455);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v455)))));
}
str __ZH_LOP_frog_raw_() {
  return ("         _____\\n       /       \\\\__\\n     /             \\\\\\n   /   0    0        |\\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\ ");
}
str __ZH_LOP_frog_() {
  return (__ZH_LOP_frog_raw_());
}
void __ZH_LOP_brainfuck_str(str v456) {
  i64 v458;
  u8* v457;
  (((v457)=(((u8*)(alloc((((i64)3000))))))));
  (((v458)=(((i64)0))));
  {
      i64 v462;
      i64 v461;
      i64 v460;
      __ZH_TYPE_Range v459;
      (((v459)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (__ZH_LOP_len_str((v456)))))));
      (((v460)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v459)))))));
      (((v461)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v459)))))));
      (((v462)=(v460)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v462))), (v461)))) {
        char v464;
        u8 v463;
        (((v463)=(*((v457)))));
        (((v464)=(__ZH_BOP__caret_stri64((v456), (v462)))));
        {
            char v465;
            (((v465)=(v464)));
            if ((__ZH_BOP__equal_equal_charstr((v465), (">")))) {
              (((v457)=(((u8*)(((((i64)(v457))))+((((((i64)1)))*((((i64)1))))))))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v465), ("<")))) {
              (((v457)=(((u8*)(((((i64)(v457))))-((((((i64)1)))*((((i64)1))))))))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v465), ("+")))) {
              (__ZH_LOP__plus_plus_u8R(&(*((v457)))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v465), ("-")))) {
              (__ZH_LOP__minus_minus_u8R(&(*((v457)))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v465), (".")))) {
              (printf("%c", (((char)(v463)))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v465), (",")))) {
              (__ZH_LOP__greater_u8R(&(*((v457)))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v465), ("[")))) {
              if ((!((v463)))) {
                (__ZH_LOP__plus_plus_i64R(&(v458)));
                while ((!((!((v458)))))) {
                  (__ZH_LOP__plus_plus_i64R(&(v462)));
                  if ((__ZH_BOP__equal_equal_charstr((__ZH_BOP__caret_stri64((v456), (v462))), ("[")))) {
                    (__ZH_LOP__plus_plus_i64R(&(v458)));
                  }
                  if ((__ZH_BOP__equal_equal_charstr((__ZH_BOP__caret_stri64((v456), (v462))), ("]")))) {
                    (__ZH_LOP__minus_minus_i64R(&(v458)));
                  }
                }
              }
            }
 else if ((__ZH_BOP__equal_equal_charstr((v465), ("]")))) {
              if ((!((!((v463)))))) {
                if ((__ZH_BOP__equal_equal_charstr((v464), ("]")))) {
                  (__ZH_LOP__plus_plus_i64R(&(v458)));
                }
                while ((!((!((v458)))))) {
                  (__ZH_LOP__minus_minus_i64R(&(v462)));
                  if ((__ZH_BOP__equal_equal_charstr((__ZH_BOP__caret_stri64((v456), (v462))), ("[")))) {
                    (__ZH_LOP__minus_minus_i64R(&(v458)));
                  }
                  if ((__ZH_BOP__equal_equal_charstr((__ZH_BOP__caret_stri64((v456), (v462))), ("]")))) {
                    (__ZH_LOP__plus_plus_i64R(&(v458)));
                  }
                }
                (__ZH_LOP__minus_minus_i64R(&(v462)));
              }
            }
          }
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v462)))));
      }
    }
}
int main(int argc, char *argv[])  {
  __ZH_TYPE_Vec_lessi64_greater v477;
  __ZH_TYPE_Range v476;
  __ZH_TYPE_Vec_lessi64_greater v472;
  __ZH_TYPE_Vec_lessi64_greater v471;
  __ZH_TYPE_Vec_lessi64_greater v474;
  __ZH_TYPE_Vec_lessi64_greater v470;
  i64 v468;
  __ZH_TYPE_Vec_lessi64_greater v473;
  i64 v467;
  __ZH_TYPE_Vec_lessi64_greater v475;
  __ZH_TYPE_Vec_lessi64_greater v469;
  __ZH_TYPE_Vec_lessi64_greater v466;
  (((v466)=(__ZH_LOP_iota_i64i64((((i64)0)), (((i64)10))))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_Vec_lessi64_greaterR(&(v466)))));
  (((v467)=(*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64((&((v466))), (((i64)2))))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_i64((v467)))));
  (((v468)=(*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64((&((v466))), (__ZH_LOP__minus_i64((((i64)1))))))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_i64((v468)))));
  (((v469)=(__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange((&((v466))), (__ZH_BOP__dot_dot_i64i64((((i64)2)), (((i64)4))))))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_Vec_lessi64_greaterR(&(v469)))));
  (((v470)=(__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange((&((v466))), (__ZH_LOP__dot_dot_i64((((i64)3))))))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_Vec_lessi64_greaterR(&(v470)))));
  (((v471)=(__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange((&((v466))), (__ZH_ROP__dot_dot_i64((((i64)3))))))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_Vec_lessi64_greaterR(&(v471)))));
  (((v472)=(__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand((&((v466)))))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_Vec_lessi64_greaterR(&(v472)))));
  (((v473)=(__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange((&((v466))), (__ZH_BOP__dot_dot_minus_i64i64((__ZH_LOP__minus_i64((((i64)4)))), (((i64)2))))))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_Vec_lessi64_greaterR(&(v473)))));
  (((v474)=(__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange((&((v466))), (__ZH_LOP__minus_Range((__ZH_ROP__dot_dot_i64((((i64)4))))))))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_Vec_lessi64_greaterR(&(v474)))));
  (((v475)=(__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange((&((v466))), (__ZH_LOP__dot_dot_minus_i64((((i64)2))))))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_Vec_lessi64_greaterR(&(v475)))));
  (((v476)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((i64)10))))));
  (((v477)=(__ZH_BOP__dotcall_dotcall_RangeP_ampersand((&((v476)))))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_Vec_lessi64_greaterR(&(v477)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v466)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v469)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v470)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v471)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v472)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v473)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v474)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v475)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v477)))));
}
