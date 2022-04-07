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

typedef float f32;
typedef double f64;

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
float in_f32() {
  float tmp;
  scanf("%f", &tmp);
  return tmp;
}
double in_f64() {
  double tmp;
  scanf("%lf", &tmp);
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
struct __PROT_ZH_TYPE_V2;
typedef struct __PROT_ZH_TYPE_V2 __ZH_TYPE_V2;
struct __PROT_ZH_TYPE_Vec_lessStr_greater;
typedef struct __PROT_ZH_TYPE_Vec_lessStr_greater __ZH_TYPE_Vec_lessStr_greater;
struct __PROT_ZH_TYPE_VecIter_lessStr_greater;
typedef struct __PROT_ZH_TYPE_VecIter_lessStr_greater __ZH_TYPE_VecIter_lessStr_greater;

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
struct __PROT_ZH_TYPE_V2 {
  f64 y;
  f64 x;
};
struct __PROT_ZH_TYPE_Vec_lessStr_greater {
  __ZH_TYPE_Str* head;
  i64 capacity;
  i64 size;
};
struct __PROT_ZH_TYPE_VecIter_lessStr_greater {
  __ZH_TYPE_Str* ptr;
};
i64 __ZH_LOP__plus_i64(i64 v101);
bool __ZH_BOP__percent_percent_i64i64(i64 v102, i64 v103);
void __ZH_BOP__plus_equal_u8Ru8(u8* v104, u8 v105);
void __ZH_BOP__minus_equal_u8Ru8(u8* v106, u8 v107);
void __ZH_BOP__slash_equal_u8Ru8(u8* v108, u8 v109);
void __ZH_BOP__percent_equal_u8Ru8(u8* v110, u8 v111);
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v112, u8 v113);
void __ZH_BOP__plus_equal_u16Ru16(u16* v114, u16 v115);
void __ZH_BOP__minus_equal_u16Ru16(u16* v116, u16 v117);
void __ZH_BOP__slash_equal_u16Ru16(u16* v118, u16 v119);
void __ZH_BOP__percent_equal_u16Ru16(u16* v120, u16 v121);
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v122, u16 v123);
void __ZH_BOP__plus_equal_u32Ru32(u32* v124, u32 v125);
void __ZH_BOP__minus_equal_u32Ru32(u32* v126, u32 v127);
void __ZH_BOP__slash_equal_u32Ru32(u32* v128, u32 v129);
void __ZH_BOP__percent_equal_u32Ru32(u32* v130, u32 v131);
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v132, u32 v133);
void __ZH_BOP__plus_equal_u64Ru64(u64* v134, u64 v135);
void __ZH_BOP__minus_equal_u64Ru64(u64* v136, u64 v137);
void __ZH_BOP__slash_equal_u64Ru64(u64* v138, u64 v139);
void __ZH_BOP__percent_equal_u64Ru64(u64* v140, u64 v141);
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v142, u64 v143);
i8 __ZH_LOP__minus_i8(i8 v144);
void __ZH_BOP__plus_equal_i8Ri8(i8* v145, i8 v146);
void __ZH_BOP__minus_equal_i8Ri8(i8* v147, i8 v148);
void __ZH_BOP__slash_equal_i8Ri8(i8* v149, i8 v150);
void __ZH_BOP__percent_equal_i8Ri8(i8* v151, i8 v152);
void __ZH_BOP__asterisk_equal_i8Ri8(i8* v153, i8 v154);
i16 __ZH_LOP__minus_i16(i16 v155);
void __ZH_BOP__plus_equal_i16Ri16(i16* v156, i16 v157);
void __ZH_BOP__minus_equal_i16Ri16(i16* v158, i16 v159);
void __ZH_BOP__slash_equal_i16Ri16(i16* v160, i16 v161);
void __ZH_BOP__percent_equal_i16Ri16(i16* v162, i16 v163);
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v164, i16 v165);
i32 __ZH_LOP__minus_i32(i32 v166);
void __ZH_BOP__plus_equal_i32Ri32(i32* v167, i32 v168);
void __ZH_BOP__minus_equal_i32Ri32(i32* v169, i32 v170);
void __ZH_BOP__slash_equal_i32Ri32(i32* v171, i32 v172);
void __ZH_BOP__percent_equal_i32Ri32(i32* v173, i32 v174);
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v175, i32 v176);
i64 __ZH_LOP__minus_i64(i64 v177);
void __ZH_BOP__plus_equal_i64Ri64(i64* v178, i64 v179);
void __ZH_BOP__minus_equal_i64Ri64(i64* v180, i64 v181);
void __ZH_BOP__slash_equal_i64Ri64(i64* v182, i64 v183);
void __ZH_BOP__percent_equal_i64Ri64(i64* v184, i64 v185);
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v186, i64 v187);
f32 __ZH_LOP__minus_f32(f32 v188);
void __ZH_BOP__plus_equal_f32Rf32(f32* v189, f32 v190);
void __ZH_BOP__minus_equal_f32Rf32(f32* v191, f32 v192);
void __ZH_BOP__slash_equal_f32Rf32(f32* v193, f32 v194);
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v195, f32 v196);
f64 __ZH_LOP__minus_f64(f64 v197);
void __ZH_BOP__plus_equal_f64Rf64(f64* v198, f64 v199);
void __ZH_BOP__minus_equal_f64Rf64(f64* v200, f64 v201);
void __ZH_BOP__slash_equal_f64Rf64(f64* v202, f64 v203);
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v204, f64 v205);
void __ZH_LOP__plus_plus_i64R(i64* v206);
void __ZH_LOP__minus_minus_i64R(i64* v207);
void __ZH_LOP__plus_plus_u8R(u8* v208);
void __ZH_LOP__minus_minus_u8R(u8* v209);
i8 __ZH_LOP_i8_();
i16 __ZH_LOP_i16_();
i32 __ZH_LOP_i32_();
i64 __ZH_LOP_i64_();
u8 __ZH_LOP_u8_();
u16 __ZH_LOP_u16_();
u32 __ZH_LOP_u32_();
u64 __ZH_LOP_u64_();
char __ZH_LOP_char_();
__ZH_TYPE_Out __ZH_LOP_Out_();
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v211, __ZH_TYPE_Out v212);
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v213);
__ZH_TYPE_Out __ZH_ROP__less_str(str v214);
__ZH_TYPE_Out __ZH_LOP__less_str(str v215);
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v216, str v217);
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v218);
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v219, str* v220);
__ZH_TYPE_Out __ZH_ROP__less_char(char v221);
__ZH_TYPE_Out __ZH_LOP__less_char(char v222);
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v223, char v224);
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v225);
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v226, char* v227);
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v228);
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v229);
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v230, i8 v231);
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v232);
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v233, i8* v234);
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v235);
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v236);
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v237, i16 v238);
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v239);
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v240, i16* v241);
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v242);
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v243);
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v244, i32 v245);
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v246);
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v247, i32* v248);
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v249);
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v250);
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v251, i64 v252);
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v253);
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v254, i64* v255);
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v256);
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v257);
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v258, u8 v259);
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v260);
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v261, u8* v262);
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v263);
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v264);
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v265, u16 v266);
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v267);
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v268, u16* v269);
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v270);
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v271);
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v272, u32 v273);
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v274);
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v275, u32* v276);
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v277);
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v278);
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v279, u64 v280);
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v281);
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v282, u64* v283);
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v284);
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v285);
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v286, f32 v287);
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v288);
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v289, f32* v290);
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v291);
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v292);
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v293, f64 v294);
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v295);
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v296, f64* v297);
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v298);
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v299, i64 v300);
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v301);
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v302);
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v303, i64 v304);
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v306, i64 v307);
i64 __ZH_LOP_rangeMin_();
i64 __ZH_LOP_rangeMax_();
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v308);
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v309);
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v310);
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v311);
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v312, i64 v313);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v314);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v315);
bool __ZH_BOP__equal_equal_i64Range(i64 v316, __ZH_TYPE_Range v317);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v342);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v344);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v345, __ZH_TYPE_VecIter_lessi64_greater v346);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v347);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v318, i64 v319);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v320, i64 v321);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v322);
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v327);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v332);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v339, i64 v340);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v341);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v348);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v349);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v350);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v351);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v352);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v353);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v359, i64 v360);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v366);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v372, i64 v373);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v374, __ZH_TYPE_Vec_lessi64_greater* v375);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v380);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v381);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v382);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v383);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v384, __ZH_TYPE_Vec_lessi64_greater* v385);
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v386, i64 v387);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v388, i64 v389, i64 v390);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v396, __ZH_TYPE_Range v397);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v400);
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v401, __ZH_TYPE_Vec_lessi64_greater* v402);
void __ZH_LOP_swap_i64Pi64P(i64* v403, i64* v404);
i64* __ZH_LOP_partition_i64Pi64P(i64* v406, i64* v407);
void __ZH_LOP_qsort_i64Pi64P(i64* v411, i64* v412);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v416);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v419);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v420, i64 v421);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v427);
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v433, i64 v434);
char __ZH_BOP__caret_stri64(str v435, i64 v436);
bool __ZH_BOP__equal_equal_charstr(char v437, str v438);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v463);
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v465);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v466, __ZH_TYPE_VecIter_lesschar_greater v467);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v468);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v439, i64 v440);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v441, i64 v442);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v443);
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v448);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v453);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v460, char v461);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v462);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v469);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v470);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v471);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v472);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v473);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v474);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v480, char v481);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v487);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v493, char v494);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v495, __ZH_TYPE_Vec_lesschar_greater* v496);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v501);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v502);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v503);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v504);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v505, __ZH_TYPE_Vec_lesschar_greater* v506);
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v507, i64 v508);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v509, i64 v510, i64 v511);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v517, __ZH_TYPE_Range v518);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v521);
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v522, __ZH_TYPE_Vec_lesschar_greater* v523);
void __ZH_LOP_swap_charPcharP(char* v524, char* v525);
char* __ZH_LOP_partition_charPcharP(char* v527, char* v528);
void __ZH_LOP_qsort_charPcharP(char* v532, char* v533);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v537);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v540);
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v542);
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v543);
char* __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v545, i64 v546);
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v547, i64 v548);
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v549, char v550);
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v551);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v552);
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v554);
i64 __ZH_LOP_len_str(str v556);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v558);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v559);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v560, char v561);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v562, __ZH_TYPE_Str* v563);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v569, str v570);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v576);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v577);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v578, __ZH_TYPE_Str* v579);
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v580, __ZH_TYPE_Str* v581);
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v582, i64 v583);
__ZH_TYPE_Str __ZH_LOP_frog_escaped_();
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_();
str __ZH_LOP_frog_raw_();
str __ZH_LOP_frog_();
f64 __ZH_LOP_sqrt_f64(f64 v592);
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v598, f64 v599);
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v601, __ZH_TYPE_V2 v602);
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v603, __ZH_TYPE_V2 v604);
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v606);
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v607);
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v608);
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v609);
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v610);
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v611, __ZH_TYPE_V2 v612);
void __ZH_LOP_mandelbrot_i64f64f64f64(i64 v613, f64 v614, f64 v615, f64 v616);
__ZH_TYPE_VecIter_lessStr_greater __ZH_LOP_VecIter_lessStr_greater_StrP(__ZH_TYPE_Str* v641);
void __ZH_BOP__dotcall_dotnext_VecIter_lessStr_greaterP_ampersand(__ZH_TYPE_VecIter_lessStr_greater* v643);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessStr_greaterP_ampersandVecIter_lessStr_greater(__ZH_TYPE_VecIter_lessStr_greater* v644, __ZH_TYPE_VecIter_lessStr_greater v645);
__ZH_TYPE_Str* __ZH_LOP__asterisk_VecIter_lessStr_greater(__ZH_TYPE_VecIter_lessStr_greater v646);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v617, i64 v618);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v619, i64 v620);
void __ZH_BOP__dotcall_dotprint_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v621);
void __ZH_BOP__dotcall_dotprintln_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v626);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v631);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr(__ZH_TYPE_Vec_lessStr_greater* v638, __ZH_TYPE_Str v639);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v640);
__ZH_TYPE_VecIter_lessStr_greater __ZH_BOP__dotcall_dotbegin_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v647);
__ZH_TYPE_VecIter_lessStr_greater __ZH_BOP__dotcall_dotend_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v648);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotfront_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v649);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotback_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v650);
void __ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v651);
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_i64(i64 v652);
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_i64Str(i64 v658, __ZH_TYPE_Str v659);
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_();
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v665);
void __ZH_BOP__plus_equal_Vec_lessStr_greaterRStr(__ZH_TYPE_Vec_lessStr_greater* v671, __ZH_TYPE_Str v672);
void __ZH_BOP__plus_equal_Vec_lessStr_greaterRVec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v673, __ZH_TYPE_Vec_lessStr_greater* v674);
void __ZH_LOP_put_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v679);
void __ZH_LOP_out_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v680);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v681);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v682);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessStr_greaterR(__ZH_TYPE_Out v683, __ZH_TYPE_Vec_lessStr_greater* v684);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v685, i64 v686);
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessStr_greater* v687, i64 v688, i64 v689);
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandRange(__ZH_TYPE_Vec_lessStr_greater* v695, __ZH_TYPE_Range v696);
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v699);
bool __ZH_BOP__less_Vec_lessStr_greaterRVec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v700, __ZH_TYPE_Vec_lessStr_greater* v701);
void __ZH_LOP_swap_StrPStrP(__ZH_TYPE_Str* v702, __ZH_TYPE_Str* v703);
__ZH_TYPE_Str* __ZH_LOP_partition_StrPStrP(__ZH_TYPE_Str* v705, __ZH_TYPE_Str* v706);
void __ZH_LOP_qsort_StrPStrP(__ZH_TYPE_Str* v710, __ZH_TYPE_Str* v711);
void __ZH_BOP__dotcall_dotsort_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v715);
void __ZH_LOP_sort_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v718);
int main(int argc, char *argv[]) ;

