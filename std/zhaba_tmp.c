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
struct __PROT_ZH_TYPE_AVLNode_lessi64_greater;
typedef struct __PROT_ZH_TYPE_AVLNode_lessi64_greater __ZH_TYPE_AVLNode_lessi64_greater;
struct __PROT_ZH_TYPE_AVLTree_lessi64_greater;
typedef struct __PROT_ZH_TYPE_AVLTree_lessi64_greater __ZH_TYPE_AVLTree_lessi64_greater;
struct __PROT_ZH_TYPE_Rng;
typedef struct __PROT_ZH_TYPE_Rng __ZH_TYPE_Rng;
struct __PROT_ZH_TYPE_V2;
typedef struct __PROT_ZH_TYPE_V2 __ZH_TYPE_V2;
struct __PROT_ZH_TYPE_VecIter_lesschar_greater;
typedef struct __PROT_ZH_TYPE_VecIter_lesschar_greater __ZH_TYPE_VecIter_lesschar_greater;
struct __PROT_ZH_TYPE_Vec_lesschar_greater;
typedef struct __PROT_ZH_TYPE_Vec_lesschar_greater __ZH_TYPE_Vec_lesschar_greater;
struct __PROT_ZH_TYPE_Str;
typedef struct __PROT_ZH_TYPE_Str __ZH_TYPE_Str;
struct __PROT_ZH_TYPE_VecIter_lessi64_greater;
typedef struct __PROT_ZH_TYPE_VecIter_lessi64_greater __ZH_TYPE_VecIter_lessi64_greater;
struct __PROT_ZH_TYPE_Vec_lessi64_greater;
typedef struct __PROT_ZH_TYPE_Vec_lessi64_greater __ZH_TYPE_Vec_lessi64_greater;
struct __PROT_ZH_TYPE_Range;
typedef struct __PROT_ZH_TYPE_Range __ZH_TYPE_Range;
struct __PROT_ZH_TYPE_Out;
typedef struct __PROT_ZH_TYPE_Out __ZH_TYPE_Out;

struct __PROT_ZH_TYPE_AVLNode_lessi64_greater {
  __ZH_TYPE_AVLNode_lessi64_greater* rhs;
  i64 val;
  __ZH_TYPE_AVLNode_lessi64_greater* lhs;
  i64 h;
};
struct __PROT_ZH_TYPE_AVLTree_lessi64_greater {
  __ZH_TYPE_AVLNode_lessi64_greater* root;
};
struct __PROT_ZH_TYPE_Rng {
  i64 seed;
};
struct __PROT_ZH_TYPE_V2 {
  f64 y;
  f64 x;
};
struct __PROT_ZH_TYPE_VecIter_lesschar_greater {
  char* ptr;
};
struct __PROT_ZH_TYPE_Vec_lesschar_greater {
  char* head;
  i64 capacity;
  i64 size;
};
struct __PROT_ZH_TYPE_Str {
  i64 size;
  __ZH_TYPE_Vec_lesschar_greater data;
};
struct __PROT_ZH_TYPE_VecIter_lessi64_greater {
  i64* ptr;
};
struct __PROT_ZH_TYPE_Vec_lessi64_greater {
  i64* head;
  i64 capacity;
  i64 size;
};
struct __PROT_ZH_TYPE_Range {
  i64 end;
  i64 begin;
};
struct __PROT_ZH_TYPE_Out {
  bool complex;
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
i8 __ZH_LOP_i8_();
i16 __ZH_LOP_i16_();
i32 __ZH_LOP_i32_();
i64 __ZH_LOP_i64_();
u8 __ZH_LOP_u8_();
u16 __ZH_LOP_u16_();
u32 __ZH_LOP_u32_();
u64 __ZH_LOP_u64_();
char __ZH_LOP_char_();
i64 __ZH_LOP_max_i64i64(i64 v318, i64 v319);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v344);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v346);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v347, __ZH_TYPE_VecIter_lessi64_greater v348);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v349);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v320, i64 v321);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v322, i64 v323);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v324);
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v329);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v334);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v341, i64 v342);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v343);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v350);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v351);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v352);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v353);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v354);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v355);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v361, i64 v362);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v368);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v374, i64 v375);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v376, __ZH_TYPE_Vec_lessi64_greater* v377);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v382);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v383);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v384);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v385);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v386, __ZH_TYPE_Vec_lessi64_greater* v387);
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v388, i64 v389);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v390, i64 v391, i64 v392);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v398, __ZH_TYPE_Range v399);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v402);
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v403, __ZH_TYPE_Vec_lessi64_greater* v404);
void __ZH_LOP_swap_i64Pi64P(i64* v405, i64* v406);
i64* __ZH_LOP_partition_i64Pi64P(i64* v408, i64* v409);
void __ZH_LOP_qsort_i64Pi64P(i64* v413, i64* v414);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v418);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v421);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v422, i64 v423);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v429);
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v435, i64 v436);
char __ZH_BOP__caret_stri64(str v437, i64 v438);
bool __ZH_BOP__equal_equal_charstr(char v439, str v440);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v465);
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v467);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v468, __ZH_TYPE_VecIter_lesschar_greater v469);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v470);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v441, i64 v442);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v443, i64 v444);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v445);
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v450);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v455);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v462, char v463);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v464);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v471);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v472);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v473);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v474);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v475);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v476);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v482, char v483);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v489);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v495, char v496);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v497, __ZH_TYPE_Vec_lesschar_greater* v498);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v503);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v504);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v505);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v506);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v507, __ZH_TYPE_Vec_lesschar_greater* v508);
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v509, i64 v510);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v511, i64 v512, i64 v513);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v519, __ZH_TYPE_Range v520);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v523);
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v524, __ZH_TYPE_Vec_lesschar_greater* v525);
void __ZH_LOP_swap_charPcharP(char* v526, char* v527);
char* __ZH_LOP_partition_charPcharP(char* v529, char* v530);
void __ZH_LOP_qsort_charPcharP(char* v534, char* v535);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v539);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v542);
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v544);
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v545);
char* __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v547, i64 v548);
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v549, i64 v550);
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v551, char v552);
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v553);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v554);
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v556);
i64 __ZH_LOP_len_str(str v558);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v560);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v561);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v562, char v563);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v564, __ZH_TYPE_Str* v565);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v571, str v572);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v578);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v579);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v580, __ZH_TYPE_Str* v581);
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v582, __ZH_TYPE_Str* v583);
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v584, i64 v585);
__ZH_TYPE_Str __ZH_LOP_frog_escaped_();
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_();
str __ZH_LOP_frog_raw_();
str __ZH_LOP_frog_();
f64 __ZH_LOP_sqrt_f64(f64 v594);
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v600, f64 v601);
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v603, __ZH_TYPE_V2 v604);
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v605, __ZH_TYPE_V2 v606);
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v608);
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v609);
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v610);
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v611);
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v612);
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v613, __ZH_TYPE_V2 v614);
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v615);
__ZH_TYPE_Rng __ZH_LOP_Rng_();
i64 __ZH_BOP__dotcall_dotcall_RngP_ampersand(__ZH_TYPE_Rng* v617);
int main(int argc, char *argv[]) ;
__ZH_TYPE_AVLNode_lessi64_greater __ZH_LOP_AVLNode_lessi64_greater_i64R(i64* v618);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_LOP_new_AVLNode_lessi64_greater(__ZH_TYPE_AVLNode_lessi64_greater v620);
bool __ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v622);
bool __ZH_LOP__exclamation_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v623);
i64 __ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP_ampersand(__ZH_TYPE_AVLNode_lessi64_greater* v624);
i64 __ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP_ampersand(__ZH_TYPE_AVLNode_lessi64_greater* v625);
void __ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP_ampersand(__ZH_TYPE_AVLNode_lessi64_greater* v626);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotrrot_AVLNode_lessi64_greaterP_ampersand(__ZH_TYPE_AVLNode_lessi64_greater* v627);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotlrot_AVLNode_lessi64_greaterP_ampersand(__ZH_TYPE_AVLNode_lessi64_greater* v629);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotbalance_AVLNode_lessi64_greaterP_ampersand(__ZH_TYPE_AVLNode_lessi64_greater* v631);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterP_ampersandi64R(__ZH_TYPE_AVLNode_lessi64_greater* v632, i64* v633);
void __ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterP_ampersandStrR(__ZH_TYPE_AVLNode_lessi64_greater* v635, __ZH_TYPE_Str* v636);
__ZH_TYPE_AVLTree_lessi64_greater __ZH_LOP_AVLTree_lessi64_greater_();
void __ZH_BOP__dotcall_dotinsert_AVLTree_lessi64_greaterP_ampersandi64(__ZH_TYPE_AVLTree_lessi64_greater* v640, i64 v641);
void __ZH_BOP__plus_equal_AVLTree_lessi64_greaterRi64(__ZH_TYPE_AVLTree_lessi64_greater* v642, i64 v643);
void __ZH_LOP_toVec_Vec_lessi64_greaterRAVLNode_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v644, __ZH_TYPE_AVLNode_lessi64_greater* v645);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_AVLTree_lessi64_greaterP_ampersand(__ZH_TYPE_AVLTree_lessi64_greater* v646);
void __ZH_BOP__dotcall_dotshow_AVLTree_lessi64_greaterP_ampersand(__ZH_TYPE_AVLTree_lessi64_greater* v648);

