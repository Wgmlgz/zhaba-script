#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>

typedef int32_t i8;
typedef int32_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint32_t u8;
typedef uint32_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef char* str;

typedef float f4;
typedef double f8;
typedef long double f10;

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
struct __PROT_ZH_TYPE_Range;
typedef struct __PROT_ZH_TYPE_Range __ZH_TYPE_Range;
struct __PROT_ZH_TYPE_Out;
typedef struct __PROT_ZH_TYPE_Out __ZH_TYPE_Out;
struct __PROT_ZH_TYPE_Vec_lessi64_greater;
typedef struct __PROT_ZH_TYPE_Vec_lessi64_greater __ZH_TYPE_Vec_lessi64_greater;
struct __PROT_ZH_TYPE_VecIter_lessi64_greater;
typedef struct __PROT_ZH_TYPE_VecIter_lessi64_greater __ZH_TYPE_VecIter_lessi64_greater;

struct __PROT_ZH_TYPE_Range {
  i64 end;
  i64 begin;
};
struct __PROT_ZH_TYPE_Out {
  u8 prikol;
};
struct __PROT_ZH_TYPE_Vec_lessi64_greater {
  i64* head;
  i64 capacity;
  i64 size;
};
struct __PROT_ZH_TYPE_VecIter_lessi64_greater {
  i64* ptr;
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
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v122);
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v123, i64 v124);
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v125);
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v126);
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v127, i64 v128);
__ZH_TYPE_Out __ZH_LOP_Out_();
__ZH_TYPE_Out __ZH_LOP__Out_();
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v131, __ZH_TYPE_Out v132);
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v133);
__ZH_TYPE_Out __ZH_ROP__less_str(str v134);
__ZH_TYPE_Out __ZH_LOP__less_str(str v135);
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v136, str v137);
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v138);
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v139, str* v140);
__ZH_TYPE_Out __ZH_ROP__less_char(char v141);
__ZH_TYPE_Out __ZH_LOP__less_char(char v142);
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v143, char v144);
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v145);
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v146, char* v147);
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v148);
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v149);
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v150, i8 v151);
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v152);
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v153, i8* v154);
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v155);
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v156);
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v157, i16 v158);
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v159);
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v160, i16* v161);
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v162);
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v163);
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v164, i32 v165);
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v166);
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v167, i32* v168);
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v169);
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v170);
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v171, i64 v172);
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v173);
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v174, i64* v175);
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v176);
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v177);
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v178, u8 v179);
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v180);
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v181, u8* v182);
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v183);
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v184);
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v185, u16 v186);
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v187);
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v188, u16* v189);
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v190);
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v191);
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v192, u32 v193);
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v194);
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v195, u32* v196);
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v197);
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v198);
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v199, u64 v200);
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v201);
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v202, u64* v203);
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
int main(int argc, char *argv[]) ;