i64 __ZH_LOP__plus_i64(i64 v101) {
  return (v101);
}
bool __ZH_BOP__percent_percent_i64i64(i64 v102, i64 v103) {
  return (!((((v102))%((v103)))));
}
void __ZH_BOP__plus_equal_u8Ru8(u8* v104, u8 v105) {
  (((*v104)=(((*v104))+((v105)))));
}
void __ZH_BOP__minus_equal_u8Ru8(u8* v106, u8 v107) {
  (((*v106)=(((*v106))-((v107)))));
}
void __ZH_BOP__slash_equal_u8Ru8(u8* v108, u8 v109) {
  (((*v108)=(((*v108))/((v109)))));
}
void __ZH_BOP__percent_equal_u8Ru8(u8* v110, u8 v111) {
  (((*v110)=(((*v110))%((v111)))));
}
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v112, u8 v113) {
  (((*v112)=(((*v112))*((v113)))));
}
void __ZH_BOP__plus_equal_u16Ru16(u16* v114, u16 v115) {
  (((*v114)=(((*v114))+((v115)))));
}
void __ZH_BOP__minus_equal_u16Ru16(u16* v116, u16 v117) {
  (((*v116)=(((*v116))-((v117)))));
}
void __ZH_BOP__slash_equal_u16Ru16(u16* v118, u16 v119) {
  (((*v118)=(((*v118))/((v119)))));
}
void __ZH_BOP__percent_equal_u16Ru16(u16* v120, u16 v121) {
  (((*v120)=(((*v120))%((v121)))));
}
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v122, u16 v123) {
  (((*v122)=(((*v122))*((v123)))));
}
void __ZH_BOP__plus_equal_u32Ru32(u32* v124, u32 v125) {
  (((*v124)=(((*v124))+((v125)))));
}
void __ZH_BOP__minus_equal_u32Ru32(u32* v126, u32 v127) {
  (((*v126)=(((*v126))-((v127)))));
}
void __ZH_BOP__slash_equal_u32Ru32(u32* v128, u32 v129) {
  (((*v128)=(((*v128))/((v129)))));
}
void __ZH_BOP__percent_equal_u32Ru32(u32* v130, u32 v131) {
  (((*v130)=(((*v130))%((v131)))));
}
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v132, u32 v133) {
  (((*v132)=(((*v132))*((v133)))));
}
void __ZH_BOP__plus_equal_u64Ru64(u64* v134, u64 v135) {
  (((*v134)=(((*v134))+((v135)))));
}
void __ZH_BOP__minus_equal_u64Ru64(u64* v136, u64 v137) {
  (((*v136)=(((*v136))-((v137)))));
}
void __ZH_BOP__slash_equal_u64Ru64(u64* v138, u64 v139) {
  (((*v138)=(((*v138))/((v139)))));
}
void __ZH_BOP__percent_equal_u64Ru64(u64* v140, u64 v141) {
  (((*v140)=(((*v140))%((v141)))));
}
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v142, u64 v143) {
  (((*v142)=(((*v142))*((v143)))));
}
i8 __ZH_LOP__minus_i8(i8 v144) {
  return (((((i8)0)))-((v144)));
}
void __ZH_BOP__plus_equal_i8Ri8(i8* v145, i8 v146) {
  (((*v145)=(((*v145))+((v146)))));
}
void __ZH_BOP__minus_equal_i8Ri8(i8* v147, i8 v148) {
  (((*v147)=(((*v147))-((v148)))));
}
void __ZH_BOP__slash_equal_i8Ri8(i8* v149, i8 v150) {
  (((*v149)=(((*v149))/((v150)))));
}
void __ZH_BOP__percent_equal_i8Ri8(i8* v151, i8 v152) {
  (((*v151)=(((*v151))%((v152)))));
}
void __ZH_BOP__asterisk_equal_i8Ri8(i8* v153, i8 v154) {
  (((*v153)=(((*v153))*((v154)))));
}
i16 __ZH_LOP__minus_i16(i16 v155) {
  return (((((i16)0)))-((v155)));
}
void __ZH_BOP__plus_equal_i16Ri16(i16* v156, i16 v157) {
  (((*v156)=(((*v156))+((v157)))));
}
void __ZH_BOP__minus_equal_i16Ri16(i16* v158, i16 v159) {
  (((*v158)=(((*v158))-((v159)))));
}
void __ZH_BOP__slash_equal_i16Ri16(i16* v160, i16 v161) {
  (((*v160)=(((*v160))/((v161)))));
}
void __ZH_BOP__percent_equal_i16Ri16(i16* v162, i16 v163) {
  (((*v162)=(((*v162))%((v163)))));
}
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v164, i16 v165) {
  (((*v164)=(((*v164))*((v165)))));
}
i32 __ZH_LOP__minus_i32(i32 v166) {
  return (((((i32)0)))-((v166)));
}
void __ZH_BOP__plus_equal_i32Ri32(i32* v167, i32 v168) {
  (((*v167)=(((*v167))+((v168)))));
}
void __ZH_BOP__minus_equal_i32Ri32(i32* v169, i32 v170) {
  (((*v169)=(((*v169))-((v170)))));
}
void __ZH_BOP__slash_equal_i32Ri32(i32* v171, i32 v172) {
  (((*v171)=(((*v171))/((v172)))));
}
void __ZH_BOP__percent_equal_i32Ri32(i32* v173, i32 v174) {
  (((*v173)=(((*v173))%((v174)))));
}
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v175, i32 v176) {
  (((*v175)=(((*v175))*((v176)))));
}
i64 __ZH_LOP__minus_i64(i64 v177) {
  return (((((i64)0)))-((v177)));
}
void __ZH_BOP__plus_equal_i64Ri64(i64* v178, i64 v179) {
  (((*v178)=(((*v178))+((v179)))));
}
void __ZH_BOP__minus_equal_i64Ri64(i64* v180, i64 v181) {
  (((*v180)=(((*v180))-((v181)))));
}
void __ZH_BOP__slash_equal_i64Ri64(i64* v182, i64 v183) {
  (((*v182)=(((*v182))/((v183)))));
}
void __ZH_BOP__percent_equal_i64Ri64(i64* v184, i64 v185) {
  (((*v184)=(((*v184))%((v185)))));
}
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v186, i64 v187) {
  (((*v186)=(((*v186))*((v187)))));
}
f32 __ZH_LOP__minus_f32(f32 v188) {
  return (((((f32)0.000000)))-((v188)));
}
void __ZH_BOP__plus_equal_f32Rf32(f32* v189, f32 v190) {
  (((*v189)=(((*v189))+((v190)))));
}
void __ZH_BOP__minus_equal_f32Rf32(f32* v191, f32 v192) {
  (((*v191)=(((*v191))-((v192)))));
}
void __ZH_BOP__slash_equal_f32Rf32(f32* v193, f32 v194) {
  (((*v193)=(((*v193))/((v194)))));
}
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v195, f32 v196) {
  (((*v195)=(((*v195))*((v196)))));
}
f64 __ZH_LOP__minus_f64(f64 v197) {
  return (((((f64)0.000000)))-((v197)));
}
void __ZH_BOP__plus_equal_f64Rf64(f64* v198, f64 v199) {
  (((*v198)=(((*v198))+((v199)))));
}
void __ZH_BOP__minus_equal_f64Rf64(f64* v200, f64 v201) {
  (((*v200)=(((*v200))-((v201)))));
}
void __ZH_BOP__slash_equal_f64Rf64(f64* v202, f64 v203) {
  (((*v202)=(((*v202))/((v203)))));
}
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v204, f64 v205) {
  (((*v204)=(((*v204))*((v205)))));
}
void __ZH_LOP__plus_plus_i64R(i64* v206) {
  (__ZH_BOP__plus_equal_i64Ri64(&(*v206), (((i64)1))));
}
void __ZH_LOP__minus_minus_i64R(i64* v207) {
  (__ZH_BOP__minus_equal_i64Ri64(&(*v207), (((i64)1))));
}
void __ZH_LOP__plus_plus_u8R(u8* v208) {
  (((*v208)=(((*v208))+((((u8)1))))));
}
void __ZH_LOP__minus_minus_u8R(u8* v209) {
  (((*v209)=(((*v209))-((((u8)1))))));
}
i8 __ZH_LOP_i8_() {
  return (((i8)0));
}
i16 __ZH_LOP_i16_() {
  return (((i16)0));
}
i32 __ZH_LOP_i32_() {
  return (((i32)0));
}
i64 __ZH_LOP_i64_() {
  return (((i64)0));
}
u8 __ZH_LOP_u8_() {
  return (((u8)0));
}
u16 __ZH_LOP_u16_() {
  return (((u16)0));
}
u32 __ZH_LOP_u32_() {
  return (((u32)0));
}
u64 __ZH_LOP_u64_() {
  return (((u64)0));
}
char __ZH_LOP_char_() {
  return (((char)(((i8)0))));
}
__ZH_TYPE_Out __ZH_LOP_Out_() {
  __ZH_TYPE_Out v210;
  return (v210);
}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v211, __ZH_TYPE_Out v212) {
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v213) {
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_str(str v214) {
  (printf("%s\n", (v214)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_str(str v215) {
  ((printf("%s", (v215))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v216, str v217) {
  ((printf("%s", (v217))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v218) {
  (((*v218)=(in_str())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v219, str* v220) {
  (((*v220)=(in_str())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_char(char v221) {
  (printf("%c\n", (v221)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_char(char v222) {
  ((printf("%c", (v222))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v223, char v224) {
  ((printf("%c", (v224))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v225) {
  (((*v225)=(in_char())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v226, char* v227) {
  (((*v227)=(in_char())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v228) {
  (printf("%d\n", (v228)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v229) {
  ((printf("%d", (v229))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v230, i8 v231) {
  ((printf("%d", (v231))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v232) {
  (((*v232)=(in_i8())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v233, i8* v234) {
  (((*v234)=(in_i8())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v235) {
  (printf("%hd\n", (v235)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v236) {
  ((printf("%hd", (v236))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v237, i16 v238) {
  ((printf("%hd", (v238))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v239) {
  (((*v239)=(in_i16())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v240, i16* v241) {
  (((*v241)=(in_i16())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v242) {
  (printf("%d\n", (v242)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v243) {
  ((printf("%d", (v243))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v244, i32 v245) {
  ((printf("%d", (v245))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v246) {
  (((*v246)=(in_i32())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v247, i32* v248) {
  (((*v248)=(in_i32())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v249) {
  (printf("%lld\n", (v249)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v250) {
  ((printf("%lld", (v250))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v251, i64 v252) {
  ((printf("%lld", (v252))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v253) {
  (((*v253)=(in_i64())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v254, i64* v255) {
  (((*v255)=(in_i64())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v256) {
  (printf("%d\n", (v256)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v257) {
  ((printf("%d", (v257))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v258, u8 v259) {
  ((printf("%d", (v259))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v260) {
  (((*v260)=(in_u8())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v261, u8* v262) {
  (((*v262)=(in_u8())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v263) {
  (printf("%hd\n", (v263)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v264) {
  ((printf("%hd", (v264))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v265, u16 v266) {
  ((printf("%hd", (v266))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v267) {
  (((*v267)=(in_u16())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v268, u16* v269) {
  (((*v269)=(in_u16())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v270) {
  (printf("%u\n", (v270)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v271) {
  ((printf("%u", (v271))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v272, u32 v273) {
  ((printf("%u", (v273))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v274) {
  (((*v274)=(in_u32())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v275, u32* v276) {
  (((*v276)=(in_u32())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v277) {
  (printf("%llu\n", (v277)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v278) {
  ((printf("%llu", (v278))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v279, u64 v280) {
  ((printf("%llu", (v280))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v281) {
  (((*v281)=(in_u64())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v282, u64* v283) {
  (((*v283)=(in_u64())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v284) {
  (printf("%f\n", (v284)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v285) {
  ((printf("%f", (v285))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v286, f32 v287) {
  ((printf("%f", (v287))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v288) {
  (((*v288)=(in_f32())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v289, f32* v290) {
  (((*v290)=(in_f32())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v291) {
  (printf("%f\n", (v291)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v292) {
  ((printf("%f", (v292))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v293, f64 v294) {
  ((printf("%f", (v294))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v295) {
  (((*v295)=(in_f64())));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v296, f64* v297) {
  (((*v297)=(in_f64())));
  return (__ZH_LOP_Out_());
}
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v298) {
  (((*((v298)))=(((*((v298))))+((((i64)1))))));
}
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v299, i64 v300) {
  return (((*((v299))))!=((v300)));
}
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v301) {
  return ((((v301))->begin));
}
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v302) {
  return ((((v302))->end));
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v303, i64 v304) {
  __ZH_TYPE_Range v305;
  (((((&(v305))->begin))=(v303)));
  (((((&(v305))->end))=(v304)));
  return (v305);
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v306, i64 v307) {
  return (__ZH_BOP__dot_dot_i64i64((v306), (__ZH_LOP__minus_i64((v307)))));
}
i64 __ZH_LOP_rangeMin_() {
  return (__ZH_LOP__minus_i64((((i64)9223372036854775807))));
}
i64 __ZH_LOP_rangeMax_() {
  return (((i64)9223372036854775807));
}
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v308) {
  return (__ZH_BOP__dot_dot_i64i64((v308), (__ZH_LOP_rangeMax_())));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v309) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (v309)));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v310) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (__ZH_LOP__minus_i64((v310)))));
}
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v311) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP__minus_i64((((&(v311))->begin)))), (((&(v311))->end))));
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v312, i64 v313) {
  return (__ZH_BOP__dot_dot_i64i64((v312), (((v313))+((((i64)1))))));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v314) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((v314))+((((i64)1))))));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v315) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((__ZH_LOP__minus_i64((v315))))+((((i64)1))))));
}
bool __ZH_BOP__equal_equal_i64Range(i64 v316, __ZH_TYPE_Range v317) {
  if ((((((&(v317))->begin)))<((((&(v317))->end))))) {
    return (((((((&(v317))->begin)))<=((v316))))&&((((v316))<((((&(v317))->end))))));
  } else {
    return (((((((&(v317))->end)))<=((v316))))&&((((v316))<((((&(v317))->begin))))));
  }
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v342) {
  __ZH_TYPE_VecIter_lessi64_greater v343;
  (((((&(v343))->ptr))=(v342)));
  return (v343);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v344) {
  ((((((v344))->ptr))=(((i64*)(((((i64)((((v344))->ptr)))))+((((((i64)1)))*((((i64)8))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v345, __ZH_TYPE_VecIter_lessi64_greater v346) {
  return (((((i64)((((v345))->ptr)))))!=((((i64)(((&(v346))->ptr))))));
}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v347) {
  return &(*((((&(v347))->ptr))));
}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v318, i64 v319) {
  return (((i64*)(((i64*)(((((i64)((((v318))->head)))))+((((v319))*((((i64)8))))))))));
}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v320, i64 v321) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v320), (v321)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v322) {
  (printf("%s", ("[")));
  {
      i64 v326;
      i64 v325;
      i64 v324;
      __ZH_TYPE_Range v323;
      (((v323)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v322))->size))))));
      (((v324)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v323)))))));
      (((v325)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v323)))))));
      (((v326)=(v324)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v326))), (v325)))) {
        if ((!((!((v326)))))) {
          (printf("%s", (" ")));
        }
        (printf("%lld", (*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v322), (v326)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v326)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v327) {
  {
      i64 v331;
      i64 v330;
      i64 v329;
      __ZH_TYPE_Range v328;
      (((v328)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v327))->size))))));
      (((v329)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v328)))))));
      (((v330)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v328)))))));
      (((v331)=(v329)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v331))), (v330)))) {
        (printf("%lld\n", (*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v327), (v331)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v331)))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v332) {
  i64 v333;
  (((v333)=((((v332))->capacity))));
  if ((((v333))==((((i64)0))))) {
    (((v333)=(((i64)1))));
    ((((((v332))->head))=(((i64*)(alloc((((i64)8))))))));
    ((((((v332))->capacity))=(v333)));
  } else {
    i64* v334;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v333), (((i64)2))));
    (((v334)=(((i64*)(alloc((((v333))*((((i64)8))))))))));
    {
        i64 v338;
        i64 v337;
        i64 v336;
        __ZH_TYPE_Range v335;
        (((v335)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v332))->size))))));
        (((v336)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v335)))))));
        (((v337)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v335)))))));
        (((v338)=(v336)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v338))), (v337)))) {
          (((*((((i64*)(((((i64)(v334))))+((((v338))*((((i64)8))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v332), (v338)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v338)))));
        }
      }
    (free((void*) (((i64)((((v332))->head))))));
    ((((((v332))->head))=(v334)));
  }
  ((((((v332))->capacity))=(v333)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v339, i64 v340) {
  if (((((((v339))->size)))==(((((v339))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((v339)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v339), ((((v339))->size))))=(v340)));
  (__ZH_LOP__plus_plus_i64R(&((((v339))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v341) {
  (__ZH_LOP__minus_minus_i64R(&((((v341))->size))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v348) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P(((((v348))->head))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v349) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v349), ((((v349))->size))))));
}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v350) {
  return &(*(((((v350))->head))));
}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v351) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v351), ((((((v351))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v352) {
  if ((!((!((((i64)((((v352))->head))))))))) {
    (free((void*) (((i64)((((v352))->head))))));
    ((((((v352))->size))=(((i64)0))));
    ((((((v352))->capacity))=(((i64)0))));
    ((((((v352))->head))=(((i64*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v353) {
  __ZH_TYPE_Vec_lessi64_greater v354;
  (((((&(v354))->head))=(((i64*)(((i64)0))))));
  (((((&(v354))->size))=(((i64)0))));
  (((((&(v354))->capacity))=(((i64)0))));
  while ((((((&(v354))->capacity)))<((v353)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((&((v354)))));
  }
  (((((&(v354))->size))=(v353)));
  (((((&(v354))->capacity))=(v353)));
  {
      i64 v358;
      i64 v357;
      i64 v356;
      __ZH_TYPE_Range v355;
      (((v355)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v354))->size))))));
      (((v356)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v355)))))));
      (((v357)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v355)))))));
      (((v358)=(v356)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v358))), (v357)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v354))), (v358)))=(__ZH_LOP_i64_())));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v358)))));
      }
    }
  return (v354);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v354)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v359, i64 v360) {
  __ZH_TYPE_Vec_lessi64_greater v361;
  (((v361)=(__ZH_LOP_Vec_lessi64_greater_i64((v359)))));
  {
      i64 v365;
      i64 v364;
      i64 v363;
      __ZH_TYPE_Range v362;
      (((v362)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v361))->size))))));
      (((v363)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v362)))))));
      (((v364)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v362)))))));
      (((v365)=(v363)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v365))), (v364)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v361))), (v365)))=(v360)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v365)))));
      }
    }
  return (v361);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v361)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {
  return (__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v366) {
  __ZH_TYPE_Vec_lessi64_greater v367;
  (((v367)=(__ZH_LOP_Vec_lessi64_greater_i64((((&(*v366))->size))))));
  {
      i64 v371;
      i64 v370;
      i64 v369;
      __ZH_TYPE_Range v368;
      (((v368)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v366))->size))))));
      (((v369)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v368)))))));
      (((v370)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v368)))))));
      (((v371)=(v369)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v371))), (v370)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v367))), (v371)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((*v366))), (v371)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v371)))));
      }
    }
  return (v367);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v367)))));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v372, i64 v373) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v372))), (v373)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v374, __ZH_TYPE_Vec_lessi64_greater* v375) {
  {
      __ZH_TYPE_VecIter_lessi64_greater v379;
      __ZH_TYPE_VecIter_lessi64_greater v378;
      __ZH_TYPE_VecIter_lessi64_greater v377;
      __ZH_TYPE_Vec_lessi64_greater v376;
      (((v376)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v375)))));
      (((v377)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((&((v376)))))));
      (((v378)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((&((v376)))))));
      (((v379)=(v377)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater((&((v379))), (v378)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v374))), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v379)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand((&((v379)))));
      }
    }
}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v380) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v380)))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v381) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v381)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v382) {
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v382)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v383) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v383))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v384, __ZH_TYPE_Vec_lessi64_greater* v385) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v385))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v386, i64 v387) {
  if ((((v387))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v387), ((((v386))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v386), (v387)));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v388, i64 v389, i64 v390) {
  __ZH_TYPE_Vec_lessi64_greater v391;
  (((v391)=(__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))))));
  {
      i64 v395;
      i64 v394;
      i64 v393;
      __ZH_TYPE_Range v392;
      (((v392)=(__ZH_BOP__dot_dot_i64i64((v389), (v390)))));
      (((v393)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v392)))))));
      (((v394)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v392)))))));
      (((v395)=(v393)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v395))), (v394)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((v391))), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v388), (v395)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v395)))));
      }
    }
  return (v391);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v391)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v396, __ZH_TYPE_Range v397) {
  i64 v399;
  i64 v398;
  ((((v398)=(((&(v397))->begin)))), (((v399)=(((&(v397))->end)))));
  if ((((v398))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v398), ((((v396))->size))));
  }
  if ((((v398))<((((i64)0))))) {
    (((v398)=(((i64)0))));
  }
  if ((((v399))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v399), ((((v396))->size))));
  }
  if ((((v399))>(((((v396))->size))))) {
    (((v399)=((((v396))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v396), (v398), (v399)));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v400) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v400), (((i64)0)), ((((v400))->size))));
}
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v401, __ZH_TYPE_Vec_lessi64_greater* v402) {
  return (((bool)0));
}
void __ZH_LOP_swap_i64Pi64P(i64* v403, i64* v404) {
  i64 v405;
  (((v405)=(*((v403)))));
  (((*((v403)))=(*((v404)))));
  (((*((v404)))=(v405)));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v406, i64* v407) {
  i64* v410;
  i64* v409;
  i64* v408;
  ((((v408)=(((i64*)(((((i64)(v407))))-((((((i64)1)))*((((i64)8)))))))))), (((v409)=(v406))), (((v410)=(v406))));
  (((v410)=(v406)));
  while ((((((i64)(v410))))!=((((i64)(v408)))))) {
    if ((((*((v410))))<((*((v408)))))) {
      (__ZH_LOP_swap_i64Pi64P((v409), (v410)));
      (((v409)=(((i64*)(((((i64)(v409))))+((((((i64)1)))*((((i64)8))))))))));
    }
    (((v410)=(((i64*)(((((i64)(v410))))+((((((i64)1)))*((((i64)8))))))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v409), (v408)));
  return (v409);
}
void __ZH_LOP_qsort_i64Pi64P(i64* v411, i64* v412) {
  i64 v414;
  i64 v413;
  (((v413)=(((((i64)(v412))))-((((i64)(v411)))))));
  (((v414)=(((i64)8))));
  if ((((v413))>((v414)))) {
    i64* v415;
    (((v415)=(__ZH_LOP_partition_i64Pi64P((v411), (v412)))));
    (__ZH_LOP_qsort_i64Pi64P((v411), (v415)));
    (((v415)=(((i64*)(((((i64)(v415))))+((((((i64)1)))*((((i64)8))))))))));
    (__ZH_LOP_qsort_i64Pi64P((v415), (v412)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v416) {
  __ZH_TYPE_VecIter_lessi64_greater v418;
  __ZH_TYPE_VecIter_lessi64_greater v417;
  (((v417)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((v416)))));
  (((v418)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((v416)))));
  (__ZH_LOP_qsort_i64Pi64P((((&(v417))->ptr)), (((&(v418))->ptr))));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v419) {
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand((&((*v419)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v420, i64 v421) {
  __ZH_TYPE_Vec_lessi64_greater v422;
  (((v422)=(__ZH_LOP_Vec_lessi64_greater_i64((((v421))-((v420)))))));
  {
      i64 v426;
      i64 v425;
      i64 v424;
      __ZH_TYPE_Range v423;
      (((v423)=(__ZH_BOP__dot_dot_i64i64((v420), (v421)))));
      (((v424)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v423)))))));
      (((v425)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v423)))))));
      (((v426)=(v424)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v426))), (v425)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v422))), (((v426))-((v420)))))=(v426)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v426)))));
      }
    }
  return (v422);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v422)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v427) {
  __ZH_TYPE_Vec_lessi64_greater v428;
  (((v428)=(__ZH_LOP_Vec_lessi64_greater_())));
  {
      i64 v432;
      i64 v431;
      i64 v430;
      __ZH_TYPE_Range v429;
      (((v429)=(*((v427)))));
      (((v430)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v429)))))));
      (((v431)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v429)))))));
      (((v432)=(v430)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v432))), (v431)))) {
        (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v428), (v432)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v432)))));
      }
    }
  return (v428);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v428)))));
}
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v433, i64 v434) {
  return (*((((char*)(((((i64)(*((v433))))))+((v434)))))));
}
char __ZH_BOP__caret_stri64(str v435, i64 v436) {
  return (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v435))), (v436)));
}
bool __ZH_BOP__equal_equal_charstr(char v437, str v438) {
  return (((v437))==((__ZH_BOP__caret_stri64((v438), (((i64)0))))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v463) {
  __ZH_TYPE_VecIter_lesschar_greater v464;
  (((((&(v464))->ptr))=(v463)));
  return (v464);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v465) {
  ((((((v465))->ptr))=(((char*)(((((i64)((((v465))->ptr)))))+((((((i64)1)))*((((i64)1))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v466, __ZH_TYPE_VecIter_lesschar_greater v467) {
  return (((((i64)((((v466))->ptr)))))!=((((i64)(((&(v467))->ptr))))));
}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v468) {
  return &(*((((&(v468))->ptr))));
}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v439, i64 v440) {
  return (((char*)(((char*)(((((i64)((((v439))->head)))))+((((v440))*((((i64)1))))))))));
}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v441, i64 v442) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v441), (v442)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v443) {
  (printf("%s", ("[")));
  {
      i64 v447;
      i64 v446;
      i64 v445;
      __ZH_TYPE_Range v444;
      (((v444)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v443))->size))))));
      (((v445)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v444)))))));
      (((v446)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v444)))))));
      (((v447)=(v445)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v447))), (v446)))) {
        if ((!((!((v447)))))) {
          (printf("%s", (" ")));
        }
        (printf("%c", (*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v443), (v447)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v447)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v448) {
  {
      i64 v452;
      i64 v451;
      i64 v450;
      __ZH_TYPE_Range v449;
      (((v449)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v448))->size))))));
      (((v450)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v449)))))));
      (((v451)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v449)))))));
      (((v452)=(v450)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v452))), (v451)))) {
        (printf("%c\n", (*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v448), (v452)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v452)))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v453) {
  i64 v454;
  (((v454)=((((v453))->capacity))));
  if ((((v454))==((((i64)0))))) {
    (((v454)=(((i64)1))));
    ((((((v453))->head))=(((char*)(alloc((((i64)1))))))));
    ((((((v453))->capacity))=(v454)));
  } else {
    char* v455;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v454), (((i64)2))));
    (((v455)=(((char*)(alloc((((v454))*((((i64)1))))))))));
    {
        i64 v459;
        i64 v458;
        i64 v457;
        __ZH_TYPE_Range v456;
        (((v456)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v453))->size))))));
        (((v457)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v456)))))));
        (((v458)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v456)))))));
        (((v459)=(v457)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v459))), (v458)))) {
          (((*((((char*)(((((i64)(v455))))+((((v459))*((((i64)1))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v453), (v459)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v459)))));
        }
      }
    (free((void*) (((i64)((((v453))->head))))));
    ((((((v453))->head))=(v455)));
  }
  ((((((v453))->capacity))=(v454)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v460, char v461) {
  if (((((((v460))->size)))==(((((v460))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((v460)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v460), ((((v460))->size))))=(v461)));
  (__ZH_LOP__plus_plus_i64R(&((((v460))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v462) {
  (__ZH_LOP__minus_minus_i64R(&((((v462))->size))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v469) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP(((((v469))->head))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v470) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v470), ((((v470))->size))))));
}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v471) {
  return &(*(((((v471))->head))));
}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v472) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v472), ((((((v472))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v473) {
  if ((!((!((((i64)((((v473))->head))))))))) {
    (free((void*) (((i64)((((v473))->head))))));
    ((((((v473))->size))=(((i64)0))));
    ((((((v473))->capacity))=(((i64)0))));
    ((((((v473))->head))=(((char*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v474) {
  __ZH_TYPE_Vec_lesschar_greater v475;
  (((((&(v475))->head))=(((char*)(((i64)0))))));
  (((((&(v475))->size))=(((i64)0))));
  (((((&(v475))->capacity))=(((i64)0))));
  while ((((((&(v475))->capacity)))<((v474)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((&((v475)))));
  }
  (((((&(v475))->size))=(v474)));
  (((((&(v475))->capacity))=(v474)));
  {
      i64 v479;
      i64 v478;
      i64 v477;
      __ZH_TYPE_Range v476;
      (((v476)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v475))->size))))));
      (((v477)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v476)))))));
      (((v478)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v476)))))));
      (((v479)=(v477)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v479))), (v478)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v475))), (v479)))=(__ZH_LOP_char_())));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v479)))));
      }
    }
  return (v475);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v475)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v480, char v481) {
  __ZH_TYPE_Vec_lesschar_greater v482;
  (((v482)=(__ZH_LOP_Vec_lesschar_greater_i64((v480)))));
  {
      i64 v486;
      i64 v485;
      i64 v484;
      __ZH_TYPE_Range v483;
      (((v483)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v482))->size))))));
      (((v484)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v483)))))));
      (((v485)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v483)))))));
      (((v486)=(v484)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v486))), (v485)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v482))), (v486)))=(v481)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v486)))));
      }
    }
  return (v482);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v482)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {
  return (__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v487) {
  __ZH_TYPE_Vec_lesschar_greater v488;
  (((v488)=(__ZH_LOP_Vec_lesschar_greater_i64((((&(*v487))->size))))));
  {
      i64 v492;
      i64 v491;
      i64 v490;
      __ZH_TYPE_Range v489;
      (((v489)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v487))->size))))));
      (((v490)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v489)))))));
      (((v491)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v489)))))));
      (((v492)=(v490)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v492))), (v491)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v488))), (v492)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((*v487))), (v492)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v492)))));
      }
    }
  return (v488);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v488)))));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v493, char v494) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v493))), (v494)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v495, __ZH_TYPE_Vec_lesschar_greater* v496) {
  {
      __ZH_TYPE_VecIter_lesschar_greater v500;
      __ZH_TYPE_VecIter_lesschar_greater v499;
      __ZH_TYPE_VecIter_lesschar_greater v498;
      __ZH_TYPE_Vec_lesschar_greater v497;
      (((v497)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v496)))));
      (((v498)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&((v497)))))));
      (((v499)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((&((v497)))))));
      (((v500)=(v498)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater((&((v500))), (v499)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v495))), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v500)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand((&((v500)))));
      }
    }
}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v501) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v501)))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v502) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v502)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v503) {
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v503)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v504) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v504))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v505, __ZH_TYPE_Vec_lesschar_greater* v506) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v506))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v507, i64 v508) {
  if ((((v508))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v508), ((((v507))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v507), (v508)));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v509, i64 v510, i64 v511) {
  __ZH_TYPE_Vec_lesschar_greater v512;
  (((v512)=(__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))))));
  {
      i64 v516;
      i64 v515;
      i64 v514;
      __ZH_TYPE_Range v513;
      (((v513)=(__ZH_BOP__dot_dot_i64i64((v510), (v511)))));
      (((v514)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v513)))))));
      (((v515)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v513)))))));
      (((v516)=(v514)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v516))), (v515)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((v512))), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v509), (v516)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v516)))));
      }
    }
  return (v512);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v512)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v517, __ZH_TYPE_Range v518) {
  i64 v520;
  i64 v519;
  ((((v519)=(((&(v518))->begin)))), (((v520)=(((&(v518))->end)))));
  if ((((v519))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v519), ((((v517))->size))));
  }
  if ((((v519))<((((i64)0))))) {
    (((v519)=(((i64)0))));
  }
  if ((((v520))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v520), ((((v517))->size))));
  }
  if ((((v520))>(((((v517))->size))))) {
    (((v520)=((((v517))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v517), (v519), (v520)));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v521) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v521), (((i64)0)), ((((v521))->size))));
}
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v522, __ZH_TYPE_Vec_lesschar_greater* v523) {
  return (((bool)0));
}
void __ZH_LOP_swap_charPcharP(char* v524, char* v525) {
  char v526;
  (((v526)=(*((v524)))));
  (((*((v524)))=(*((v525)))));
  (((*((v525)))=(v526)));
}
char* __ZH_LOP_partition_charPcharP(char* v527, char* v528) {
  char* v531;
  char* v530;
  char* v529;
  ((((v529)=(((char*)(((((i64)(v528))))-((((((i64)1)))*((((i64)1)))))))))), (((v530)=(v527))), (((v531)=(v527))));
  (((v531)=(v527)));
  while ((((((i64)(v531))))!=((((i64)(v529)))))) {
    if ((((*((v531))))<((*((v529)))))) {
      (__ZH_LOP_swap_charPcharP((v530), (v531)));
      (((v530)=(((char*)(((((i64)(v530))))+((((((i64)1)))*((((i64)1))))))))));
    }
    (((v531)=(((char*)(((((i64)(v531))))+((((((i64)1)))*((((i64)1))))))))));
  }
  (__ZH_LOP_swap_charPcharP((v530), (v529)));
  return (v530);
}
void __ZH_LOP_qsort_charPcharP(char* v532, char* v533) {
  i64 v535;
  i64 v534;
  (((v534)=(((((i64)(v533))))-((((i64)(v532)))))));
  (((v535)=(((i64)1))));
  if ((((v534))>((v535)))) {
    char* v536;
    (((v536)=(__ZH_LOP_partition_charPcharP((v532), (v533)))));
    (__ZH_LOP_qsort_charPcharP((v532), (v536)));
    (((v536)=(((char*)(((((i64)(v536))))+((((((i64)1)))*((((i64)1))))))))));
    (__ZH_LOP_qsort_charPcharP((v536), (v533)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v537) {
  __ZH_TYPE_VecIter_lesschar_greater v539;
  __ZH_TYPE_VecIter_lesschar_greater v538;
  (((v538)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((v537)))));
  (((v539)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((v537)))));
  (__ZH_LOP_qsort_charPcharP((((&(v538))->ptr)), (((&(v539))->ptr))));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v540) {
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand((&((*v540)))));
}
__ZH_TYPE_Str __ZH_LOP_Str_() {
  __ZH_TYPE_Str v541;
  (((((&(v541))->data))=(__ZH_LOP_Vec_lesschar_greater_())));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v541))->data)))), (((char)(((u8)0))))));
  (((((&(v541))->size))=(((i64)0))));
  return (v541);
}
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v542) {
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(((((v542))->data))))));
}
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v543) {
  __ZH_TYPE_VecIter_lesschar_greater v544;
  (((v544)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&(((((v543))->data))))))));
  return (((str)(((&(v544))->ptr))));
}
char* __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v545, i64 v546) {
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(((((v545))->data)))), (v546)));
}
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v547, i64 v548) {
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((&(((((v547))->data)))), (v548)));
}
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v549, char v550) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v549))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v549))->data)))), (v550)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v549))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__plus_plus_i64R(&((((v549))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v551) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v551))->data))))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v551))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v551))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__minus_minus_i64R(&((((v551))->size))));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v552) {
  __ZH_TYPE_Str v553;
  (((v553)=(__ZH_LOP_Str_())));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&((((&(v553))->data))))));
  while ((((*((((char*)(v552))))))!=((((char)(((u8)0))))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v553))->data)))), (*((((char*)(v552)))))));
    (((v552)=(((str)(((((i64)(v552))))+((((i64)1))))))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v553))->data)))), (((char)(((u8)0))))));
  (((((&(v553))->size))=(((((&(((&(v553))->data)))->size)))-((((i64)1))))));
  return (v553);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v553)))));
}
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v554) {
  __ZH_TYPE_Str v555;
  (((v555)=(__ZH_LOP_Str_())));
  (((((&(v555))->data))=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(((&(*v554))->data))))));
  (((((&(v555))->size))=(((&(*v554))->size))));
  return (v555);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v555)))));
}
i64 __ZH_LOP_len_str(str v556) {
  i64 v557;
  (((v557)=(((i64)0))));
  while ((((*((((char*)(v556))))))!=((((char)(((u8)0))))))) {
    (__ZH_LOP__plus_plus_i64R(&(v557)));
    (((v556)=(((str)(((((i64)(v556))))+((((i64)1))))))));
  }
  return (v557);
}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v558) {
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v558)))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v559) {
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v559)))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v560, char v561) {
  (__ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar((&((*v560))), (v561)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v562, __ZH_TYPE_Str* v563) {
  {
      i64 v567;
      i64 v566;
      i64 v565;
      __ZH_TYPE_Range v564;
      (((v564)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v563))->size))))));
      (((v565)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v564)))))));
      (((v566)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v564)))))));
      (((v567)=(v565)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v567))), (v566)))) {
        char v568;
        (((v568)=(((char)(((i8)115))))));
        (((v568)=(*__ZH_BOP__dotcall_dotat_StrP_ampersandi64((&((*v563))), (v567)))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v562), (v568)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v567)))));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v569, str v570) {
  i64 v571;
  (((v571)=(__ZH_LOP_len_str((v570)))));
  {
      i64 v575;
      i64 v574;
      i64 v573;
      __ZH_TYPE_Range v572;
      (((v572)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (v571)))));
      (((v573)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v572)))))));
      (((v574)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v572)))))));
      (((v575)=(v573)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v575))), (v574)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v569), (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v570))), (v575)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v575)))));
      }
    }
}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v576) {
  (__ZH_LOP_out_StrR(&(*v576)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v577) {
  ((__ZH_LOP_put_StrR(&(*v577))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v578, __ZH_TYPE_Str* v579) {
  ((__ZH_LOP_put_StrR(&(*v579))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v580, __ZH_TYPE_Str* v581) {
  return (((bool)0));
}
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v582, i64 v583) {
  __ZH_TYPE_Str v585;
  __ZH_TYPE_Str v584;
  (((v584)=(__ZH_LOP_Str_())));
  (((v585)=(__ZH_LOP_Str_str((v582)))));
  {
      i64 v589;
      i64 v588;
      i64 v587;
      __ZH_TYPE_Range v586;
      (((v586)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (v583)))));
      (((v587)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v586)))))));
      (((v588)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v586)))))));
      (((v589)=(v587)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v589))), (v588)))) {
        (__ZH_BOP__plus_equal_StrRStrR(&(v584), &(v585)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v589)))));
      }
    }
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v585)))));
  return (v584);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v584)))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v585)))));
  return (__ZH_LOP_Str_());
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v584)))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v585)))));
}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_() {
  __ZH_TYPE_Str v590;
  (((v590)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v590), ("         _____ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v590), ("       /       \\\\__ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v590), ("     /             \\\\\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v590), ("   /   0    0        |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v590), ("  |     ..            |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v590), ("  /|        _/       /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v590), (" / .\\\\_____/         /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v590), ("/U\\\\|    \\\\___|   |__/\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v590), ("            /  /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v590), ("            |/U\\\\\\n")));
  return (v590);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v590)))));
}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_() {
  __ZH_TYPE_Str v591;
  (((v591)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v591), ("         _____         \\n       /       \\\\__     \\n     /             \\\\   \\n   /   0    0        | \\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\")));
  return (v591);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v591)))));
}
str __ZH_LOP_frog_raw_() {
  return ("         _____\\n       /       \\\\__\\n     /             \\\\\\n   /   0    0        |\\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\ ");
}
str __ZH_LOP_frog_() {
  return (__ZH_LOP_frog_raw_());
}
f64 __ZH_LOP_sqrt_f64(f64 v592) {
  f64 v593;
  (((v593)=(((f64)1.000000))));
  {
      i64 v597;
      i64 v596;
      i64 v595;
      __ZH_TYPE_Range v594;
      (((v594)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((i64)10))))));
      (((v595)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v594)))))));
      (((v596)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v594)))))));
      (((v597)=(v595)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v597))), (v596)))) {
        (__ZH_BOP__minus_equal_f64Rf64(&(v593), (((((((v593))*((v593))))-((v592))))/((((((f64)2.000000)))*((v593)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v597)))));
      }
    }
  return (v593);
}
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v598, f64 v599) {
  __ZH_TYPE_V2 v600;
  (((((&(v600))->x))=(v598)));
  (((((&(v600))->y))=(v599)));
  return (v600);
}
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v601, __ZH_TYPE_V2 v602) {
  (__ZH_BOP__plus_equal_f64Rf64(&(((&(v601))->x)), (((&(v602))->x))));
  (__ZH_BOP__plus_equal_f64Rf64(&(((&(v601))->y)), (((&(v602))->y))));
  return (v601);
}
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v603, __ZH_TYPE_V2 v604) {
  __ZH_TYPE_V2 v605;
  (((((&(v605))->x))=(((((((&(v603))->x)))*((((&(v604))->x)))))-((((((&(v603))->y)))*((((&(v604))->y))))))));
  (((((&(v605))->y))=(((((((&(v603))->x)))*((((&(v604))->y)))))+((((((&(v603))->y)))*((((&(v604))->x))))))));
  return (v605);
}
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v606) {
  return (__ZH_LOP_sqrt_f64((((((((&(v606))->x)))*((((&(v606))->x)))))+((((((&(v606))->y)))*((((&(v606))->y))))))));
}
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v607) {
  (printf("%f", (((&(v607))->x))));
  (printf("%s", (" ")));
  (printf("%f", (((&(v607))->y))));
}
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v608) {
  (printf("%f", (((&(v608))->x))));
  (printf("%s", (" ")));
  (printf("%f", (((&(v608))->y))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v609) {
  (__ZH_LOP_out_V2((v609)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v610) {
  ((__ZH_LOP_put_V2((v610))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v611, __ZH_TYPE_V2 v612) {
  ((__ZH_LOP_put_V2((v612))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
void __ZH_LOP_mandelbrot_i64f64f64f64(i64 v613, f64 v614, f64 v615, f64 v616) {
  f64 v720;
  __ZH_TYPE_Vec_lessStr_greater v719;
  (((v719)=(__ZH_LOP_Vec_lessStr_greater_())));
  (((v720)=(((v615))-((((((f64)1.000000)))*((v616)))))));
  while ((((v720))<((((v615))+((((((f64)1.000000)))*((v616)))))))) {
    f64 v722;
    __ZH_TYPE_Str v721;
    (((v721)=(__ZH_LOP_Str_())));
    (((v722)=(((v614))-((((((f64)1.000000)))*((v616)))))));
    while ((((v722))<((((v614))+((((((f64)1.000000)))*((v616)))))))) {
      i64 v726;
      bool v725;
      __ZH_TYPE_V2 v724;
      __ZH_TYPE_V2 v723;
      ((((v723)=(__ZH_LOP_V2_f64f64((((f64)0.000000)), (((f64)0.000000)))))), (((v724)=(__ZH_LOP_V2_f64f64((v722), (v720))))));
      (((v725)=(((bool)1))));
      (((v726)=(((i64)0))));
      while ((((((v726))<((v613))))&&((v725)))) {
        (((v723)=(__ZH_BOP__plus_V2V2((__ZH_BOP__asterisk_V2V2((v723), (v723))), (v724)))));
        if ((((__ZH_LOP_abs_V2((v723))))>((((f64)2.000000))))) {
          (((v725)=(((bool)0))));
        }
        (__ZH_BOP__plus_equal_i64Ri64(&(v726), (((i64)1))));
      }
      if ((v725)) {
        (__ZH_BOP__plus_equal_StrRstr(&(v721), ("*")));
      } else {
        (__ZH_BOP__plus_equal_StrRstr(&(v721), (" ")));
      }
      (__ZH_BOP__plus_equal_f64Rf64(&(v722), (((((f64)0.050000)))*((v616)))));
    }
    (__ZH_BOP__plus_equal_Vec_lessStr_greaterRStr(&(v719), (v721)));
    (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v721)))));
    (__ZH_BOP__plus_equal_f64Rf64(&(v720), (((((f64)0.100000)))*((v616)))));
  }
  (__ZH_BOP__dotcall_dotprintln_Vec_lessStr_greaterP_ampersand((&((v719)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v719)))));
}
__ZH_TYPE_VecIter_lessStr_greater __ZH_LOP_VecIter_lessStr_greater_StrP(__ZH_TYPE_Str* v641) {
  __ZH_TYPE_VecIter_lessStr_greater v642;
  (((((&(v642))->ptr))=(v641)));
  return (v642);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lessStr_greaterP_ampersand(__ZH_TYPE_VecIter_lessStr_greater* v643) {
  ((((((v643))->ptr))=(((__ZH_TYPE_Str*)(((((i64)((((v643))->ptr)))))+((((((i64)1)))*((((i64)32))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessStr_greaterP_ampersandVecIter_lessStr_greater(__ZH_TYPE_VecIter_lessStr_greater* v644, __ZH_TYPE_VecIter_lessStr_greater v645) {
  return (((((i64)((((v644))->ptr)))))!=((((i64)(((&(v645))->ptr))))));
}
__ZH_TYPE_Str* __ZH_LOP__asterisk_VecIter_lessStr_greater(__ZH_TYPE_VecIter_lessStr_greater v646) {
  return &(*((((&(v646))->ptr))));
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v617, i64 v618) {
  return (((__ZH_TYPE_Str*)(((__ZH_TYPE_Str*)(((((i64)((((v617))->head)))))+((((v618))*((((i64)32))))))))));
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v619, i64 v620) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v619), (v620)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v621) {
  (printf("%s", ("[")));
  {
      i64 v625;
      i64 v624;
      i64 v623;
      __ZH_TYPE_Range v622;
      (((v622)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v621))->size))))));
      (((v623)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v622)))))));
      (((v624)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v622)))))));
      (((v625)=(v623)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v625))), (v624)))) {
        if ((!((!((v625)))))) {
          (printf("%s", (" ")));
        }
        (__ZH_LOP_put_StrR(&(*((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v621), (v625)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v625)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v626) {
  {
      i64 v630;
      i64 v629;
      i64 v628;
      __ZH_TYPE_Range v627;
      (((v627)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v626))->size))))));
      (((v628)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v627)))))));
      (((v629)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v627)))))));
      (((v630)=(v628)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v630))), (v629)))) {
        (__ZH_LOP_out_StrR(&(*((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v626), (v630)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v630)))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v631) {
  i64 v632;
  (((v632)=((((v631))->capacity))));
  if ((((v632))==((((i64)0))))) {
    (((v632)=(((i64)1))));
    ((((((v631))->head))=(((__ZH_TYPE_Str*)(alloc((((i64)32))))))));
    ((((((v631))->capacity))=(v632)));
  } else {
    __ZH_TYPE_Str* v633;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v632), (((i64)2))));
    (((v633)=(((__ZH_TYPE_Str*)(alloc((((v632))*((((i64)32))))))))));
    {
        i64 v637;
        i64 v636;
        i64 v635;
        __ZH_TYPE_Range v634;
        (((v634)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v631))->size))))));
        (((v635)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v634)))))));
        (((v636)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v634)))))));
        (((v637)=(v635)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v637))), (v636)))) {
          (((*((((__ZH_TYPE_Str*)(((((i64)(v633))))+((((v637))*((((i64)32))))))))))=(__ZH_LOP_Str_StrR(&(*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((v631), (v637)))))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v637)))));
        }
      }
    (free((void*) (((i64)((((v631))->head))))));
    ((((((v631))->head))=(v633)));
  }
  ((((((v631))->capacity))=(v632)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr(__ZH_TYPE_Vec_lessStr_greater* v638, __ZH_TYPE_Str v639) {
  if (((((((v638))->size)))==(((((v638))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessStr_greaterP_ampersand((v638)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((v638), ((((v638))->size))))=(__ZH_LOP_Str_StrR(&(v639)))));
  (__ZH_LOP__plus_plus_i64R(&((((v638))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v640) {
  (__ZH_LOP__minus_minus_i64R(&((((v640))->size))));
}
__ZH_TYPE_VecIter_lessStr_greater __ZH_BOP__dotcall_dotbegin_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v647) {
  return (__ZH_LOP_VecIter_lessStr_greater_StrP(((((v647))->head))));
}
__ZH_TYPE_VecIter_lessStr_greater __ZH_BOP__dotcall_dotend_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v648) {
  return (__ZH_LOP_VecIter_lessStr_greater_StrP((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v648), ((((v648))->size))))));
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotfront_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v649) {
  return &(*(((((v649))->head))));
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotback_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v650) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v650), ((((((v650))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v651) {
  if ((!((!((((i64)((((v651))->head))))))))) {
    (free((void*) (((i64)((((v651))->head))))));
    ((((((v651))->size))=(((i64)0))));
    ((((((v651))->capacity))=(((i64)0))));
    ((((((v651))->head))=(((__ZH_TYPE_Str*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_i64(i64 v652) {
  __ZH_TYPE_Vec_lessStr_greater v653;
  (((((&(v653))->head))=(((__ZH_TYPE_Str*)(((i64)0))))));
  (((((&(v653))->size))=(((i64)0))));
  (((((&(v653))->capacity))=(((i64)0))));
  while ((((((&(v653))->capacity)))<((v652)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessStr_greaterP_ampersand((&((v653)))));
  }
  (((((&(v653))->size))=(v652)));
  (((((&(v653))->capacity))=(v652)));
  {
      i64 v657;
      i64 v656;
      i64 v655;
      __ZH_TYPE_Range v654;
      (((v654)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v653))->size))))));
      (((v655)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v654)))))));
      (((v656)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v654)))))));
      (((v657)=(v655)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v657))), (v656)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((&((v653))), (v657)))=(__ZH_LOP_Str_())));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v657)))));
      }
    }
  return (v653);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v653)))));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_i64Str(i64 v658, __ZH_TYPE_Str v659) {
  __ZH_TYPE_Vec_lessStr_greater v660;
  (((v660)=(__ZH_LOP_Vec_lessStr_greater_i64((v658)))));
  {
      i64 v664;
      i64 v663;
      i64 v662;
      __ZH_TYPE_Range v661;
      (((v661)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v660))->size))))));
      (((v662)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v661)))))));
      (((v663)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v661)))))));
      (((v664)=(v662)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v664))), (v663)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((&((v660))), (v664)))=(__ZH_LOP_Str_StrR(&(v659)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v664)))));
      }
    }
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v659)))));
  return (v660);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v660)))));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_() {
  return (__ZH_LOP_Vec_lessStr_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v665) {
  __ZH_TYPE_Vec_lessStr_greater v666;
  (((v666)=(__ZH_LOP_Vec_lessStr_greater_i64((((&(*v665))->size))))));
  {
      i64 v670;
      i64 v669;
      i64 v668;
      __ZH_TYPE_Range v667;
      (((v667)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v665))->size))))));
      (((v668)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v667)))))));
      (((v669)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v667)))))));
      (((v670)=(v668)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v670))), (v669)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((&((v666))), (v670)))=(__ZH_LOP_Str_StrR(&(*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((&((*v665))), (v670)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v670)))));
      }
    }
  return (v666);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v666)))));
}
void __ZH_BOP__plus_equal_Vec_lessStr_greaterRStr(__ZH_TYPE_Vec_lessStr_greater* v671, __ZH_TYPE_Str v672) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr((&((*v671))), (v672)));
}
void __ZH_BOP__plus_equal_Vec_lessStr_greaterRVec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v673, __ZH_TYPE_Vec_lessStr_greater* v674) {
  {
      __ZH_TYPE_VecIter_lessStr_greater v678;
      __ZH_TYPE_VecIter_lessStr_greater v677;
      __ZH_TYPE_VecIter_lessStr_greater v676;
      __ZH_TYPE_Vec_lessStr_greater v675;
      (((v675)=(__ZH_LOP_Vec_lessStr_greater_Vec_lessStr_greaterR(&(*v674)))));
      (((v676)=(__ZH_BOP__dotcall_dotbegin_Vec_lessStr_greaterP_ampersand((&((v675)))))));
      (((v677)=(__ZH_BOP__dotcall_dotend_Vec_lessStr_greaterP_ampersand((&((v675)))))));
      (((v678)=(v676)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessStr_greaterP_ampersandVecIter_lessStr_greater((&((v678))), (v677)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr((&((*v673))), (*__ZH_LOP__asterisk_VecIter_lessStr_greater((v678)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessStr_greaterP_ampersand((&((v678)))));
      }
    }
}
void __ZH_LOP_put_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v679) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessStr_greaterP_ampersand((&((*v679)))));
}
void __ZH_LOP_out_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v680) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessStr_greaterP_ampersand((&((*v680)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v681) {
  (__ZH_LOP_out_Vec_lessStr_greaterR(&(*v681)));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v682) {
  ((__ZH_LOP_put_Vec_lessStr_greaterR(&(*v682))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessStr_greaterR(__ZH_TYPE_Out v683, __ZH_TYPE_Vec_lessStr_greater* v684) {
  ((__ZH_LOP_put_Vec_lessStr_greaterR(&(*v684))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v685, i64 v686) {
  if ((((v686))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v686), ((((v685))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((v685), (v686)));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessStr_greater* v687, i64 v688, i64 v689) {
  __ZH_TYPE_Vec_lessStr_greater v690;
  (((v690)=(__ZH_LOP_Vec_lessStr_greater_i64((((i64)0))))));
  {
      i64 v694;
      i64 v693;
      i64 v692;
      __ZH_TYPE_Range v691;
      (((v691)=(__ZH_BOP__dot_dot_i64i64((v688), (v689)))));
      (((v692)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v691)))))));
      (((v693)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v691)))))));
      (((v694)=(v692)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v694))), (v693)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr((&((v690))), (*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((v687), (v694)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v694)))));
      }
    }
  return (v690);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v690)))));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandRange(__ZH_TYPE_Vec_lessStr_greater* v695, __ZH_TYPE_Range v696) {
  i64 v698;
  i64 v697;
  ((((v697)=(((&(v696))->begin)))), (((v698)=(((&(v696))->end)))));
  if ((((v697))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v697), ((((v695))->size))));
  }
  if ((((v697))<((((i64)0))))) {
    (((v697)=(((i64)0))));
  }
  if ((((v698))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v698), ((((v695))->size))));
  }
  if ((((v698))>(((((v695))->size))))) {
    (((v698)=((((v695))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64i64((v695), (v697), (v698)));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v699) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64i64((v699), (((i64)0)), ((((v699))->size))));
}
bool __ZH_BOP__less_Vec_lessStr_greaterRVec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v700, __ZH_TYPE_Vec_lessStr_greater* v701) {
  return (((bool)0));
}
void __ZH_LOP_swap_StrPStrP(__ZH_TYPE_Str* v702, __ZH_TYPE_Str* v703) {
  __ZH_TYPE_Str v704;
  (((v704)=(*((v702)))));
  (((*((v702)))=(__ZH_LOP_Str_StrR(&(*((v703)))))));
  (((*((v703)))=(__ZH_LOP_Str_StrR(&(v704)))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v704)))));
}
__ZH_TYPE_Str* __ZH_LOP_partition_StrPStrP(__ZH_TYPE_Str* v705, __ZH_TYPE_Str* v706) {
  __ZH_TYPE_Str* v709;
  __ZH_TYPE_Str* v708;
  __ZH_TYPE_Str* v707;
  ((((v707)=(((__ZH_TYPE_Str*)(((((i64)(v706))))-((((((i64)1)))*((((i64)32)))))))))), (((v708)=(v705))), (((v709)=(v705))));
  (((v709)=(v705)));
  while ((((((i64)(v709))))!=((((i64)(v707)))))) {
    if ((__ZH_BOP__less_StrRStrR(&(*((v709))), &(*((v707)))))) {
      (__ZH_LOP_swap_StrPStrP((v708), (v709)));
      (((v708)=(((__ZH_TYPE_Str*)(((((i64)(v708))))+((((((i64)1)))*((((i64)32))))))))));
    }
    (((v709)=(((__ZH_TYPE_Str*)(((((i64)(v709))))+((((((i64)1)))*((((i64)32))))))))));
  }
  (__ZH_LOP_swap_StrPStrP((v708), (v707)));
  return (v708);
}
void __ZH_LOP_qsort_StrPStrP(__ZH_TYPE_Str* v710, __ZH_TYPE_Str* v711) {
  i64 v713;
  i64 v712;
  (((v712)=(((((i64)(v711))))-((((i64)(v710)))))));
  (((v713)=(((i64)32))));
  if ((((v712))>((v713)))) {
    __ZH_TYPE_Str* v714;
    (((v714)=(__ZH_LOP_partition_StrPStrP((v710), (v711)))));
    (__ZH_LOP_qsort_StrPStrP((v710), (v714)));
    (((v714)=(((__ZH_TYPE_Str*)(((((i64)(v714))))+((((((i64)1)))*((((i64)32))))))))));
    (__ZH_LOP_qsort_StrPStrP((v714), (v711)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v715) {
  __ZH_TYPE_VecIter_lessStr_greater v717;
  __ZH_TYPE_VecIter_lessStr_greater v716;
  (((v716)=(__ZH_BOP__dotcall_dotbegin_Vec_lessStr_greaterP_ampersand((v715)))));
  (((v717)=(__ZH_BOP__dotcall_dotend_Vec_lessStr_greaterP_ampersand((v715)))));
  (__ZH_LOP_qsort_StrPStrP((((&(v716))->ptr)), (((&(v717))->ptr))));
}
void __ZH_LOP_sort_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v718) {
  (__ZH_BOP__dotcall_dotsort_Vec_lessStr_greaterP_ampersand((&((*v718)))));
}
int main(int argc, char *argv[])  {
  f64 v727;
  (__ZH_LOP__less_Out((__ZH_ROP__less_str(("Mandelbrot set:")))));
  (__ZH_LOP_mandelbrot_i64f64f64f64((((i64)25)), (((f64)0.750000)), (((f64)0.000000)), (((f64)1.000000))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_str(("Zooming [-1.39, 0.0]:")))));
  (((v727)=(((f64)2.000000))));
  while ((((v727))>((((f64)0.050000))))) {
    (__ZH_LOP_mandelbrot_i64f64f64f64((((i64)50)), (__ZH_LOP__minus_f64((((f64)1.390000)))), (((f64)0.000000)), (v727)));
    (__ZH_BOP__asterisk_equal_f64Rf64(&(v727), (((f64)0.500000))));
  }
}
