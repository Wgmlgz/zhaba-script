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
__ZH_TYPE_Out __ZH_LOP_Out_();
__ZH_TYPE_Out __ZH_LOP__Out_();
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v102, __ZH_TYPE_Out v103);
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v104);
__ZH_TYPE_Out __ZH_ROP__less_str(str v105);
__ZH_TYPE_Out __ZH_LOP__less_str(str v106);
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v107, str v108);
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v109);
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v110, str* v111);
__ZH_TYPE_Out __ZH_ROP__less_char(char v112);
__ZH_TYPE_Out __ZH_LOP__less_char(char v113);
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v114, char v115);
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v116);
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v117, char* v118);
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v119);
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v120);
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v121, i8 v122);
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v123);
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v124, i8* v125);
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v126);
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v127);
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v128, i16 v129);
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v130);
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v131, i16* v132);
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v133);
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v134);
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v135, i32 v136);
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v137);
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v138, i32* v139);
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v140);
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v141);
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v142, i64 v143);
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v144);
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v145, i64* v146);
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v147);
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v148);
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v149, u8 v150);
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v151);
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v152, u8* v153);
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v154);
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v155);
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v156, u16 v157);
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v158);
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v159, u16* v160);
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v161);
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v162);
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v163, u32 v164);
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v165);
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v166, u32* v167);
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v168);
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v169);
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v170, u64 v171);
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v172);
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v173, u64* v174);
i64 __ZH_LOP__plus_i64(i64 v175);
bool __ZH_BOP__percent_percent_i64i64(i64 v176, i64 v177);
void __ZH_BOP__plus_equal_i64Ri64(i64* v178, i64 v179);
void __ZH_BOP__minus_equal_i64Ri64(i64* v180, i64 v181);
void __ZH_BOP__slash_equal_i64Ri64(i64* v182, i64 v183);
void __ZH_BOP__percent_equal_i64Ri64(i64* v184, i64 v185);
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v186, i64 v187);
void __ZH_LOP__plus_plus_i64R(i64* v188);
void __ZH_LOP__minus_minus_i64R(i64* v189);
void __ZH_LOP__plus_plus_u8R(u8* v190);
void __ZH_LOP__minus_minus_u8R(u8* v191);
i8 __ZH_LOP__minus_i8(i8 v192);
i16 __ZH_LOP__minus_i16(i16 v193);
i32 __ZH_LOP__minus_i32(i32 v194);
i64 __ZH_LOP__minus_i64(i64 v195);
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v196);
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v197, i64 v198);
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v199);
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v200);
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v201, i64 v202);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v223);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v225);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v226, __ZH_TYPE_VecIter_lessi64_greater v227);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v228);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v204, i64 v205);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v206, i64 v207);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v208);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v213);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v220, i64 v221);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v222);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v229);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v230);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v231);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v232);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v233);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v234);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v236, i64 v237);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v243);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v249, i64 v250);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v251, __ZH_TYPE_Vec_lessi64_greater* v252);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v257);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v258);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v259);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v260);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v261, __ZH_TYPE_Vec_lessi64_greater* v262);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v263, i64 v264, i64 v265);
void __ZH_LOP_swap_i64Pi64P(i64* v271, i64* v272);
i64* __ZH_LOP_partition_i64Pi64P(i64* v274, i64* v275);
void __ZH_LOP_qsort_i64Pi64P(i64* v279, i64* v280);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v284);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v287);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v288, i64 v289);
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v295, i64 v296);
char __ZH_BOP__caret_stri64(str v297, i64 v298);
bool __ZH_BOP__equal_equal_charstr(char v299, str v300);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v320);
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v322);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v323, __ZH_TYPE_VecIter_lesschar_greater v324);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v325);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v301, i64 v302);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v303, i64 v304);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v305);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v310);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v317, char v318);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v319);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v326);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v327);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v328);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v329);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v330);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v331);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v333, char v334);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v340);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v346, char v347);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v348, __ZH_TYPE_Vec_lesschar_greater* v349);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v354);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v355);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v356);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v357);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v358, __ZH_TYPE_Vec_lesschar_greater* v359);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v360, i64 v361, i64 v362);
void __ZH_LOP_swap_charPcharP(char* v368, char* v369);
char* __ZH_LOP_partition_charPcharP(char* v371, char* v372);
void __ZH_LOP_qsort_charPcharP(char* v376, char* v377);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v381);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v384);
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v386);
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v387);
char __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v389, i64 v390);
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v391, i64 v392);
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v393, char v394);
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v395);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v396);
i64 __ZH_LOP_len_str(str v398);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v400);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v401);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v402, char v403);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v404, __ZH_TYPE_Str* v405);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v411, str v412);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v418);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v419);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v420, __ZH_TYPE_Str* v421);
void __ZH_LOP_brainfuck_str(str v422);
int main(int argc, char *argv[]) ;

