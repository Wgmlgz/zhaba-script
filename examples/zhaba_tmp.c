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
typedef long double f80;

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
long double in_f80() {
  long double tmp;
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
f80 __ZH_LOP__minus_f80(f80 v206);
void __ZH_BOP__plus_equal_f80Rf80(f80* v207, f80 v208);
void __ZH_BOP__minus_equal_f80Rf80(f80* v209, f80 v210);
void __ZH_BOP__slash_equal_f80Rf80(f80* v211, f80 v212);
void __ZH_BOP__asterisk_equal_f80Rf80(f80* v213, f80 v214);
void __ZH_LOP__plus_plus_i64R(i64* v215);
void __ZH_LOP__minus_minus_i64R(i64* v216);
void __ZH_LOP__plus_plus_u8R(u8* v217);
void __ZH_LOP__minus_minus_u8R(u8* v218);
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
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v220, __ZH_TYPE_Out v221);
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v222);
__ZH_TYPE_Out __ZH_ROP__less_str(str v223);
__ZH_TYPE_Out __ZH_LOP__less_str(str v224);
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v225, str v226);
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v227);
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v228, str* v229);
__ZH_TYPE_Out __ZH_ROP__less_char(char v230);
__ZH_TYPE_Out __ZH_LOP__less_char(char v231);
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v232, char v233);
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v234);
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v235, char* v236);
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v237);
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v238);
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v239, i8 v240);
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v241);
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v242, i8* v243);
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v244);
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v245);
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v246, i16 v247);
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v248);
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v249, i16* v250);
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v251);
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v252);
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v253, i32 v254);
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v255);
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v256, i32* v257);
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v258);
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v259);
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v260, i64 v261);
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v262);
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v263, i64* v264);
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v265);
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v266);
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v267, u8 v268);
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v269);
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v270, u8* v271);
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v272);
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v273);
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v274, u16 v275);
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v276);
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v277, u16* v278);
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v279);
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v280);
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v281, u32 v282);
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v283);
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v284, u32* v285);
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v286);
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v287);
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v288, u64 v289);
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v290);
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v291, u64* v292);
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v293);
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v294, i64 v295);
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v296);
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v297);
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v298, i64 v299);
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v301, i64 v302);
i64 __ZH_LOP_rangeMin_();
i64 __ZH_LOP_rangeMax_();
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v303);
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v304);
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v305);
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v306);
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v307, i64 v308);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v309);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v310);
bool __ZH_BOP__equal_equal_i64Range(i64 v311, __ZH_TYPE_Range v312);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v337);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v339);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v340, __ZH_TYPE_VecIter_lessi64_greater v341);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v342);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v313, i64 v314);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v315, i64 v316);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v317);
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v322);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v327);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v334, i64 v335);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v336);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v343);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v344);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v345);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v346);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v347);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v348);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v354, i64 v355);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v361);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v367, i64 v368);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v369, __ZH_TYPE_Vec_lessi64_greater* v370);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v375);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v376);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v377);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v378);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v379, __ZH_TYPE_Vec_lessi64_greater* v380);
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v381, i64 v382);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v383, i64 v384, i64 v385);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v391, __ZH_TYPE_Range v392);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v395);
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v396, __ZH_TYPE_Vec_lessi64_greater* v397);
void __ZH_LOP_swap_i64Pi64P(i64* v398, i64* v399);
i64* __ZH_LOP_partition_i64Pi64P(i64* v401, i64* v402);
void __ZH_LOP_qsort_i64Pi64P(i64* v406, i64* v407);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v411);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v414);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v415, i64 v416);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v422);
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v428, i64 v429);
char __ZH_BOP__caret_stri64(str v430, i64 v431);
bool __ZH_BOP__equal_equal_charstr(char v432, str v433);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v458);
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v460);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v461, __ZH_TYPE_VecIter_lesschar_greater v462);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v463);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v434, i64 v435);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v436, i64 v437);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v438);
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v443);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v448);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v455, char v456);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v457);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v464);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v465);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v466);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v467);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v468);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v469);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v475, char v476);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v482);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v488, char v489);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v490, __ZH_TYPE_Vec_lesschar_greater* v491);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v496);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v497);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v498);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v499);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v500, __ZH_TYPE_Vec_lesschar_greater* v501);
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v502, i64 v503);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v504, i64 v505, i64 v506);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v512, __ZH_TYPE_Range v513);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v516);
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v517, __ZH_TYPE_Vec_lesschar_greater* v518);
void __ZH_LOP_swap_charPcharP(char* v519, char* v520);
char* __ZH_LOP_partition_charPcharP(char* v522, char* v523);
void __ZH_LOP_qsort_charPcharP(char* v527, char* v528);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v532);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v535);
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v537);
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v538);
char* __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v540, i64 v541);
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v542, i64 v543);
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v544, char v545);
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v546);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v547);
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v549);
i64 __ZH_LOP_len_str(str v551);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v553);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v554);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v555, char v556);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v557, __ZH_TYPE_Str* v558);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v564, str v565);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v571);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v572);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v573, __ZH_TYPE_Str* v574);
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v575, __ZH_TYPE_Str* v576);
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v577, i64 v578);
__ZH_TYPE_Str __ZH_LOP_frog_escaped_();
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_();
str __ZH_LOP_frog_raw_();
str __ZH_LOP_frog_();
f64 __ZH_LOP_sqrt_f64(f64 v587);
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v593, f64 v594);
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v596, __ZH_TYPE_V2 v597);
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v598, __ZH_TYPE_V2 v599);
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v601);
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v602);
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v603);
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v604);
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v605);
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v606, __ZH_TYPE_V2 v607);
void __ZH_LOP_mandelbrot_i64f64f64f64(i64 v608, f64 v609, f64 v610, f64 v611);
__ZH_TYPE_VecIter_lessStr_greater __ZH_LOP_VecIter_lessStr_greater_StrP(__ZH_TYPE_Str* v636);
void __ZH_BOP__dotcall_dotnext_VecIter_lessStr_greaterP_ampersand(__ZH_TYPE_VecIter_lessStr_greater* v638);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessStr_greaterP_ampersandVecIter_lessStr_greater(__ZH_TYPE_VecIter_lessStr_greater* v639, __ZH_TYPE_VecIter_lessStr_greater v640);
__ZH_TYPE_Str* __ZH_LOP__asterisk_VecIter_lessStr_greater(__ZH_TYPE_VecIter_lessStr_greater v641);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v612, i64 v613);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v614, i64 v615);
void __ZH_BOP__dotcall_dotprint_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v616);
void __ZH_BOP__dotcall_dotprintln_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v621);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v626);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr(__ZH_TYPE_Vec_lessStr_greater* v633, __ZH_TYPE_Str v634);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v635);
__ZH_TYPE_VecIter_lessStr_greater __ZH_BOP__dotcall_dotbegin_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v642);
__ZH_TYPE_VecIter_lessStr_greater __ZH_BOP__dotcall_dotend_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v643);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotfront_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v644);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotback_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v645);
void __ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v646);
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_i64(i64 v647);
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_i64Str(i64 v653, __ZH_TYPE_Str v654);
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_();
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v660);
void __ZH_BOP__plus_equal_Vec_lessStr_greaterRStr(__ZH_TYPE_Vec_lessStr_greater* v666, __ZH_TYPE_Str v667);
void __ZH_BOP__plus_equal_Vec_lessStr_greaterRVec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v668, __ZH_TYPE_Vec_lessStr_greater* v669);
void __ZH_LOP_put_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v674);
void __ZH_LOP_out_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v675);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v676);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v677);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessStr_greaterR(__ZH_TYPE_Out v678, __ZH_TYPE_Vec_lessStr_greater* v679);
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v680, i64 v681);
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessStr_greater* v682, i64 v683, i64 v684);
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandRange(__ZH_TYPE_Vec_lessStr_greater* v690, __ZH_TYPE_Range v691);
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v694);
bool __ZH_BOP__less_Vec_lessStr_greaterRVec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v695, __ZH_TYPE_Vec_lessStr_greater* v696);
void __ZH_LOP_swap_StrPStrP(__ZH_TYPE_Str* v697, __ZH_TYPE_Str* v698);
__ZH_TYPE_Str* __ZH_LOP_partition_StrPStrP(__ZH_TYPE_Str* v700, __ZH_TYPE_Str* v701);
void __ZH_LOP_qsort_StrPStrP(__ZH_TYPE_Str* v705, __ZH_TYPE_Str* v706);
void __ZH_BOP__dotcall_dotsort_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v710);
void __ZH_LOP_sort_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v713);
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
f80 __ZH_LOP__minus_f80(f80 v206) {
  return (((((f80)0.000000)))-((v206)));
}
void __ZH_BOP__plus_equal_f80Rf80(f80* v207, f80 v208) {
  (((*v207)=(((*v207))+((v208)))));
}
void __ZH_BOP__minus_equal_f80Rf80(f80* v209, f80 v210) {
  (((*v209)=(((*v209))-((v210)))));
}
void __ZH_BOP__slash_equal_f80Rf80(f80* v211, f80 v212) {
  (((*v211)=(((*v211))/((v212)))));
}
void __ZH_BOP__asterisk_equal_f80Rf80(f80* v213, f80 v214) {
  (((*v213)=(((*v213))*((v214)))));
}
void __ZH_LOP__plus_plus_i64R(i64* v215) {
  (__ZH_BOP__plus_equal_i64Ri64(&(*v215), (((i64)1))));
}
void __ZH_LOP__minus_minus_i64R(i64* v216) {
  (__ZH_BOP__minus_equal_i64Ri64(&(*v216), (((i64)1))));
}
void __ZH_LOP__plus_plus_u8R(u8* v217) {
  (((*v217)=(((*v217))+((((u8)1))))));
}
void __ZH_LOP__minus_minus_u8R(u8* v218) {
  (((*v218)=(((*v218))-((((u8)1))))));
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
  __ZH_TYPE_Out v219;
  return (v219);
}
__ZH_TYPE_Out __ZH_LOP__Out_() {
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v220, __ZH_TYPE_Out v221) {
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v222) {
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_str(str v223) {
  (printf("%s\n", (v223)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_str(str v224) {
  ((printf("%s", (v224))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v225, str v226) {
  ((printf("%s", (v226))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v227) {
  (((*v227)=(in_str())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v228, str* v229) {
  (((*v229)=(in_str())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_char(char v230) {
  (printf("%c\n", (v230)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_char(char v231) {
  ((printf("%c", (v231))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v232, char v233) {
  ((printf("%c", (v233))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v234) {
  (((*v234)=(in_char())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v235, char* v236) {
  (((*v236)=(in_char())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v237) {
  (printf("%d\n", (v237)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v238) {
  ((printf("%d", (v238))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v239, i8 v240) {
  ((printf("%d", (v240))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v241) {
  (((*v241)=(in_i8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v242, i8* v243) {
  (((*v243)=(in_i8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v244) {
  (printf("%hd\n", (v244)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v245) {
  ((printf("%hd", (v245))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v246, i16 v247) {
  ((printf("%hd", (v247))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v248) {
  (((*v248)=(in_i16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v249, i16* v250) {
  (((*v250)=(in_i16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v251) {
  (printf("%d\n", (v251)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v252) {
  ((printf("%d", (v252))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v253, i32 v254) {
  ((printf("%d", (v254))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v255) {
  (((*v255)=(in_i32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v256, i32* v257) {
  (((*v257)=(in_i32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v258) {
  (printf("%lld\n", (v258)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v259) {
  ((printf("%lld", (v259))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v260, i64 v261) {
  ((printf("%lld", (v261))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v262) {
  (((*v262)=(in_i64())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v263, i64* v264) {
  (((*v264)=(in_i64())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v265) {
  (printf("%d\n", (v265)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v266) {
  ((printf("%d", (v266))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v267, u8 v268) {
  ((printf("%d", (v268))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v269) {
  (((*v269)=(in_u8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v270, u8* v271) {
  (((*v271)=(in_u8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v272) {
  (printf("%hd\n", (v272)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v273) {
  ((printf("%hd", (v273))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v274, u16 v275) {
  ((printf("%hd", (v275))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v276) {
  (((*v276)=(in_u16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v277, u16* v278) {
  (((*v278)=(in_u16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v279) {
  (printf("%u\n", (v279)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v280) {
  ((printf("%u", (v280))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v281, u32 v282) {
  ((printf("%u", (v282))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v283) {
  (((*v283)=(in_u32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v284, u32* v285) {
  (((*v285)=(in_u32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v286) {
  (printf("%llu\n", (v286)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v287) {
  ((printf("%llu", (v287))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v288, u64 v289) {
  ((printf("%llu", (v289))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v290) {
  (((*v290)=(in_u64())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v291, u64* v292) {
  (((*v292)=(in_u64())));
  return (__ZH_LOP__Out_());
}
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v293) {
  (((*((v293)))=(((*((v293))))+((((i64)1))))));
}
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v294, i64 v295) {
  return (((*((v294))))!=((v295)));
}
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v296) {
  return ((((v296))->begin));
}
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v297) {
  return ((((v297))->end));
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v298, i64 v299) {
  __ZH_TYPE_Range v300;
  (((((&(v300))->begin))=(v298)));
  (((((&(v300))->end))=(v299)));
  return (v300);
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v301, i64 v302) {
  return (__ZH_BOP__dot_dot_i64i64((v301), (__ZH_LOP__minus_i64((v302)))));
}
i64 __ZH_LOP_rangeMin_() {
  return (__ZH_LOP__minus_i64((((i64)9223372036854775807))));
}
i64 __ZH_LOP_rangeMax_() {
  return (((i64)9223372036854775807));
}
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v303) {
  return (__ZH_BOP__dot_dot_i64i64((v303), (__ZH_LOP_rangeMax_())));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v304) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (v304)));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v305) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (__ZH_LOP__minus_i64((v305)))));
}
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v306) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP__minus_i64((((&(v306))->begin)))), (((&(v306))->end))));
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v307, i64 v308) {
  return (__ZH_BOP__dot_dot_i64i64((v307), (((v308))+((((i64)1))))));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v309) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((v309))+((((i64)1))))));
}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v310) {
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((__ZH_LOP__minus_i64((v310))))+((((i64)1))))));
}
bool __ZH_BOP__equal_equal_i64Range(i64 v311, __ZH_TYPE_Range v312) {
  if ((((((&(v312))->begin)))<((((&(v312))->end))))) {
    return (((((((&(v312))->begin)))<=((v311))))&&((((v311))<((((&(v312))->end))))));
  } else {
    return (((((((&(v312))->end)))<=((v311))))&&((((v311))<((((&(v312))->begin))))));
  }
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v337) {
  __ZH_TYPE_VecIter_lessi64_greater v338;
  (((((&(v338))->ptr))=(v337)));
  return (v338);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v339) {
  ((((((v339))->ptr))=(((i64*)(((((i64)((((v339))->ptr)))))+((((((i64)1)))*((((i64)8))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v340, __ZH_TYPE_VecIter_lessi64_greater v341) {
  return (((((i64)((((v340))->ptr)))))!=((((i64)(((&(v341))->ptr))))));
}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v342) {
  return &(*((((&(v342))->ptr))));
}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v313, i64 v314) {
  return (((i64*)(((i64*)(((((i64)((((v313))->head)))))+((((v314))*((((i64)8))))))))));
}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v315, i64 v316) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v315), (v316)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v317) {
  (printf("%s", ("[")));
  {
      i64 v321;
      i64 v320;
      i64 v319;
      __ZH_TYPE_Range v318;
      (((v318)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v317))->size))))));
      (((v319)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v318)))))));
      (((v320)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v318)))))));
      (((v321)=(v319)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v321))), (v320)))) {
        if ((!((!((v321)))))) {
          (printf("%s", (" ")));
        }
        (printf("%lld", (*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v317), (v321)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v321)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v322) {
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
        (printf("%lld\n", (*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v322), (v326)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v326)))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v327) {
  i64 v328;
  (((v328)=((((v327))->capacity))));
  if ((((v328))==((((i64)0))))) {
    (((v328)=(((i64)1))));
    ((((((v327))->head))=(((i64*)(alloc((((i64)8))))))));
    ((((((v327))->capacity))=(v328)));
  } else {
    i64* v329;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v328), (((i64)2))));
    (((v329)=(((i64*)(alloc((((v328))*((((i64)8))))))))));
    {
        i64 v333;
        i64 v332;
        i64 v331;
        __ZH_TYPE_Range v330;
        (((v330)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v327))->size))))));
        (((v331)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v330)))))));
        (((v332)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v330)))))));
        (((v333)=(v331)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v333))), (v332)))) {
          (((*((((i64*)(((((i64)(v329))))+((((v333))*((((i64)8))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v327), (v333)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v333)))));
        }
      }
    (free((void*) (((i64)((((v327))->head))))));
    ((((((v327))->head))=(v329)));
  }
  ((((((v327))->capacity))=(v328)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v334, i64 v335) {
  if (((((((v334))->size)))==(((((v334))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((v334)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v334), ((((v334))->size))))=(v335)));
  (__ZH_LOP__plus_plus_i64R(&((((v334))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v336) {
  (__ZH_LOP__minus_minus_i64R(&((((v336))->size))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v343) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P(((((v343))->head))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v344) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v344), ((((v344))->size))))));
}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v345) {
  return &(*(((((v345))->head))));
}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v346) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v346), ((((((v346))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v347) {
  if ((!((!((((i64)((((v347))->head))))))))) {
    (free((void*) (((i64)((((v347))->head))))));
    ((((((v347))->size))=(((i64)0))));
    ((((((v347))->capacity))=(((i64)0))));
    ((((((v347))->head))=(((i64*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v348) {
  __ZH_TYPE_Vec_lessi64_greater v349;
  (((((&(v349))->head))=(((i64*)(((i64)0))))));
  (((((&(v349))->size))=(((i64)0))));
  (((((&(v349))->capacity))=(((i64)0))));
  while ((((((&(v349))->capacity)))<((v348)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((&((v349)))));
  }
  (((((&(v349))->size))=(v348)));
  (((((&(v349))->capacity))=(v348)));
  {
      i64 v353;
      i64 v352;
      i64 v351;
      __ZH_TYPE_Range v350;
      (((v350)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v349))->size))))));
      (((v351)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v350)))))));
      (((v352)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v350)))))));
      (((v353)=(v351)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v353))), (v352)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v349))), (v353)))=(__ZH_LOP_i64_())));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v353)))));
      }
    }
  return (v349);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v349)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v354, i64 v355) {
  __ZH_TYPE_Vec_lessi64_greater v356;
  (((v356)=(__ZH_LOP_Vec_lessi64_greater_i64((v354)))));
  {
      i64 v360;
      i64 v359;
      i64 v358;
      __ZH_TYPE_Range v357;
      (((v357)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v356))->size))))));
      (((v358)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v357)))))));
      (((v359)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v357)))))));
      (((v360)=(v358)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v360))), (v359)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v356))), (v360)))=(v355)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v360)))));
      }
    }
  return (v356);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v356)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {
  return (__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v361) {
  __ZH_TYPE_Vec_lessi64_greater v362;
  (((v362)=(__ZH_LOP_Vec_lessi64_greater_i64((((&(*v361))->size))))));
  {
      i64 v366;
      i64 v365;
      i64 v364;
      __ZH_TYPE_Range v363;
      (((v363)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v361))->size))))));
      (((v364)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v363)))))));
      (((v365)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v363)))))));
      (((v366)=(v364)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v366))), (v365)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v362))), (v366)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((*v361))), (v366)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v366)))));
      }
    }
  return (v362);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v362)))));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v367, i64 v368) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v367))), (v368)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v369, __ZH_TYPE_Vec_lessi64_greater* v370) {
  {
      __ZH_TYPE_VecIter_lessi64_greater v374;
      __ZH_TYPE_VecIter_lessi64_greater v373;
      __ZH_TYPE_VecIter_lessi64_greater v372;
      __ZH_TYPE_Vec_lessi64_greater v371;
      (((v371)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v370)))));
      (((v372)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((&((v371)))))));
      (((v373)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((&((v371)))))));
      (((v374)=(v372)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater((&((v374))), (v373)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v369))), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v374)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand((&((v374)))));
      }
    }
}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v375) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v375)))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v376) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v376)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v377) {
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v377)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v378) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v378))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v379, __ZH_TYPE_Vec_lessi64_greater* v380) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v380))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v381, i64 v382) {
  if ((((v382))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v382), ((((v381))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v381), (v382)));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v383, i64 v384, i64 v385) {
  __ZH_TYPE_Vec_lessi64_greater v386;
  (((v386)=(__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))))));
  {
      i64 v390;
      i64 v389;
      i64 v388;
      __ZH_TYPE_Range v387;
      (((v387)=(__ZH_BOP__dot_dot_i64i64((v384), (v385)))));
      (((v388)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v387)))))));
      (((v389)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v387)))))));
      (((v390)=(v388)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v390))), (v389)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((v386))), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v383), (v390)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v390)))));
      }
    }
  return (v386);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v386)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v391, __ZH_TYPE_Range v392) {
  i64 v394;
  i64 v393;
  ((((v393)=(((&(v392))->begin)))), (((v394)=(((&(v392))->end)))));
  if ((((v393))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v393), ((((v391))->size))));
  }
  if ((((v393))<((((i64)0))))) {
    (((v393)=(((i64)0))));
  }
  if ((((v394))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v394), ((((v391))->size))));
  }
  if ((((v394))>(((((v391))->size))))) {
    (((v394)=((((v391))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v391), (v393), (v394)));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v395) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v395), (((i64)0)), ((((v395))->size))));
}
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v396, __ZH_TYPE_Vec_lessi64_greater* v397) {
  return (((bool)0));
}
void __ZH_LOP_swap_i64Pi64P(i64* v398, i64* v399) {
  i64 v400;
  (((v400)=(*((v398)))));
  (((*((v398)))=(*((v399)))));
  (((*((v399)))=(v400)));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v401, i64* v402) {
  i64* v405;
  i64* v404;
  i64* v403;
  ((((v403)=(((i64*)(((((i64)(v402))))-((((((i64)1)))*((((i64)8)))))))))), (((v404)=(v401))), (((v405)=(v401))));
  (((v405)=(v401)));
  while ((((((i64)(v405))))!=((((i64)(v403)))))) {
    if ((((*((v405))))<((*((v403)))))) {
      (__ZH_LOP_swap_i64Pi64P((v404), (v405)));
      (((v404)=(((i64*)(((((i64)(v404))))+((((((i64)1)))*((((i64)8))))))))));
    }
    (((v405)=(((i64*)(((((i64)(v405))))+((((((i64)1)))*((((i64)8))))))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v404), (v403)));
  return (v404);
}
void __ZH_LOP_qsort_i64Pi64P(i64* v406, i64* v407) {
  i64 v409;
  i64 v408;
  (((v408)=(((((i64)(v407))))-((((i64)(v406)))))));
  (((v409)=(((i64)8))));
  if ((((v408))>((v409)))) {
    i64* v410;
    (((v410)=(__ZH_LOP_partition_i64Pi64P((v406), (v407)))));
    (__ZH_LOP_qsort_i64Pi64P((v406), (v410)));
    (((v410)=(((i64*)(((((i64)(v410))))+((((((i64)1)))*((((i64)8))))))))));
    (__ZH_LOP_qsort_i64Pi64P((v410), (v407)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v411) {
  __ZH_TYPE_VecIter_lessi64_greater v413;
  __ZH_TYPE_VecIter_lessi64_greater v412;
  (((v412)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((v411)))));
  (((v413)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((v411)))));
  (__ZH_LOP_qsort_i64Pi64P((((&(v412))->ptr)), (((&(v413))->ptr))));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v414) {
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand((&((*v414)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v415, i64 v416) {
  __ZH_TYPE_Vec_lessi64_greater v417;
  (((v417)=(__ZH_LOP_Vec_lessi64_greater_i64((((v416))-((v415)))))));
  {
      i64 v421;
      i64 v420;
      i64 v419;
      __ZH_TYPE_Range v418;
      (((v418)=(__ZH_BOP__dot_dot_i64i64((v415), (v416)))));
      (((v419)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v418)))))));
      (((v420)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v418)))))));
      (((v421)=(v419)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v421))), (v420)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v417))), (((v421))-((v415)))))=(v421)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v421)))));
      }
    }
  return (v417);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v417)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v422) {
  __ZH_TYPE_Vec_lessi64_greater v423;
  (((v423)=(__ZH_LOP_Vec_lessi64_greater_())));
  {
      i64 v427;
      i64 v426;
      i64 v425;
      __ZH_TYPE_Range v424;
      (((v424)=(*((v422)))));
      (((v425)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v424)))))));
      (((v426)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v424)))))));
      (((v427)=(v425)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v427))), (v426)))) {
        (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v423), (v427)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v427)))));
      }
    }
  return (v423);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v423)))));
}
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v428, i64 v429) {
  return (*((((char*)(((((i64)(*((v428))))))+((v429)))))));
}
char __ZH_BOP__caret_stri64(str v430, i64 v431) {
  return (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v430))), (v431)));
}
bool __ZH_BOP__equal_equal_charstr(char v432, str v433) {
  return (((v432))==((__ZH_BOP__caret_stri64((v433), (((i64)0))))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v458) {
  __ZH_TYPE_VecIter_lesschar_greater v459;
  (((((&(v459))->ptr))=(v458)));
  return (v459);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v460) {
  ((((((v460))->ptr))=(((char*)(((((i64)((((v460))->ptr)))))+((((((i64)1)))*((((i64)1))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v461, __ZH_TYPE_VecIter_lesschar_greater v462) {
  return (((((i64)((((v461))->ptr)))))!=((((i64)(((&(v462))->ptr))))));
}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v463) {
  return &(*((((&(v463))->ptr))));
}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v434, i64 v435) {
  return (((char*)(((char*)(((((i64)((((v434))->head)))))+((((v435))*((((i64)1))))))))));
}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v436, i64 v437) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v436), (v437)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v438) {
  (printf("%s", ("[")));
  {
      i64 v442;
      i64 v441;
      i64 v440;
      __ZH_TYPE_Range v439;
      (((v439)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v438))->size))))));
      (((v440)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v439)))))));
      (((v441)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v439)))))));
      (((v442)=(v440)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v442))), (v441)))) {
        if ((!((!((v442)))))) {
          (printf("%s", (" ")));
        }
        (printf("%c", (*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v438), (v442)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v442)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v443) {
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
        (printf("%c\n", (*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v443), (v447)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v447)))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v448) {
  i64 v449;
  (((v449)=((((v448))->capacity))));
  if ((((v449))==((((i64)0))))) {
    (((v449)=(((i64)1))));
    ((((((v448))->head))=(((char*)(alloc((((i64)1))))))));
    ((((((v448))->capacity))=(v449)));
  } else {
    char* v450;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v449), (((i64)2))));
    (((v450)=(((char*)(alloc((((v449))*((((i64)1))))))))));
    {
        i64 v454;
        i64 v453;
        i64 v452;
        __ZH_TYPE_Range v451;
        (((v451)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v448))->size))))));
        (((v452)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v451)))))));
        (((v453)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v451)))))));
        (((v454)=(v452)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v454))), (v453)))) {
          (((*((((char*)(((((i64)(v450))))+((((v454))*((((i64)1))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v448), (v454)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v454)))));
        }
      }
    (free((void*) (((i64)((((v448))->head))))));
    ((((((v448))->head))=(v450)));
  }
  ((((((v448))->capacity))=(v449)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v455, char v456) {
  if (((((((v455))->size)))==(((((v455))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((v455)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v455), ((((v455))->size))))=(v456)));
  (__ZH_LOP__plus_plus_i64R(&((((v455))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v457) {
  (__ZH_LOP__minus_minus_i64R(&((((v457))->size))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v464) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP(((((v464))->head))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v465) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v465), ((((v465))->size))))));
}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v466) {
  return &(*(((((v466))->head))));
}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v467) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v467), ((((((v467))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v468) {
  if ((!((!((((i64)((((v468))->head))))))))) {
    (free((void*) (((i64)((((v468))->head))))));
    ((((((v468))->size))=(((i64)0))));
    ((((((v468))->capacity))=(((i64)0))));
    ((((((v468))->head))=(((char*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v469) {
  __ZH_TYPE_Vec_lesschar_greater v470;
  (((((&(v470))->head))=(((char*)(((i64)0))))));
  (((((&(v470))->size))=(((i64)0))));
  (((((&(v470))->capacity))=(((i64)0))));
  while ((((((&(v470))->capacity)))<((v469)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((&((v470)))));
  }
  (((((&(v470))->size))=(v469)));
  (((((&(v470))->capacity))=(v469)));
  {
      i64 v474;
      i64 v473;
      i64 v472;
      __ZH_TYPE_Range v471;
      (((v471)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v470))->size))))));
      (((v472)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v471)))))));
      (((v473)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v471)))))));
      (((v474)=(v472)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v474))), (v473)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v470))), (v474)))=(__ZH_LOP_char_())));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v474)))));
      }
    }
  return (v470);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v470)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v475, char v476) {
  __ZH_TYPE_Vec_lesschar_greater v477;
  (((v477)=(__ZH_LOP_Vec_lesschar_greater_i64((v475)))));
  {
      i64 v481;
      i64 v480;
      i64 v479;
      __ZH_TYPE_Range v478;
      (((v478)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v477))->size))))));
      (((v479)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v478)))))));
      (((v480)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v478)))))));
      (((v481)=(v479)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v481))), (v480)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v477))), (v481)))=(v476)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v481)))));
      }
    }
  return (v477);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v477)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {
  return (__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v482) {
  __ZH_TYPE_Vec_lesschar_greater v483;
  (((v483)=(__ZH_LOP_Vec_lesschar_greater_i64((((&(*v482))->size))))));
  {
      i64 v487;
      i64 v486;
      i64 v485;
      __ZH_TYPE_Range v484;
      (((v484)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v482))->size))))));
      (((v485)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v484)))))));
      (((v486)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v484)))))));
      (((v487)=(v485)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v487))), (v486)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v483))), (v487)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((*v482))), (v487)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v487)))));
      }
    }
  return (v483);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v483)))));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v488, char v489) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v488))), (v489)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v490, __ZH_TYPE_Vec_lesschar_greater* v491) {
  {
      __ZH_TYPE_VecIter_lesschar_greater v495;
      __ZH_TYPE_VecIter_lesschar_greater v494;
      __ZH_TYPE_VecIter_lesschar_greater v493;
      __ZH_TYPE_Vec_lesschar_greater v492;
      (((v492)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v491)))));
      (((v493)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&((v492)))))));
      (((v494)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((&((v492)))))));
      (((v495)=(v493)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater((&((v495))), (v494)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v490))), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v495)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand((&((v495)))));
      }
    }
}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v496) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v496)))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v497) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v497)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v498) {
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v498)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v499) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v499))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v500, __ZH_TYPE_Vec_lesschar_greater* v501) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v501))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v502, i64 v503) {
  if ((((v503))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v503), ((((v502))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v502), (v503)));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v504, i64 v505, i64 v506) {
  __ZH_TYPE_Vec_lesschar_greater v507;
  (((v507)=(__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))))));
  {
      i64 v511;
      i64 v510;
      i64 v509;
      __ZH_TYPE_Range v508;
      (((v508)=(__ZH_BOP__dot_dot_i64i64((v505), (v506)))));
      (((v509)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v508)))))));
      (((v510)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v508)))))));
      (((v511)=(v509)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v511))), (v510)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((v507))), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v504), (v511)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v511)))));
      }
    }
  return (v507);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v507)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v512, __ZH_TYPE_Range v513) {
  i64 v515;
  i64 v514;
  ((((v514)=(((&(v513))->begin)))), (((v515)=(((&(v513))->end)))));
  if ((((v514))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v514), ((((v512))->size))));
  }
  if ((((v514))<((((i64)0))))) {
    (((v514)=(((i64)0))));
  }
  if ((((v515))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v515), ((((v512))->size))));
  }
  if ((((v515))>(((((v512))->size))))) {
    (((v515)=((((v512))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v512), (v514), (v515)));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v516) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v516), (((i64)0)), ((((v516))->size))));
}
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v517, __ZH_TYPE_Vec_lesschar_greater* v518) {
  return (((bool)0));
}
void __ZH_LOP_swap_charPcharP(char* v519, char* v520) {
  char v521;
  (((v521)=(*((v519)))));
  (((*((v519)))=(*((v520)))));
  (((*((v520)))=(v521)));
}
char* __ZH_LOP_partition_charPcharP(char* v522, char* v523) {
  char* v526;
  char* v525;
  char* v524;
  ((((v524)=(((char*)(((((i64)(v523))))-((((((i64)1)))*((((i64)1)))))))))), (((v525)=(v522))), (((v526)=(v522))));
  (((v526)=(v522)));
  while ((((((i64)(v526))))!=((((i64)(v524)))))) {
    if ((((*((v526))))<((*((v524)))))) {
      (__ZH_LOP_swap_charPcharP((v525), (v526)));
      (((v525)=(((char*)(((((i64)(v525))))+((((((i64)1)))*((((i64)1))))))))));
    }
    (((v526)=(((char*)(((((i64)(v526))))+((((((i64)1)))*((((i64)1))))))))));
  }
  (__ZH_LOP_swap_charPcharP((v525), (v524)));
  return (v525);
}
void __ZH_LOP_qsort_charPcharP(char* v527, char* v528) {
  i64 v530;
  i64 v529;
  (((v529)=(((((i64)(v528))))-((((i64)(v527)))))));
  (((v530)=(((i64)1))));
  if ((((v529))>((v530)))) {
    char* v531;
    (((v531)=(__ZH_LOP_partition_charPcharP((v527), (v528)))));
    (__ZH_LOP_qsort_charPcharP((v527), (v531)));
    (((v531)=(((char*)(((((i64)(v531))))+((((((i64)1)))*((((i64)1))))))))));
    (__ZH_LOP_qsort_charPcharP((v531), (v528)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v532) {
  __ZH_TYPE_VecIter_lesschar_greater v534;
  __ZH_TYPE_VecIter_lesschar_greater v533;
  (((v533)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((v532)))));
  (((v534)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((v532)))));
  (__ZH_LOP_qsort_charPcharP((((&(v533))->ptr)), (((&(v534))->ptr))));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v535) {
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand((&((*v535)))));
}
__ZH_TYPE_Str __ZH_LOP_Str_() {
  __ZH_TYPE_Str v536;
  (((((&(v536))->data))=(__ZH_LOP_Vec_lesschar_greater_())));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v536))->data)))), (((char)(((u8)0))))));
  (((((&(v536))->size))=(((i64)0))));
  return (v536);
}
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v537) {
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(((((v537))->data))))));
}
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v538) {
  __ZH_TYPE_VecIter_lesschar_greater v539;
  (((v539)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&(((((v538))->data))))))));
  return (((str)(((&(v539))->ptr))));
}
char* __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v540, i64 v541) {
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(((((v540))->data)))), (v541)));
}
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v542, i64 v543) {
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((&(((((v542))->data)))), (v543)));
}
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v544, char v545) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v544))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v544))->data)))), (v545)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v544))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__plus_plus_i64R(&((((v544))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v546) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v546))->data))))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v546))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v546))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__minus_minus_i64R(&((((v546))->size))));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v547) {
  __ZH_TYPE_Str v548;
  (((v548)=(__ZH_LOP_Str_())));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&((((&(v548))->data))))));
  while ((((*((((char*)(v547))))))!=((((char)(((u8)0))))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v548))->data)))), (*((((char*)(v547)))))));
    (((v547)=(((str)(((((i64)(v547))))+((((i64)1))))))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v548))->data)))), (((char)(((u8)0))))));
  (((((&(v548))->size))=(((((&(((&(v548))->data)))->size)))-((((i64)1))))));
  return (v548);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v548)))));
}
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v549) {
  __ZH_TYPE_Str v550;
  (((v550)=(__ZH_LOP_Str_())));
  (((((&(v550))->data))=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(((&(*v549))->data))))));
  (((((&(v550))->size))=(((&(*v549))->size))));
  return (v550);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v550)))));
}
i64 __ZH_LOP_len_str(str v551) {
  i64 v552;
  (((v552)=(((i64)0))));
  while ((((*((((char*)(v551))))))!=((((char)(((u8)0))))))) {
    (__ZH_LOP__plus_plus_i64R(&(v552)));
    (((v551)=(((str)(((((i64)(v551))))+((((i64)1))))))));
  }
  return (v552);
}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v553) {
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v553)))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v554) {
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v554)))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v555, char v556) {
  (__ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar((&((*v555))), (v556)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v557, __ZH_TYPE_Str* v558) {
  {
      i64 v562;
      i64 v561;
      i64 v560;
      __ZH_TYPE_Range v559;
      (((v559)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v558))->size))))));
      (((v560)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v559)))))));
      (((v561)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v559)))))));
      (((v562)=(v560)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v562))), (v561)))) {
        char v563;
        (((v563)=(((char)(((i8)115))))));
        (((v563)=(*__ZH_BOP__dotcall_dotat_StrP_ampersandi64((&((*v558))), (v562)))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v557), (v563)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v562)))));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v564, str v565) {
  i64 v566;
  (((v566)=(__ZH_LOP_len_str((v565)))));
  {
      i64 v570;
      i64 v569;
      i64 v568;
      __ZH_TYPE_Range v567;
      (((v567)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (v566)))));
      (((v568)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v567)))))));
      (((v569)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v567)))))));
      (((v570)=(v568)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v570))), (v569)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v564), (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v565))), (v570)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v570)))));
      }
    }
}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v571) {
  (__ZH_LOP_out_StrR(&(*v571)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v572) {
  ((__ZH_LOP_put_StrR(&(*v572))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v573, __ZH_TYPE_Str* v574) {
  ((__ZH_LOP_put_StrR(&(*v574))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v575, __ZH_TYPE_Str* v576) {
  return (((bool)0));
}
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v577, i64 v578) {
  __ZH_TYPE_Str v580;
  __ZH_TYPE_Str v579;
  (((v579)=(__ZH_LOP_Str_())));
  (((v580)=(__ZH_LOP_Str_str((v577)))));
  {
      i64 v584;
      i64 v583;
      i64 v582;
      __ZH_TYPE_Range v581;
      (((v581)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (v578)))));
      (((v582)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v581)))))));
      (((v583)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v581)))))));
      (((v584)=(v582)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v584))), (v583)))) {
        (__ZH_BOP__plus_equal_StrRStrR(&(v579), &(v580)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v584)))));
      }
    }
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v580)))));
  return (v579);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v579)))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v580)))));
  return (__ZH_LOP_Str_());
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v579)))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v580)))));
}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_() {
  __ZH_TYPE_Str v585;
  (((v585)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v585), ("         _____ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v585), ("       /       \\\\__ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v585), ("     /             \\\\\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v585), ("   /   0    0        |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v585), ("  |     ..            |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v585), ("  /|        _/       /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v585), (" / .\\\\_____/         /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v585), ("/U\\\\|    \\\\___|   |__/\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v585), ("            /  /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v585), ("            |/U\\\\\\n")));
  return (v585);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v585)))));
}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_() {
  __ZH_TYPE_Str v586;
  (((v586)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v586), ("         _____         \\n       /       \\\\__     \\n     /             \\\\   \\n   /   0    0        | \\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\")));
  return (v586);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v586)))));
}
str __ZH_LOP_frog_raw_() {
  return ("         _____\\n       /       \\\\__\\n     /             \\\\\\n   /   0    0        |\\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\ ");
}
str __ZH_LOP_frog_() {
  return (__ZH_LOP_frog_raw_());
}
f64 __ZH_LOP_sqrt_f64(f64 v587) {
  f64 v588;
  (((v588)=(((f64)1.000000))));
  {
      i64 v592;
      i64 v591;
      i64 v590;
      __ZH_TYPE_Range v589;
      (((v589)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((i64)10))))));
      (((v590)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v589)))))));
      (((v591)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v589)))))));
      (((v592)=(v590)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v592))), (v591)))) {
        (__ZH_BOP__minus_equal_f64Rf64(&(v588), (((((((v588))*((v588))))-((v587))))/((((((f64)2.000000)))*((v588)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v592)))));
      }
    }
  return (v588);
}
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v593, f64 v594) {
  __ZH_TYPE_V2 v595;
  (((((&(v595))->x))=(v593)));
  (((((&(v595))->y))=(v594)));
  return (v595);
}
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v596, __ZH_TYPE_V2 v597) {
  (__ZH_BOP__plus_equal_f64Rf64(&(((&(v596))->x)), (((&(v597))->x))));
  (__ZH_BOP__plus_equal_f64Rf64(&(((&(v596))->y)), (((&(v597))->y))));
  return (v596);
}
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v598, __ZH_TYPE_V2 v599) {
  __ZH_TYPE_V2 v600;
  (((((&(v600))->x))=(((((((&(v598))->x)))*((((&(v599))->x)))))-((((((&(v598))->y)))*((((&(v599))->y))))))));
  (((((&(v600))->y))=(((((((&(v598))->x)))*((((&(v599))->y)))))+((((((&(v598))->y)))*((((&(v599))->x))))))));
  return (v600);
}
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v601) {
  return (__ZH_LOP_sqrt_f64((((((((&(v601))->x)))*((((&(v601))->x)))))+((((((&(v601))->y)))*((((&(v601))->y))))))));
}
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v602) {
  (printf("%f", (((&(v602))->x))));
  (printf("%s", (" ")));
  (printf("%f", (((&(v602))->y))));
}
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v603) {
  (printf("%f", (((&(v603))->x))));
  (printf("%s", (" ")));
  (printf("%f", (((&(v603))->y))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v604) {
  (__ZH_LOP_out_V2((v604)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v605) {
  ((__ZH_LOP_put_V2((v605))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v606, __ZH_TYPE_V2 v607) {
  ((__ZH_LOP_put_V2((v607))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
void __ZH_LOP_mandelbrot_i64f64f64f64(i64 v608, f64 v609, f64 v610, f64 v611) {
  f64 v715;
  __ZH_TYPE_Vec_lessStr_greater v714;
  (((v714)=(__ZH_LOP_Vec_lessStr_greater_())));
  (((v715)=(((v610))-((((((f64)1.500000)))*((v611)))))));
  while ((((v715))<((((v610))+((((((f64)1.500000)))*((v611)))))))) {
    f64 v717;
    __ZH_TYPE_Str v716;
    (((v716)=(__ZH_LOP_Str_())));
    (((v717)=(((v609))-((((((f64)1.500000)))*((v611)))))));
    while ((((v717))<((((v609))+((((((f64)1.500000)))*((v611)))))))) {
      i64 v721;
      bool v720;
      __ZH_TYPE_V2 v719;
      __ZH_TYPE_V2 v718;
      ((((v718)=(__ZH_LOP_V2_f64f64((((f64)0.000000)), (((f64)0.000000)))))), (((v719)=(__ZH_LOP_V2_f64f64((v717), (v715))))));
      (((v720)=(((bool)1))));
      (((v721)=(((i64)0))));
      while ((((((v721))<((v608))))&&((v720)))) {
        (((v718)=(__ZH_BOP__plus_V2V2((__ZH_BOP__asterisk_V2V2((v718), (v718))), (v719)))));
        if ((((__ZH_LOP_abs_V2((v718))))>((((f64)2.000000))))) {
          (((v720)=(((bool)0))));
        }
        (__ZH_BOP__plus_equal_i64Ri64(&(v721), (((i64)1))));
      }
      if ((v720)) {
        (__ZH_BOP__plus_equal_StrRstr(&(v716), ("*")));
      } else {
        (__ZH_BOP__plus_equal_StrRstr(&(v716), (" ")));
      }
      (__ZH_BOP__plus_equal_f64Rf64(&(v717), (((((f64)0.050000)))*((v611)))));
    }
    (__ZH_BOP__plus_equal_Vec_lessStr_greaterRStr(&(v714), (v716)));
    (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v716)))));
    (__ZH_BOP__plus_equal_f64Rf64(&(v715), (((((f64)0.100000)))*((v611)))));
  }
  (__ZH_BOP__dotcall_dotprintln_Vec_lessStr_greaterP_ampersand((&((v714)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v714)))));
}
__ZH_TYPE_VecIter_lessStr_greater __ZH_LOP_VecIter_lessStr_greater_StrP(__ZH_TYPE_Str* v636) {
  __ZH_TYPE_VecIter_lessStr_greater v637;
  (((((&(v637))->ptr))=(v636)));
  return (v637);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lessStr_greaterP_ampersand(__ZH_TYPE_VecIter_lessStr_greater* v638) {
  ((((((v638))->ptr))=(((__ZH_TYPE_Str*)(((((i64)((((v638))->ptr)))))+((((((i64)1)))*((((i64)32))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessStr_greaterP_ampersandVecIter_lessStr_greater(__ZH_TYPE_VecIter_lessStr_greater* v639, __ZH_TYPE_VecIter_lessStr_greater v640) {
  return (((((i64)((((v639))->ptr)))))!=((((i64)(((&(v640))->ptr))))));
}
__ZH_TYPE_Str* __ZH_LOP__asterisk_VecIter_lessStr_greater(__ZH_TYPE_VecIter_lessStr_greater v641) {
  return &(*((((&(v641))->ptr))));
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v612, i64 v613) {
  return (((__ZH_TYPE_Str*)(((__ZH_TYPE_Str*)(((((i64)((((v612))->head)))))+((((v613))*((((i64)32))))))))));
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v614, i64 v615) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v614), (v615)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v616) {
  (printf("%s", ("[")));
  {
      i64 v620;
      i64 v619;
      i64 v618;
      __ZH_TYPE_Range v617;
      (((v617)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v616))->size))))));
      (((v618)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v617)))))));
      (((v619)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v617)))))));
      (((v620)=(v618)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v620))), (v619)))) {
        if ((!((!((v620)))))) {
          (printf("%s", (" ")));
        }
        (__ZH_LOP_put_StrR(&(*((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v616), (v620)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v620)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v621) {
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
        (__ZH_LOP_out_StrR(&(*((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v621), (v625)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v625)))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v626) {
  i64 v627;
  (((v627)=((((v626))->capacity))));
  if ((((v627))==((((i64)0))))) {
    (((v627)=(((i64)1))));
    ((((((v626))->head))=(((__ZH_TYPE_Str*)(alloc((((i64)32))))))));
    ((((((v626))->capacity))=(v627)));
  } else {
    __ZH_TYPE_Str* v628;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v627), (((i64)2))));
    (((v628)=(((__ZH_TYPE_Str*)(alloc((((v627))*((((i64)32))))))))));
    {
        i64 v632;
        i64 v631;
        i64 v630;
        __ZH_TYPE_Range v629;
        (((v629)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v626))->size))))));
        (((v630)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v629)))))));
        (((v631)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v629)))))));
        (((v632)=(v630)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v632))), (v631)))) {
          (((*((((__ZH_TYPE_Str*)(((((i64)(v628))))+((((v632))*((((i64)32))))))))))=(__ZH_LOP_Str_StrR(&(*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((v626), (v632)))))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v632)))));
        }
      }
    (free((void*) (((i64)((((v626))->head))))));
    ((((((v626))->head))=(v628)));
  }
  ((((((v626))->capacity))=(v627)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr(__ZH_TYPE_Vec_lessStr_greater* v633, __ZH_TYPE_Str v634) {
  if (((((((v633))->size)))==(((((v633))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessStr_greaterP_ampersand((v633)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((v633), ((((v633))->size))))=(__ZH_LOP_Str_StrR(&(v634)))));
  (__ZH_LOP__plus_plus_i64R(&((((v633))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v635) {
  (__ZH_LOP__minus_minus_i64R(&((((v635))->size))));
}
__ZH_TYPE_VecIter_lessStr_greater __ZH_BOP__dotcall_dotbegin_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v642) {
  return (__ZH_LOP_VecIter_lessStr_greater_StrP(((((v642))->head))));
}
__ZH_TYPE_VecIter_lessStr_greater __ZH_BOP__dotcall_dotend_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v643) {
  return (__ZH_LOP_VecIter_lessStr_greater_StrP((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v643), ((((v643))->size))))));
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotfront_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v644) {
  return &(*(((((v644))->head))));
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotback_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v645) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessStr_greaterP_ampersandi64((v645), ((((((v645))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v646) {
  if ((!((!((((i64)((((v646))->head))))))))) {
    (free((void*) (((i64)((((v646))->head))))));
    ((((((v646))->size))=(((i64)0))));
    ((((((v646))->capacity))=(((i64)0))));
    ((((((v646))->head))=(((__ZH_TYPE_Str*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_i64(i64 v647) {
  __ZH_TYPE_Vec_lessStr_greater v648;
  (((((&(v648))->head))=(((__ZH_TYPE_Str*)(((i64)0))))));
  (((((&(v648))->size))=(((i64)0))));
  (((((&(v648))->capacity))=(((i64)0))));
  while ((((((&(v648))->capacity)))<((v647)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessStr_greaterP_ampersand((&((v648)))));
  }
  (((((&(v648))->size))=(v647)));
  (((((&(v648))->capacity))=(v647)));
  {
      i64 v652;
      i64 v651;
      i64 v650;
      __ZH_TYPE_Range v649;
      (((v649)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v648))->size))))));
      (((v650)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v649)))))));
      (((v651)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v649)))))));
      (((v652)=(v650)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v652))), (v651)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((&((v648))), (v652)))=(__ZH_LOP_Str_())));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v652)))));
      }
    }
  return (v648);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v648)))));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_i64Str(i64 v653, __ZH_TYPE_Str v654) {
  __ZH_TYPE_Vec_lessStr_greater v655;
  (((v655)=(__ZH_LOP_Vec_lessStr_greater_i64((v653)))));
  {
      i64 v659;
      i64 v658;
      i64 v657;
      __ZH_TYPE_Range v656;
      (((v656)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v655))->size))))));
      (((v657)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v656)))))));
      (((v658)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v656)))))));
      (((v659)=(v657)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v659))), (v658)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((&((v655))), (v659)))=(__ZH_LOP_Str_StrR(&(v654)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v659)))));
      }
    }
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v654)))));
  return (v655);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v655)))));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_() {
  return (__ZH_LOP_Vec_lessStr_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_LOP_Vec_lessStr_greater_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v660) {
  __ZH_TYPE_Vec_lessStr_greater v661;
  (((v661)=(__ZH_LOP_Vec_lessStr_greater_i64((((&(*v660))->size))))));
  {
      i64 v665;
      i64 v664;
      i64 v663;
      __ZH_TYPE_Range v662;
      (((v662)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v660))->size))))));
      (((v663)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v662)))))));
      (((v664)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v662)))))));
      (((v665)=(v663)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v665))), (v664)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((&((v661))), (v665)))=(__ZH_LOP_Str_StrR(&(*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((&((*v660))), (v665)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v665)))));
      }
    }
  return (v661);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v661)))));
}
void __ZH_BOP__plus_equal_Vec_lessStr_greaterRStr(__ZH_TYPE_Vec_lessStr_greater* v666, __ZH_TYPE_Str v667) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr((&((*v666))), (v667)));
}
void __ZH_BOP__plus_equal_Vec_lessStr_greaterRVec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v668, __ZH_TYPE_Vec_lessStr_greater* v669) {
  {
      __ZH_TYPE_VecIter_lessStr_greater v673;
      __ZH_TYPE_VecIter_lessStr_greater v672;
      __ZH_TYPE_VecIter_lessStr_greater v671;
      __ZH_TYPE_Vec_lessStr_greater v670;
      (((v670)=(__ZH_LOP_Vec_lessStr_greater_Vec_lessStr_greaterR(&(*v669)))));
      (((v671)=(__ZH_BOP__dotcall_dotbegin_Vec_lessStr_greaterP_ampersand((&((v670)))))));
      (((v672)=(__ZH_BOP__dotcall_dotend_Vec_lessStr_greaterP_ampersand((&((v670)))))));
      (((v673)=(v671)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessStr_greaterP_ampersandVecIter_lessStr_greater((&((v673))), (v672)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr((&((*v668))), (*__ZH_LOP__asterisk_VecIter_lessStr_greater((v673)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessStr_greaterP_ampersand((&((v673)))));
      }
    }
}
void __ZH_LOP_put_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v674) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessStr_greaterP_ampersand((&((*v674)))));
}
void __ZH_LOP_out_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v675) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessStr_greaterP_ampersand((&((*v675)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v676) {
  (__ZH_LOP_out_Vec_lessStr_greaterR(&(*v676)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v677) {
  ((__ZH_LOP_put_Vec_lessStr_greaterR(&(*v677))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessStr_greaterR(__ZH_TYPE_Out v678, __ZH_TYPE_Vec_lessStr_greater* v679) {
  ((__ZH_LOP_put_Vec_lessStr_greaterR(&(*v679))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Str* __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64(__ZH_TYPE_Vec_lessStr_greater* v680, i64 v681) {
  if ((((v681))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v681), ((((v680))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((v680), (v681)));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessStr_greater* v682, i64 v683, i64 v684) {
  __ZH_TYPE_Vec_lessStr_greater v685;
  (((v685)=(__ZH_LOP_Vec_lessStr_greater_i64((((i64)0))))));
  {
      i64 v689;
      i64 v688;
      i64 v687;
      __ZH_TYPE_Range v686;
      (((v686)=(__ZH_BOP__dot_dot_i64i64((v683), (v684)))));
      (((v687)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v686)))))));
      (((v688)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v686)))))));
      (((v689)=(v687)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v689))), (v688)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessStr_greaterP_ampersandStr((&((v685))), (*__ZH_BOP__dotcall_dotat_Vec_lessStr_greaterP_ampersandi64((v682), (v689)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v689)))));
      }
    }
  return (v685);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessStr_greaterP_ampersand((&((v685)))));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandRange(__ZH_TYPE_Vec_lessStr_greater* v690, __ZH_TYPE_Range v691) {
  i64 v693;
  i64 v692;
  ((((v692)=(((&(v691))->begin)))), (((v693)=(((&(v691))->end)))));
  if ((((v692))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v692), ((((v690))->size))));
  }
  if ((((v692))<((((i64)0))))) {
    (((v692)=(((i64)0))));
  }
  if ((((v693))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v693), ((((v690))->size))));
  }
  if ((((v693))>(((((v690))->size))))) {
    (((v693)=((((v690))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64i64((v690), (v692), (v693)));
}
__ZH_TYPE_Vec_lessStr_greater __ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v694) {
  return (__ZH_BOP__dotcall_dotsub_Vec_lessStr_greaterP_ampersandi64i64((v694), (((i64)0)), ((((v694))->size))));
}
bool __ZH_BOP__less_Vec_lessStr_greaterRVec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v695, __ZH_TYPE_Vec_lessStr_greater* v696) {
  return (((bool)0));
}
void __ZH_LOP_swap_StrPStrP(__ZH_TYPE_Str* v697, __ZH_TYPE_Str* v698) {
  __ZH_TYPE_Str v699;
  (((v699)=(*((v697)))));
  (((*((v697)))=(__ZH_LOP_Str_StrR(&(*((v698)))))));
  (((*((v698)))=(__ZH_LOP_Str_StrR(&(v699)))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v699)))));
}
__ZH_TYPE_Str* __ZH_LOP_partition_StrPStrP(__ZH_TYPE_Str* v700, __ZH_TYPE_Str* v701) {
  __ZH_TYPE_Str* v704;
  __ZH_TYPE_Str* v703;
  __ZH_TYPE_Str* v702;
  ((((v702)=(((__ZH_TYPE_Str*)(((((i64)(v701))))-((((((i64)1)))*((((i64)32)))))))))), (((v703)=(v700))), (((v704)=(v700))));
  (((v704)=(v700)));
  while ((((((i64)(v704))))!=((((i64)(v702)))))) {
    if ((__ZH_BOP__less_StrRStrR(&(*((v704))), &(*((v702)))))) {
      (__ZH_LOP_swap_StrPStrP((v703), (v704)));
      (((v703)=(((__ZH_TYPE_Str*)(((((i64)(v703))))+((((((i64)1)))*((((i64)32))))))))));
    }
    (((v704)=(((__ZH_TYPE_Str*)(((((i64)(v704))))+((((((i64)1)))*((((i64)32))))))))));
  }
  (__ZH_LOP_swap_StrPStrP((v703), (v702)));
  return (v703);
}
void __ZH_LOP_qsort_StrPStrP(__ZH_TYPE_Str* v705, __ZH_TYPE_Str* v706) {
  i64 v708;
  i64 v707;
  (((v707)=(((((i64)(v706))))-((((i64)(v705)))))));
  (((v708)=(((i64)32))));
  if ((((v707))>((v708)))) {
    __ZH_TYPE_Str* v709;
    (((v709)=(__ZH_LOP_partition_StrPStrP((v705), (v706)))));
    (__ZH_LOP_qsort_StrPStrP((v705), (v709)));
    (((v709)=(((__ZH_TYPE_Str*)(((((i64)(v709))))+((((((i64)1)))*((((i64)32))))))))));
    (__ZH_LOP_qsort_StrPStrP((v709), (v706)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessStr_greaterP_ampersand(__ZH_TYPE_Vec_lessStr_greater* v710) {
  __ZH_TYPE_VecIter_lessStr_greater v712;
  __ZH_TYPE_VecIter_lessStr_greater v711;
  (((v711)=(__ZH_BOP__dotcall_dotbegin_Vec_lessStr_greaterP_ampersand((v710)))));
  (((v712)=(__ZH_BOP__dotcall_dotend_Vec_lessStr_greaterP_ampersand((v710)))));
  (__ZH_LOP_qsort_StrPStrP((((&(v711))->ptr)), (((&(v712))->ptr))));
}
void __ZH_LOP_sort_Vec_lessStr_greaterR(__ZH_TYPE_Vec_lessStr_greater* v713) {
  (__ZH_BOP__dotcall_dotsort_Vec_lessStr_greaterP_ampersand((&((*v713)))));
}
int main(int argc, char *argv[])  {
  f64 v722;
  (__ZH_LOP__less_Out((__ZH_ROP__less_str(("Mandelbrot set:")))));
  (__ZH_LOP_mandelbrot_i64f64f64f64((((i64)25)), (__ZH_LOP__minus_f64((((f64)0.750000)))), (((f64)0.000000)), (((f64)1.000000))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_str(("Zooming [-1.39, 0.0]:")))));
  (((v722)=(((f64)2.000000))));
  while ((((v722))>((((f64)0.050000))))) {
    (__ZH_LOP_mandelbrot_i64f64f64f64((((i64)100)), (__ZH_LOP__minus_f64((((f64)1.390000)))), (((f64)0.000000)), (v722)));
    (__ZH_BOP__asterisk_equal_f64Rf64(&(v722), (((f64)0.500000))));
  }
}