i64 __ZH_LOP__plus_i64(i64 v101) {{
  return (v101);
};printf("%s", "reached function end without returning anything lop i64 + i64 a\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__percent_percent_i64i64(i64 v102, i64 v103) {{
  return (!((((v102))%((v103)))));
};printf("%s", "reached function end without returning anything op bool %% i64 a i64 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u8Ru8(u8* v104, u8 v105){
  (((*v104)=(((*v104))+((v105)))));
}
void __ZH_BOP__minus_equal_u8Ru8(u8* v106, u8 v107){
  (((*v106)=(((*v106))-((v107)))));
}
void __ZH_BOP__slash_equal_u8Ru8(u8* v108, u8 v109){
  (((*v108)=(((*v108))/((v109)))));
}
void __ZH_BOP__percent_equal_u8Ru8(u8* v110, u8 v111){
  (((*v110)=(((*v110))%((v111)))));
}
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v112, u8 v113){
  (((*v112)=(((*v112))*((v113)))));
}
void __ZH_BOP__plus_equal_u16Ru16(u16* v114, u16 v115){
  (((*v114)=(((*v114))+((v115)))));
}
void __ZH_BOP__minus_equal_u16Ru16(u16* v116, u16 v117){
  (((*v116)=(((*v116))-((v117)))));
}
void __ZH_BOP__slash_equal_u16Ru16(u16* v118, u16 v119){
  (((*v118)=(((*v118))/((v119)))));
}
void __ZH_BOP__percent_equal_u16Ru16(u16* v120, u16 v121){
  (((*v120)=(((*v120))%((v121)))));
}
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v122, u16 v123){
  (((*v122)=(((*v122))*((v123)))));
}
void __ZH_BOP__plus_equal_u32Ru32(u32* v124, u32 v125){
  (((*v124)=(((*v124))+((v125)))));
}
void __ZH_BOP__minus_equal_u32Ru32(u32* v126, u32 v127){
  (((*v126)=(((*v126))-((v127)))));
}
void __ZH_BOP__slash_equal_u32Ru32(u32* v128, u32 v129){
  (((*v128)=(((*v128))/((v129)))));
}
void __ZH_BOP__percent_equal_u32Ru32(u32* v130, u32 v131){
  (((*v130)=(((*v130))%((v131)))));
}
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v132, u32 v133){
  (((*v132)=(((*v132))*((v133)))));
}
void __ZH_BOP__plus_equal_u64Ru64(u64* v134, u64 v135){
  (((*v134)=(((*v134))+((v135)))));
}
void __ZH_BOP__minus_equal_u64Ru64(u64* v136, u64 v137){
  (((*v136)=(((*v136))-((v137)))));
}
void __ZH_BOP__slash_equal_u64Ru64(u64* v138, u64 v139){
  (((*v138)=(((*v138))/((v139)))));
}
void __ZH_BOP__percent_equal_u64Ru64(u64* v140, u64 v141){
  (((*v140)=(((*v140))%((v141)))));
}
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v142, u64 v143){
  (((*v142)=(((*v142))*((v143)))));
}
i8 __ZH_LOP__minus_i8(i8 v144) {{
  return (((((i8)0)))-((v144)));
};printf("%s", "reached function end without returning anything lop i8 - i8 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i8Ri8(i8* v145, i8 v146){
  (((*v145)=(((*v145))+((v146)))));
}
void __ZH_BOP__minus_equal_i8Ri8(i8* v147, i8 v148){
  (((*v147)=(((*v147))-((v148)))));
}
void __ZH_BOP__slash_equal_i8Ri8(i8* v149, i8 v150){
  (((*v149)=(((*v149))/((v150)))));
}
void __ZH_BOP__percent_equal_i8Ri8(i8* v151, i8 v152){
  (((*v151)=(((*v151))%((v152)))));
}
void __ZH_BOP__asterisk_equal_i8Ri8(i8* v153, i8 v154){
  (((*v153)=(((*v153))*((v154)))));
}
i16 __ZH_LOP__minus_i16(i16 v155) {{
  return (((((i16)0)))-((v155)));
};printf("%s", "reached function end without returning anything lop i16 - i16 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i16Ri16(i16* v156, i16 v157){
  (((*v156)=(((*v156))+((v157)))));
}
void __ZH_BOP__minus_equal_i16Ri16(i16* v158, i16 v159){
  (((*v158)=(((*v158))-((v159)))));
}
void __ZH_BOP__slash_equal_i16Ri16(i16* v160, i16 v161){
  (((*v160)=(((*v160))/((v161)))));
}
void __ZH_BOP__percent_equal_i16Ri16(i16* v162, i16 v163){
  (((*v162)=(((*v162))%((v163)))));
}
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v164, i16 v165){
  (((*v164)=(((*v164))*((v165)))));
}
i32 __ZH_LOP__minus_i32(i32 v166) {{
  return (((((i32)0)))-((v166)));
};printf("%s", "reached function end without returning anything lop i32 - i32 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i32Ri32(i32* v167, i32 v168){
  (((*v167)=(((*v167))+((v168)))));
}
void __ZH_BOP__minus_equal_i32Ri32(i32* v169, i32 v170){
  (((*v169)=(((*v169))-((v170)))));
}
void __ZH_BOP__slash_equal_i32Ri32(i32* v171, i32 v172){
  (((*v171)=(((*v171))/((v172)))));
}
void __ZH_BOP__percent_equal_i32Ri32(i32* v173, i32 v174){
  (((*v173)=(((*v173))%((v174)))));
}
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v175, i32 v176){
  (((*v175)=(((*v175))*((v176)))));
}
i64 __ZH_LOP__minus_i64(i64 v177) {{
  return (((((i64)0)))-((v177)));
};printf("%s", "reached function end without returning anything lop i64 - i64 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i64Ri64(i64* v178, i64 v179){
  (((*v178)=(((*v178))+((v179)))));
}
void __ZH_BOP__minus_equal_i64Ri64(i64* v180, i64 v181){
  (((*v180)=(((*v180))-((v181)))));
}
void __ZH_BOP__slash_equal_i64Ri64(i64* v182, i64 v183){
  (((*v182)=(((*v182))/((v183)))));
}
void __ZH_BOP__percent_equal_i64Ri64(i64* v184, i64 v185){
  (((*v184)=(((*v184))%((v185)))));
}
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v186, i64 v187){
  (((*v186)=(((*v186))*((v187)))));
}
f32 __ZH_LOP__minus_f32(f32 v188) {{
  return (((((f32)0.000000)))-((v188)));
};printf("%s", "reached function end without returning anything lop f32 - f32 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_f32Rf32(f32* v189, f32 v190){
  (((*v189)=(((*v189))+((v190)))));
}
void __ZH_BOP__minus_equal_f32Rf32(f32* v191, f32 v192){
  (((*v191)=(((*v191))-((v192)))));
}
void __ZH_BOP__slash_equal_f32Rf32(f32* v193, f32 v194){
  (((*v193)=(((*v193))/((v194)))));
}
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v195, f32 v196){
  (((*v195)=(((*v195))*((v196)))));
}
f64 __ZH_LOP__minus_f64(f64 v197) {{
  return (((((f64)0.000000)))-((v197)));
};printf("%s", "reached function end without returning anything lop f64 - f64 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_f64Rf64(f64* v198, f64 v199){
  (((*v198)=(((*v198))+((v199)))));
}
void __ZH_BOP__minus_equal_f64Rf64(f64* v200, f64 v201){
  (((*v200)=(((*v200))-((v201)))));
}
void __ZH_BOP__slash_equal_f64Rf64(f64* v202, f64 v203){
  (((*v202)=(((*v202))/((v203)))));
}
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v204, f64 v205){
  (((*v204)=(((*v204))*((v205)))));
}
void __ZH_LOP__plus_plus_i64R(i64* v206){
  (__ZH_BOP__plus_equal_i64Ri64(&(*v206), (((i64)1))));
}
void __ZH_LOP__minus_minus_i64R(i64* v207){
  (__ZH_BOP__minus_equal_i64Ri64(&(*v207), (((i64)1))));
}
void __ZH_LOP__plus_plus_u8R(u8* v208){
  (((*v208)=(((*v208))+((((u8)1))))));
}
void __ZH_LOP__minus_minus_u8R(u8* v209){
  (((*v209)=(((*v209))-((((u8)1))))));
}
__ZH_TYPE_Out __ZH_LOP_Out_() {{
  __ZH_TYPE_Out v210;
  return (v210);
};printf("%s", "reached function end without returning anything lop Out Out\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v211, __ZH_TYPE_Out v212) {{
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out a Out b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v213) {{
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Out o\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_str(str v214) {{
  (printf("%s\n", (v214)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_str(str v215) {{
  ((printf("%s", (v215))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v216, str v217) {{
  ((printf("%s", (v217))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v218) {{
  (((*v218)=(in_str())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v219, str* v220) {{
  (((*v220)=(in_str())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_char(char v221) {{
  (printf("%c\n", (v221)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_char(char v222) {{
  ((printf("%c", (v222))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v223, char v224) {{
  ((printf("%c", (v224))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v225) {{
  (((*v225)=(in_char())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v226, char* v227) {{
  (((*v227)=(in_char())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v228) {{
  (printf("%d\n", (v228)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v229) {{
  ((printf("%d", (v229))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v230, i8 v231) {{
  ((printf("%d", (v231))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v232) {{
  (((*v232)=(in_i8())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v233, i8* v234) {{
  (((*v234)=(in_i8())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v235) {{
  (printf("%hd\n", (v235)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v236) {{
  ((printf("%hd", (v236))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v237, i16 v238) {{
  ((printf("%hd", (v238))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v239) {{
  (((*v239)=(in_i16())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v240, i16* v241) {{
  (((*v241)=(in_i16())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v242) {{
  (printf("%d\n", (v242)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v243) {{
  ((printf("%d", (v243))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v244, i32 v245) {{
  ((printf("%d", (v245))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v246) {{
  (((*v246)=(in_i32())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v247, i32* v248) {{
  (((*v248)=(in_i32())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v249) {{
  (printf("%lld\n", (v249)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v250) {{
  ((printf("%lld", (v250))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v251, i64 v252) {{
  ((printf("%lld", (v252))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v253) {{
  (((*v253)=(in_i64())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v254, i64* v255) {{
  (((*v255)=(in_i64())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v256) {{
  (printf("%d\n", (v256)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v257) {{
  ((printf("%d", (v257))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v258, u8 v259) {{
  ((printf("%d", (v259))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v260) {{
  (((*v260)=(in_u8())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v261, u8* v262) {{
  (((*v262)=(in_u8())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v263) {{
  (printf("%hd\n", (v263)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v264) {{
  ((printf("%hd", (v264))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v265, u16 v266) {{
  ((printf("%hd", (v266))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v267) {{
  (((*v267)=(in_u16())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v268, u16* v269) {{
  (((*v269)=(in_u16())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v270) {{
  (printf("%u\n", (v270)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v271) {{
  ((printf("%u", (v271))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v272, u32 v273) {{
  ((printf("%u", (v273))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v274) {{
  (((*v274)=(in_u32())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v275, u32* v276) {{
  (((*v276)=(in_u32())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v277) {{
  (printf("%llu\n", (v277)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v278) {{
  ((printf("%llu", (v278))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v279, u64 v280) {{
  ((printf("%llu", (v280))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v281) {{
  (((*v281)=(in_u64())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v282, u64* v283) {{
  (((*v283)=(in_u64())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v284) {{
  (printf("%f\n", (v284)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v285) {{
  ((printf("%f", (v285))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v286, f32 v287) {{
  ((printf("%f", (v287))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v288) {{
  (((*v288)=(in_f32())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v289, f32* v290) {{
  (((*v290)=(in_f32())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v291) {{
  (printf("%f\n", (v291)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v292) {{
  ((printf("%f", (v292))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v293, f64 v294) {{
  ((printf("%f", (v294))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v295) {{
  (((*v295)=(in_f64())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > f64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v296, f64* v297) {{
  (((*v297)=(in_f64())));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o f64R i\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v298){
  (((*((v298)))=(((*((v298))))+((((i64)1))))));
}
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v299, i64 v300) {{
  return (((*((v299))))!=((v300)));
};printf("%s", "reached function end without returning anything op bool .call.uneq i64P& slf i64 other\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v301) {{
  return ((((v301))->begin));
};printf("%s", "reached function end without returning anything op i64 .call.begin RangeP& slf\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v302) {{
  return ((((v302))->end));
};printf("%s", "reached function end without returning anything op i64 .call.end RangeP& slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v303, i64 v304) {{
  __ZH_TYPE_Range v305;
  (((((&(v305))->begin))=(v303)));
  (((((&(v305))->end))=(v304)));
  return (v305);
};printf("%s", "reached function end without returning anything op Range .. i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v306, i64 v307) {{
  return (__ZH_BOP__dot_dot_i64i64((v306), (__ZH_LOP__minus_i64((v307)))));
};printf("%s", "reached function end without returning anything op Range ..- i64 begin i64 end\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_rangeMin_() {{
  return (__ZH_LOP__minus_i64((((i64)9223372036854775807))));
};printf("%s", "reached function end without returning anything lop i64 rangeMin\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_rangeMax_() {{
  return (((i64)9223372036854775807));
};printf("%s", "reached function end without returning anything lop i64 rangeMax\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v308) {{
  return (__ZH_BOP__dot_dot_i64i64((v308), (__ZH_LOP_rangeMax_())));
};printf("%s", "reached function end without returning anything rop Range .. i64 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v309) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (v309)));
};printf("%s", "reached function end without returning anything lop Range .. i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v310) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (__ZH_LOP__minus_i64((v310)))));
};printf("%s", "reached function end without returning anything lop Range ..- i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v311) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP__minus_i64((((&(v311))->begin)))), (((&(v311))->end))));
};printf("%s", "reached function end without returning anything lop Range - Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v312, i64 v313) {{
  return (__ZH_BOP__dot_dot_i64i64((v312), (((v313))+((((i64)1))))));
};printf("%s", "reached function end without returning anything op Range ..= i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v314) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((v314))+((((i64)1))))));
};printf("%s", "reached function end without returning anything lop Range ..= i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v315) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((__ZH_LOP__minus_i64((v315))))+((((i64)1))))));
};printf("%s", "reached function end without returning anything lop Range ..=- i64 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i64Range(i64 v316, __ZH_TYPE_Range v317) {{
  if ((((((&(v317))->begin)))<((((&(v317))->end))))) {
    return (((((((&(v317))->begin)))<=((v316))))&&((((v316))<((((&(v317))->end))))));
  } else {
    return (((((((&(v317))->end)))<=((v316))))&&((((v316))<((((&(v317))->begin))))));
  }
};printf("%s", "reached function end without returning anything op bool == i64 i Range r\n"); exit(EXIT_FAILURE);}
i8 __ZH_LOP_i8_() {{
  return (((i8)0));
};printf("%s", "reached function end without returning anything lop i8 i8\n"); exit(EXIT_FAILURE);}
i16 __ZH_LOP_i16_() {{
  return (((i16)0));
};printf("%s", "reached function end without returning anything lop i16 i16\n"); exit(EXIT_FAILURE);}
i32 __ZH_LOP_i32_() {{
  return (((i32)0));
};printf("%s", "reached function end without returning anything lop i32 i32\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_i64_() {{
  return (((i64)0));
};printf("%s", "reached function end without returning anything lop i64 i64\n"); exit(EXIT_FAILURE);}
u8 __ZH_LOP_u8_() {{
  return (((u8)0));
};printf("%s", "reached function end without returning anything lop u8 u8\n"); exit(EXIT_FAILURE);}
u16 __ZH_LOP_u16_() {{
  return (((u16)0));
};printf("%s", "reached function end without returning anything lop u16 u16\n"); exit(EXIT_FAILURE);}
u32 __ZH_LOP_u32_() {{
  return (((u32)0));
};printf("%s", "reached function end without returning anything lop u32 u32\n"); exit(EXIT_FAILURE);}
u64 __ZH_LOP_u64_() {{
  return (((u64)0));
};printf("%s", "reached function end without returning anything lop u64 u64\n"); exit(EXIT_FAILURE);}
char __ZH_LOP_char_() {{
  return (((char)(((i8)0))));
};printf("%s", "reached function end without returning anything lop char char\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_max_i64i64(i64 v318, i64 v319) {{
  if ((((v318))>((v319)))) {
    return (v318);
  } else {
    return (v319);
  }
};printf("%s", "reached function end without returning anything lop i64 max i64 a i64 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v344) {{
  __ZH_TYPE_VecIter_lessi64_greater v345;
  (((((&(v345))->ptr))=(v344)));
  return (v345);
};printf("%s", "reached function end without returning anything lop VecIter<i64> VecIter<i64> i64P ptr\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v346){
  ((((((v346))->ptr))=(((i64*)(((((i64)((((v346))->ptr)))))+((((((i64)1)))*((((i64)8))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v347, __ZH_TYPE_VecIter_lessi64_greater v348) {{
  return (((((i64)((((v347))->ptr)))))!=((((i64)(((&(v348))->ptr))))));
};printf("%s", "reached function end without returning anything op bool .call.uneq VecIter<i64>P& slf VecIter<i64> other\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v349) {{
  return &(*((((&(v349))->ptr))));
};printf("%s", "reached function end without returning anything lop i64R * VecIter<i64> slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v320, i64 v321) {{
  return (((i64*)(((i64*)(((((i64)((((v320))->head)))))+((((v321))*((((i64)8))))))))));
};printf("%s", "reached function end without returning anything op i64P .call.atP Vec<i64>P& slf i64 pos\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v322, i64 v323) {{
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v322), (v323)))));
};printf("%s", "reached function end without returning anything op i64R .call.at Vec<i64>P& slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v324){
  (printf("%s", ("[")));
  {
      i64 v328;
      i64 v327;
      i64 v326;
      __ZH_TYPE_Range v325;
      (((v325)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v324))->size))))));
      (((v326)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v325)))))));
      (((v327)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v325)))))));
      (((v328)=(v326)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v328))), (v327)))) {
        if ((!((!((v328)))))) {
          (printf("%s", (" ")));
        }
        (printf("%lld", (*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v324), (v328)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v328)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v329){
  {
      i64 v333;
      i64 v332;
      i64 v331;
      __ZH_TYPE_Range v330;
      (((v330)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v329))->size))))));
      (((v331)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v330)))))));
      (((v332)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v330)))))));
      (((v333)=(v331)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v333))), (v332)))) {
        (printf("%lld\n", (*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v329), (v333)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v333)))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v334){
  i64 v335;
  (((v335)=((((v334))->capacity))));
  if ((((v335))==((((i64)0))))) {
    (((v335)=(((i64)1))));
    ((((((v334))->head))=(((i64*)(alloc((((i64)8))))))));
    ((((((v334))->capacity))=(v335)));
  } else {
    i64* v336;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v335), (((i64)2))));
    (((v336)=(((i64*)(alloc((((v335))*((((i64)8))))))))));
    {
        i64 v340;
        i64 v339;
        i64 v338;
        __ZH_TYPE_Range v337;
        (((v337)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v334))->size))))));
        (((v338)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v337)))))));
        (((v339)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v337)))))));
        (((v340)=(v338)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v340))), (v339)))) {
          (((*((((i64*)(((((i64)(v336))))+((((v340))*((((i64)8))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v334), (v340)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v340)))));
        }
      }
    (free((void*) (((i64)((((v334))->head))))));
    ((((((v334))->head))=(v336)));
  }
  ((((((v334))->capacity))=(v335)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v341, i64 v342){
  if (((((((v341))->size)))==(((((v341))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((v341)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v341), ((((v341))->size))))=(v342)));
  (__ZH_LOP__plus_plus_i64R(&((((v341))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v343){
  (__ZH_LOP__minus_minus_i64R(&((((v343))->size))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v350) {{
  return (__ZH_LOP_VecIter_lessi64_greater_i64P(((((v350))->head))));
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.begin Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v351) {{
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v351), ((((v351))->size))))));
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.end Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v352) {{
  return &(*(((((v352))->head))));
};printf("%s", "reached function end without returning anything op i64R .call.front Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v353) {{
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v353), ((((((v353))->size)))-((((i64)1))))))));
};printf("%s", "reached function end without returning anything op i64R .call.back Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v354){
  if ((!((!((((i64)((((v354))->head))))))))) {
    (free((void*) (((i64)((((v354))->head))))));
    ((((((v354))->size))=(((i64)0))));
    ((((((v354))->capacity))=(((i64)0))));
    ((((((v354))->head))=(((i64*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v355) {{
  __ZH_TYPE_Vec_lessi64_greater v356;
  (((((&(v356))->head))=(((i64*)(((i64)0))))));
  (((((&(v356))->size))=(((i64)0))));
  (((((&(v356))->capacity))=(((i64)0))));
  while ((((((&(v356))->capacity)))<((v355)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((&((v356)))));
  }
  (((((&(v356))->size))=(v355)));
  (((((&(v356))->capacity))=(v355)));
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
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v356))), (v360)))=(__ZH_LOP_i64_())));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v360)))));
      }
    }
  return (v356);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v356)))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v361, i64 v362) {{
  __ZH_TYPE_Vec_lessi64_greater v363;
  (((v363)=(__ZH_LOP_Vec_lessi64_greater_i64((v361)))));
  {
      i64 v367;
      i64 v366;
      i64 v365;
      __ZH_TYPE_Range v364;
      (((v364)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v363))->size))))));
      (((v365)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v364)))))));
      (((v366)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v364)))))));
      (((v367)=(v365)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v367))), (v366)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v363))), (v367)))=(v362)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v367)))));
      }
    }
  return (v363);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v363)))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size i64 default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {{
  return (__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v368) {{
  __ZH_TYPE_Vec_lessi64_greater v369;
  (((v369)=(__ZH_LOP_Vec_lessi64_greater_i64((((&(*v368))->size))))));
  {
      i64 v373;
      i64 v372;
      i64 v371;
      __ZH_TYPE_Range v370;
      (((v370)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v368))->size))))));
      (((v371)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v370)))))));
      (((v372)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v370)))))));
      (((v373)=(v371)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v373))), (v372)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v369))), (v373)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((*v368))), (v373)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v373)))));
      }
    }
  return (v369);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v369)))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> Vec<i64>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v374, i64 v375){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v374))), (v375)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v376, __ZH_TYPE_Vec_lessi64_greater* v377){
  {
      __ZH_TYPE_VecIter_lessi64_greater v381;
      __ZH_TYPE_VecIter_lessi64_greater v380;
      __ZH_TYPE_VecIter_lessi64_greater v379;
      __ZH_TYPE_Vec_lessi64_greater v378;
      (((v378)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v377)))));
      (((v379)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((&((v378)))))));
      (((v380)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((&((v378)))))));
      (((v381)=(v379)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater((&((v381))), (v380)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v376))), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v381)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand((&((v381)))));
      }
    }
}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v382){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v382)))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v383){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v383)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v384) {{
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v384)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v385) {{
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v385))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v386, __ZH_TYPE_Vec_lessi64_greater* v387) {{
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v387))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<i64>R i\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v388, i64 v389) {{
  if ((((v389))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v389), ((((v388))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v388), (v389)));
};printf("%s", "reached function end without returning anything op i64R .call.sub Vec<i64>P& slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v390, i64 v391, i64 v392) {{
  __ZH_TYPE_Vec_lessi64_greater v393;
  (((v393)=(__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))))));
  {
      i64 v397;
      i64 v396;
      i64 v395;
      __ZH_TYPE_Range v394;
      (((v394)=(__ZH_BOP__dot_dot_i64i64((v391), (v392)))));
      (((v395)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v394)))))));
      (((v396)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v394)))))));
      (((v397)=(v395)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v397))), (v396)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((v393))), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v390), (v397)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v397)))));
      }
    }
  return (v393);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v393)))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P& slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v398, __ZH_TYPE_Range v399) {{
  i64 v401;
  i64 v400;
  ((((v400)=(((&(v399))->begin)))), (((v401)=(((&(v399))->end)))));
  if ((((v400))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v400), ((((v398))->size))));
  }
  if ((((v400))<((((i64)0))))) {
    (((v400)=(((i64)0))));
  }
  if ((((v401))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v401), ((((v398))->size))));
  }
  if ((((v401))>(((((v398))->size))))) {
    (((v401)=((((v398))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v398), (v400), (v401)));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P& slf Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v402) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v402), (((i64)0)), ((((v402))->size))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v403, __ZH_TYPE_Vec_lessi64_greater* v404) {{
  return (((bool)0));
};printf("%s", "reached function end without returning anything op bool < Vec<i64>R a Vec<i64>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_i64Pi64P(i64* v405, i64* v406){
  i64 v407;
  (((v407)=(*((v405)))));
  (((*((v405)))=(*((v406)))));
  (((*((v406)))=(v407)));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v408, i64* v409) {{
  i64* v412;
  i64* v411;
  i64* v410;
  ((((v410)=(((i64*)(((((i64)(v409))))-((((((i64)1)))*((((i64)8)))))))))), (((v411)=(v408))), (((v412)=(v408))));
  (((v412)=(v408)));
  while ((((((i64)(v412))))!=((((i64)(v410)))))) {
    if ((((*((v412))))<((*((v410)))))) {
      (__ZH_LOP_swap_i64Pi64P((v411), (v412)));
      (((v411)=(((i64*)(((((i64)(v411))))+((((((i64)1)))*((((i64)8))))))))));
    }
    (((v412)=(((i64*)(((((i64)(v412))))+((((((i64)1)))*((((i64)8))))))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v411), (v410)));
  return (v411);
};printf("%s", "reached function end without returning anything lop i64P partition i64P low i64P high\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_i64Pi64P(i64* v413, i64* v414){
  i64 v416;
  i64 v415;
  (((v415)=(((((i64)(v414))))-((((i64)(v413)))))));
  (((v416)=(((i64)8))));
  if ((((v415))>((v416)))) {
    i64* v417;
    (((v417)=(__ZH_LOP_partition_i64Pi64P((v413), (v414)))));
    (__ZH_LOP_qsort_i64Pi64P((v413), (v417)));
    (((v417)=(((i64*)(((((i64)(v417))))+((((((i64)1)))*((((i64)8))))))))));
    (__ZH_LOP_qsort_i64Pi64P((v417), (v414)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v418){
  __ZH_TYPE_VecIter_lessi64_greater v420;
  __ZH_TYPE_VecIter_lessi64_greater v419;
  (((v419)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((v418)))));
  (((v420)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((v418)))));
  (__ZH_LOP_qsort_i64Pi64P((((&(v419))->ptr)), (((&(v420))->ptr))));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v421){
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand((&((*v421)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v422, i64 v423) {{
  __ZH_TYPE_Vec_lessi64_greater v424;
  (((v424)=(__ZH_LOP_Vec_lessi64_greater_i64((((v423))-((v422)))))));
  {
      i64 v428;
      i64 v427;
      i64 v426;
      __ZH_TYPE_Range v425;
      (((v425)=(__ZH_BOP__dot_dot_i64i64((v422), (v423)))));
      (((v426)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v425)))))));
      (((v427)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v425)))))));
      (((v428)=(v426)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v428))), (v427)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v424))), (((v428))-((v422)))))=(v428)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v428)))));
      }
    }
  return (v424);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v424)))));
};printf("%s", "reached function end without returning anything lop Vec<i64> iota i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v429) {{
  __ZH_TYPE_Vec_lessi64_greater v430;
  (((v430)=(__ZH_LOP_Vec_lessi64_greater_())));
  {
      i64 v434;
      i64 v433;
      i64 v432;
      __ZH_TYPE_Range v431;
      (((v431)=(*((v429)))));
      (((v432)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v431)))))));
      (((v433)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v431)))))));
      (((v434)=(v432)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v434))), (v433)))) {
        (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v430), (v434)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v434)))));
      }
    }
  return (v430);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v430)))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.call RangeP& slf\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v435, i64 v436) {{
  return (*((((char*)(((((i64)(*((v435))))))+((v436)))))));
};printf("%s", "reached function end without returning anything op char .call.at strP& slf i64 pos\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__caret_stri64(str v437, i64 v438) {{
  return (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v437))), (v438)));
};printf("%s", "reached function end without returning anything op char ^ str s i64 i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_charstr(char v439, str v440) {{
  return (((v439))==((__ZH_BOP__caret_stri64((v440), (((i64)0))))));
};printf("%s", "reached function end without returning anything op bool == char ch str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v465) {{
  __ZH_TYPE_VecIter_lesschar_greater v466;
  (((((&(v466))->ptr))=(v465)));
  return (v466);
};printf("%s", "reached function end without returning anything lop VecIter<char> VecIter<char> charP ptr\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v467){
  ((((((v467))->ptr))=(((char*)(((((i64)((((v467))->ptr)))))+((((((i64)1)))*((((i64)1))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v468, __ZH_TYPE_VecIter_lesschar_greater v469) {{
  return (((((i64)((((v468))->ptr)))))!=((((i64)(((&(v469))->ptr))))));
};printf("%s", "reached function end without returning anything op bool .call.uneq VecIter<char>P& slf VecIter<char> other\n"); exit(EXIT_FAILURE);}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v470) {{
  return &(*((((&(v470))->ptr))));
};printf("%s", "reached function end without returning anything lop charR * VecIter<char> slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v441, i64 v442) {{
  return (((char*)(((char*)(((((i64)((((v441))->head)))))+((((v442))*((((i64)1))))))))));
};printf("%s", "reached function end without returning anything op charP .call.atP Vec<char>P& slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v443, i64 v444) {{
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v443), (v444)))));
};printf("%s", "reached function end without returning anything op charR .call.at Vec<char>P& slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v445){
  (printf("%s", ("[")));
  {
      i64 v449;
      i64 v448;
      i64 v447;
      __ZH_TYPE_Range v446;
      (((v446)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v445))->size))))));
      (((v447)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v446)))))));
      (((v448)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v446)))))));
      (((v449)=(v447)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v449))), (v448)))) {
        if ((!((!((v449)))))) {
          (printf("%s", (" ")));
        }
        (printf("%c", (*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v445), (v449)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v449)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v450){
  {
      i64 v454;
      i64 v453;
      i64 v452;
      __ZH_TYPE_Range v451;
      (((v451)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v450))->size))))));
      (((v452)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v451)))))));
      (((v453)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v451)))))));
      (((v454)=(v452)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v454))), (v453)))) {
        (printf("%c\n", (*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v450), (v454)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v454)))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v455){
  i64 v456;
  (((v456)=((((v455))->capacity))));
  if ((((v456))==((((i64)0))))) {
    (((v456)=(((i64)1))));
    ((((((v455))->head))=(((char*)(alloc((((i64)1))))))));
    ((((((v455))->capacity))=(v456)));
  } else {
    char* v457;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v456), (((i64)2))));
    (((v457)=(((char*)(alloc((((v456))*((((i64)1))))))))));
    {
        i64 v461;
        i64 v460;
        i64 v459;
        __ZH_TYPE_Range v458;
        (((v458)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v455))->size))))));
        (((v459)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v458)))))));
        (((v460)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v458)))))));
        (((v461)=(v459)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v461))), (v460)))) {
          (((*((((char*)(((((i64)(v457))))+((((v461))*((((i64)1))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v455), (v461)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v461)))));
        }
      }
    (free((void*) (((i64)((((v455))->head))))));
    ((((((v455))->head))=(v457)));
  }
  ((((((v455))->capacity))=(v456)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v462, char v463){
  if (((((((v462))->size)))==(((((v462))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((v462)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v462), ((((v462))->size))))=(v463)));
  (__ZH_LOP__plus_plus_i64R(&((((v462))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v464){
  (__ZH_LOP__minus_minus_i64R(&((((v464))->size))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v471) {{
  return (__ZH_LOP_VecIter_lesschar_greater_charP(((((v471))->head))));
};printf("%s", "reached function end without returning anything op VecIter<char> .call.begin Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v472) {{
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v472), ((((v472))->size))))));
};printf("%s", "reached function end without returning anything op VecIter<char> .call.end Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v473) {{
  return &(*(((((v473))->head))));
};printf("%s", "reached function end without returning anything op charR .call.front Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v474) {{
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v474), ((((((v474))->size)))-((((i64)1))))))));
};printf("%s", "reached function end without returning anything op charR .call.back Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v475){
  if ((!((!((((i64)((((v475))->head))))))))) {
    (free((void*) (((i64)((((v475))->head))))));
    ((((((v475))->size))=(((i64)0))));
    ((((((v475))->capacity))=(((i64)0))));
    ((((((v475))->head))=(((char*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v476) {{
  __ZH_TYPE_Vec_lesschar_greater v477;
  (((((&(v477))->head))=(((char*)(((i64)0))))));
  (((((&(v477))->size))=(((i64)0))));
  (((((&(v477))->capacity))=(((i64)0))));
  while ((((((&(v477))->capacity)))<((v476)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((&((v477)))));
  }
  (((((&(v477))->size))=(v476)));
  (((((&(v477))->capacity))=(v476)));
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
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v477))), (v481)))=(__ZH_LOP_char_())));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v481)))));
      }
    }
  return (v477);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v477)))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v482, char v483) {{
  __ZH_TYPE_Vec_lesschar_greater v484;
  (((v484)=(__ZH_LOP_Vec_lesschar_greater_i64((v482)))));
  {
      i64 v488;
      i64 v487;
      i64 v486;
      __ZH_TYPE_Range v485;
      (((v485)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v484))->size))))));
      (((v486)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v485)))))));
      (((v487)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v485)))))));
      (((v488)=(v486)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v488))), (v487)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v484))), (v488)))=(v483)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v488)))));
      }
    }
  return (v484);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v484)))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size char default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {{
  return (__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v489) {{
  __ZH_TYPE_Vec_lesschar_greater v490;
  (((v490)=(__ZH_LOP_Vec_lesschar_greater_i64((((&(*v489))->size))))));
  {
      i64 v494;
      i64 v493;
      i64 v492;
      __ZH_TYPE_Range v491;
      (((v491)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v489))->size))))));
      (((v492)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v491)))))));
      (((v493)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v491)))))));
      (((v494)=(v492)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v494))), (v493)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v490))), (v494)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((*v489))), (v494)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v494)))));
      }
    }
  return (v490);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v490)))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> Vec<char>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v495, char v496){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v495))), (v496)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v497, __ZH_TYPE_Vec_lesschar_greater* v498){
  {
      __ZH_TYPE_VecIter_lesschar_greater v502;
      __ZH_TYPE_VecIter_lesschar_greater v501;
      __ZH_TYPE_VecIter_lesschar_greater v500;
      __ZH_TYPE_Vec_lesschar_greater v499;
      (((v499)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v498)))));
      (((v500)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&((v499)))))));
      (((v501)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((&((v499)))))));
      (((v502)=(v500)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater((&((v502))), (v501)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v497))), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v502)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand((&((v502)))));
      }
    }
}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v503){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v503)))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v504){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v504)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v505) {{
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v505)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v506) {{
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v506))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v507, __ZH_TYPE_Vec_lesschar_greater* v508) {{
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v508))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<char>R i\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v509, i64 v510) {{
  if ((((v510))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v510), ((((v509))->size))));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v509), (v510)));
};printf("%s", "reached function end without returning anything op charR .call.sub Vec<char>P& slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v511, i64 v512, i64 v513) {{
  __ZH_TYPE_Vec_lesschar_greater v514;
  (((v514)=(__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))))));
  {
      i64 v518;
      i64 v517;
      i64 v516;
      __ZH_TYPE_Range v515;
      (((v515)=(__ZH_BOP__dot_dot_i64i64((v512), (v513)))));
      (((v516)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v515)))))));
      (((v517)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v515)))))));
      (((v518)=(v516)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v518))), (v517)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((v514))), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v511), (v518)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v518)))));
      }
    }
  return (v514);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v514)))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P& slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v519, __ZH_TYPE_Range v520) {{
  i64 v522;
  i64 v521;
  ((((v521)=(((&(v520))->begin)))), (((v522)=(((&(v520))->end)))));
  if ((((v521))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v521), ((((v519))->size))));
  }
  if ((((v521))<((((i64)0))))) {
    (((v521)=(((i64)0))));
  }
  if ((((v522))<((((i64)0))))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v522), ((((v519))->size))));
  }
  if ((((v522))>(((((v519))->size))))) {
    (((v522)=((((v519))->size))));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v519), (v521), (v522)));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P& slf Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v523) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v523), (((i64)0)), ((((v523))->size))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v524, __ZH_TYPE_Vec_lesschar_greater* v525) {{
  return (((bool)0));
};printf("%s", "reached function end without returning anything op bool < Vec<char>R a Vec<char>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_charPcharP(char* v526, char* v527){
  char v528;
  (((v528)=(*((v526)))));
  (((*((v526)))=(*((v527)))));
  (((*((v527)))=(v528)));
}
char* __ZH_LOP_partition_charPcharP(char* v529, char* v530) {{
  char* v533;
  char* v532;
  char* v531;
  ((((v531)=(((char*)(((((i64)(v530))))-((((((i64)1)))*((((i64)1)))))))))), (((v532)=(v529))), (((v533)=(v529))));
  (((v533)=(v529)));
  while ((((((i64)(v533))))!=((((i64)(v531)))))) {
    if ((((*((v533))))<((*((v531)))))) {
      (__ZH_LOP_swap_charPcharP((v532), (v533)));
      (((v532)=(((char*)(((((i64)(v532))))+((((((i64)1)))*((((i64)1))))))))));
    }
    (((v533)=(((char*)(((((i64)(v533))))+((((((i64)1)))*((((i64)1))))))))));
  }
  (__ZH_LOP_swap_charPcharP((v532), (v531)));
  return (v532);
};printf("%s", "reached function end without returning anything lop charP partition charP low charP high\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_charPcharP(char* v534, char* v535){
  i64 v537;
  i64 v536;
  (((v536)=(((((i64)(v535))))-((((i64)(v534)))))));
  (((v537)=(((i64)1))));
  if ((((v536))>((v537)))) {
    char* v538;
    (((v538)=(__ZH_LOP_partition_charPcharP((v534), (v535)))));
    (__ZH_LOP_qsort_charPcharP((v534), (v538)));
    (((v538)=(((char*)(((((i64)(v538))))+((((((i64)1)))*((((i64)1))))))))));
    (__ZH_LOP_qsort_charPcharP((v538), (v535)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v539){
  __ZH_TYPE_VecIter_lesschar_greater v541;
  __ZH_TYPE_VecIter_lesschar_greater v540;
  (((v540)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((v539)))));
  (((v541)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((v539)))));
  (__ZH_LOP_qsort_charPcharP((((&(v540))->ptr)), (((&(v541))->ptr))));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v542){
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand((&((*v542)))));
}
__ZH_TYPE_Str __ZH_LOP_Str_() {{
  __ZH_TYPE_Str v543;
  (((((&(v543))->data))=(__ZH_LOP_Vec_lesschar_greater_())));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v543))->data)))), (((char)(((u8)0))))));
  (((((&(v543))->size))=(((i64)0))));
  return (v543);
};printf("%s", "reached function end without returning anything lop Str Str\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v544){
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(((((v544))->data))))));
}
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v545) {{
  __ZH_TYPE_VecIter_lesschar_greater v546;
  (((v546)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&(((((v545))->data))))))));
  return (((str)(((&(v546))->ptr))));
};printf("%s", "reached function end without returning anything op str .call.cstr StrP& slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v547, i64 v548) {{
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(((((v547))->data)))), (v548)));
};printf("%s", "reached function end without returning anything op charR .call.at StrP& slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v549, i64 v550) {{
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((&(((((v549))->data)))), (v550)));
};printf("%s", "reached function end without returning anything op charP .call.atP StrP& slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v551, char v552){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v551))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v551))->data)))), (v552)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v551))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__plus_plus_i64R(&((((v551))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v553){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v553))->data))))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v553))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v553))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__minus_minus_i64R(&((((v553))->size))));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v554) {{
  __ZH_TYPE_Str v555;
  (((v555)=(__ZH_LOP_Str_())));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&((((&(v555))->data))))));
  while ((((*((((char*)(v554))))))!=((((char)(((u8)0))))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v555))->data)))), (*((((char*)(v554)))))));
    (((v554)=(((str)(((((i64)(v554))))+((((i64)1))))))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v555))->data)))), (((char)(((u8)0))))));
  (((((&(v555))->size))=(((((&(((&(v555))->data)))->size)))-((((i64)1))))));
  return (v555);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v555)))));
};printf("%s", "reached function end without returning anything lop Str Str str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v556) {{
  __ZH_TYPE_Str v557;
  (((v557)=(__ZH_LOP_Str_())));
  (((((&(v557))->data))=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(((&(*v556))->data))))));
  (((((&(v557))->size))=(((&(*v556))->size))));
  return (v557);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v557)))));
};printf("%s", "reached function end without returning anything lop Str Str StrR s\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_len_str(str v558) {{
  i64 v559;
  (((v559)=(((i64)0))));
  while ((((*((((char*)(v558))))))!=((((char)(((u8)0))))))) {
    (__ZH_LOP__plus_plus_i64R(&(v559)));
    (((v558)=(((str)(((((i64)(v558))))+((((i64)1))))))));
  }
  return (v559);
};printf("%s", "reached function end without returning anything lop i64 len str s\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v560){
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v560)))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v561){
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v561)))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v562, char v563){
  (__ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar((&((*v562))), (v563)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v564, __ZH_TYPE_Str* v565){
  {
      i64 v569;
      i64 v568;
      i64 v567;
      __ZH_TYPE_Range v566;
      (((v566)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v565))->size))))));
      (((v567)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v566)))))));
      (((v568)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v566)))))));
      (((v569)=(v567)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v569))), (v568)))) {
        char v570;
        (((v570)=(((char)(((i8)115))))));
        (((v570)=(*__ZH_BOP__dotcall_dotat_StrP_ampersandi64((&((*v565))), (v569)))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v564), (v570)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v569)))));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v571, str v572){
  i64 v573;
  (((v573)=(__ZH_LOP_len_str((v572)))));
  {
      i64 v577;
      i64 v576;
      i64 v575;
      __ZH_TYPE_Range v574;
      (((v574)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (v573)))));
      (((v575)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v574)))))));
      (((v576)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v574)))))));
      (((v577)=(v575)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v577))), (v576)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v571), (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v572))), (v577)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v577)))));
      }
    }
}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v578) {{
  (__ZH_LOP_out_StrR(&(*v578)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v579) {{
  ((__ZH_LOP_put_StrR(&(*v579))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v580, __ZH_TYPE_Str* v581) {{
  ((__ZH_LOP_put_StrR(&(*v581))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o StrR i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v582, __ZH_TYPE_Str* v583) {{
  return (((bool)0));
};printf("%s", "reached function end without returning anything op bool < StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v584, i64 v585) {{
  __ZH_TYPE_Str v587;
  __ZH_TYPE_Str v586;
  (((v586)=(__ZH_LOP_Str_())));
  (((v587)=(__ZH_LOP_Str_str((v584)))));
  {
      i64 v591;
      i64 v590;
      i64 v589;
      __ZH_TYPE_Range v588;
      (((v588)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (v585)))));
      (((v589)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v588)))))));
      (((v590)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v588)))))));
      (((v591)=(v589)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v591))), (v590)))) {
        (__ZH_BOP__plus_equal_StrRStrR(&(v586), &(v587)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v591)))));
      }
    }
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v587)))));
  return (v586);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v586)))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v587)))));
  return (__ZH_LOP_Str_());
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v586)))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v587)))));
};printf("%s", "reached function end without returning anything op Str * str s i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_() {{
  __ZH_TYPE_Str v592;
  (((v592)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v592), ("         _____ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v592), ("       /       \\\\__ \\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v592), ("     /             \\\\\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v592), ("   /   0    0        |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v592), ("  |     ..            |\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v592), ("  /|        _/       /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v592), (" / .\\\\_____/         /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v592), ("/U\\\\|    \\\\___|   |__/\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v592), ("            /  /\\n")));
  (__ZH_BOP__plus_equal_StrRstr(&(v592), ("            |/U\\\\\\n")));
  return (v592);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v592)))));
};printf("%s", "reached function end without returning anything lop Str frog_escaped\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_frog_escaped_multiline_() {{
  __ZH_TYPE_Str v593;
  (((v593)=(__ZH_LOP_Str_str(("")))));
  (__ZH_BOP__plus_equal_StrRstr(&(v593), ("         _____         \\n       /       \\\\__     \\n     /             \\\\   \\n   /   0    0        | \\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\")));
  return (v593);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v593)))));
};printf("%s", "reached function end without returning anything lop Str frog_escaped_multiline\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_frog_raw_() {{
  return ("         _____\\n       /       \\\\__\\n     /             \\\\\\n   /   0    0        |\\n  |     ..            |\\n  /|        _/       / \\n / .\\\\_____/         /\\n/U\\\\|    \\\\___|   |__/\\n            /  /\\n            |/U\\\\ ");
};printf("%s", "reached function end without returning anything lop str frog_raw\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_frog_() {{
  return (__ZH_LOP_frog_raw_());
};printf("%s", "reached function end without returning anything lop str frog\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_sqrt_f64(f64 v594) {{
  f64 v595;
  (((v595)=(((f64)1.000000))));
  {
      i64 v599;
      i64 v598;
      i64 v597;
      __ZH_TYPE_Range v596;
      (((v596)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((i64)10))))));
      (((v597)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v596)))))));
      (((v598)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v596)))))));
      (((v599)=(v597)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v599))), (v598)))) {
        (__ZH_BOP__minus_equal_f64Rf64(&(v595), (((((((v595))*((v595))))-((v594))))/((((((f64)2.000000)))*((v595)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v599)))));
      }
    }
  return (v595);
};printf("%s", "reached function end without returning anything lop f64 sqrt f64 x\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v600, f64 v601) {{
  __ZH_TYPE_V2 v602;
  (((((&(v602))->x))=(v600)));
  (((((&(v602))->y))=(v601)));
  return (v602);
};printf("%s", "reached function end without returning anything lop V2 V2 f64 x f64 y\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v603, __ZH_TYPE_V2 v604) {{
  (__ZH_BOP__plus_equal_f64Rf64(&(((&(v603))->x)), (((&(v604))->x))));
  (__ZH_BOP__plus_equal_f64Rf64(&(((&(v603))->y)), (((&(v604))->y))));
  return (v603);
};printf("%s", "reached function end without returning anything op V2 + V2 a V2 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v605, __ZH_TYPE_V2 v606) {{
  __ZH_TYPE_V2 v607;
  (((((&(v607))->x))=(((((((&(v605))->x)))*((((&(v606))->x)))))-((((((&(v605))->y)))*((((&(v606))->y))))))));
  (((((&(v607))->y))=(((((((&(v605))->x)))*((((&(v606))->y)))))+((((((&(v605))->y)))*((((&(v606))->x))))))));
  return (v607);
};printf("%s", "reached function end without returning anything op V2 * V2 a V2 b\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v608) {{
  return (__ZH_LOP_sqrt_f64((((((((&(v608))->x)))*((((&(v608))->x)))))+((((((&(v608))->y)))*((((&(v608))->y))))))));
};printf("%s", "reached function end without returning anything lop f64 abs V2 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v609){
  (printf("%f", (((&(v609))->x))));
  (printf("%s", (" ")));
  (printf("%f", (((&(v609))->y))));
}
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v610){
  (printf("%f", (((&(v610))->x))));
  (printf("%s", (" ")));
  (printf("%f", (((&(v610))->y))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v611) {{
  (__ZH_LOP_out_V2((v611)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v612) {{
  ((__ZH_LOP_put_V2((v612))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v613, __ZH_TYPE_V2 v614) {{
  ((__ZH_LOP_put_V2((v614))), (printf("%s", (" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v615) {{
  __ZH_TYPE_Rng v616;
  (((((&(v616))->seed))=(v615)));
  return (v616);
};printf("%s", "reached function end without returning anything lop Rng Rng i64 seed\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_() {{
  return (__ZH_LOP_Rng_i64((((i64)5323))));
};printf("%s", "reached function end without returning anything lop Rng Rng\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotcall_RngP_ampersand(__ZH_TYPE_Rng* v617) {{
  ((((((v617))->seed))=(((((((i64)8253729)))*(((((v617))->seed)))))+((((i64)2396403))))));
  return ((((((v617))->seed)))%((((i64)32767))));
};printf("%s", "reached function end without returning anything op i64 .call.call RngP& slf\n"); exit(EXIT_FAILURE);}
int main(int argc, char *argv[]) {
  __ZH_TYPE_Rng v651;
  __ZH_TYPE_AVLTree_lessi64_greater v650;
  (((v650)=(__ZH_LOP_AVLTree_lessi64_greater_())));
  (((v651)=(__ZH_LOP_Rng_())));
  {
      i64 v655;
      i64 v654;
      i64 v653;
      __ZH_TYPE_Range v652;
      (((v652)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((i64)10))))));
      (((v653)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v652)))))));
      (((v654)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v652)))))));
      (((v655)=(v653)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v655))), (v654)))) {
        __ZH_TYPE_Vec_lessi64_greater v657;
        i64 v656;
        (((v656)=(__ZH_BOP__dotcall_dotcall_RngP_ampersand((&((v651)))))));
        ((printf("%s", ("inserting "))), (printf("%lld", (v656))), (printf("%s\n", (":"))));
        (__ZH_BOP__plus_equal_AVLTree_lessi64_greaterRi64(&(v650), (v656)));
        (((v657)=(__ZH_BOP__dotcall_dotcall_AVLTree_lessi64_greaterP_ampersand((&((v650)))))));
        (__ZH_LOP__less_Out((__ZH_ROP__less_Vec_lessi64_greaterR(&(v657)))));
        (__ZH_BOP__dotcall_dotshow_AVLTree_lessi64_greaterP_ampersand((&((v650)))));
        (__ZH_LOP__less_Out((__ZH_ROP__less_str(("")))));
        (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v657)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v655)))));
      }
    }
}
__ZH_TYPE_AVLNode_lessi64_greater __ZH_LOP_AVLNode_lessi64_greater_i64R(i64* v618) {{
  __ZH_TYPE_AVLNode_lessi64_greater v619;
  (((((&(v619))->h))=(((i64)1))));
  (((((&(v619))->val))=(*v618)));
  (((((&(v619))->lhs))=(((__ZH_TYPE_AVLNode_lessi64_greater*)(((i64)0))))));
  (((((&(v619))->rhs))=(((__ZH_TYPE_AVLNode_lessi64_greater*)(((i64)0))))));
  return (v619);
};printf("%s", "reached function end without returning anything lop AVLNode<i64> AVLNode<i64> i64R val\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_LOP_new_AVLNode_lessi64_greater(__ZH_TYPE_AVLNode_lessi64_greater v620) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v621;
  (((v621)=(((__ZH_TYPE_AVLNode_lessi64_greater*)(alloc((((i64)32))))))));
  (((*((v621)))=(v620)));
  return (v621);
};printf("%s", "reached function end without returning anything lop AVLNode<i64>P new AVLNode<i64> slf\n"); exit(EXIT_FAILURE);}
bool __ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v622) {{
  return (((((i64)(v622))))!=((((i64)0))));
};printf("%s", "reached function end without returning anything lop bool !! AVLNode<i64>P ptr\n"); exit(EXIT_FAILURE);}
bool __ZH_LOP__exclamation_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v623) {{
  return (((((i64)(v623))))==((((i64)0))));
};printf("%s", "reached function end without returning anything lop bool ! AVLNode<i64>P ptr\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP_ampersand(__ZH_TYPE_AVLNode_lessi64_greater* v624) {{
  if ((__ZH_LOP__exclamation_AVLNode_lessi64_greaterP((v624)))) {
    return (((i64)0));
  } else {
    return ((((v624))->h));
  }
};printf("%s", "reached function end without returning anything op i64 .call.h AVLNode<i64>P& slf\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP_ampersand(__ZH_TYPE_AVLNode_lessi64_greater* v625) {{
  return (((__ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP_ampersand(((((v625))->rhs)))))-((__ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP_ampersand(((((v625))->lhs))))));
};printf("%s", "reached function end without returning anything op i64 .call.bf AVLNode<i64>P& slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP_ampersand(__ZH_TYPE_AVLNode_lessi64_greater* v626){
  ((((((v626))->h))=(((((i64)1)))+((__ZH_LOP_max_i64i64((__ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP_ampersand(((((v626))->rhs)))), (__ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP_ampersand(((((v626))->lhs))))))))));
}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotrrot_AVLNode_lessi64_greaterP_ampersand(__ZH_TYPE_AVLNode_lessi64_greater* v627) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v628;
  (((v628)=((((v627))->lhs))));
  ((((((v627))->lhs))=((((v628))->rhs))));
  ((((((v628))->rhs))=(v627)));
  ((__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP_ampersand((v627))), (__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP_ampersand((v628))));
  return (v628);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.rrot AVLNode<i64>P& slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotlrot_AVLNode_lessi64_greaterP_ampersand(__ZH_TYPE_AVLNode_lessi64_greater* v629) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v630;
  (((v630)=((((v629))->rhs))));
  ((((((v629))->rhs))=((((v630))->lhs))));
  ((((((v630))->lhs))=(v629)));
  ((__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP_ampersand((v629))), (__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP_ampersand((v630))));
  return (v630);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.lrot AVLNode<i64>P& slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotbalance_AVLNode_lessi64_greaterP_ampersand(__ZH_TYPE_AVLNode_lessi64_greater* v631) {{
  (__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP_ampersand((v631)));
  if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP_ampersand((v631))))==((((i64)2))))) {
    if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP_ampersand(((((v631))->rhs)))))<((((i64)0))))) {
      ((((((v631))->rhs))=(__ZH_BOP__dotcall_dotrrot_AVLNode_lessi64_greaterP_ampersand(((((v631))->rhs))))));
    }
    return (__ZH_BOP__dotcall_dotlrot_AVLNode_lessi64_greaterP_ampersand((v631)));
  }
 else if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP_ampersand((v631))))==((__ZH_LOP__minus_i64((((i64)2))))))) {
    if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP_ampersand(((((v631))->lhs)))))>((((i64)0))))) {
      ((((((v631))->lhs))=(__ZH_BOP__dotcall_dotlrot_AVLNode_lessi64_greaterP_ampersand(((((v631))->lhs))))));
    }
    return (__ZH_BOP__dotcall_dotrrot_AVLNode_lessi64_greaterP_ampersand((v631)));
  }
  return (v631);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.balance AVLNode<i64>P& slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterP_ampersandi64R(__ZH_TYPE_AVLNode_lessi64_greater* v632, i64* v633) {{
  if ((__ZH_LOP__exclamation_AVLNode_lessi64_greaterP((v632)))) {
    __ZH_TYPE_AVLNode_lessi64_greater* v634;
    (((v634)=(__ZH_LOP_new_AVLNode_lessi64_greater((__ZH_LOP_AVLNode_lessi64_greater_i64R(&(*v633)))))));
    return (v634);
  }
 else if ((((*v633))<(((((v632))->val))))) {
    ((((((v632))->lhs))=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterP_ampersandi64R(((((v632))->lhs)), &(*v633)))));
  } else {
    ((((((v632))->rhs))=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterP_ampersandi64R(((((v632))->rhs)), &(*v633)))));
  }
  (((v632)=(__ZH_BOP__dotcall_dotbalance_AVLNode_lessi64_greaterP_ampersand((v632)))));
  return (v632);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.insert AVLNode<i64>P& slf i64R val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterP_ampersandStrR(__ZH_TYPE_AVLNode_lessi64_greater* v635, __ZH_TYPE_Str* v636){
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((v635)))) {
    __ZH_TYPE_Str v638;
    __ZH_TYPE_Str v637;
    ((printf("%lld\n", ((((v635))->val)))), (__ZH_LOP_put_StrR(&(*v636))), (printf("%s", ("|--"))));
    ((((v637)=(__ZH_LOP_Str_StrR(&(*v636))))), (__ZH_BOP__plus_equal_StrRstr(&(v637), ("|  "))));
    (__ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterP_ampersandStrR(((((v635))->lhs)), &(v637)));
    ((__ZH_LOP_put_StrR(&(*v636))), (printf("%s", ("'--"))));
    ((((v638)=(__ZH_LOP_Str_StrR(&(*v636))))), (__ZH_BOP__plus_equal_StrRstr(&(v638), ("   "))));
    (__ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterP_ampersandStrR(((((v635))->rhs)), &(v638)));
    (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v637)))));
    (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v638)))));
  } else {
    (__ZH_LOP__less_Out((__ZH_ROP__less_str(("null")))));
  }
}
__ZH_TYPE_AVLTree_lessi64_greater __ZH_LOP_AVLTree_lessi64_greater_() {{
  __ZH_TYPE_AVLTree_lessi64_greater v639;
  (((((&(v639))->root))=(((__ZH_TYPE_AVLNode_lessi64_greater*)(((i64)0))))));
  return (v639);
};printf("%s", "reached function end without returning anything lop AVLTree<i64> AVLTree<i64>\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotinsert_AVLTree_lessi64_greaterP_ampersandi64(__ZH_TYPE_AVLTree_lessi64_greater* v640, i64 v641){
  ((((((v640))->root))=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterP_ampersandi64R(((((v640))->root)), &(v641)))));
}
void __ZH_BOP__plus_equal_AVLTree_lessi64_greaterRi64(__ZH_TYPE_AVLTree_lessi64_greater* v642, i64 v643){
  (((((&(*v642))->root))=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterP_ampersandi64R((((&(*v642))->root)), &(v643)))));
}
void __ZH_LOP_toVec_Vec_lessi64_greaterRAVLNode_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v644, __ZH_TYPE_AVLNode_lessi64_greater* v645){
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((v645)))) {
    (__ZH_LOP_toVec_Vec_lessi64_greaterRAVLNode_lessi64_greaterP(&(*v644), ((((v645))->lhs))));
    (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(*v644), ((((v645))->val))));
    (__ZH_LOP_toVec_Vec_lessi64_greaterRAVLNode_lessi64_greaterP(&(*v644), ((((v645))->rhs))));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_AVLTree_lessi64_greaterP_ampersand(__ZH_TYPE_AVLTree_lessi64_greater* v646) {{
  __ZH_TYPE_Vec_lessi64_greater v647;
  (((v647)=(__ZH_LOP_Vec_lessi64_greater_())));
  (__ZH_LOP_toVec_Vec_lessi64_greaterRAVLNode_lessi64_greaterP(&(v647), ((((v646))->root))));
  return (v647);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v647)))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.call AVLTree<i64>P& slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotshow_AVLTree_lessi64_greaterP_ampersand(__ZH_TYPE_AVLTree_lessi64_greater* v648){
  __ZH_TYPE_Str v649;
  (((v649)=(__ZH_LOP_Str_())));
  (__ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterP_ampersandStrR(((((v648))->root)), &(v649)));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v649)))));
}