__ZH_TYPE_Out __ZH_LOP_Out_() {
  __ZH_TYPE_Out v101;
  return (v101);
}
__ZH_TYPE_Out __ZH_LOP__Out_() {
  return (__ZH_LOP_Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v102, __ZH_TYPE_Out v103) {
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v104) {
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_str(str v105) {
  (printf("%s\n", (v105)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_str(str v106) {
  ((printf("%s", (v106))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v107, str v108) {
  ((printf("%s", (v108))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v109) {
  (((*v109)=(in_str())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v110, str* v111) {
  (((*v111)=(in_str())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_char(char v112) {
  (printf("%c\n", (v112)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_char(char v113) {
  ((printf("%c", (v113))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v114, char v115) {
  ((printf("%c", (v115))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v116) {
  (((*v116)=(in_char())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v117, char* v118) {
  (((*v118)=(in_char())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v119) {
  (printf("%d\n", (v119)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v120) {
  ((printf("%d", (v120))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v121, i8 v122) {
  ((printf("%d", (v122))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v123) {
  (((*v123)=(in_i8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v124, i8* v125) {
  (((*v125)=(in_i8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v126) {
  (printf("%hd\n", (v126)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v127) {
  ((printf("%hd", (v127))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v128, i16 v129) {
  ((printf("%hd", (v129))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v130) {
  (((*v130)=(in_i16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v131, i16* v132) {
  (((*v132)=(in_i16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v133) {
  (printf("%d\n", (v133)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v134) {
  ((printf("%d", (v134))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v135, i32 v136) {
  ((printf("%d", (v136))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v137) {
  (((*v137)=(in_i32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v138, i32* v139) {
  (((*v139)=(in_i32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v140) {
  (printf("%lld\n", (v140)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v141) {
  ((printf("%lld", (v141))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v142, i64 v143) {
  ((printf("%lld", (v143))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v144) {
  (((*v144)=(in_i64())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v145, i64* v146) {
  (((*v146)=(in_i64())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v147) {
  (printf("%d\n", (v147)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v148) {
  ((printf("%d", (v148))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v149, u8 v150) {
  ((printf("%d", (v150))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v151) {
  (((*v151)=(in_u8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v152, u8* v153) {
  (((*v153)=(in_u8())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v154) {
  (printf("%hd\n", (v154)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v155) {
  ((printf("%hd", (v155))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v156, u16 v157) {
  ((printf("%hd", (v157))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v158) {
  (((*v158)=(in_u16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v159, u16* v160) {
  (((*v160)=(in_u16())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v161) {
  (printf("%u\n", (v161)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v162) {
  ((printf("%u", (v162))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v163, u32 v164) {
  ((printf("%u", (v164))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v165) {
  (((*v165)=(in_u32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v166, u32* v167) {
  (((*v167)=(in_u32())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v168) {
  (printf("%llu\n", (v168)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v169) {
  ((printf("%llu", (v169))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v170, u64 v171) {
  ((printf("%llu", (v171))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v172) {
  (((*v172)=(in_u64())));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v173, u64* v174) {
  (((*v174)=(in_u64())));
  return (__ZH_LOP__Out_());
}
i64 __ZH_LOP__plus_i64(i64 v175) {
  return (v175);
}
bool __ZH_BOP__percent_percent_i64i64(i64 v176, i64 v177) {
  return (!((((v176))%((v177)))));
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
void __ZH_LOP__plus_plus_i64R(i64* v188) {
  (__ZH_BOP__plus_equal_i64Ri64(&(*v188), (((i64)1))));
}
void __ZH_LOP__minus_minus_i64R(i64* v189) {
  (__ZH_BOP__minus_equal_i64Ri64(&(*v189), (((i64)1))));
}
void __ZH_LOP__plus_plus_u8R(u8* v190) {
  (((*v190)=(((*v190))+((((u8)1))))));
}
void __ZH_LOP__minus_minus_u8R(u8* v191) {
  (((*v191)=(((*v191))-((((u8)1))))));
}
i8 __ZH_LOP__minus_i8(i8 v192) {
  return (((((i8)0)))-((v192)));
}
i16 __ZH_LOP__minus_i16(i16 v193) {
  return (((((i16)0)))-((v193)));
}
i32 __ZH_LOP__minus_i32(i32 v194) {
  return (((((i32)0)))-((v194)));
}
i64 __ZH_LOP__minus_i64(i64 v195) {
  return (((((i64)0)))-((v195)));
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
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v223) {
  __ZH_TYPE_VecIter_lessi64_greater v224;
  (((((&(v224))->ptr))=(v223)));
  return (v224);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v225) {
  ((((((v225))->ptr))=(((i64*)(((((i64)((((v225))->ptr)))))+((((((i64)1)))*((((i64)8))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v226, __ZH_TYPE_VecIter_lessi64_greater v227) {
  return (((((i64)((((v226))->ptr)))))!=((((i64)(((&(v227))->ptr))))));
}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v228) {
  return &(*((((&(v228))->ptr))));
}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v204, i64 v205) {
  return (((i64*)(((i64*)(((((i64)((((v204))->head)))))+((((v205))*((((i64)8))))))))));
}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v206, i64 v207) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v206), (v207)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v208) {
  (printf("%s", ("[")));
  {
      i64 v212;
      i64 v211;
      i64 v210;
      __ZH_TYPE_Range v209;
      (((v209)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v208))->size))))));
      (((v210)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v209)))))));
      (((v211)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v209)))))));
      (((v212)=(v210)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v212))), (v211)))) {
        if ((!((!((v212)))))) {
          (printf("%s", (" ")));
        }
        (printf("%lld", (*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v208), (v212)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v212)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v213) {
  i64 v214;
  (((v214)=((((v213))->capacity))));
  if ((((v214))==((((i64)0))))) {
    (((v214)=(((i64)1))));
    ((((((v213))->head))=(((i64*)(alloc((((i64)8))))))));
    ((((((v213))->capacity))=(v214)));
  } else {
    i64* v215;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v214), (((i64)2))));
    (((v215)=(((i64*)(alloc((((v214))*((((i64)8))))))))));
    {
        i64 v219;
        i64 v218;
        i64 v217;
        __ZH_TYPE_Range v216;
        (((v216)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v213))->size))))));
        (((v217)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v216)))))));
        (((v218)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v216)))))));
        (((v219)=(v217)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v219))), (v218)))) {
          (((*((((i64*)(((((i64)(v215))))+((((v219))*((((i64)8))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v213), (v219)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v219)))));
        }
      }
    (free((void*) (((i64)((((v213))->head))))));
    ((((((v213))->head))=(v215)));
  }
  ((((((v213))->capacity))=(v214)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v220, i64 v221) {
  if (((((((v220))->size)))==(((((v220))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((v220)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v220), ((((v220))->size))))=(v221)));
  (__ZH_LOP__plus_plus_i64R(&((((v220))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v222) {
  (__ZH_LOP__minus_minus_i64R(&((((v222))->size))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v229) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P(((((v229))->head))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v230) {
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v230), ((((v230))->size))))));
}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v231) {
  return &(*(((((v231))->head))));
}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v232) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v232), ((((((v232))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v233) {
  if ((!((!((((i64)((((v233))->head))))))))) {
    (free((void*) (((i64)((((v233))->head))))));
    ((((((v233))->size))=(((i64)0))));
    ((((((v233))->capacity))=(((i64)0))));
    ((((((v233))->head))=(((i64*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v234) {
  __ZH_TYPE_Vec_lessi64_greater v235;
  (((((&(v235))->head))=(((i64*)(((i64)0))))));
  (((((&(v235))->size))=(((i64)0))));
  (((((&(v235))->capacity))=(((i64)0))));
  while ((((((&(v235))->capacity)))<((v234)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand((&((v235)))));
  }
  (((((&(v235))->size))=(v234)));
  (((((&(v235))->capacity))=(v234)));
  return (v235);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v235)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v236, i64 v237) {
  __ZH_TYPE_Vec_lessi64_greater v238;
  (((v238)=(__ZH_LOP_Vec_lessi64_greater_i64((v236)))));
  {
      i64 v242;
      i64 v241;
      i64 v240;
      __ZH_TYPE_Range v239;
      (((v239)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v238))->size))))));
      (((v240)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v239)))))));
      (((v241)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v239)))))));
      (((v242)=(v240)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v242))), (v241)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v238))), (v242)))=(v237)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v242)))));
      }
    }
  return (v238);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v238)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {
  return (__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v243) {
  __ZH_TYPE_Vec_lessi64_greater v244;
  (((v244)=(__ZH_LOP_Vec_lessi64_greater_i64((((&(*v243))->size))))));
  {
      i64 v248;
      i64 v247;
      i64 v246;
      __ZH_TYPE_Range v245;
      (((v245)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v243))->size))))));
      (((v246)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v245)))))));
      (((v247)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v245)))))));
      (((v248)=(v246)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v248))), (v247)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v244))), (v248)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((*v243))), (v248)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v248)))));
      }
    }
  return (v244);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v244)))));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v249, i64 v250) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v249))), (v250)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v251, __ZH_TYPE_Vec_lessi64_greater* v252) {
  {
      __ZH_TYPE_VecIter_lessi64_greater v256;
      __ZH_TYPE_VecIter_lessi64_greater v255;
      __ZH_TYPE_VecIter_lessi64_greater v254;
      __ZH_TYPE_Vec_lessi64_greater v253;
      (((v253)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v252)))));
      (((v254)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((&((v253)))))));
      (((v255)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((&((v253)))))));
      (((v256)=(v254)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater((&((v256))), (v255)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((*v251))), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v256)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand((&((v256)))));
      }
    }
}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v257) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v257)))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v258) {
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&((*v258)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v259) {
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v259)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v260) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v260))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v261, __ZH_TYPE_Vec_lessi64_greater* v262) {
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v262))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v263, i64 v264, i64 v265) {
  __ZH_TYPE_Vec_lessi64_greater v266;
  (((v266)=(__ZH_LOP_Vec_lessi64_greater_i64((((i64)0))))));
  {
      i64 v270;
      i64 v269;
      i64 v268;
      __ZH_TYPE_Range v267;
      (((v267)=(__ZH_BOP__dot_dot_i64i64((v264), (v265)))));
      (((v268)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v267)))))));
      (((v269)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v267)))))));
      (((v270)=(v268)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v270))), (v269)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&((v266))), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v263), (v270)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v270)))));
      }
    }
  return (v266);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v266)))));
}
void __ZH_LOP_swap_i64Pi64P(i64* v271, i64* v272) {
  i64 v273;
  (((v273)=(*((v271)))));
  (((*((v271)))=(*((v272)))));
  (((*((v272)))=(v273)));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v274, i64* v275) {
  i64* v278;
  i64* v277;
  i64* v276;
  ((((v276)=(((i64*)(((((i64)(v275))))-((((((i64)1)))*((((i64)8)))))))))), (((v277)=(v274))), (((v278)=(v274))));
  (((v278)=(v274)));
  while ((((((i64)(v278))))!=((((i64)(v276)))))) {
    if ((((*((v278))))<((*((v276)))))) {
      (__ZH_LOP_swap_i64Pi64P((v277), (v278)));
      (((v277)=(((i64*)(((((i64)(v277))))+((((((i64)1)))*((((i64)8))))))))));
    }
    (((v278)=(((i64*)(((((i64)(v278))))+((((((i64)1)))*((((i64)8))))))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v277), (v276)));
  return (v277);
}
void __ZH_LOP_qsort_i64Pi64P(i64* v279, i64* v280) {
  i64 v282;
  i64 v281;
  (((v281)=(((((i64)(v280))))-((((i64)(v279)))))));
  (((v282)=(((i64)8))));
  if ((((v281))>((v282)))) {
    i64* v283;
    (((v283)=(__ZH_LOP_partition_i64Pi64P((v279), (v280)))));
    (__ZH_LOP_qsort_i64Pi64P((v279), (v283)));
    (((v283)=(((i64*)(((((i64)(v283))))+((((((i64)1)))*((((i64)8))))))))));
    (__ZH_LOP_qsort_i64Pi64P((v283), (v280)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v284) {
  __ZH_TYPE_VecIter_lessi64_greater v286;
  __ZH_TYPE_VecIter_lessi64_greater v285;
  (((v285)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((v284)))));
  (((v286)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((v284)))));
  (__ZH_LOP_qsort_i64Pi64P((((&(v285))->ptr)), (((&(v286))->ptr))));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v287) {
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand((&((*v287)))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v288, i64 v289) {
  __ZH_TYPE_Vec_lessi64_greater v290;
  (((v290)=(__ZH_LOP_Vec_lessi64_greater_i64((((v289))-((v288)))))));
  {
      i64 v294;
      i64 v293;
      i64 v292;
      __ZH_TYPE_Range v291;
      (((v291)=(__ZH_BOP__dot_dot_i64i64((v288), (v289)))));
      (((v292)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v291)))))));
      (((v293)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v291)))))));
      (((v294)=(v292)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v294))), (v293)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&((v290))), (((v294))-((v288)))))=(v294)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v294)))));
      }
    }
  return (v290);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&((v290)))));
}
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v295, i64 v296) {
  return (*((((char*)(((((i64)(*((v295))))))+((v296)))))));
}
char __ZH_BOP__caret_stri64(str v297, i64 v298) {
  return (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v297))), (v298)));
}
bool __ZH_BOP__equal_equal_charstr(char v299, str v300) {
  return (((v299))==((__ZH_BOP__caret_stri64((v300), (((i64)0))))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v320) {
  __ZH_TYPE_VecIter_lesschar_greater v321;
  (((((&(v321))->ptr))=(v320)));
  return (v321);
}
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v322) {
  ((((((v322))->ptr))=(((char*)(((((i64)((((v322))->ptr)))))+((((((i64)1)))*((((i64)1))))))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v323, __ZH_TYPE_VecIter_lesschar_greater v324) {
  return (((((i64)((((v323))->ptr)))))!=((((i64)(((&(v324))->ptr))))));
}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v325) {
  return &(*((((&(v325))->ptr))));
}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v301, i64 v302) {
  return (((char*)(((char*)(((((i64)((((v301))->head)))))+((((v302))*((((i64)1))))))))));
}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v303, i64 v304) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v303), (v304)))));
}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v305) {
  (printf("%s", ("[")));
  {
      i64 v309;
      i64 v308;
      i64 v307;
      __ZH_TYPE_Range v306;
      (((v306)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v305))->size))))));
      (((v307)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v306)))))));
      (((v308)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v306)))))));
      (((v309)=(v307)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v309))), (v308)))) {
        if ((!((!((v309)))))) {
          (printf("%s", (" ")));
        }
        (printf("%c", (*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v305), (v309)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v309)))));
      }
    }
  (printf("%s", ("]")));
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v310) {
  i64 v311;
  (((v311)=((((v310))->capacity))));
  if ((((v311))==((((i64)0))))) {
    (((v311)=(((i64)1))));
    ((((((v310))->head))=(((char*)(alloc((((i64)1))))))));
    ((((((v310))->capacity))=(v311)));
  } else {
    char* v312;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v311), (((i64)2))));
    (((v312)=(((char*)(alloc((((v311))*((((i64)1))))))))));
    {
        i64 v316;
        i64 v315;
        i64 v314;
        __ZH_TYPE_Range v313;
        (((v313)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), ((((v310))->size))))));
        (((v314)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v313)))))));
        (((v315)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v313)))))));
        (((v316)=(v314)));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v316))), (v315)))) {
          (((*((((char*)(((((i64)(v312))))+((((v316))*((((i64)1))))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v310), (v316)))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v316)))));
        }
      }
    (free((void*) (((i64)((((v310))->head))))));
    ((((((v310))->head))=(v312)));
  }
  ((((((v310))->capacity))=(v311)));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v317, char v318) {
  if (((((((v317))->size)))==(((((v317))->capacity))))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((v317)));
  }
  (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v317), ((((v317))->size))))=(v318)));
  (__ZH_LOP__plus_plus_i64R(&((((v317))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v319) {
  (__ZH_LOP__minus_minus_i64R(&((((v319))->size))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v326) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP(((((v326))->head))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v327) {
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v327), ((((v327))->size))))));
}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v328) {
  return &(*(((((v328))->head))));
}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v329) {
  return &(*((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v329), ((((((v329))->size)))-((((i64)1))))))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v330) {
  if ((!((!((((i64)((((v330))->head))))))))) {
    (free((void*) (((i64)((((v330))->head))))));
    ((((((v330))->size))=(((i64)0))));
    ((((((v330))->capacity))=(((i64)0))));
    ((((((v330))->head))=(((char*)(((i64)0))))));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v331) {
  __ZH_TYPE_Vec_lesschar_greater v332;
  (((((&(v332))->head))=(((char*)(((i64)0))))));
  (((((&(v332))->size))=(((i64)0))));
  (((((&(v332))->capacity))=(((i64)0))));
  while ((((((&(v332))->capacity)))<((v331)))) {
    (__ZH_BOP__dotcall_dotdouble_capacity_Vec_lesschar_greaterP_ampersand((&((v332)))));
  }
  (((((&(v332))->size))=(v331)));
  (((((&(v332))->capacity))=(v331)));
  return (v332);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v332)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v333, char v334) {
  __ZH_TYPE_Vec_lesschar_greater v335;
  (((v335)=(__ZH_LOP_Vec_lesschar_greater_i64((v333)))));
  {
      i64 v339;
      i64 v338;
      i64 v337;
      __ZH_TYPE_Range v336;
      (((v336)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(v335))->size))))));
      (((v337)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v336)))))));
      (((v338)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v336)))))));
      (((v339)=(v337)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v339))), (v338)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v335))), (v339)))=(v334)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v339)))));
      }
    }
  return (v335);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v335)))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {
  return (__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v340) {
  __ZH_TYPE_Vec_lesschar_greater v341;
  (((v341)=(__ZH_LOP_Vec_lesschar_greater_i64((((&(*v340))->size))))));
  {
      i64 v345;
      i64 v344;
      i64 v343;
      __ZH_TYPE_Range v342;
      (((v342)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v340))->size))))));
      (((v343)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v342)))))));
      (((v344)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v342)))))));
      (((v345)=(v343)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v345))), (v344)))) {
        (((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((v341))), (v345)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&((*v340))), (v345)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v345)))));
      }
    }
  return (v341);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v341)))));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v346, char v347) {
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v346))), (v347)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v348, __ZH_TYPE_Vec_lesschar_greater* v349) {
  {
      __ZH_TYPE_VecIter_lesschar_greater v353;
      __ZH_TYPE_VecIter_lesschar_greater v352;
      __ZH_TYPE_VecIter_lesschar_greater v351;
      __ZH_TYPE_Vec_lesschar_greater v350;
      (((v350)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v349)))));
      (((v351)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&((v350)))))));
      (((v352)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((&((v350)))))));
      (((v353)=(v351)));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater((&((v353))), (v352)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((*v348))), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v353)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand((&((v353)))));
      }
    }
}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v354) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v354)))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v355) {
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&((*v355)))));
  (printf("%s\n", ("")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v356) {
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v356)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v357) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v357))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v358, __ZH_TYPE_Vec_lesschar_greater* v359) {
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v359))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v360, i64 v361, i64 v362) {
  __ZH_TYPE_Vec_lesschar_greater v363;
  (((v363)=(__ZH_LOP_Vec_lesschar_greater_i64((((i64)0))))));
  {
      i64 v367;
      i64 v366;
      i64 v365;
      __ZH_TYPE_Range v364;
      (((v364)=(__ZH_BOP__dot_dot_i64i64((v361), (v362)))));
      (((v365)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v364)))))));
      (((v366)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v364)))))));
      (((v367)=(v365)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v367))), (v366)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((v363))), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v360), (v367)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v367)))));
      }
    }
  return (v363);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&((v363)))));
}
void __ZH_LOP_swap_charPcharP(char* v368, char* v369) {
  char v370;
  (((v370)=(*((v368)))));
  (((*((v368)))=(*((v369)))));
  (((*((v369)))=(v370)));
}
char* __ZH_LOP_partition_charPcharP(char* v371, char* v372) {
  char* v375;
  char* v374;
  char* v373;
  ((((v373)=(((char*)(((((i64)(v372))))-((((((i64)1)))*((((i64)1)))))))))), (((v374)=(v371))), (((v375)=(v371))));
  (((v375)=(v371)));
  while ((((((i64)(v375))))!=((((i64)(v373)))))) {
    if ((((*((v375))))<((*((v373)))))) {
      (__ZH_LOP_swap_charPcharP((v374), (v375)));
      (((v374)=(((char*)(((((i64)(v374))))+((((((i64)1)))*((((i64)1))))))))));
    }
    (((v375)=(((char*)(((((i64)(v375))))+((((((i64)1)))*((((i64)1))))))))));
  }
  (__ZH_LOP_swap_charPcharP((v374), (v373)));
  return (v374);
}
void __ZH_LOP_qsort_charPcharP(char* v376, char* v377) {
  i64 v379;
  i64 v378;
  (((v378)=(((((i64)(v377))))-((((i64)(v376)))))));
  (((v379)=(((i64)1))));
  if ((((v378))>((v379)))) {
    char* v380;
    (((v380)=(__ZH_LOP_partition_charPcharP((v376), (v377)))));
    (__ZH_LOP_qsort_charPcharP((v376), (v380)));
    (((v380)=(((char*)(((((i64)(v380))))+((((((i64)1)))*((((i64)1))))))))));
    (__ZH_LOP_qsort_charPcharP((v380), (v377)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v381) {
  __ZH_TYPE_VecIter_lesschar_greater v383;
  __ZH_TYPE_VecIter_lesschar_greater v382;
  (((v382)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((v381)))));
  (((v383)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((v381)))));
  (__ZH_LOP_qsort_charPcharP((((&(v382))->ptr)), (((&(v383))->ptr))));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v384) {
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand((&((*v384)))));
}
__ZH_TYPE_Str __ZH_LOP_Str_() {
  __ZH_TYPE_Str v385;
  (((((&(v385))->data))=(__ZH_LOP_Vec_lesschar_greater_())));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v385))->data)))), (((char)(((u8)0))))));
  (((((&(v385))->size))=(((i64)0))));
  return (v385);
}
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v386) {
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(((((v386))->data))))));
}
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v387) {
  __ZH_TYPE_VecIter_lesschar_greater v388;
  (((v388)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&(((((v387))->data))))))));
  return (((str)(((&(v388))->ptr))));
}
char __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v389, i64 v390) {
  return (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(((((v389))->data)))), (v390)));
}
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v391, i64 v392) {
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((&(((((v391))->data)))), (v392)));
}
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v393, char v394) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v393))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v393))->data)))), (v394)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v393))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__plus_plus_i64R(&((((v393))->size))));
}
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v395) {
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v395))->data))))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((((v395))->data))))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((((v395))->data)))), (((char)(((u8)0))))));
  (__ZH_LOP__minus_minus_i64R(&((((v395))->size))));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v396) {
  __ZH_TYPE_Str v397;
  (((v397)=(__ZH_LOP_Str_())));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&((((&(v397))->data))))));
  while ((((*((((char*)(v396))))))!=((((char)(((u8)0))))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v397))->data)))), (*((((char*)(v396)))))));
    (((v396)=(((str)(((((i64)(v396))))+((((i64)1))))))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((((&(v397))->data)))), (((char)(((u8)0))))));
  (((((&(v397))->size))=(((((&(((&(v397))->data)))->size)))-((((i64)1))))));
  return (v397);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&((v397)))));
}
i64 __ZH_LOP_len_str(str v398) {
  i64 v399;
  (((v399)=(((i64)0))));
  while ((((*((((char*)(v398))))))!=((((char)(((u8)0))))))) {
    (__ZH_LOP__plus_plus_i64R(&(v399)));
    (((v398)=(((str)(((((i64)(v398))))+((((i64)1))))))));
  }
  return (v399);
}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v400) {
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v400)))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v401) {
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&((*v401)))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v402, char v403) {
  (__ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar((&((*v402))), (v403)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v404, __ZH_TYPE_Str* v405) {
  {
      i64 v409;
      i64 v408;
      i64 v407;
      __ZH_TYPE_Range v406;
      (((v406)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (((&(*v405))->size))))));
      (((v407)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v406)))))));
      (((v408)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v406)))))));
      (((v409)=(v407)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v409))), (v408)))) {
        char v410;
        (((v410)=(((char)(((i8)115))))));
        (((v410)=(__ZH_BOP__dotcall_dotat_StrP_ampersandi64((&((*v405))), (v409)))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v404), (v410)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v409)))));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v411, str v412) {
  i64 v413;
  (((v413)=(__ZH_LOP_len_str((v412)))));
  {
      i64 v417;
      i64 v416;
      i64 v415;
      __ZH_TYPE_Range v414;
      (((v414)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (v413)))));
      (((v415)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v414)))))));
      (((v416)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v414)))))));
      (((v417)=(v415)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v417))), (v416)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v411), (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&((v412))), (v417)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v417)))));
      }
    }
}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v418) {
  (__ZH_LOP_out_StrR(&(*v418)));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v419) {
  ((__ZH_LOP_put_StrR(&(*v419))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v420, __ZH_TYPE_Str* v421) {
  ((__ZH_LOP_put_StrR(&(*v421))), (printf("%s", (" "))));
  return (__ZH_LOP__Out_());
}
void __ZH_LOP_brainfuck_str(str v422) {
  i64 v424;
  u8* v423;
  (((v423)=(((u8*)(alloc((((i64)3000))))))));
  (((v424)=(((i64)0))));
  {
      i64 v428;
      i64 v427;
      i64 v426;
      __ZH_TYPE_Range v425;
      (((v425)=(__ZH_BOP__dot_dot_i64i64((((i64)0)), (__ZH_LOP_len_str((v422)))))));
      (((v426)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&((v425)))))));
      (((v427)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&((v425)))))));
      (((v428)=(v426)));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&((v428))), (v427)))) {
        char v430;
        u8 v429;
        (((v429)=(*((v423)))));
        (((v430)=(__ZH_BOP__caret_stri64((v422), (v428)))));
        {
            char v431;
            (((v431)=(v430)));
            if ((__ZH_BOP__equal_equal_charstr((v431), (">")))) {
              (((v423)=(((u8*)(((((i64)(v423))))+((((((i64)1)))*((((i64)1))))))))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v431), ("<")))) {
              (((v423)=(((u8*)(((((i64)(v423))))-((((((i64)1)))*((((i64)1))))))))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v431), ("+")))) {
              (__ZH_LOP__plus_plus_u8R(&(*((v423)))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v431), ("-")))) {
              (__ZH_LOP__minus_minus_u8R(&(*((v423)))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v431), (".")))) {
              (printf("%c", (((char)(v429)))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v431), (",")))) {
              (__ZH_LOP__greater_u8R(&(*((v423)))));
            }
 else if ((__ZH_BOP__equal_equal_charstr((v431), ("[")))) {
              if ((!((v429)))) {
                (__ZH_LOP__plus_plus_i64R(&(v424)));
                while ((!((!((v424)))))) {
                  (__ZH_LOP__plus_plus_i64R(&(v428)));
                  if ((__ZH_BOP__equal_equal_charstr((__ZH_BOP__caret_stri64((v422), (v428))), ("[")))) {
                    (__ZH_LOP__plus_plus_i64R(&(v424)));
                  }
                  if ((__ZH_BOP__equal_equal_charstr((__ZH_BOP__caret_stri64((v422), (v428))), ("]")))) {
                    (__ZH_LOP__minus_minus_i64R(&(v424)));
                  }
                }
              }
            }
 else if ((__ZH_BOP__equal_equal_charstr((v431), ("]")))) {
              if ((!((!((v429)))))) {
                if ((__ZH_BOP__equal_equal_charstr((v430), ("]")))) {
                  (__ZH_LOP__plus_plus_i64R(&(v424)));
                }
                while ((!((!((v424)))))) {
                  (__ZH_LOP__minus_minus_i64R(&(v428)));
                  if ((__ZH_BOP__equal_equal_charstr((__ZH_BOP__caret_stri64((v422), (v428))), ("[")))) {
                    (__ZH_LOP__minus_minus_i64R(&(v424)));
                  }
                  if ((__ZH_BOP__equal_equal_charstr((__ZH_BOP__caret_stri64((v422), (v428))), ("]")))) {
                    (__ZH_LOP__plus_plus_i64R(&(v424)));
                  }
                }
                (__ZH_LOP__minus_minus_i64R(&(v428)));
              }
            }
          }
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&((v428)))));
      }
    }
}
int main(int argc, char *argv[])  {
  (__ZH_LOP_brainfuck_str(("\n  ++++++++[>++++[>++>+++>+++>+<<<<-]>+>->+>>\n  +[<]<-]>>.>>---.+++++++..+++.>.<<-.>.+++.-\n  -----.--------.>+.>++.\n  ")));
}
