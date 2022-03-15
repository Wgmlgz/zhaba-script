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
void __ZH_LOP__plus_plus_charR(char* v118);
void __ZH_LOP__minus_minus_charR(char* v119);
i8 __ZH_LOP__minus_i8(i8 v120);
i16 __ZH_LOP__minus_i16(i16 v121);
i32 __ZH_LOP__minus_i32(i32 v122);
i64 __ZH_LOP__minus_i64(i64 v123);
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v124);
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v125, i64 v126);
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v127);
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v128);
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v129, i64 v130);
__ZH_TYPE_Out __ZH_LOP_Out_();
__ZH_TYPE_Out __ZH_LOP__Out_();
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v133, __ZH_TYPE_Out v134);
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v135);
__ZH_TYPE_Out __ZH_ROP__less_str(str v136);
__ZH_TYPE_Out __ZH_LOP__less_str(str v137);
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v138, str v139);
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v140);
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v141, str* v142);
__ZH_TYPE_Out __ZH_ROP__less_char(char v143);
__ZH_TYPE_Out __ZH_LOP__less_char(char v144);
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v145, char v146);
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v147);
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v148, char* v149);
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v150);
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v151);
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v152, i8 v153);
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v154);
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v155, i8* v156);
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v157);
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v158);
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v159, i16 v160);
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v161);
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v162, i16* v163);
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v164);
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v165);
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v166, i32 v167);
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v168);
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v169, i32* v170);
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v171);
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v172);
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v173, i64 v174);
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v175);
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v176, i64* v177);
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v178);
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v179);
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v180, u8 v181);
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v182);
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v183, u8* v184);
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v185);
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v186);
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v187, u16 v188);
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v189);
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v190, u16* v191);
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v192);
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v193);
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v194, u32 v195);
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v196);
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v197, u32* v198);
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v199);
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v200);
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v201, u64 v202);
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v203);
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v204, u64* v205);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v225);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v227);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v228, __ZH_TYPE_VecIter_lessi64_greater v229);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v230);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v206, i64 v207);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v208, i64 v209);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v210);
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v215);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v222, i64 v223);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v224);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v231);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v232);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v233);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v234);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v235);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v236);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v238);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v244, i64 v245);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v246, __ZH_TYPE_Vec_lessi64_greater* v247);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v252);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v253);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v254);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v255);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v256, __ZH_TYPE_Vec_lessi64_greater* v257);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v258, i64 v259, i64 v260);
void __ZH_LOP_swap_i64Pi64P(i64* v266, i64* v267);
i64* __ZH_LOP_partition_i64Pi64P(i64* v269, i64* v270);
void __ZH_LOP_qsort_i64Pi64P(i64* v274, i64* v275);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v279);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v282);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v283, i64 v284);
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
void __ZH_LOP__plus_plus_charR(char* v118) {
  (*v118=((char)(((u8*)*v118))+(((u8)1))));
}
void __ZH_LOP__minus_minus_charR(char* v119) {
  (*v119=((char)(((u8*)*v119))-(((u8)1))));
}
i8 __ZH_LOP__minus_i8(i8 v120) {
  return (((i8)0))-(v120);
}
i16 __ZH_LOP__minus_i16(i16 v121) {
  return (((i16)0))-(v121);
}
i32 __ZH_LOP__minus_i32(i32 v122) {
  return (((i32)0))-(v122);
}
i64 __ZH_LOP__minus_i64(i64 v123) {
  return (((i64)0))-(v123);
}
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v124) {
  (*(v124)=(*(v124))+(((i64)1)));
}
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v125, i64 v126) {
  return (*(v125))!=(v126);
}
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v127) {
  return ((v127)->begin);
}
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v128) {
  return ((v128)->end);
}
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v129, i64 v130) {
  __ZH_TYPE_Range v131;
  (((&v131)->begin)=v129);
  (((&v131)->end)=v130);
  return v131;
}
__ZH_TYPE_Out __ZH_LOP_Out_() {
  __ZH_TYPE_Out v132;
  return v132;
}
__ZH_TYPE_Out __ZH_LOP__Out_() {
  return __ZH_LOP_Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v133, __ZH_TYPE_Out v134) {
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v135) {
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_str(str v136) {
  out(v136);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_str(str v137) {
  put(v137), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v138, str v139) {
  put(v139), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v140) {
  (*v140=in_str());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v141, str* v142) {
  (*v142=in_str());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_char(char v143) {
  out(v143);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_char(char v144) {
  put(v144), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v145, char v146) {
  put(v146), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v147) {
  (*v147=in_char());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v148, char* v149) {
  (*v149=in_char());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v150) {
  out(v150);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v151) {
  put(v151), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v152, i8 v153) {
  put(v153), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v154) {
  (*v154=in_i8());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v155, i8* v156) {
  (*v156=in_i8());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v157) {
  out(v157);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v158) {
  put(v158), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v159, i16 v160) {
  put(v160), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v161) {
  (*v161=in_i16());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v162, i16* v163) {
  (*v163=in_i16());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v164) {
  out(v164);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v165) {
  put(v165), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v166, i32 v167) {
  put(v167), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v168) {
  (*v168=in_i32());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v169, i32* v170) {
  (*v170=in_i32());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v171) {
  out(v171);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v172) {
  put(v172), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v173, i64 v174) {
  put(v174), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v175) {
  (*v175=in_i64());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v176, i64* v177) {
  (*v177=in_i64());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v178) {
  out(v178);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v179) {
  put(v179), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v180, u8 v181) {
  put(v181), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v182) {
  (*v182=in_u8());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v183, u8* v184) {
  (*v184=in_u8());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v185) {
  out(v185);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v186) {
  put(v186), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v187, u16 v188) {
  put(v188), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v189) {
  (*v189=in_u16());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v190, u16* v191) {
  (*v191=in_u16());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v192) {
  out(v192);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v193) {
  put(v193), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v194, u32 v195) {
  put(v195), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v196) {
  (*v196=in_u32());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v197, u32* v198) {
  (*v198=in_u32());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v199) {
  out(v199);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v200) {
  put(v200), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v201, u64 v202) {
  put(v202), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v203) {
  (*v203=in_u64());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v204, u64* v205) {
  (*v205=in_u64());
  return __ZH_LOP__Out_();
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v225) {
  __ZH_TYPE_VecIter_lessi64_greater v226;
  (((&v226)->ptr)=v225);
  return v226;
}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v227) {
  (((v227)->ptr)=((i64*)(((i64)((v227)->ptr)))+((((i64)1))*(((i64)8)))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v228, __ZH_TYPE_VecIter_lessi64_greater v229) {
  return (((i64)((v228)->ptr)))!=(((i64)((&v229)->ptr)));
}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v230) {
  return &*(((&v230)->ptr));
}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v206, i64 v207) {
  return ((i64*)((i64*)(((i64)((v206)->head)))+((v207)*(((i64)8)))));
}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v208, i64 v209) {
  return &*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(v208, v209));
}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v210) {
  put("[");
  {
      i64 v214;
      i64 v213;
      i64 v212;
      __ZH_TYPE_Range v211;
      (v211=__ZH_BOP__dot_dot_i64i64(((i64)0), ((v210)->size)));
      (v212=__ZH_BOP__dotcall_dotbegin_RangeP_ampersand(&(v211)));
      (v213=__ZH_BOP__dotcall_dotend_RangeP_ampersand(&(v211)));
      (v214=v212);
      while (__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(&(v214), v213)) {
          if (!(!(v214))) {
              put(" ");
            }
          put(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(v210, v214)));
          __ZH_BOP__dotcall_dotnext_i64P_ampersand(&(v214));
        }
    }
  put("]");
}
void __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v215) {
  i64 v216;
  (v216=((v215)->capacity));
  if ((v216)==(((i64)0))) {
      (v216=((i64)1));
      (((v215)->head)=((i64*)malloc(((i64)8))));
      (((v215)->capacity)=v216);
    } else {
      i64* v217;
      __ZH_BOP__asterisk_equal_i64Ri64(&v216, ((i64)2));
      (v217=((i64*)malloc((v216)*(((i64)8)))));
      {
          i64 v221;
          i64 v220;
          i64 v219;
          __ZH_TYPE_Range v218;
          (v218=__ZH_BOP__dot_dot_i64i64(((i64)0), ((v215)->size)));
          (v219=__ZH_BOP__dotcall_dotbegin_RangeP_ampersand(&(v218)));
          (v220=__ZH_BOP__dotcall_dotend_RangeP_ampersand(&(v218)));
          (v221=v219);
          while (__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(&(v221), v220)) {
              (*(((i64*)(((i64)v217))+((v221)*(((i64)8)))))=*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(v215, v221));
              __ZH_BOP__dotcall_dotnext_i64P_ampersand(&(v221));
            }
        }
      free(((i64)((v215)->head)));
      (((v215)->head)=v217);
    }
  (((v215)->capacity)=v216);
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v222, i64 v223) {
  if ((((v222)->size))==(((v222)->capacity))) {
      __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(v222);
    }
  (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(v222, ((v222)->size))=v223);
  __ZH_LOP__plus_plus_i64R(&((v222)->size));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v224) {
  __ZH_LOP__minus_minus_i64R(&((v224)->size));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v231) {
  return __ZH_LOP_VecIter_lessi64_greater_i64P(((v231)->head));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v232) {
  return __ZH_LOP_VecIter_lessi64_greater_i64P(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(v232, ((v232)->size)));
}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v233) {
  return &*(((v233)->head));
}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v234) {
  return &*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(v234, (((v234)->size))-(((i64)1))));
}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v235) {
  if (!(!(((i64)((v235)->head))))) {
      free(((i64)((v235)->head)));
      (((v235)->size)=((i64)0));
      (((v235)->capacity)=((i64)0));
      (((v235)->head)=((i64*)((i64)0)));
    }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v236) {
  __ZH_TYPE_Vec_lessi64_greater v237;
  (((&v237)->head)=((i64*)((i64)0)));
  (((&v237)->size)=((i64)0));
  (((&v237)->capacity)=((i64)0));
  while ((((&v237)->capacity))<(v236)) {
      __ZH_BOP__dotcall_dotdouble_capacity_Vec_lessi64_greaterP_ampersand(&(v237));
    }
  (((&v237)->size)=v236);
  (((&v237)->capacity)=v236);
  return v237;
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v237));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {
  return __ZH_LOP_Vec_lessi64_greater_i64(((i64)0));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v238) {
  __ZH_TYPE_Vec_lessi64_greater v239;
  (v239=__ZH_LOP_Vec_lessi64_greater_i64(((&*v238)->size)));
  {
      i64 v243;
      i64 v242;
      i64 v241;
      __ZH_TYPE_Range v240;
      (v240=__ZH_BOP__dot_dot_i64i64(((i64)0), ((&*v238)->size)));
      (v241=__ZH_BOP__dotcall_dotbegin_RangeP_ampersand(&(v240)));
      (v242=__ZH_BOP__dotcall_dotend_RangeP_ampersand(&(v240)));
      (v243=v241);
      while (__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(&(v243), v242)) {
          (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(&(v239), v243)=*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(&(*v238), v243));
          __ZH_BOP__dotcall_dotnext_i64P_ampersand(&(v243));
        }
    }
  return v239;
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v239));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v244, i64 v245) {
  __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(&(*v244), v245);
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v246, __ZH_TYPE_Vec_lessi64_greater* v247) {
  {
      __ZH_TYPE_VecIter_lessi64_greater v251;
      __ZH_TYPE_VecIter_lessi64_greater v250;
      __ZH_TYPE_VecIter_lessi64_greater v249;
      __ZH_TYPE_Vec_lessi64_greater v248;
      (v248=__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&*v247));
      (v249=__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(&(v248)));
      (v250=__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(&(v248)));
      (v251=v249);
      while (__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(&(v251), v250)) {
          __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(&(*v246), *__ZH_LOP__asterisk_VecIter_lessi64_greater(v251));
          __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(&(v251));
        }
    }
}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v252) {
  __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(&(*v252));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v253) {
  __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(&(*v253));
  out("");
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v254) {
  __ZH_LOP_out_Vec_lessi64_greaterR(&*v254);
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v255) {
  __ZH_LOP_put_Vec_lessi64_greaterR(&*v255), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v256, __ZH_TYPE_Vec_lessi64_greater* v257) {
  __ZH_LOP_put_Vec_lessi64_greaterR(&*v257), put(" ");
  return __ZH_LOP__Out_();
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v258, i64 v259, i64 v260) {
  __ZH_TYPE_Vec_lessi64_greater v261;
  (v261=__ZH_LOP_Vec_lessi64_greater_i64(((i64)0)));
  {
      i64 v265;
      i64 v264;
      i64 v263;
      __ZH_TYPE_Range v262;
      (v262=__ZH_BOP__dot_dot_i64i64(v259, v260));
      (v263=__ZH_BOP__dotcall_dotbegin_RangeP_ampersand(&(v262)));
      (v264=__ZH_BOP__dotcall_dotend_RangeP_ampersand(&(v262)));
      (v265=v263);
      while (__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(&(v265), v264)) {
          __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(&(v261), *__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(v258, v265));
          __ZH_BOP__dotcall_dotnext_i64P_ampersand(&(v265));
        }
    }
  return v261;
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v261));
}
void __ZH_LOP_swap_i64Pi64P(i64* v266, i64* v267) {
  i64 v268;
  (v268=*(v266));
  (*(v266)=*(v267));
  (*(v267)=v268);
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v269, i64* v270) {
  i64* v273;
  i64* v272;
  i64* v271;
  (v271=((i64*)(((i64)v270))-((((i64)1))*(((i64)8))))), (v272=v269), (v273=v269);
  (v273=v269);
  while ((((i64)v273))!=(((i64)v271))) {
      if ((*(v273))<(*(v271))) {
          __ZH_LOP_swap_i64Pi64P(v272, v273);
          (v272=((i64*)(((i64)v272))+((((i64)1))*(((i64)8)))));
        }
      (v273=((i64*)(((i64)v273))+((((i64)1))*(((i64)8)))));
    }
  __ZH_LOP_swap_i64Pi64P(v272, v271);
  return v272;
}
void __ZH_LOP_qsort_i64Pi64P(i64* v274, i64* v275) {
  i64 v277;
  i64 v276;
  (v276=(((i64)v275))-(((i64)v274)));
  (v277=((i64)8));
  if ((v276)>(v277)) {
      i64* v278;
      (v278=__ZH_LOP_partition_i64Pi64P(v274, v275));
      __ZH_LOP_qsort_i64Pi64P(v274, v278);
      (v278=((i64*)(((i64)v278))+((((i64)1))*(((i64)8)))));
      __ZH_LOP_qsort_i64Pi64P(v278, v275);
    }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v279) {
  __ZH_TYPE_VecIter_lessi64_greater v281;
  __ZH_TYPE_VecIter_lessi64_greater v280;
  (v280=__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(v279));
  (v281=__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(v279));
  __ZH_LOP_qsort_i64Pi64P(((&v280)->ptr), ((&v281)->ptr));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v282) {
  __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(&(*v282));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v283, i64 v284) {
  __ZH_TYPE_Vec_lessi64_greater v285;
  (v285=__ZH_LOP_Vec_lessi64_greater_i64((v284)-(v283)));
  {
      i64 v289;
      i64 v288;
      i64 v287;
      __ZH_TYPE_Range v286;
      (v286=__ZH_BOP__dot_dot_i64i64(v283, v284));
      (v287=__ZH_BOP__dotcall_dotbegin_RangeP_ampersand(&(v286)));
      (v288=__ZH_BOP__dotcall_dotend_RangeP_ampersand(&(v286)));
      (v289=v287);
      while (__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(&(v289), v288)) {
          (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(&(v285), (v289)-(v283))=v289);
          __ZH_BOP__dotcall_dotnext_i64P_ampersand(&(v289));
        }
    }
  return v285;
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v285));
}
int main(int argc, char *argv[])  {
  __ZH_TYPE_Vec_lessi64_greater v295;
  i64 v293;
  __ZH_TYPE_Vec_lessi64_greater v294;
  i64 v292;
  i64 v291;
  i64 v290;
  (v290=((i64)5));
  (v291=((i64)4));
  (v292=((i64)1));
  (v293=((i64)7));
  out((((v290)+(v291))+(v292))+(v293));
  (v294=__ZH_LOP_iota_i64i64(((i64)10), ((i64)15)));
  (v295=__ZH_LOP_Vec_lessi64_greater_i64(((i64)5)));
  __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(&v294, &v295);
  __ZH_LOP_out_Vec_lessi64_greaterR(&v294);
  __ZH_LOP_sort_Vec_lessi64_greaterR(&v294);
  __ZH_LOP_out_Vec_lessi64_greaterR(&v294);
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v294));
  __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(&(v295));
}
