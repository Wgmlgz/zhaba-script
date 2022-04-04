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
__ZH_TYPE_Out __ZH_LOP__Out_();
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
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v284);
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v285, i64 v286);
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v287);
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v288);
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v289, i64 v290);
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v292, i64 v293);
i64 __ZH_LOP_rangeMin_();
i64 __ZH_LOP_rangeMax_();
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v294);
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v295);
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v296);
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v297);
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v298, i64 v299);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v300);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v301);
bool __ZH_BOP__equal_equal_i64Range(i64 v302, __ZH_TYPE_Range v303);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v328);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v330);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v331, __ZH_TYPE_VecIter_lessi64_greater v332);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v333);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v304, i64 v305);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v306, i64 v307);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v308);
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v313);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v318);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v325, i64 v326);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v327);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v334);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v335);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v336);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v337);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v338);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v339);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v345, i64 v346);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v352);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v358, i64 v359);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v360, __ZH_TYPE_Vec_lessi64_greater* v361);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v366);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v367);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v368);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v369);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v370, __ZH_TYPE_Vec_lessi64_greater* v371);
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v372, i64 v373);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v374, i64 v375, i64 v376);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v382, __ZH_TYPE_Range v383);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v386);
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v387, __ZH_TYPE_Vec_lessi64_greater* v388);
void __ZH_LOP_swap_i64Pi64P(i64* v389, i64* v390);
i64* __ZH_LOP_partition_i64Pi64P(i64* v392, i64* v393);
void __ZH_LOP_qsort_i64Pi64P(i64* v397, i64* v398);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v402);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v405);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v406, i64 v407);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v413);
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v419, i64 v420);
char __ZH_BOP__caret_stri64(str v421, i64 v422);
bool __ZH_BOP__equal_equal_charstr(char v423, str v424);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v449);
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v451);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v452, __ZH_TYPE_VecIter_lesschar_greater v453);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v454);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v425, i64 v426);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v427, i64 v428);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v429);
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v434);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v439);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v446, char v447);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v448);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v455);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v456);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v457);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v458);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v459);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v460);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v466, char v467);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v473);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v479, char v480);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v481, __ZH_TYPE_Vec_lesschar_greater* v482);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v487);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v488);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v489);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v490);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v491, __ZH_TYPE_Vec_lesschar_greater* v492);
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v493, i64 v494);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v495, i64 v496, i64 v497);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v503, __ZH_TYPE_Range v504);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v507);
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v508, __ZH_TYPE_Vec_lesschar_greater* v509);
void __ZH_LOP_swap_charPcharP(char* v510, char* v511);
char* __ZH_LOP_partition_charPcharP(char* v513, char* v514);
void __ZH_LOP_qsort_charPcharP(char* v518, char* v519);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v523);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v526);
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v528);
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v529);
char* __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v531, i64 v532);
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v533, i64 v534);
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v535, char v536);
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v537);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v538);
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v540);
i64 __ZH_LOP_len_str(str v542);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v544);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v545);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v546, char v547);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v548, __ZH_TYPE_Str* v549);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v555, str v556);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v562);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v563);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v564, __ZH_TYPE_Str* v565);
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v566, __ZH_TYPE_Str* v567);
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v568, i64 v569);
__ZH_TYPE_Str __ZH_LOP_frog_escaped_();
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_();
str __ZH_LOP_frog_raw_();
str __ZH_LOP_frog_();
f64 __ZH_LOP_sqrt_f64(f64 v578);
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v584, f64 v585);
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v587, __ZH_TYPE_V2 v588);
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v589, __ZH_TYPE_V2 v590);
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v592);
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v593);
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v594);
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v595);
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v596);
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v597, __ZH_TYPE_V2 v598);
void __ZH_LOP_mandelbrot_i64f64f64f64(i64 v599, f64 v600, f64 v601, f64 v602);
__ZH_TYPE_VecIter_lessStr_greater __ZH_LOP_VecIter_lessStr_greater_StrP(__ZH_TYPE_Str* v627);
void __ZH_BOP__dotcall_dotnext_VecIter_lessStr_greaterP_ampersand(__ZH_TYPE_VecIter_lessStr_greater* v629);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessStr_greaterP_ampersandVecIter_lessStr_greater(__ZH_TYPE_VecIter_lessStr_greater* v630, __ZH_TYPE_VecIter_lessStr_greater v631);
__ZH_TYPE_Str* __ZH_LOP__asterisk_VecIter_lessStr_greater(__ZH_TYPE_VecIter_lessStr_greater v632);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v603, i64 v604);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v605, i64 v606);
void __ZH_BOP__dotcall_dotprint_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v607);
void __ZH_BOP__dotcall_dotprintln_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v612);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v617);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr(__ZH_TYPE_Vec_lessStr_greater* v624, __ZH_TYPE_Str v625);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v626);
__ZH_TYPE_VecIter_lessStr_greater __ZH_BOP__dotcall_dotbegin_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v633);
__ZH_TYPE_VecIter_lessStr_greater __ZH_BOP__dotcall_dotend_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v634);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotfront_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v635);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotback_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v636);
void __ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v637);
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_i64(i64 v638);
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_i64Str(i64 v644, __ZH_TYPE_Str v645);
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_();
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v651);
void __ZH_BOP__plus_equal_Vec_lessStr_greaterRStr(__ZH_TYPE_Vec_lessStr_greater* v657, __ZH_TYPE_Str v658);
void __ZH_BOP__plus_equal_Vec_lessStr_greaterRVec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v659, __ZH_TYPE_Vec_lessStr_greater* v660);
void __ZH_LOP_put_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v665);
void __ZH_LOP_out_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v666);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v667);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v668);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessStr_greaterR(__ZH_TYPE_Out v669, __ZH_TYPE_Vec_lessStr_greater* v670);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v671, i64 v672);
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessStr_greater* v673, i64 v674, i64 v675);
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandRange(__ZH_TYPE_Vec_lessStr_greater* v681, __ZH_TYPE_Range v682);
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v685);
bool __ZH_BOP__less_Vec_lessStr_greaterRVec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v686, __ZH_TYPE_Vec_lessStr_greater* v687);
void __ZH_LOP_swap_StrPStrP(__ZH_TYPE_Str* v688, __ZH_TYPE_Str* v689);
__ZH_TYPE_Str* __ZH_LOP_partition_StrPStrP(__ZH_TYPE_Str* v691, __ZH_TYPE_Str* v692);
void __ZH_LOP_qsort_StrPStrP(__ZH_TYPE_Str* v696, __ZH_TYPE_Str* v697);
void __ZH_BOP__dotcall_dotsort_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v701);
void __ZH_LOP_sort_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v704);
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
__ZH_TYPE_Out __ZH_LOP__Out_() {
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v211, __ZH_TYPE_Out v212) {
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v213) {
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_str(str v214) {
  (printf("%s\n", (v214)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_str(str v215) {
  ((printf("%s", (v215))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v216, str v217) {
  ((printf("%s", (v217))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v218) {
  (((*v218)=(in_str())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v219, str* v220) {
  (((*v220)=(in_str())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_char(char v221) {
  (printf("%c\n", (v221)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_char(char v222) {
  ((printf("%c", (v222))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v223, char v224) {
  ((printf("%c", (v224))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v225) {
  (((*v225)=(in_char())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v226, char* v227) {
  (((*v227)=(in_char())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v228) {
  (printf("%d\n", (v228)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v229) {
  ((printf("%d", (v229))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v230, i8 v231) {
  ((printf("%d", (v231))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v232) {
  (((*v232)=(in_i8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v233, i8* v234) {
  (((*v234)=(in_i8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v235) {
  (printf("%hd\n", (v235)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v236) {
  ((printf("%hd", (v236))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v237, i16 v238) {
  ((printf("%hd", (v238))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v239) {
  (((*v239)=(in_i16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v240, i16* v241) {
  (((*v241)=(in_i16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v242) {
  (printf("%d\n", (v242)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v243) {
  ((printf("%d", (v243))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v244, i32 v245) {
  ((printf("%d", (v245))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v246) {
  (((*v246)=(in_i32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v247, i32* v248) {
  (((*v248)=(in_i32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v249) {
  (printf("%lld\n", (v249)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v250) {
  ((printf("%lld", (v250))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v251, i64 v252) {
  ((printf("%lld", (v252))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v253) {
  (((*v253)=(in_i64())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v254, i64* v255) {
  (((*v255)=(in_i64())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v256) {
  (printf("%d\n", (v256)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v257) {
  ((printf("%d", (v257))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v258, u8 v259) {
  ((printf("%d", (v259))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v260) {
  (((*v260)=(in_u8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v261, u8* v262) {
  (((*v262)=(in_u8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v263) {
  (printf("%hd\n", (v263)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v264) {
  ((printf("%hd", (v264))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v265, u16 v266) {
  ((printf("%hd", (v266))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v267) {
  (((*v267)=(in_u16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v268, u16* v269) {
  (((*v269)=(in_u16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v270) {
  (printf("%u\n", (v270)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v271) {
  ((printf("%u", (v271))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v272, u32 v273) {
  ((printf("%u", (v273))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v274) {
  (((*v274)=(in_u32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v275, u32* v276) {
  (((*v276)=(in_u32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v277) {
  (printf("%llu\n", (v277)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v278) {
  ((printf("%llu", (v278))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v279, u64 v280) {
  ((printf("%llu", (v280))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v281) {
  (((*v281)=(in_u64())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v282, u64* v283) {
  (((*v283)=(in_u64())));
  return (__ZH_LOP__Out_());
}
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v284) {
  (((*((v284)))=(((*((v284))))+((((i64)1))))));
}
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v285, i64 v286) {
  return (((*((v285))))!=((v286)));
}
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v287) {
  return ((((v287))->begin));
}
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v288) {
  return ((((v288))->end));
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v289, i64 v290) {
  __ZH_TYPE_Range v291;
  (((((&(v291))->begin))=(v289)));
  (((((&(v291))->end))=(v290)));
  return (v291);
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v292, i64 v293) {
  return (__ZH_BOP__dot_dot_i64i64((v292), (__ZH_LOP__minus_i64((v293)))));
}
i64 __ZH_LOP_rangeMin_() {
  return (__ZH_LOP__minus_i64((((i64)9223372036854775807))));
}
i64 __ZH_LOP_rangeMax_() {
  return (((i64)9223372036854775807));
}
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v294) {
  return (__ZH_BOP__dot_dot_i64i64((v294), (__ZH_LOP_rangeMax_())));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v295) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (v295)));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v296) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (__ZH_LOP__minus_i64((v296)))));
}
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v297) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP__minus_i64((((&(v297))->begin)))), (((&(v297))->end))));
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v298, i64 v299) {
  return (__ZH_BOP__dot_dot_i64i64((v298), (((v299))+((((i64)1))))));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v300) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((v300))+((((i64)1))))));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v301) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((__ZH_LOP__minus_i64((v301))))+((((i64)1))))));
}
bool __ZH_BOP__equal_equal_i64Range(i64 v302, __ZH_TYPE_Range v303) {
  if ((((((&(v303))->begin)))<((((&(v303))->end))))) {
    return (((((((&(v303))->begin)))<=((v302))))&&((((v302))<((((&(v303))->end))))));
  } else {
    return (((((((&(v303))->end)))<=((v302))))&&((((v302))<((((&(v303))->begin))))));
  }
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v328) {
  __ZH_TYPE_VecIter_lessi64_greater v329;
  (((((&(v329))->ptr))=(v328)));
  return (v329);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v330) {
  ((((((v330))->ptr))=(((i64*)(((((i64)((((v330))->ptr)))))+((((((i64)1)))*((((i64)8))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v331, __ZH_TYPE_VecIter_lessi64_greater v332) {
  return (((((i64)((((v331))->ptr)))))!=((((i64)(((&(v332))->ptr))))));
}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v333) {
  return &(*((((&(v333))->ptr))));
}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v304, i64 v305) {
  return (((i64*)(((i64*)(((((i64)((((v304))->head)))))+((((v305))*((((i64)8))))))))));
}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v306, i64 v307) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v306), (v307)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v308) {
  (printf("%s", ("[")));
  {
      i64 v312;
      i64 v311;
      i64 v310;
      __ZH_TYPE_Range v309;
      (((v309)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v308))->size))))));
      (((v310)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v309)))))));
      (((v311)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v309)))))));
      (((v312)=(v310)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v312))), (v311)))) {
        if ((!((!((v312)))))) {
          (printf("%s", (" ")));
        }
        (printf("%lld", (*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v308), (v312)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v312)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v313) {
  {
      i64 v317;
      i64 v316;
      i64 v315;
      __ZH_TYPE_Range v314;
      (((v314)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v313))->size))))));
      (((v315)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v314)))))));
      (((v316)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v314)))))));
      (((v317)=(v315)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v317))), (v316)))) {
        (printf("%lld\n", (*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v313), (v317)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v317)))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v318) {
  i64 v319;
  (((v319)=((((v318))->capacity))));
  if ((((v319))==((((i64)0))))) {
    (((v319)=(((i64)1))));
    ((((((v318))->head))=(((i64*)(alloc((((i64)8))))))));
    ((((((v318))->capacity))=(v319)));
  } else {
    i64* v320;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v319), (((i64)2))));
    (((v320)=(((i64*)(alloc((((v319))*((((i64)8))))))))));
    {
        i64 v324;
        i64 v323;
        i64 v322;
        __ZH_TYPE_Range v321;
        (((v321)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v318))->size))))));
        (((v322)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v321)))))));
        (((v323)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v321)))))));
        (((v324)=(v322)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v324))), (v323)))) {
          (((*((((i64*)(((((i64)(v320))))+((((v324))*((((i64)8))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v318), (v324)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v324)))));
        }
      }
    (free((void*) (((i64)((((v318))->head))))));
    ((((((v318))->head))=(v320)));
  }
  ((((((v318))->capacity))=(v319)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v325, i64 v326) {
  if (((((((v325))->size)))==(((((v325))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((v325)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v325), ((((v325))->size))))=(v326)));
  (__ZH_LOP__plus_plus_i64R(&((((v325))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v327) {
  (__ZH_LOP__minus_minus_i64R(&((((v327))->size))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v334) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P(((((v334))->head))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v335) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v335), ((((v335))->size))))));
}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v336) {
  return &(*(((((v336))->head))));
}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v337) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v337), ((((((v337))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v338) {
  if ((!((!((((i64)((((v338))->head))))))))) {
    (free((void*) (((i64)((((v338))->head))))));
    ((((((v338))->size))=(((i64)0))));
    ((((((v338))->capacity))=(((i64)0))));
    ((((((v338))->head))=(((i64*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v339) {
  __ZH_TYPE_Vec_lessi64_greater v340;
  (((((&(v340))->head))=(((i64*)(((i64)0))))));
  (((((&(v340))->size))=(((i64)0))));
  (((((&(v340))->capacity))=(((i64)0))));
  while ((((((&(v340))->capacity)))<((v339)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((&((v340)))));
  }
  (((((&(v340))->size))=(v339)));
  (((((&(v340))->capacity))=(v339)));
  {
      i64 v344;
      i64 v343;
      i64 v342;
      __ZH_TYPE_Range v341;
      (((v341)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v340))->size))))));
      (((v342)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v341)))))));
      (((v343)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v341)))))));
      (((v344)=(v342)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v344))), (v343)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v340))), (v344)))=(__ZH_LOP_i64_())));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v344)))));
      }
    }
  return (v340);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v340)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v345, i64 v346) {
  __ZH_TYPE_Vec_lessi64_greater v347;
  (((v347)=(__ZH_LOP_Vec_lessi64_greater_i64((v345)))));
  {
      i64 v351;
      i64 v350;
      i64 v349;
      __ZH_TYPE_Range v348;
      (((v348)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v347))->size))))));
      (((v349)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v348)))))));
      (((v350)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v348)))))));
      (((v351)=(v349)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v351))), (v350)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v347))), (v351)))=(v346)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v351)))));
      }
    }
  return (v347);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v347)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {
  return (__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v352) {
  __ZH_TYPE_Vec_lessi64_greater v353;
  (((v353)=(__ZH_LOP_Vec_lessi64_greater_i64((((&(*v352))->size))))));
  {
      i64 v357;
      i64 v356;
      i64 v355;
      __ZH_TYPE_Range v354;
      (((v354)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v352))->size))))));
      (((v355)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v354)))))));
      (((v356)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v354)))))));
      (((v357)=(v355)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v357))), (v356)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v353))), (v357)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((*v352))), (v357)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v357)))));
      }
    }
  return (v353);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v353)))));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v358, i64 v359) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v358))), (v359)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v360, __ZH_TYPE_Vec_lessi64_greater* v361) {
  {
      __ZH_TYPE_VecIter_lessi64_greater v365;
      __ZH_TYPE_VecIter_lessi64_greater v364;
      __ZH_TYPE_VecIter_lessi64_greater v363;
      __ZH_TYPE_Vec_lessi64_greater v362;
      (((v362)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v361)))));
      (((v363)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((&((v362)))))));
      (((v364)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((&((v362)))))));
      (((v365)=(v363)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater((&((v365))), (v364)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v360))), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v365)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand((&((v365)))));
      }
    }
}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v366) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v366)))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v367) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v367)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v368) {
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v368)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v369) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v369))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v370, __ZH_TYPE_Vec_lessi64_greater* v371) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v371))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v372, i64 v373) {
  if ((((v373))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v373), ((((v372))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v372), (v373)));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v374, i64 v375, i64 v376) {
  __ZH_TYPE_Vec_lessi64_greater v377;
  (((v377)=(__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))))));
  {
      i64 v381;
      i64 v380;
      i64 v379;
      __ZH_TYPE_Range v378;
      (((v378)=(__ZH_BOP__dot_dot_i64i64((v375), (v376)))));
      (((v379)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v378)))))));
      (((v380)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v378)))))));
      (((v381)=(v379)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v381))), (v380)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((v377))), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v374), (v381)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v381)))));
      }
    }
  return (v377);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v377)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v382, __ZH_TYPE_Range v383) {
  i64 v385;
  i64 v384;
  ((((v384)=(((&(v383))->begin)))), (((v385)=(((&(v383))->end)))));
  if ((((v384))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v384), ((((v382))->size))));
  }
  if ((((v384))<((((i64)0))))) {
    (((v384)=(((i64)0))));
  }
  if ((((v385))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v385), ((((v382))->size))));
  }
  if ((((v385))>(((((v382))->size))))) {
    (((v385)=((((v382))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v382), (v384), (v385)));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v386) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v386), (((i64)0)), ((((v386))->size))));
}
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v387, __ZH_TYPE_Vec_lessi64_greater* v388) {
  return (((bool)0));
}
void __ZH_LOP_swap_i64Pi64P(i64* v389, i64* v390) {
  i64 v391;
  (((v391)=(*((v389)))));
  (((*((v389)))=(*((v390)))));
  (((*((v390)))=(v391)));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v392, i64* v393) {
  i64* v396;
  i64* v395;
  i64* v394;
  ((((v394)=(((i64*)(((((i64)(v393))))-((((((i64)1)))*((((i64)8)))))))))), (((v395)=(v392))), (((v396)=(v392))));
  (((v396)=(v392)));
  while ((((((i64)(v396))))!=((((i64)(v394)))))) {
    if ((((*((v396))))<((*((v394)))))) {
      (__ZH_LOP_swap_i64Pi64P((v395), (v396)));
      (((v395)=(((i64*)(((((i64)(v395))))+((((((i64)1)))*((((i64)8))))))))));
    }
    (((v396)=(((i64*)(((((i64)(v396))))+((((((i64)1)))*((((i64)8))))))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v395), (v394)));
  return (v395);
}
void __ZH_LOP_qsort_i64Pi64P(i64* v397, i64* v398) {
  i64 v400;
  i64 v399;
  (((v399)=(((((i64)(v398))))-((((i64)(v397)))))));
  (((v400)=(((i64)8))));
  if ((((v399))>((v400)))) {
    i64* v401;
    (((v401)=(__ZH_LOP_partition_i64Pi64P((v397), (v398)))));
    (__ZH_LOP_qsort_i64Pi64P((v397), (v401)));
    (((v401)=(((i64*)(((((i64)(v401))))+((((((i64)1)))*((((i64)8))))))))));
    (__ZH_LOP_qsort_i64Pi64P((v401), (v398)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v402) {
  __ZH_TYPE_VecIter_lessi64_greater v404;
  __ZH_TYPE_VecIter_lessi64_greater v403;
  (((v403)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((v402)))));
  (((v404)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((v402)))));
  (__ZH_LOP_qsort_i64Pi64P((((&(v403))->ptr)), (((&(v404))->ptr))));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v405) {
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand((&((*v405)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v406, i64 v407) {
  __ZH_TYPE_Vec_lessi64_greater v408;
  (((v408)=(__ZH_LOP_Vec_lessi64_greater_i64((((v407))-((v406)))))));
  {
      i64 v412;
      i64 v411;
      i64 v410;
      __ZH_TYPE_Range v409;
      (((v409)=(__ZH_BOP__dot_dot_i64i64((v406), (v407)))));
      (((v410)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v409)))))));
      (((v411)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v409)))))));
      (((v412)=(v410)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v412))), (v411)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v408))), (((v412))-((v406)))))=(v412)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v412)))));
      }
    }
  return (v408);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v408)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v413) {
  __ZH_TYPE_Vec_lessi64_greater v414;
  (((v414)=(__ZH_LOP_Vec_lessi64_greater_())));
  {
      i64 v418;
      i64 v417;
      i64 v416;
      __ZH_TYPE_Range v415;
      (((v415)=(*((v413)))));
      (((v416)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v415)))))));
      (((v417)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v415)))))));
      (((v418)=(v416)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v418))), (v417)))) {
        (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v414), (v418)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v418)))));
      }
    }
  return (v414);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v414)))));
}
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v419, i64 v420) {
  return (*((((char*)(((((i64)(*((v419))))))+((v420)))))));
}
char __ZH_BOP__caret_stri64(str v421, i64 v422) {
  return (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v421))), (v422)));
}
bool __ZH_BOP__equal_equal_charstr(char v423, str v424) {
  return (((v423))==((__ZH_BOP__caret_stri64((v424), (((i64)0))))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v449) {
  __ZH_TYPE_VecIter_lesschar_greater v450;
  (((((&(v450))->ptr))=(v449)));
  return (v450);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v451) {
  ((((((v451))->ptr))=(((char*)(((((i64)((((v451))->ptr)))))+((((((i64)1)))*((((i64)1))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v452, __ZH_TYPE_VecIter_lesschar_greater v453) {
  return (((((i64)((((v452))->ptr)))))!=((((i64)(((&(v453))->ptr))))));
}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v454) {
  return &(*((((&(v454))->ptr))));
}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v425, i64 v426) {
  return (((char*)(((char*)(((((i64)((((v425))->head)))))+((((v426))*((((i64)1))))))))));
}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v427, i64 v428) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v427), (v428)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v429) {
  (printf("%s", ("[")));
  {
      i64 v433;
      i64 v432;
      i64 v431;
      __ZH_TYPE_Range v430;
      (((v430)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v429))->size))))));
      (((v431)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v430)))))));
      (((v432)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v430)))))));
      (((v433)=(v431)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v433))), (v432)))) {
        if ((!((!((v433)))))) {
          (printf("%s", (" ")));
        }
        (printf("%c", (*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v429), (v433)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v433)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v434) {
  {
      i64 v438;
      i64 v437;
      i64 v436;
      __ZH_TYPE_Range v435;
      (((v435)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v434))->size))))));
      (((v436)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v435)))))));
      (((v437)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v435)))))));
      (((v438)=(v436)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v438))), (v437)))) {
        (printf("%c\n", (*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v434), (v438)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v438)))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v439) {
  i64 v440;
  (((v440)=((((v439))->capacity))));
  if ((((v440))==((((i64)0))))) {
    (((v440)=(((i64)1))));
    ((((((v439))->head))=(((char*)(alloc((((i64)1))))))));
    ((((((v439))->capacity))=(v440)));
  } else {
    char* v441;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v440), (((i64)2))));
    (((v441)=(((char*)(alloc((((v440))*((((i64)1))))))))));
    {
        i64 v445;
        i64 v444;
        i64 v443;
        __ZH_TYPE_Range v442;
        (((v442)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v439))->size))))));
        (((v443)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v442)))))));
        (((v444)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v442)))))));
        (((v445)=(v443)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v445))), (v444)))) {
          (((*((((char*)(((((i64)(v441))))+((((v445))*((((i64)1))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v439), (v445)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v445)))));
        }
      }
    (free((void*) (((i64)((((v439))->head))))));
    ((((((v439))->head))=(v441)));
  }
  ((((((v439))->capacity))=(v440)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v446, char v447) {
  if (((((((v446))->size)))==(((((v446))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((v446)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v446), ((((v446))->size))))=(v447)));
  (__ZH_LOP__plus_plus_i64R(&((((v446))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v448) {
  (__ZH_LOP__minus_minus_i64R(&((((v448))->size))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v455) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP(((((v455))->head))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v456) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v456), ((((v456))->size))))));
}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v457) {
  return &(*(((((v457))->head))));
}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v458) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v458), ((((((v458))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v459) {
  if ((!((!((((i64)((((v459))->head))))))))) {
    (free((void*) (((i64)((((v459))->head))))));
    ((((((v459))->size))=(((i64)0))));
    ((((((v459))->capacity))=(((i64)0))));
    ((((((v459))->head))=(((char*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v460) {
  __ZH_TYPE_Vec_lesschar_greater v461;
  (((((&(v461))->head))=(((char*)(((i64)0))))));
  (((((&(v461))->size))=(((i64)0))));
  (((((&(v461))->capacity))=(((i64)0))));
  while ((((((&(v461))->capacity)))<((v460)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((&((v461)))));
  }
  (((((&(v461))->size))=(v460)));
  (((((&(v461))->capacity))=(v460)));
  {
      i64 v465;
      i64 v464;
      i64 v463;
      __ZH_TYPE_Range v462;
      (((v462)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v461))->size))))));
      (((v463)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v462)))))));
      (((v464)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v462)))))));
      (((v465)=(v463)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v465))), (v464)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v461))), (v465)))=(__ZH_LOP_char_())));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v465)))));
      }
    }
  return (v461);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v461)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v466, char v467) {
  __ZH_TYPE_Vec_lesschar_greater v468;
  (((v468)=(__ZH_LOP_Vec_lesschar_greater_i64((v466)))));
  {
      i64 v472;
      i64 v471;
      i64 v470;
      __ZH_TYPE_Range v469;
      (((v469)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v468))->size))))));
      (((v470)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v469)))))));
      (((v471)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v469)))))));
      (((v472)=(v470)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v472))), (v471)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v468))), (v472)))=(v467)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v472)))));
      }
    }
  return (v468);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v468)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {
  return (__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v473) {
  __ZH_TYPE_Vec_lesschar_greater v474;
  (((v474)=(__ZH_LOP_Vec_lesschar_greater_i64((((&(*v473))->size))))));
  {
      i64 v478;
      i64 v477;
      i64 v476;
      __ZH_TYPE_Range v475;
      (((v475)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v473))->size))))));
      (((v476)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v475)))))));
      (((v477)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v475)))))));
      (((v478)=(v476)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v478))), (v477)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v474))), (v478)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((*v473))), (v478)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v478)))));
      }
    }
  return (v474);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v474)))));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v479, char v480) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v479))), (v480)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v481, __ZH_TYPE_Vec_lesschar_greater* v482) {
  {
      __ZH_TYPE_VecIter_lesschar_greater v486;
      __ZH_TYPE_VecIter_lesschar_greater v485;
      __ZH_TYPE_VecIter_lesschar_greater v484;
      __ZH_TYPE_Vec_lesschar_greater v483;
      (((v483)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v482)))));
      (((v484)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&((v483)))))));
      (((v485)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((&((v483)))))));
      (((v486)=(v484)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater((&((v486))), (v485)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v481))), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v486)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand((&((v486)))));
      }
    }
}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v487) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v487)))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v488) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v488)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v489) {
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v489)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v490) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v490))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v491, __ZH_TYPE_Vec_lesschar_greater* v492) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v492))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v493, i64 v494) {
  if ((((v494))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v494), ((((v493))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v493), (v494)));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v495, i64 v496, i64 v497) {
  __ZH_TYPE_Vec_lesschar_greater v498;
  (((v498)=(__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))))));
  {
      i64 v502;
      i64 v501;
      i64 v500;
      __ZH_TYPE_Range v499;
      (((v499)=(__ZH_BOP__dot_dot_i64i64((v496), (v497)))));
      (((v500)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v499)))))));
      (((v501)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v499)))))));
      (((v502)=(v500)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v502))), (v501)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((v498))), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v495), (v502)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v502)))));
      }
    }
  return (v498);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v498)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v503, __ZH_TYPE_Range v504) {
  i64 v506;
  i64 v505;
  ((((v505)=(((&(v504))->begin)))), (((v506)=(((&(v504))->end)))));
  if ((((v505))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v505), ((((v503))->size))));
  }
  if ((((v505))<((((i64)0))))) {
    (((v505)=(((i64)0))));
  }
  if ((((v506))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v506), ((((v503))->size))));
  }
  if ((((v506))>(((((v503))->size))))) {
    (((v506)=((((v503))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v503), (v505), (v506)));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v507) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v507), (((i64)0)), ((((v507))->size))));
}
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v508, __ZH_TYPE_Vec_lesschar_greater* v509) {
  return (((bool)0));
}
void __ZH_LOP_swap_charPcharP(char* v510, char* v511) {
  char v512;
  (((v512)=(*((v510)))));
  (((*((v510)))=(*((v511)))));
  (((*((v511)))=(v512)));
}
char* __ZH_LOP_partition_charPcharP(char* v513, char* v514) {
  char* v517;
  char* v516;
  char* v515;
  ((((v515)=(((char*)(((((i64)(v514))))-((((((i64)1)))*((((i64)1)))))))))), (((v516)=(v513))), (((v517)=(v513))));
  (((v517)=(v513)));
  while ((((((i64)(v517))))!=((((i64)(v515)))))) {
    if ((((*((v517))))<((*((v515)))))) {
      (__ZH_LOP_swap_charPcharP((v516), (v517)));
      (((v516)=(((char*)(((((i64)(v516))))+((((((i64)1)))*((((i64)1))))))))));
    }
    (((v517)=(((char*)(((((i64)(v517))))+((((((i64)1)))*((((i64)1))))))))));
  }
  (__ZH_LOP_swap_charPcharP((v516), (v515)));
  return (v516);
}
void __ZH_LOP_qsort_charPcharP(char* v518, char* v519) {
  i64 v521;
  i64 v520;
  (((v520)=(((((i64)(v519))))-((((i64)(v518)))))));
  (((v521)=(((i64)1))));
  if ((((v520))>((v521)))) {
    char* v522;
    (((v522)=(__ZH_LOP_partition_charPcharP((v518), (v519)))));
    (__ZH_LOP_qsort_charPcharP((v518), (v522)));
    (((v522)=(((char*)(((((i64)(v522))))+((((((i64)1)))*((((i64)1))))))))));
    (__ZH_LOP_qsort_charPcharP((v522), (v519)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v523) {
  __ZH_TYPE_VecIter_lesschar_greater v525;
  __ZH_TYPE_VecIter_lesschar_greater v524;
  (((v524)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((v523)))));
  (((v525)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((v523)))));
  (__ZH_LOP_qsort_charPcharP((((&(v524))->ptr)), (((&(v525))->ptr))));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v526) {
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand((&((*v526)))));
}
__ZH_TYPE_Str __ZH_LOP_Str_() {
  __ZH_TYPE_Str v527;
  (((((&(v527))->data))=(__ZH_LOP_Vec_lesschar_greater_())));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v527))->data)))), (((char)(((u8)0))))));
  (((((&(v527))->size))=(((i64)0))));
  return (v527);
}
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v528) {
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(((((v528))->data))))));
}
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v529) {
  __ZH_TYPE_VecIter_lesschar_greater v530;
  (((v530)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&(((((v529))->data))))))));
  return (((str)(((&(v530))->ptr))));
}
char* __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v531, i64 v532) {
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(((((v531))->data)))), (v532)));
}
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v533, i64 v534) {
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((&(((((v533))->data)))), (v534)));
}
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v535, char v536) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v535))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v535))->data)))), (v536)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v535))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__plus_plus_i64R(&((((v535))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v537) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v537))->data))))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v537))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v537))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__minus_minus_i64R(&((((v537))->size))));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v538) {
  __ZH_TYPE_Str v539;
  (((v539)=(__ZH_LOP_Str_())));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&((((&(v539))->data))))));
  while ((((*((((char*)(v538))))))!=((((char)(((u8)0))))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v539))->data)))), (*((((char*)(v538)))))));
    (((v538)=(((str)(((((i64)(v538))))+((((i64)1))))))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v539))->data)))), (((char)(((u8)0))))));
  (((((&(v539))->size))=(((((&(((&(v539))->data)))->size)))-((((i64)1))))));
  return (v539);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v539)))));
}
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v540) {
  __ZH_TYPE_Str v541;
  (((v541)=(__ZH_LOP_Str_())));
  (((((&(v541))->data))=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(((&(*v540))->data))))));
  (((((&(v541))->size))=(((&(*v540))->size))));
  return (v541);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v541)))));
}
i64 __ZH_LOP_len_str(str v542) {
  i64 v543;
  (((v543)=(((i64)0))));
  while ((((*((((char*)(v542))))))!=((((char)(((u8)0))))))) {
    (__ZH_LOP__plus_plus_i64R(&(v543)));
    (((v542)=(((str)(((((i64)(v542))))+((((i64)1))))))));
  }
  return (v543);
}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v544) {
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v544)))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v545) {
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v545)))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v546, char v547) {
  (__ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar((&((*v546))), (v547)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v548, __ZH_TYPE_Str* v549) {
  {
      i64 v553;
      i64 v552;
      i64 v551;
      __ZH_TYPE_Range v550;
      (((v550)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v549))->size))))));
      (((v551)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v550)))))));
      (((v552)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v550)))))));
      (((v553)=(v551)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v553))), (v552)))) {
        char v554;
        (((v554)=(((char)(((i8)115))))));
        (((v554)=(*__ZH_BOP__dotcall_dotat_StrP_ampersandi64((&((*v549))), (v553)))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v548), (v554)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v553)))));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v555, str v556) {
  i64 v557;
  (((v557)=(__ZH_LOP_len_str((v556)))));
  {
      i64 v561;
      i64 v560;
      i64 v559;
      __ZH_TYPE_Range v558;
      (((v558)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (v557)))));
      (((v559)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v558)))))));
      (((v560)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v558)))))));
      (((v561)=(v559)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v561))), (v560)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v555), (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v556))), (v561)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v561)))));
      }
    }
}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v562) {
  (__ZH_LOP_out_StrR(&(*v562)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v563) {
  ((__ZH_LOP_put_StrR(&(*v563))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v564, __ZH_TYPE_Str* v565) {
  ((__ZH_LOP_put_StrR(&(*v565))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v566, __ZH_TYPE_Str* v567) {
  return (((bool)0));
}
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v568, i64 v569) {
  __ZH_TYPE_Str v571;
  __ZH_TYPE_Str v570;
  (((v570)=(__ZH_LOP_Str_())));
  (((v571)=(__ZH_LOP_Str_str((v568)))));
  {
      i64 v575;
      i64 v574;
      i64 v573;
      __ZH_TYPE_Range v572;
      (((v572)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (v569)))));
      (((v573)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v572)))))));
      (((v574)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v572)))))));
      (((v575)=(v573)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v575))), (v574)))) {
        (__ZH_BOP__plus_equal_StrRStrR(&(v570), &(v571)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v575)))));
      }
    }
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v571)))));
  return (v570);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v570)))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v571)))));
  return (__ZH_LOP_Str_());
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v570)))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v571)))));
}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_() {
  __ZH_TYPE_Str v576;
  (((v576)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v576), ("         _____ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v576), ("       /       \\\\__ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v576), ("     /             \\\\\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v576), ("   /   0    0        |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v576), ("  |     ..            |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v576), ("  /|        _/       /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v576), (" / .\\\\_____/         /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v576), ("/U\\\\|    \\\\___|   |__/\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v576), ("            /  /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v576), ("            |/U\\\\\\n")));
  return (v576);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v576)))));
}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_() {
  __ZH_TYPE_Str v577;
  (((v577)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v577), ("         _____         \\n       /       \\\\__     \\n     /             \\\\   \\n   /   0    0        | \\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\")));
  return (v577);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v577)))));
}
str __ZH_LOP_frog_raw_() {
  return ("         _____\\n       /       \\\\__\\n     /             \\\\\\n   /   0    0        |\\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\ ");
}
str __ZH_LOP_frog_() {
  return (__ZH_LOP_frog_raw_());
}
f64 __ZH_LOP_sqrt_f64(f64 v578) {
  f64 v579;
  (((v579)=(((f64)1.000000))));
  {
      i64 v583;
      i64 v582;
      i64 v581;
      __ZH_TYPE_Range v580;
      (((v580)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((i64)10))))));
      (((v581)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v580)))))));
      (((v582)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v580)))))));
      (((v583)=(v581)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v583))), (v582)))) {
        (__ZH_BOP__minus_equal_f64Rf64(&(v579), (((((((v579))*((v579))))-((v578))))/((((((f64)2.000000)))*((v579)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v583)))));
      }
    }
  return (v579);
}
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v584, f64 v585) {
  __ZH_TYPE_V2 v586;
  (((((&(v586))->x))=(v584)));
  (((((&(v586))->y))=(v585)));
  return (v586);
}
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v587, __ZH_TYPE_V2 v588) {
  (__ZH_BOP__plus_equal_f64Rf64(&(((&(v587))->x)), (((&(v588))->x))));
  (__ZH_BOP__plus_equal_f64Rf64(&(((&(v587))->y)), (((&(v588))->y))));
  return (v587);
}
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v589, __ZH_TYPE_V2 v590) {
  __ZH_TYPE_V2 v591;
  (((((&(v591))->x))=(((((((&(v589))->x)))*((((&(v590))->x)))))-((((((&(v589))->y)))*((((&(v590))->y))))))));
  (((((&(v591))->y))=(((((((&(v589))->x)))*((((&(v590))->y)))))+((((((&(v589))->y)))*((((&(v590))->x))))))));
  return (v591);
}
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v592) {
  return (__ZH_LOP_sqrt_f64((((((((&(v592))->x)))*((((&(v592))->x)))))+((((((&(v592))->y)))*((((&(v592))->y))))))));
}
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v593) {
  (printf("%f", (((&(v593))->x))));
  (printf("%s", (" ")));
  (printf("%f", (((&(v593))->y))));
}
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v594) {
  (printf("%f", (((&(v594))->x))));
  (printf("%s", (" ")));
  (printf("%f", (((&(v594))->y))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v595) {
  (__ZH_LOP_out_V2((v595)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v596) {
  ((__ZH_LOP_put_V2((v596))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v597, __ZH_TYPE_V2 v598) {
  ((__ZH_LOP_put_V2((v598))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
void __ZH_LOP_mandelbrot_i64f64f64f64(i64 v599, f64 v600, f64 v601, f64 v602) {
  f64 v706;
  __ZH_TYPE_Vec_lessStr_greater v705;
  (((v705)=(__ZH_LOP_Vec_lessStr_greater_())));
  (((v706)=(((v601))-((((((f64)1.000000)))*((v602)))))));
  while ((((v706))<((((v601))+((((((f64)1.000000)))*((v602)))))))) {
    f64 v708;
    __ZH_TYPE_Str v707;
    (((v707)=(__ZH_LOP_Str_())));
    (((v708)=(((v600))-((((((f64)1.000000)))*((v602)))))));
    while ((((v708))<((((v600))+((((((f64)1.000000)))*((v602)))))))) {
      i64 v712;
      bool v711;
      __ZH_TYPE_V2 v710;
      __ZH_TYPE_V2 v709;
      ((((v709)=(__ZH_LOP_V2_f64f64((((f64)0.000000)), (((f64)0.000000)))))), (((v710)=(__ZH_LOP_V2_f64f64((v708), (v706))))));
      (((v711)=(((bool)1))));
      (((v712)=(((i64)0))));
      while ((((((v712))<((v599))))&&((v711)))) {
        (((v709)=(__ZH_BOP__plus_V2V2((__ZH_BOP__asterisk_V2V2((v709), (v709))), (v710)))));
        if ((((__ZH_LOP_abs_V2((v709))))>((((f64)2.000000))))) {
          (((v711)=(((bool)0))));
        }
        (__ZH_BOP__plus_equal_i64Ri64(&(v712), (((i64)1))));
      }
      if ((v711)) {
        (__ZH_BOP__plus_equal_StrRstr(&(v707), ("*")));
      } else {
        (__ZH_BOP__plus_equal_StrRstr(&(v707), (" ")));
      }
      (__ZH_BOP__plus_equal_f64Rf64(&(v708), (((((f64)0.050000)))*((v602)))));
    }
    (__ZH_BOP__plus_equal_Vec_lessStr_greaterRStr(&(v705), (v707)));
    (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v707)))));
    (__ZH_BOP__plus_equal_f64Rf64(&(v706), (((((f64)0.100000)))*((v602)))));
  }
  (__ZH_BOP__dotcall_dotprintln_Vec_lessStr_greaterP_ampersand((&((v705)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v705)))));
}
__ZH_TYPE_VecIter_lessStr_greater __ZH_LOP_VecIter_lessStr_greater_StrP(__ZH_TYPE_Str* v627) {
  __ZH_TYPE_VecIter_lessStr_greater v628;
  (((((&(v628))->ptr))=(v627)));
  return (v628);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lessStr_greaterP_ampersand(__ZH_TYPE_VecIter_lessStr_greater* v629) {
  ((((((v629))->ptr))=(((__ZH_TYPE_Str*)(((((i64)((((v629))->ptr)))))+((((((i64)1)))*((((i64)32))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessStr_greaterP_ampersandVecIter_lessStr_greater(__ZH_TYPE_VecIter_lessStr_greater* v630, __ZH_TYPE_VecIter_lessStr_greater v631) {
  return (((((i64)((((v630))->ptr)))))!=((((i64)(((&(v631))->ptr))))));
}
__ZH_TYPE_Str* __ZH_LOP__asterisk_VecIter_lessStr_greater(__ZH_TYPE_VecIter_lessStr_greater v632) {
  return &(*((((&(v632))->ptr))));
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v603, i64 v604) {
  return (((__ZH_TYPE_Str*)(((__ZH_TYPE_Str*)(((((i64)((((v603))->head)))))+((((v604))*((((i64)32))))))))));
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v605, i64 v606) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v605), (v606)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v607) {
  (printf("%s", ("[")));
  {
      i64 v611;
      i64 v610;
      i64 v609;
      __ZH_TYPE_Range v608;
      (((v608)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v607))->size))))));
      (((v609)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v608)))))));
      (((v610)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v608)))))));
      (((v611)=(v609)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v611))), (v610)))) {
        if ((!((!((v611)))))) {
          (printf("%s", (" ")));
        }
        (__ZH_LOP_put_StrR(&(*((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v607), (v611)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v611)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v612) {
  {
      i64 v616;
      i64 v615;
      i64 v614;
      __ZH_TYPE_Range v613;
      (((v613)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v612))->size))))));
      (((v614)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v613)))))));
      (((v615)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v613)))))));
      (((v616)=(v614)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v616))), (v615)))) {
        (__ZH_LOP_out_StrR(&(*((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v612), (v616)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v616)))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v617) {
  i64 v618;
  (((v618)=((((v617))->capacity))));
  if ((((v618))==((((i64)0))))) {
    (((v618)=(((i64)1))));
    ((((((v617))->head))=(((__ZH_TYPE_Str*)(alloc((((i64)32))))))));
    ((((((v617))->capacity))=(v618)));
  } else {
    __ZH_TYPE_Str* v619;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v618), (((i64)2))));
    (((v619)=(((__ZH_TYPE_Str*)(alloc((((v618))*((((i64)32))))))))));
    {
        i64 v623;
        i64 v622;
        i64 v621;
        __ZH_TYPE_Range v620;
        (((v620)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v617))->size))))));
        (((v621)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v620)))))));
        (((v622)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v620)))))));
        (((v623)=(v621)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v623))), (v622)))) {
          (((*((((__ZH_TYPE_Str*)(((((i64)(v619))))+((((v623))*((((i64)32))))))))))=(__ZH_LOP_Str_StrR(&(*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((v617), (v623)))))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v623)))));
        }
      }
    (free((void*) (((i64)((((v617))->head))))));
    ((((((v617))->head))=(v619)));
  }
  ((((((v617))->capacity))=(v618)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr(__ZH_TYPE_Vec_lessStr_greater* v624, __ZH_TYPE_Str v625) {
  if (((((((v624))->size)))==(((((v624))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessStr_greaterP_ampersand((v624)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((v624), ((((v624))->size))))=(__ZH_LOP_Str_StrR(&(v625)))));
  (__ZH_LOP__plus_plus_i64R(&((((v624))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v626) {
  (__ZH_LOP__minus_minus_i64R(&((((v626))->size))));
}
__ZH_TYPE_VecIter_lessStr_greater __ZH_BOP__dotcall_dotbegin_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v633) {
  return (__ZH_LOP_VecIter_lessStr_greater_StrP(((((v633))->head))));
}
__ZH_TYPE_VecIter_lessStr_greater __ZH_BOP__dotcall_dotend_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v634) {
  return (__ZH_LOP_VecIter_lessStr_greater_StrP((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v634), ((((v634))->size))))));
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotfront_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v635) {
  return &(*(((((v635))->head))));
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotback_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v636) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v636), ((((((v636))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v637) {
  if ((!((!((((i64)((((v637))->head))))))))) {
    (free((void*) (((i64)((((v637))->head))))));
    ((((((v637))->size))=(((i64)0))));
    ((((((v637))->capacity))=(((i64)0))));
    ((((((v637))->head))=(((__ZH_TYPE_Str*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_i64(i64 v638) {
  __ZH_TYPE_Vec_lessStr_greater v639;
  (((((&(v639))->head))=(((__ZH_TYPE_Str*)(((i64)0))))));
  (((((&(v639))->size))=(((i64)0))));
  (((((&(v639))->capacity))=(((i64)0))));
  while ((((((&(v639))->capacity)))<((v638)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessStr_greaterP_ampersand((&((v639)))));
  }
  (((((&(v639))->size))=(v638)));
  (((((&(v639))->capacity))=(v638)));
  {
      i64 v643;
      i64 v642;
      i64 v641;
      __ZH_TYPE_Range v640;
      (((v640)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v639))->size))))));
      (((v641)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v640)))))));
      (((v642)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v640)))))));
      (((v643)=(v641)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v643))), (v642)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((&((v639))), (v643)))=(__ZH_LOP_Str_())));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v643)))));
      }
    }
  return (v639);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v639)))));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_i64Str(i64 v644, __ZH_TYPE_Str v645) {
  __ZH_TYPE_Vec_lessStr_greater v646;
  (((v646)=(__ZH_LOP_Vec_lessStr_greater_i64((v644)))));
  {
      i64 v650;
      i64 v649;
      i64 v648;
      __ZH_TYPE_Range v647;
      (((v647)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v646))->size))))));
      (((v648)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v647)))))));
      (((v649)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v647)))))));
      (((v650)=(v648)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v650))), (v649)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((&((v646))), (v650)))=(__ZH_LOP_Str_StrR(&(v645)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v650)))));
      }
    }
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v645)))));
  return (v646);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v646)))));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_() {
  return (__ZH_LOP_Vec_lessStr_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v651) {
  __ZH_TYPE_Vec_lessStr_greater v652;
  (((v652)=(__ZH_LOP_Vec_lessStr_greater_i64((((&(*v651))->size))))));
  {
      i64 v656;
      i64 v655;
      i64 v654;
      __ZH_TYPE_Range v653;
      (((v653)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v651))->size))))));
      (((v654)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v653)))))));
      (((v655)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v653)))))));
      (((v656)=(v654)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v656))), (v655)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((&((v652))), (v656)))=(__ZH_LOP_Str_StrR(&(*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((&((*v651))), (v656)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v656)))));
      }
    }
  return (v652);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v652)))));
}
void __ZH_BOP__plus_equal_Vec_lessStr_greaterRStr(__ZH_TYPE_Vec_lessStr_greater* v657, __ZH_TYPE_Str v658) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr((&((*v657))), (v658)));
}
void __ZH_BOP__plus_equal_Vec_lessStr_greaterRVec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v659, __ZH_TYPE_Vec_lessStr_greater* v660) {
  {
      __ZH_TYPE_VecIter_lessStr_greater v664;
      __ZH_TYPE_VecIter_lessStr_greater v663;
      __ZH_TYPE_VecIter_lessStr_greater v662;
      __ZH_TYPE_Vec_lessStr_greater v661;
      (((v661)=(__ZH_LOP_Vec_lessStr_greater_Vec_lessStr_greaterR(&(*v660)))));
      (((v662)=(__ZH_BOP__dotcall_dotbegin_Vec_lessStr_greaterP_ampersand((&((v661)))))));
      (((v663)=(__ZH_BOP__dotcall_dotend_Vec_lessStr_greaterP_ampersand((&((v661)))))));
      (((v664)=(v662)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessStr_greaterP_ampersandVecIter_lessStr_greater((&((v664))), (v663)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr((&((*v659))), (*__ZH_LOP__asterisk_VecIter_lessStr_greater((v664)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessStr_greaterP_ampersand((&((v664)))));
      }
    }
}
void __ZH_LOP_put_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v665) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessStr_greaterP_ampersand((&((*v665)))));
}
void __ZH_LOP_out_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v666) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessStr_greaterP_ampersand((&((*v666)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v667) {
  (__ZH_LOP_out_Vec_lessStr_greaterR(&(*v667)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v668) {
  ((__ZH_LOP_put_Vec_lessStr_greaterR(&(*v668))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessStr_greaterR(__ZH_TYPE_Out v669, __ZH_TYPE_Vec_lessStr_greater* v670) {
  ((__ZH_LOP_put_Vec_lessStr_greaterR(&(*v670))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v671, i64 v672) {
  if ((((v672))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v672), ((((v671))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((v671), (v672)));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessStr_greater* v673, i64 v674, i64 v675) {
  __ZH_TYPE_Vec_lessStr_greater v676;
  (((v676)=(__ZH_LOP_Vec_lessStr_greater_i64((((i64)0))))));
  {
      i64 v680;
      i64 v679;
      i64 v678;
      __ZH_TYPE_Range v677;
      (((v677)=(__ZH_BOP__dot_dot_i64i64((v674), (v675)))));
      (((v678)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v677)))))));
      (((v679)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v677)))))));
      (((v680)=(v678)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v680))), (v679)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr((&((v676))), (*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((v673), (v680)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v680)))));
      }
    }
  return (v676);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v676)))));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandRange(__ZH_TYPE_Vec_lessStr_greater* v681, __ZH_TYPE_Range v682) {
  i64 v684;
  i64 v683;
  ((((v683)=(((&(v682))->begin)))), (((v684)=(((&(v682))->end)))));
  if ((((v683))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v683), ((((v681))->size))));
  }
  if ((((v683))<((((i64)0))))) {
    (((v683)=(((i64)0))));
  }
  if ((((v684))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v684), ((((v681))->size))));
  }
  if ((((v684))>(((((v681))->size))))) {
    (((v684)=((((v681))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64i64((v681), (v683), (v684)));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v685) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64i64((v685), (((i64)0)), ((((v685))->size))));
}
bool __ZH_BOP__less_Vec_lessStr_greaterRVec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v686, __ZH_TYPE_Vec_lessStr_greater* v687) {
  return (((bool)0));
}
void __ZH_LOP_swap_StrPStrP(__ZH_TYPE_Str* v688, __ZH_TYPE_Str* v689) {
  __ZH_TYPE_Str v690;
  (((v690)=(*((v688)))));
  (((*((v688)))=(__ZH_LOP_Str_StrR(&(*((v689)))))));
  (((*((v689)))=(__ZH_LOP_Str_StrR(&(v690)))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v690)))));
}
__ZH_TYPE_Str* __ZH_LOP_partition_StrPStrP(__ZH_TYPE_Str* v691, __ZH_TYPE_Str* v692) {
  __ZH_TYPE_Str* v695;
  __ZH_TYPE_Str* v694;
  __ZH_TYPE_Str* v693;
  ((((v693)=(((__ZH_TYPE_Str*)(((((i64)(v692))))-((((((i64)1)))*((((i64)32)))))))))), (((v694)=(v691))), (((v695)=(v691))));
  (((v695)=(v691)));
  while ((((((i64)(v695))))!=((((i64)(v693)))))) {
    if ((__ZH_BOP__less_StrRStrR(&(*((v695))), &(*((v693)))))) {
      (__ZH_LOP_swap_StrPStrP((v694), (v695)));
      (((v694)=(((__ZH_TYPE_Str*)(((((i64)(v694))))+((((((i64)1)))*((((i64)32))))))))));
    }
    (((v695)=(((__ZH_TYPE_Str*)(((((i64)(v695))))+((((((i64)1)))*((((i64)32))))))))));
  }
  (__ZH_LOP_swap_StrPStrP((v694), (v693)));
  return (v694);
}
void __ZH_LOP_qsort_StrPStrP(__ZH_TYPE_Str* v696, __ZH_TYPE_Str* v697) {
  i64 v699;
  i64 v698;
  (((v698)=(((((i64)(v697))))-((((i64)(v696)))))));
  (((v699)=(((i64)32))));
  if ((((v698))>((v699)))) {
    __ZH_TYPE_Str* v700;
    (((v700)=(__ZH_LOP_partition_StrPStrP((v696), (v697)))));
    (__ZH_LOP_qsort_StrPStrP((v696), (v700)));
    (((v700)=(((__ZH_TYPE_Str*)(((((i64)(v700))))+((((((i64)1)))*((((i64)32))))))))));
    (__ZH_LOP_qsort_StrPStrP((v700), (v697)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v701) {
  __ZH_TYPE_VecIter_lessStr_greater v703;
  __ZH_TYPE_VecIter_lessStr_greater v702;
  (((v702)=(__ZH_BOP__dotcall_dotbegin_Vec_lessStr_greaterP_ampersand((v701)))));
  (((v703)=(__ZH_BOP__dotcall_dotend_Vec_lessStr_greaterP_ampersand((v701)))));
  (__ZH_LOP_qsort_StrPStrP((((&(v702))->ptr)), (((&(v703))->ptr))));
}
void __ZH_LOP_sort_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v704) {
  (__ZH_BOP__dotcall_dotsort_Vec_lessStr_greaterP_ampersand((&((*v704)))));
}
int main(int argc, char *argv[])  {
  f64 v713;
  (__ZH_LOP__less_Out((__ZH_ROP__less_str(("Mandelbrot set:")))));
  (__ZH_LOP_mandelbrot_i64f64f64f64((((i64)25)), (((f64)0.750000)), (((f64)0.000000)), (((f64)1.000000))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_str(("Zooming [-1.39, 0.0]:")))));
  (((v713)=(((f64)2.000000))));
  while ((((v713))>((((f64)0.050000))))) {
    (__ZH_LOP_mandelbrot_i64f64f64f64((((i64)50)), (__ZH_LOP__minus_f64((((f64)1.390000)))), (((f64)0.000000)), (v713)));
    (__ZH_BOP__asterisk_equal_f64Rf64(&(v713), (((f64)0.500000))));
  }
}
