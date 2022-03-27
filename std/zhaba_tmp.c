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
  u8 prikol;
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
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v204);
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v205);
bool __ZH_BOP__equal_equal_i64Range(i64 v206, __ZH_TYPE_Range v207);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v227);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v229);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v230, __ZH_TYPE_VecIter_lessi64_greater v231);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v232);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v208, i64 v209);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v210, i64 v211);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v212);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v217);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v224, i64 v225);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v226);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v233);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v234);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v235);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v236);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v237);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v238);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v240, i64 v241);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v247);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v253, i64 v254);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v255, __ZH_TYPE_Vec_lessi64_greater* v256);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v261);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v262);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v263);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v264);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v265, __ZH_TYPE_Vec_lessi64_greater* v266);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v267, i64 v268, i64 v269);
void __ZH_LOP_swap_i64Pi64P(i64* v275, i64* v276);
i64* __ZH_LOP_partition_i64Pi64P(i64* v278, i64* v279);
void __ZH_LOP_qsort_i64Pi64P(i64* v283, i64* v284);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v288);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v291);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v292, i64 v293);
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v299, i64 v300);
char __ZH_BOP__caret_stri64(str v301, i64 v302);
bool __ZH_BOP__equal_equal_charstr(char v303, str v304);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v324);
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v326);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v327, __ZH_TYPE_VecIter_lesschar_greater v328);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v329);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v305, i64 v306);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v307, i64 v308);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v309);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v314);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v321, char v322);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v323);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v330);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v331);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v332);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v333);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v334);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v335);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v337, char v338);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v344);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v350, char v351);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v352, __ZH_TYPE_Vec_lesschar_greater* v353);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v358);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v359);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v360);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v361);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v362, __ZH_TYPE_Vec_lesschar_greater* v363);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v364, i64 v365, i64 v366);
void __ZH_LOP_swap_charPcharP(char* v372, char* v373);
char* __ZH_LOP_partition_charPcharP(char* v375, char* v376);
void __ZH_LOP_qsort_charPcharP(char* v380, char* v381);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v385);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v388);
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v390);
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v391);
char __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v393, i64 v394);
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v395, i64 v396);
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v397, char v398);
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v399);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v400);
i64 __ZH_LOP_len_str(str v402);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v404);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v405);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v406, char v407);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v408, __ZH_TYPE_Str* v409);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v415, str v416);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v422);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v423);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v424, __ZH_TYPE_Str* v425);
__ZH_TYPE_Str __ZH_LOP_frog_escaped_();
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_();
str __ZH_LOP_frog_raw_();
str __ZH_LOP_frog_();
void __ZH_LOP_brainfuck_str(str v428);
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
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v204) {
  return (__ZH_BOP__dot_dot_i64i64((v204), (((i64)9223372036854775807))));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v205) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP__minus_i64((((i64)9223372036854775807)))), (v205)));
}
bool __ZH_BOP__equal_equal_i64Range(i64 v206, __ZH_TYPE_Range v207) {
  if ((((((&(v207))->begin)))<((((&(v207))->end))))) {
    return (((((((&(v207))->begin)))<=((v206))))&&((((v206))<((((&(v207))->end))))));
  } else {
    return (((((((&(v207))->end)))<=((v206))))&&((((v206))<((((&(v207))->begin))))));
  }
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v227) {
  __ZH_TYPE_VecIter_lessi64_greater v228;
  (((((&(v228))->ptr))=(v227)));
  return (v228);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v229) {
  ((((((v229))->ptr))=(((i64*)(((((i64)((((v229))->ptr)))))+((((((i64)1)))*((((i64)8))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v230, __ZH_TYPE_VecIter_lessi64_greater v231) {
  return (((((i64)((((v230))->ptr)))))!=((((i64)(((&(v231))->ptr))))));
}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v232) {
  return &(*((((&(v232))->ptr))));
}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v208, i64 v209) {
  return (((i64*)(((i64*)(((((i64)((((v208))->head)))))+((((v209))*((((i64)8))))))))));
}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v210, i64 v211) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v210), (v211)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v212) {
  (printf("%s", ("[")));
  {
      i64 v216;
      i64 v215;
      i64 v214;
      __ZH_TYPE_Range v213;
      (((v213)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v212))->size))))));
      (((v214)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v213)))))));
      (((v215)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v213)))))));
      (((v216)=(v214)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v216))), (v215)))) {
        if ((!((!((v216)))))) {
          (printf("%s", (" ")));
        }
        (printf("%lld", (*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v212), (v216)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v216)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v217) {
  i64 v218;
  (((v218)=((((v217))->capacity))));
  if ((((v218))==((((i64)0))))) {
    (((v218)=(((i64)1))));
    ((((((v217))->head))=(((i64*)(alloc((((i64)8))))))));
    ((((((v217))->capacity))=(v218)));
  } else {
    i64* v219;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v218), (((i64)2))));
    (((v219)=(((i64*)(alloc((((v218))*((((i64)8))))))))));
    {
        i64 v223;
        i64 v222;
        i64 v221;
        __ZH_TYPE_Range v220;
        (((v220)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v217))->size))))));
        (((v221)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v220)))))));
        (((v222)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v220)))))));
        (((v223)=(v221)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v223))), (v222)))) {
          (((*((((i64*)(((((i64)(v219))))+((((v223))*((((i64)8))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v217), (v223)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v223)))));
        }
      }
    (free((void*) (((i64)((((v217))->head))))));
    ((((((v217))->head))=(v219)));
  }
  ((((((v217))->capacity))=(v218)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v224, i64 v225) {
  if (((((((v224))->size)))==(((((v224))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((v224)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v224), ((((v224))->size))))=(v225)));
  (__ZH_LOP__plus_plus_i64R(&((((v224))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v226) {
  (__ZH_LOP__minus_minus_i64R(&((((v226))->size))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v233) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P(((((v233))->head))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v234) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v234), ((((v234))->size))))));
}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v235) {
  return &(*(((((v235))->head))));
}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v236) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v236), ((((((v236))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v237) {
  if ((!((!((((i64)((((v237))->head))))))))) {
    (free((void*) (((i64)((((v237))->head))))));
    ((((((v237))->size))=(((i64)0))));
    ((((((v237))->capacity))=(((i64)0))));
    ((((((v237))->head))=(((i64*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v238) {
  __ZH_TYPE_Vec_lessi64_greater v239;
  (((((&(v239))->head))=(((i64*)(((i64)0))))));
  (((((&(v239))->size))=(((i64)0))));
  (((((&(v239))->capacity))=(((i64)0))));
  while ((((((&(v239))->capacity)))<((v238)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((&((v239)))));
  }
  (((((&(v239))->size))=(v238)));
  (((((&(v239))->capacity))=(v238)));
  return (v239);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v239)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v240, i64 v241) {
  __ZH_TYPE_Vec_lessi64_greater v242;
  (((v242)=(__ZH_LOP_Vec_lessi64_greater_i64((v240)))));
  {
      i64 v246;
      i64 v245;
      i64 v244;
      __ZH_TYPE_Range v243;
      (((v243)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v242))->size))))));
      (((v244)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v243)))))));
      (((v245)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v243)))))));
      (((v246)=(v244)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v246))), (v245)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v242))), (v246)))=(v241)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v246)))));
      }
    }
  return (v242);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v242)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {
  return (__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v247) {
  __ZH_TYPE_Vec_lessi64_greater v248;
  (((v248)=(__ZH_LOP_Vec_lessi64_greater_i64((((&(*v247))->size))))));
  {
      i64 v252;
      i64 v251;
      i64 v250;
      __ZH_TYPE_Range v249;
      (((v249)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v247))->size))))));
      (((v250)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v249)))))));
      (((v251)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v249)))))));
      (((v252)=(v250)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v252))), (v251)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v248))), (v252)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((*v247))), (v252)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v252)))));
      }
    }
  return (v248);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v248)))));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v253, i64 v254) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v253))), (v254)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v255, __ZH_TYPE_Vec_lessi64_greater* v256) {
  {
      __ZH_TYPE_VecIter_lessi64_greater v260;
      __ZH_TYPE_VecIter_lessi64_greater v259;
      __ZH_TYPE_VecIter_lessi64_greater v258;
      __ZH_TYPE_Vec_lessi64_greater v257;
      (((v257)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v256)))));
      (((v258)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((&((v257)))))));
      (((v259)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((&((v257)))))));
      (((v260)=(v258)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater((&((v260))), (v259)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v255))), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v260)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand((&((v260)))));
      }
    }
}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v261) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v261)))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v262) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v262)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v263) {
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v263)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v264) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v264))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v265, __ZH_TYPE_Vec_lessi64_greater* v266) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v266))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v267, i64 v268, i64 v269) {
  __ZH_TYPE_Vec_lessi64_greater v270;
  (((v270)=(__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))))));
  {
      i64 v274;
      i64 v273;
      i64 v272;
      __ZH_TYPE_Range v271;
      (((v271)=(__ZH_BOP__dot_dot_i64i64((v268), (v269)))));
      (((v272)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v271)))))));
      (((v273)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v271)))))));
      (((v274)=(v272)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v274))), (v273)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((v270))), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v267), (v274)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v274)))));
      }
    }
  return (v270);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v270)))));
}
void __ZH_LOP_swap_i64Pi64P(i64* v275, i64* v276) {
  i64 v277;
  (((v277)=(*((v275)))));
  (((*((v275)))=(*((v276)))));
  (((*((v276)))=(v277)));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v278, i64* v279) {
  i64* v282;
  i64* v281;
  i64* v280;
  ((((v280)=(((i64*)(((((i64)(v279))))-((((((i64)1)))*((((i64)8)))))))))), (((v281)=(v278))), (((v282)=(v278))));
  (((v282)=(v278)));
  while ((((((i64)(v282))))!=((((i64)(v280)))))) {
    if ((((*((v282))))<((*((v280)))))) {
      (__ZH_LOP_swap_i64Pi64P((v281), (v282)));
      (((v281)=(((i64*)(((((i64)(v281))))+((((((i64)1)))*((((i64)8))))))))));
    }
    (((v282)=(((i64*)(((((i64)(v282))))+((((((i64)1)))*((((i64)8))))))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v281), (v280)));
  return (v281);
}
void __ZH_LOP_qsort_i64Pi64P(i64* v283, i64* v284) {
  i64 v286;
  i64 v285;
  (((v285)=(((((i64)(v284))))-((((i64)(v283)))))));
  (((v286)=(((i64)8))));
  if ((((v285))>((v286)))) {
    i64* v287;
    (((v287)=(__ZH_LOP_partition_i64Pi64P((v283), (v284)))));
    (__ZH_LOP_qsort_i64Pi64P((v283), (v287)));
    (((v287)=(((i64*)(((((i64)(v287))))+((((((i64)1)))*((((i64)8))))))))));
    (__ZH_LOP_qsort_i64Pi64P((v287), (v284)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v288) {
  __ZH_TYPE_VecIter_lessi64_greater v290;
  __ZH_TYPE_VecIter_lessi64_greater v289;
  (((v289)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((v288)))));
  (((v290)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((v288)))));
  (__ZH_LOP_qsort_i64Pi64P((((&(v289))->ptr)), (((&(v290))->ptr))));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v291) {
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand((&((*v291)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v292, i64 v293) {
  __ZH_TYPE_Vec_lessi64_greater v294;
  (((v294)=(__ZH_LOP_Vec_lessi64_greater_i64((((v293))-((v292)))))));
  {
      i64 v298;
      i64 v297;
      i64 v296;
      __ZH_TYPE_Range v295;
      (((v295)=(__ZH_BOP__dot_dot_i64i64((v292), (v293)))));
      (((v296)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v295)))))));
      (((v297)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v295)))))));
      (((v298)=(v296)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v298))), (v297)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v294))), (((v298))-((v292)))))=(v298)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v298)))));
      }
    }
  return (v294);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v294)))));
}
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v299, i64 v300) {
  return (*((((char*)(((((i64)(*((v299))))))+((v300)))))));
}
char __ZH_BOP__caret_stri64(str v301, i64 v302) {
  return (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v301))), (v302)));
}
bool __ZH_BOP__equal_equal_charstr(char v303, str v304) {
  return (((v303))==((__ZH_BOP__caret_stri64((v304), (((i64)0))))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v324) {
  __ZH_TYPE_VecIter_lesschar_greater v325;
  (((((&(v325))->ptr))=(v324)));
  return (v325);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v326) {
  ((((((v326))->ptr))=(((char*)(((((i64)((((v326))->ptr)))))+((((((i64)1)))*((((i64)1))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v327, __ZH_TYPE_VecIter_lesschar_greater v328) {
  return (((((i64)((((v327))->ptr)))))!=((((i64)(((&(v328))->ptr))))));
}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v329) {
  return &(*((((&(v329))->ptr))));
}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v305, i64 v306) {
  return (((char*)(((char*)(((((i64)((((v305))->head)))))+((((v306))*((((i64)1))))))))));
}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v307, i64 v308) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v307), (v308)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v309) {
  (printf("%s", ("[")));
  {
      i64 v313;
      i64 v312;
      i64 v311;
      __ZH_TYPE_Range v310;
      (((v310)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v309))->size))))));
      (((v311)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v310)))))));
      (((v312)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v310)))))));
      (((v313)=(v311)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v313))), (v312)))) {
        if ((!((!((v313)))))) {
          (printf("%s", (" ")));
        }
        (printf("%c", (*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v309), (v313)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v313)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v314) {
  i64 v315;
  (((v315)=((((v314))->capacity))));
  if ((((v315))==((((i64)0))))) {
    (((v315)=(((i64)1))));
    ((((((v314))->head))=(((char*)(alloc((((i64)1))))))));
    ((((((v314))->capacity))=(v315)));
  } else {
    char* v316;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v315), (((i64)2))));
    (((v316)=(((char*)(alloc((((v315))*((((i64)1))))))))));
    {
        i64 v320;
        i64 v319;
        i64 v318;
        __ZH_TYPE_Range v317;
        (((v317)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v314))->size))))));
        (((v318)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v317)))))));
        (((v319)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v317)))))));
        (((v320)=(v318)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v320))), (v319)))) {
          (((*((((char*)(((((i64)(v316))))+((((v320))*((((i64)1))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v314), (v320)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v320)))));
        }
      }
    (free((void*) (((i64)((((v314))->head))))));
    ((((((v314))->head))=(v316)));
  }
  ((((((v314))->capacity))=(v315)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v321, char v322) {
  if (((((((v321))->size)))==(((((v321))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((v321)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v321), ((((v321))->size))))=(v322)));
  (__ZH_LOP__plus_plus_i64R(&((((v321))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v323) {
  (__ZH_LOP__minus_minus_i64R(&((((v323))->size))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v330) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP(((((v330))->head))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v331) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v331), ((((v331))->size))))));
}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v332) {
  return &(*(((((v332))->head))));
}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v333) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v333), ((((((v333))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v334) {
  if ((!((!((((i64)((((v334))->head))))))))) {
    (free((void*) (((i64)((((v334))->head))))));
    ((((((v334))->size))=(((i64)0))));
    ((((((v334))->capacity))=(((i64)0))));
    ((((((v334))->head))=(((char*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v335) {
  __ZH_TYPE_Vec_lesschar_greater v336;
  (((((&(v336))->head))=(((char*)(((i64)0))))));
  (((((&(v336))->size))=(((i64)0))));
  (((((&(v336))->capacity))=(((i64)0))));
  while ((((((&(v336))->capacity)))<((v335)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((&((v336)))));
  }
  (((((&(v336))->size))=(v335)));
  (((((&(v336))->capacity))=(v335)));
  return (v336);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v336)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v337, char v338) {
  __ZH_TYPE_Vec_lesschar_greater v339;
  (((v339)=(__ZH_LOP_Vec_lesschar_greater_i64((v337)))));
  {
      i64 v343;
      i64 v342;
      i64 v341;
      __ZH_TYPE_Range v340;
      (((v340)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v339))->size))))));
      (((v341)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v340)))))));
      (((v342)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v340)))))));
      (((v343)=(v341)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v343))), (v342)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v339))), (v343)))=(v338)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v343)))));
      }
    }
  return (v339);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v339)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {
  return (__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v344) {
  __ZH_TYPE_Vec_lesschar_greater v345;
  (((v345)=(__ZH_LOP_Vec_lesschar_greater_i64((((&(*v344))->size))))));
  {
      i64 v349;
      i64 v348;
      i64 v347;
      __ZH_TYPE_Range v346;
      (((v346)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v344))->size))))));
      (((v347)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v346)))))));
      (((v348)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v346)))))));
      (((v349)=(v347)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v349))), (v348)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v345))), (v349)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((*v344))), (v349)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v349)))));
      }
    }
  return (v345);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v345)))));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v350, char v351) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v350))), (v351)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v352, __ZH_TYPE_Vec_lesschar_greater* v353) {
  {
      __ZH_TYPE_VecIter_lesschar_greater v357;
      __ZH_TYPE_VecIter_lesschar_greater v356;
      __ZH_TYPE_VecIter_lesschar_greater v355;
      __ZH_TYPE_Vec_lesschar_greater v354;
      (((v354)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v353)))));
      (((v355)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&((v354)))))));
      (((v356)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((&((v354)))))));
      (((v357)=(v355)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater((&((v357))), (v356)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v352))), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v357)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand((&((v357)))));
      }
    }
}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v358) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v358)))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v359) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v359)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v360) {
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v360)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v361) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v361))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v362, __ZH_TYPE_Vec_lesschar_greater* v363) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v363))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v364, i64 v365, i64 v366) {
  __ZH_TYPE_Vec_lesschar_greater v367;
  (((v367)=(__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))))));
  {
      i64 v371;
      i64 v370;
      i64 v369;
      __ZH_TYPE_Range v368;
      (((v368)=(__ZH_BOP__dot_dot_i64i64((v365), (v366)))));
      (((v369)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v368)))))));
      (((v370)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v368)))))));
      (((v371)=(v369)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v371))), (v370)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((v367))), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v364), (v371)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v371)))));
      }
    }
  return (v367);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v367)))));
}
void __ZH_LOP_swap_charPcharP(char* v372, char* v373) {
  char v374;
  (((v374)=(*((v372)))));
  (((*((v372)))=(*((v373)))));
  (((*((v373)))=(v374)));
}
char* __ZH_LOP_partition_charPcharP(char* v375, char* v376) {
  char* v379;
  char* v378;
  char* v377;
  ((((v377)=(((char*)(((((i64)(v376))))-((((((i64)1)))*((((i64)1)))))))))), (((v378)=(v375))), (((v379)=(v375))));
  (((v379)=(v375)));
  while ((((((i64)(v379))))!=((((i64)(v377)))))) {
    if ((((*((v379))))<((*((v377)))))) {
      (__ZH_LOP_swap_charPcharP((v378), (v379)));
      (((v378)=(((char*)(((((i64)(v378))))+((((((i64)1)))*((((i64)1))))))))));
    }
    (((v379)=(((char*)(((((i64)(v379))))+((((((i64)1)))*((((i64)1))))))))));
  }
  (__ZH_LOP_swap_charPcharP((v378), (v377)));
  return (v378);
}
void __ZH_LOP_qsort_charPcharP(char* v380, char* v381) {
  i64 v383;
  i64 v382;
  (((v382)=(((((i64)(v381))))-((((i64)(v380)))))));
  (((v383)=(((i64)1))));
  if ((((v382))>((v383)))) {
    char* v384;
    (((v384)=(__ZH_LOP_partition_charPcharP((v380), (v381)))));
    (__ZH_LOP_qsort_charPcharP((v380), (v384)));
    (((v384)=(((char*)(((((i64)(v384))))+((((((i64)1)))*((((i64)1))))))))));
    (__ZH_LOP_qsort_charPcharP((v384), (v381)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v385) {
  __ZH_TYPE_VecIter_lesschar_greater v387;
  __ZH_TYPE_VecIter_lesschar_greater v386;
  (((v386)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((v385)))));
  (((v387)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((v385)))));
  (__ZH_LOP_qsort_charPcharP((((&(v386))->ptr)), (((&(v387))->ptr))));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v388) {
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand((&((*v388)))));
}
__ZH_TYPE_Str __ZH_LOP_Str_() {
  __ZH_TYPE_Str v389;
  (((((&(v389))->data))=(__ZH_LOP_Vec_lesschar_greater_())));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v389))->data)))), (((char)(((u8)0))))));
  (((((&(v389))->size))=(((i64)0))));
  return (v389);
}
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v390) {
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(((((v390))->data))))));
}
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v391) {
  __ZH_TYPE_VecIter_lesschar_greater v392;
  (((v392)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&(((((v391))->data))))))));
  return (((str)(((&(v392))->ptr))));
}
char __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v393, i64 v394) {
  return (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(((((v393))->data)))), (v394)));
}
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v395, i64 v396) {
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((&(((((v395))->data)))), (v396)));
}
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v397, char v398) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v397))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v397))->data)))), (v398)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v397))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__plus_plus_i64R(&((((v397))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v399) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v399))->data))))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v399))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v399))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__minus_minus_i64R(&((((v399))->size))));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v400) {
  __ZH_TYPE_Str v401;
  (((v401)=(__ZH_LOP_Str_())));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&((((&(v401))->data))))));
  while ((((*((((char*)(v400))))))!=((((char)(((u8)0))))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v401))->data)))), (*((((char*)(v400)))))));
    (((v400)=(((str)(((((i64)(v400))))+((((i64)1))))))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v401))->data)))), (((char)(((u8)0))))));
  (((((&(v401))->size))=(((((&(((&(v401))->data)))->size)))-((((i64)1))))));
  return (v401);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v401)))));
}
i64 __ZH_LOP_len_str(str v402) {
  i64 v403;
  (((v403)=(((i64)0))));
  while ((((*((((char*)(v402))))))!=((((char)(((u8)0))))))) {
    (__ZH_LOP__plus_plus_i64R(&(v403)));
    (((v402)=(((str)(((((i64)(v402))))+((((i64)1))))))));
  }
  return (v403);
}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v404) {
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v404)))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v405) {
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v405)))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v406, char v407) {
  (__ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar((&((*v406))), (v407)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v408, __ZH_TYPE_Str* v409) {
  {
      i64 v413;
      i64 v412;
      i64 v411;
      __ZH_TYPE_Range v410;
      (((v410)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v409))->size))))));
      (((v411)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v410)))))));
      (((v412)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v410)))))));
      (((v413)=(v411)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v413))), (v412)))) {
        char v414;
        (((v414)=(((char)(((i8)115))))));
        (((v414)=(__ZH_BOP__dotcall_dotat_StrP_ampersandi64((&((*v409))), (v413)))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v408), (v414)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v413)))));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v415, str v416) {
  i64 v417;
  (((v417)=(__ZH_LOP_len_str((v416)))));
  {
      i64 v421;
      i64 v420;
      i64 v419;
      __ZH_TYPE_Range v418;
      (((v418)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (v417)))));
      (((v419)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v418)))))));
      (((v420)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v418)))))));
      (((v421)=(v419)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v421))), (v420)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v415), (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v416))), (v421)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v421)))));
      }
    }
}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v422) {
  (__ZH_LOP_out_StrR(&(*v422)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v423) {
  ((__ZH_LOP_put_StrR(&(*v423))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v424, __ZH_TYPE_Str* v425) {
  ((__ZH_LOP_put_StrR(&(*v425))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_() {
  __ZH_TYPE_Str v426;
  (((v426)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v426), ("         _____ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v426), ("       /       \\\\__ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v426), ("     /             \\\\\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v426), ("   /   0    0        |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v426), ("  |     ..            |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v426), ("  /|        _/       /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v426), (" / .\\\\_____/         /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v426), ("/U\\\\|    \\\\___|   |__/\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v426), ("            /  /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v426), ("            |/U\\\\\\n")));
  return (v426);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v426)))));
}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_() {
  __ZH_TYPE_Str v427;
  (((v427)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v427), ("         _____         \\n       /       \\\\__     \\n     /             \\\\   \\n   /   0    0        | \\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\")));
  return (v427);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v427)))));
}
str __ZH_LOP_frog_raw_() {
  return ("         _____\\n       /       \\\\__\\n     /             \\\\\\n   /   0    0        |\\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\ ");
}
str __ZH_LOP_frog_() {
  return (__ZH_LOP_frog_raw_());
}
void __ZH_LOP_brainfuck_str(str v428) {
  i64 v430;
  u8* v429;
  (((v429)=(((u8*)(alloc((((i64)3000))))))));
  (((v430)=(((i64)0))));
  {
      i64 v434;
      i64 v433;
      i64 v432;
      __ZH_TYPE_Range v431;
      (((v431)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (__ZH_LOP_len_str((v428)))))));
      (((v432)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v431)))))));
      (((v433)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v431)))))));
      (((v434)=(v432)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v434))), (v433)))) {
        char v436;
        u8 v435;
        (((v435)=(*((v429)))));
        (((v436)=(__ZH_BOP__caret_stri64((v428), (v434)))));
        {
            char v437;
            (((v437)=(v436)));
            if ((__ZH_BOP__equal_equal_charstr((v437), (">")))) {
              (((v429)=(((u8*)(((((i64)(v429))))+((((((i64)1)))*((((i64)1))))))))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v437), ("<")))) {
              (((v429)=(((u8*)(((((i64)(v429))))-((((((i64)1)))*((((i64)1))))))))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v437), ("+")))) {
              (__ZH_LOP__plus_plus_u8R(&(*((v429)))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v437), ("-")))) {
              (__ZH_LOP__minus_minus_u8R(&(*((v429)))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v437), (".")))) {
              (printf("%c", (((char)(v435)))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v437), (",")))) {
              (__ZH_LOP__greater_u8R(&(*((v429)))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v437), ("[")))) {
              if ((!((v435)))) {
                (__ZH_LOP__plus_plus_i64R(&(v430)));
                while ((!((!((v430)))))) {
                  (__ZH_LOP__plus_plus_i64R(&(v434)));
                  if ((__ZH_BOP__equal_equal_charstr((__ZH_BOP__caret_stri64((v428), (v434))), ("[")))) {
                    (__ZH_LOP__plus_plus_i64R(&(v430)));
                  }
                  if ((__ZH_BOP__equal_equal_charstr((__ZH_BOP__caret_stri64((v428), (v434))), ("]")))) {
                    (__ZH_LOP__minus_minus_i64R(&(v430)));
                  }
                }
              }
            }
 else if ((__ZH_BOP__equal_equal_charstr((v437), ("]")))) {
              if ((!((!((v435)))))) {
                if ((__ZH_BOP__equal_equal_charstr((v436), ("]")))) {
                  (__ZH_LOP__plus_plus_i64R(&(v430)));
                }
                while ((!((!((v430)))))) {
                  (__ZH_LOP__minus_minus_i64R(&(v434)));
                  if ((__ZH_BOP__equal_equal_charstr((__ZH_BOP__caret_stri64((v428), (v434))), ("[")))) {
                    (__ZH_LOP__minus_minus_i64R(&(v430)));
                  }
                  if ((__ZH_BOP__equal_equal_charstr((__ZH_BOP__caret_stri64((v428), (v434))), ("]")))) {
                    (__ZH_LOP__plus_plus_i64R(&(v430)));
                  }
                }
                (__ZH_LOP__minus_minus_i64R(&(v434)));
              }
            }
          }
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v434)))));
      }
    }
}
int main(int argc, char *argv[])  {
  i64 v438;
  (((v438)=(((i64)5))));
  {
      i64 v439;
      (((v439)=(v438)));
      if ((__ZH_BOP__equal_equal_i64Range((v439), (__ZH_ROP__dot_dot_i64((((i64)10))))))) {
        (printf("%s\n", ("10..")));
      }
 else if ((__ZH_BOP__equal_equal_i64Range((v439), (__ZH_ROP__dot_dot_i64((((i64)15))))))) {
        (printf("%s\n", ("15..")));
      }
 else if ((__ZH_BOP__equal_equal_i64Range((v439), (__ZH_LOP__dot_dot_i64((((i64)3))))))) {
        (printf("%s\n", ("..3")));
      }
 else if ((__ZH_BOP__equal_equal_i64Range((v439), (__ZH_BOP__dot_dot_i64i64((((i64)3)), (((i64)10))))))) {
        (printf("%s\n", ("3..10")));
      }
 else if ((__ZH_BOP__equal_equal_i64Range((v439), (__ZH_BOP__dot_dot_i64i64((((i64)0)), (((i64)2))))))) {
        (printf("%s\n", ("0..2")));
      }
 else if ((((v439))==((((i64)5))))) {
        (printf("%lld\n", (((i64)5))));
      }
 else if ((((bool)1))) {
        (printf("%s\n", ("any")));
      }
    }
  {
      i64 v443;
      i64 v442;
      i64 v441;
      __ZH_TYPE_Range v440;
      (((v440)=(__ZH_BOP__dot_dot_i64i64((((i64)5)), (((i64)10))))));
      (((v441)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v440)))))));
      (((v442)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v440)))))));
      (((v443)=(v441)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v443))), (v442)))) {
        (__ZH_LOP__less_i64((v443)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v443)))));
      }
    }
}