i64 __ZH_LOP__plus_i64(i64 v101) {
  return v101;
}
bool __ZH_BOP__percent_percent_i64i64(i64 v102, i64 v103) {
  return !((v102)%(v103));
}
void __ZH_BOP__plus_equal_i64Ri64(i64* v104, i64 v105) {
  (*v104=(*v104)+(v105));
}
void __ZH_BOP__minus_equal_i64Ri64(i64* v106, i64 v107) {
  (*v106=(*v106)-(v107));
}
void __ZH_BOP__slash_equal_i64Ri64(i64* v108, i64 v109) {
  (*v108=(*v108)/(v109));
}
void __ZH_BOP__percent_equal_i64Ri64(i64* v110, i64 v111) {
  (*v110=(*v110)%(v111));
}
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v112, i64 v113) {
  (*v112=(*v112)*(v113));
}
void __ZH_LOP__plus_plus_i64R(i64* v114) {
  __ZH_BOP__plus_equal_i64Ri64(&*v114, ((i64)1));
}
void __ZH_LOP__minus_minus_i64R(i64* v115) {
  __ZH_BOP__minus_equal_i64Ri64(&*v115, ((i64)1));
}
void __ZH_LOP__plus_plus_u8R(u8* v116) {
  (*v116=(*v116)+(((u8)1)));
}
void __ZH_LOP__minus_minus_u8R(u8* v117) {
  (*v117=(*v117)-(((u8)1)));
}
i8 __ZH_LOP__minus_i8(i8 v118) {
  return (((i8)0))-(v118);
}
i16 __ZH_LOP__minus_i16(i16 v119) {
  return (((i16)0))-(v119);
}
i32 __ZH_LOP__minus_i32(i32 v120) {
  return (((i32)0))-(v120);
}
i64 __ZH_LOP__minus_i64(i64 v121) {
  return (((i64)0))-(v121);
}
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v122) {
  (*(v122)=(*(v122))+(((i64)1)));
}
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v123, i64 v124) {
  return (*(v123))!=(v124);
}
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v125) {
  return ((v125)->begin);
}
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v126) {
  return ((v126)->end);
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v127, i64 v128) {
  __ZH_TYPE_Range v129;
  (((&v129)->begin)=v127);
  (((&v129)->end)=v128);
  return v129;
}
__ZH_TYPE_Out __ZH_LOP_Out_() {
  __ZH_TYPE_Out v130;
  return v130;
}
__ZH_TYPE_Out __ZH_LOP__Out_() {
  return __ZH_LOP_Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v131, __ZH_TYPE_Out v132) {
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v133) {
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_str(str v134) {
  printf("%s\n", v134);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_str(str v135) {
  printf("%s", v135), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v136, str v137) {
  printf("%s", v137), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v138) {
  (*v138=in_str());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v139, str* v140) {
  (*v140=in_str());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_char(char v141) {
  printf("%c\n", v141);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_char(char v142) {
  printf("%c", v142), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v143, char v144) {
  printf("%c", v144), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v145) {
  (*v145=in_char());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v146, char* v147) {
  (*v147=in_char());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v148) {
  printf("%d\n", v148);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v149) {
  printf("%d", v149), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v150, i8 v151) {
  printf("%d", v151), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v152) {
  (*v152=in_i8());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v153, i8* v154) {
  (*v154=in_i8());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v155) {
  printf("%hd\n", v155);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v156) {
  printf("%hd", v156), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v157, i16 v158) {
  printf("%hd", v158), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v159) {
  (*v159=in_i16());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v160, i16* v161) {
  (*v161=in_i16());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v162) {
  printf("%d\n", v162);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v163) {
  printf("%d", v163), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v164, i32 v165) {
  printf("%d", v165), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v166) {
  (*v166=in_i32());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v167, i32* v168) {
  (*v168=in_i32());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v169) {
  printf("%lld\n", v169);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v170) {
  printf("%lld", v170), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v171, i64 v172) {
  printf("%lld", v172), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v173) {
  (*v173=in_i64());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v174, i64* v175) {
  (*v175=in_i64());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v176) {
  printf("%d\n", v176);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v177) {
  printf("%d", v177), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v178, u8 v179) {
  printf("%d", v179), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v180) {
  (*v180=in_u8());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v181, u8* v182) {
  (*v182=in_u8());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v183) {
  printf("%hd\n", v183);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v184) {
  printf("%hd", v184), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v185, u16 v186) {
  printf("%hd", v186), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v187) {
  (*v187=in_u16());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v188, u16* v189) {
  (*v189=in_u16());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v190) {
  printf("%u\n", v190);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v191) {
  printf("%u", v191), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v192, u32 v193) {
  printf("%u", v193), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v194) {
  (*v194=in_u32());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v195, u32* v196) {
  (*v196=in_u32());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v197) {
  printf("%llu\n", v197);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v198) {
  printf("%llu", v198), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v199, u64 v200) {
  printf("%llu", v200), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v201) {
  (*v201=in_u64());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v202, u64* v203) {
  (*v203=in_u64());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v223) {
  __ZH_TYPE_VecIter_lessi64_greater v224;
  (((&v224)->ptr)=v223);
  return v224;
}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v225) {
  (((v225)->ptr)=((i64*)(((i64)((v225)->ptr)))+((((i64)1))*(((i64)8)))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v226, __ZH_TYPE_VecIter_lessi64_greater v227) {
  return (((i64)((v226)->ptr)))!=(((i64)((&v227)->ptr)));
}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v228) {
  return &*(((&v228)->ptr));
}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v204, i64 v205) {
  return ((i64*)((i64*)(((i64)((v204)->head)))+((v205)*(((i64)8)))));
}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v206, i64 v207) {
  return &*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(v206, v207));
}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v208) {
  printf("%s", "[");
  {
      i64 v212;
      i64 v211;
      i64 v210;
      __ZH_TYPE_Range v209;
      (v209=__ZH_BOP__dot_dot_i64i64(((i64)0), ((v208)->size)));
      (v210=__ZH_BOP__dotcall_dotbegin_RangeP_ampersand(&(v209)));
      (v211=__ZH_BOP__dotcall_dotend_RangeP_ampersand(&(v209)));
      (v212=v210);
      while (__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(&(v212), v211)) {
          if (!(!(v212))) {
              printf("%s", " ");
            }
          printf("%lld", *(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(v208, v212)));
          __ZH_BOP__dotcall_dotnext_i64P_ampersand(&(v212));
        }
    }
  printf("%s", "]");
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v213) {
  i64 v214;
  (v214=((v213)->capacity));
  if ((v214)==(((i64)0))) {
      (v214=((i64)1));
      (((v213)->head)=((i64*)malloc(((i64)8))));
      (((v213)->capacity)=v214);
    } else {
      i64* v215;
      __ZH_BOP__asterisk_equal_i64Ri64(&v214, ((i64)2));
      (v215=((i64*)malloc((v214)*(((i64)8)))));
      {
          i64 v219;
          i64 v218;
          i64 v217;
          __ZH_TYPE_Range v216;
          (v216=__ZH_BOP__dot_dot_i64i64(((i64)0), ((v213)->size)));
          (v217=__ZH_BOP__dotcall_dotbegin_RangeP_ampersand(&(v216)));
          (v218=__ZH_BOP__dotcall_dotend_RangeP_ampersand(&(v216)));
          (v219=v217);
          while (__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(&(v219), v218)) {
              (*(((i64*)(((i64)v215))+((v219)*(((i64)8)))))=*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(v213, v219));
              __ZH_BOP__dotcall_dotnext_i64P_ampersand(&(v219));
            }
        }
      free((void*) ((i64)((v213)->head)));
      (((v213)->head)=v215);
    }
  (((v213)->capacity)=v214);
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v220, i64 v221) {
  if ((((v220)->size))==(((v220)->capacity))) {
      __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(v220);
    }
  (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(v220, ((v220)->size))=v221);
  __ZH_LOP__plus_plus_i64R(&((v220)->size));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v222) {
  __ZH_LOP__minus_minus_i64R(&((v222)->size));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v229) {
  return __ZH_LOP_VecIter_lessi64_greater_i64P(((v229)->head));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v230) {
  return __ZH_LOP_VecIter_lessi64_greater_i64P(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(v230, ((v230)->size)));
}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v231) {
  return &*(((v231)->head));
}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v232) {
  return &*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(v232, (((v232)->size))-(((i64)1))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v233) {
  if (!(!(((i64)((v233)->head))))) {
      free((void*) ((i64)((v233)->head)));
      (((v233)->size)=((i64)0));
      (((v233)->capacity)=((i64)0));
      (((v233)->head)=((i64*)((i64)0)));
    }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v234) {
  __ZH_TYPE_Vec_lessi64_greater v235;
  (((&v235)->head)=((i64*)((i64)0)));
  (((&v235)->size)=((i64)0));
  (((&v235)->capacity)=((i64)0));
  while ((((&v235)->capacity))<(v234)) {
      __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(&(v235));
    }
  (((&v235)->size)=v234);
  (((&v235)->capacity)=v234);
  return v235;
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v235));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v236, i64 v237) {
  __ZH_TYPE_Vec_lessi64_greater v238;
  (v238=__ZH_LOP_Vec_lessi64_greater_i64(v236));
  {
      i64 v242;
      i64 v241;
      i64 v240;
      __ZH_TYPE_Range v239;
      (v239=__ZH_BOP__dot_dot_i64i64(((i64)0), ((&v238)->size)));
      (v240=__ZH_BOP__dotcall_dotbegin_RangeP_ampersand(&(v239)));
      (v241=__ZH_BOP__dotcall_dotend_RangeP_ampersand(&(v239)));
      (v242=v240);
      while (__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(&(v242), v241)) {
          (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(&(v238), v242)=v237);
          __ZH_BOP__dotcall_dotnext_i64P_ampersand(&(v242));
        }
    }
  return v238;
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v238));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {
  return __ZH_LOP_Vec_lessi64_greater_i64(((i64)0));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v243) {
  __ZH_TYPE_Vec_lessi64_greater v244;
  (v244=__ZH_LOP_Vec_lessi64_greater_i64(((&*v243)->size)));
  {
      i64 v248;
      i64 v247;
      i64 v246;
      __ZH_TYPE_Range v245;
      (v245=__ZH_BOP__dot_dot_i64i64(((i64)0), ((&*v243)->size)));
      (v246=__ZH_BOP__dotcall_dotbegin_RangeP_ampersand(&(v245)));
      (v247=__ZH_BOP__dotcall_dotend_RangeP_ampersand(&(v245)));
      (v248=v246);
      while (__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(&(v248), v247)) {
          (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(&(v244), v248)=*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(&(*v243), v248));
          __ZH_BOP__dotcall_dotnext_i64P_ampersand(&(v248));
        }
    }
  return v244;
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v244));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v249, i64 v250) {
  __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(&(*v249), v250);
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v251, __ZH_TYPE_Vec_lessi64_greater* v252) {
  {
      __ZH_TYPE_VecIter_lessi64_greater v256;
      __ZH_TYPE_VecIter_lessi64_greater v255;
      __ZH_TYPE_VecIter_lessi64_greater v254;
      __ZH_TYPE_Vec_lessi64_greater v253;
      (v253=__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&*v252));
      (v254=__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(&(v253)));
      (v255=__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(&(v253)));
      (v256=v254);
      while (__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(&(v256), v255)) {
          __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(&(*v251), *__ZH_LOP__asterisk_VecIter_lessi64_greater(v256));
          __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(&(v256));
        }
    }
}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v257) {
  __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(&(*v257));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v258) {
  __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(&(*v258));
  printf("%s\n", "");
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v259) {
  __ZH_LOP_out_Vec_lessi64_greaterR(&*v259);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v260) {
  __ZH_LOP_put_Vec_lessi64_greaterR(&*v260), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v261, __ZH_TYPE_Vec_lessi64_greater* v262) {
  __ZH_LOP_put_Vec_lessi64_greaterR(&*v262), printf("%s", " ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v263, i64 v264, i64 v265) {
  __ZH_TYPE_Vec_lessi64_greater v266;
  (v266=__ZH_LOP_Vec_lessi64_greater_i64(((i64)0)));
  {
      i64 v270;
      i64 v269;
      i64 v268;
      __ZH_TYPE_Range v267;
      (v267=__ZH_BOP__dot_dot_i64i64(v264, v265));
      (v268=__ZH_BOP__dotcall_dotbegin_RangeP_ampersand(&(v267)));
      (v269=__ZH_BOP__dotcall_dotend_RangeP_ampersand(&(v267)));
      (v270=v268);
      while (__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(&(v270), v269)) {
          __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(&(v266), *__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(v263, v270));
          __ZH_BOP__dotcall_dotnext_i64P_ampersand(&(v270));
        }
    }
  return v266;
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v266));
}
void __ZH_LOP_swap_i64Pi64P(i64* v271, i64* v272) {
  i64 v273;
  (v273=*(v271));
  (*(v271)=*(v272));
  (*(v272)=v273);
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v274, i64* v275) {
  i64* v278;
  i64* v277;
  i64* v276;
  (v276=((i64*)(((i64)v275))-((((i64)1))*(((i64)8))))), (v277=v274), (v278=v274);
  (v278=v274);
  while ((((i64)v278))!=(((i64)v276))) {
      if ((*(v278))<(*(v276))) {
          __ZH_LOP_swap_i64Pi64P(v277, v278);
          (v277=((i64*)(((i64)v277))+((((i64)1))*(((i64)8)))));
        }
      (v278=((i64*)(((i64)v278))+((((i64)1))*(((i64)8)))));
    }
  __ZH_LOP_swap_i64Pi64P(v277, v276);
  return v277;
}
void __ZH_LOP_qsort_i64Pi64P(i64* v279, i64* v280) {
  i64 v282;
  i64 v281;
  (v281=(((i64)v280))-(((i64)v279)));
  (v282=((i64)8));
  if ((v281)>(v282)) {
      i64* v283;
      (v283=__ZH_LOP_partition_i64Pi64P(v279, v280));
      __ZH_LOP_qsort_i64Pi64P(v279, v283);
      (v283=((i64*)(((i64)v283))+((((i64)1))*(((i64)8)))));
      __ZH_LOP_qsort_i64Pi64P(v283, v280);
    }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v284) {
  __ZH_TYPE_VecIter_lessi64_greater v286;
  __ZH_TYPE_VecIter_lessi64_greater v285;
  (v285=__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(v284));
  (v286=__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(v284));
  __ZH_LOP_qsort_i64Pi64P(((&v285)->ptr), ((&v286)->ptr));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v287) {
  __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(&(*v287));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v288, i64 v289) {
  __ZH_TYPE_Vec_lessi64_greater v290;
  (v290=__ZH_LOP_Vec_lessi64_greater_i64((v289)-(v288)));
  {
      i64 v294;
      i64 v293;
      i64 v292;
      __ZH_TYPE_Range v291;
      (v291=__ZH_BOP__dot_dot_i64i64(v288, v289));
      (v292=__ZH_BOP__dotcall_dotbegin_RangeP_ampersand(&(v291)));
      (v293=__ZH_BOP__dotcall_dotend_RangeP_ampersand(&(v291)));
      (v294=v292);
      while (__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(&(v294), v293)) {
          (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(&(v290), (v294)-(v288))=v294);
          __ZH_BOP__dotcall_dotnext_i64P_ampersand(&(v294));
        }
    }
  return v290;
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v290));
}
int main(int argc, char *argv[])  {
  __ZH_TYPE_Vec_lessi64_greater v300;
  i64 v298;
  __ZH_TYPE_Vec_lessi64_greater v299;
  i64 v297;
  i64 v296;
  i64 v295;
  (v295=((i64)5));
  (v296=((i64)4));
  (v297=((i64)1));
  (v298=((i64)7));
  printf("%lld\n", (((v295)+(v296))+(v297))+(v298));
  (v299=__ZH_LOP_iota_i64i64(((i64)10), ((i64)15)));
  (v300=__ZH_LOP_Vec_lessi64_greater_i64i64(((i64)5), ((i64)0)));
  __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(&v299, &v300);
  __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(&v299, &v300);
  __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(&v299, &v300);
  __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(&v299, &v300);
  __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(&v299, &v300);
  __ZH_LOP_out_Vec_lessi64_greaterR(&v299);
  __ZH_LOP_sort_Vec_lessi64_greaterR(&v299);
  __ZH_LOP_out_Vec_lessi64_greaterR(&v299);
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v299));
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v300));
}
