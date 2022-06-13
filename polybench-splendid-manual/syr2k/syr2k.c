/* Provide Declarations */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef __cplusplus
typedef unsigned char bool;
#endif

#ifndef _MSC_VER
#define __forceinline __attribute__((always_inline)) inline
#endif

#if defined(__GNUC__)
#define  __ATTRIBUTELIST__(x) __attribute__(x)
#else
#define  __ATTRIBUTELIST__(x)  
#endif

#ifdef _MSC_VER  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif



/* Global Declarations */

/* Types Declarations */
struct l_struct_struct_OC_ident_t;
struct l_struct_struct_OC__IO_FILE;
struct l_unnamed_1;
struct l_unnamed_2;
struct l_unnamed_3;
struct l_unnamed_4;

/* Function definitions */
typedef void l_fptr_1(uint32_t*, uint32_t*, ...);


/* Types Definitions */
struct l_struct_struct_OC_ident_t {
  uint32_t field0;
  uint32_t field1;
  uint32_t field2;
  uint32_t field3;
  uint8_t* field4;
};
struct l_array_1_uint8_t {
  uint8_t array[1];
};
struct l_array_20_uint8_t {
  uint8_t array[20];
};
struct l_struct_struct_OC__IO_FILE {
  uint32_t field0;
  uint8_t* field1;
  uint8_t* field2;
  uint8_t* field3;
  uint8_t* field4;
  uint8_t* field5;
  uint8_t* field6;
  uint8_t* field7;
  uint8_t* field8;
  uint8_t* field9;
  uint8_t* field10;
  uint8_t* field11;
  void* field12;
  struct l_struct_struct_OC__IO_FILE* field13;
  uint32_t field14;
  uint32_t field15;
  uint64_t field16;
  uint16_t field17;
  uint8_t field18;
  uint8_t field19[1];
  uint8_t* field20;
  uint64_t field21;
  void* field22;
  void* field23;
  struct l_struct_struct_OC__IO_FILE* field24;
  uint8_t* field25;
  uint64_t field26;
  uint32_t field27;
  uint8_t field28[20];
};
struct l_unnamed_1 {
  uint64_t field0;
  uint64_t field1;
  uint8_t* field2;
  uint8_t* field3;
  uint8_t* field4;
};
struct l_unnamed_2 {
  uint64_t field0;
  uint64_t field1;
  uint8_t* field2;
};
struct l_unnamed_3 {
  uint64_t field0;
  uint64_t field1;
  double* field2;
  uint8_t* field3;
};
struct l_unnamed_4 {
  uint64_t field0;
  uint64_t field1;
  double* field2;
  uint8_t* field3;
  uint8_t* field4;
};

/* External Global Variable Declarations */

/* Function Declarations */
int main(int, char **) __ATTRIBUTELIST__((nothrow));
static void main_polly_subfn(uint64_t, uint64_t, uint64_t, uint8_t*);
static void main_polly_subfn_4(uint64_t, uint64_t, uint64_t, uint8_t*);
static void main_polly_subfn_7(uint64_t, uint64_t, uint64_t, uint8_t*);
static void main_polly_subfn_10(uint64_t, uint64_t, uint64_t, uint8_t*);


/* Global Variable Definitions and Initialization */
static uint8_t _OC_str[8] = { "%0.2lf " };
static uint8_t _OC_str_OC_ident_OC_8[23] = { "Source location dummy." };
static uint8_t _OC_str_OC_ident_OC_5[23] = { "Source location dummy." };
static uint8_t _OC_str_OC_ident_OC_2[23] = { "Source location dummy." };
static uint8_t _OC_str_OC_ident[23] = { "Source location dummy." };
static struct l_struct_struct_OC_ident_t _OC_loc_OC_dummy = { 0, 0, 0, 0, (_OC_str_OC_ident) };
static struct l_struct_struct_OC_ident_t _OC_loc_OC_dummy_OC_3 = { 0, 0, 0, 0, (_OC_str_OC_ident_OC_2) };
static struct l_struct_struct_OC_ident_t _OC_loc_OC_dummy_OC_6 = { 0, 0, 0, 0, (_OC_str_OC_ident_OC_5) };
static struct l_struct_struct_OC_ident_t _OC_loc_OC_dummy_OC_9 = { 0, 0, 0, 0, (_OC_str_OC_ident_OC_8) };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_add_u64(uint64_t a, uint64_t b) {
  uint64_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_mul_u32(uint32_t a, uint32_t b) {
  uint32_t r = a * b;
  return r;
}
static __forceinline uint64_t llvm_mul_u64(uint64_t a, uint64_t b) {
  uint64_t r = a * b;
  return r;
}
static __forceinline uint32_t llvm_srem_u32(int32_t a, int32_t b) {
  uint32_t r = a % b;
  return r;
}
static __forceinline uint64_t llvm_ashr_u64(int64_t a, int64_t b) {
  uint64_t r = a >> b;
  return r;
}


/* Function Bodies */

int main(int argc, char ** argv) {
  uint32_t _argc = (uint32_t)argc;
  uint8_t** _argv = (uint8_t**)argv;
  struct l_unnamed_1 _polly_2e_par_2e_userContext102;    /* Address-exposed local */
  struct l_unnamed_2 _polly_2e_par_2e_userContext96;    /* Address-exposed local */
  struct l_unnamed_3 _polly_2e_par_2e_userContext90;    /* Address-exposed local */
  struct l_unnamed_4 _polly_2e_par_2e_userContext;    /* Address-exposed local */
  double _conv5_2e_i_2e_s2a;    /* Address-exposed local */
  uint64_t _call_2e_i;
  uint64_t ni;
  uint64_t nj;
  uint8_t* C;
  uint64_t _mul9;
  uint8_t* A;
  uint8_t* B;
  uint64_t i;
  uint32_t _mul_2e_i70;
  int64_t j;
  uint32_t _call_2e_i73;
  uint32_t _fputc26_2e_i;
  uint32_t _fputc_2e_i;

  _call_2e_i = strtol(_argv[1], ((uint8_t**)0), 10);
;
  ni = strtol(_argv[2], ((uint8_t**)0), 10);
;
  nj = strtol(_argv[3], ((uint8_t**)0), 10);
;
  C = malloc((ni << 3) * ni & 34359738360);
;
  _mul9 = (ni << 32) * nj >> 29;
  A = malloc(_mul9);
;
  B = malloc(_mul9);
;
  _conv5_2e_i_2e_s2a = (double)(ni);
  _polly_2e_par_2e_userContext.field0 = nj;
  _polly_2e_par_2e_userContext.field1 = ni;
  _polly_2e_par_2e_userContext.field2 = (&_conv5_2e_i_2e_s2a);
  #pragma omp parallel 
{

  uint64_t _1 = (nj << 3);
  uint64_t _2 = (nj << 3);
#pragma omp for
for(uint64_t _polly_2e_indvar = 0; _polly_2e_indvar<=(ni - 1);_polly_2e_indvar+=1){
for(uint64_t _polly_2e_indvar4 = 0; _polly_2e_indvar4 < nj;  _polly_2e_indvar4 = _polly_2e_indvar4 + 1){
  double _p_div_2e_i = (double)(_polly_2e_indvar) * (double)(_polly_2e_indvar4) / _conv5_2e_i_2e_s2a;
  uint64_t _3 = (_polly_2e_indvar4 << 3);
  *((double*)((A+_1 * _polly_2e_indvar)+_3)) = _p_div_2e_i;
  *((double*)((B+_2 * _polly_2e_indvar)+_3)) = _p_div_2e_i;
}
}
}
  _polly_2e_par_2e_userContext90.field0 = nj;
  _polly_2e_par_2e_userContext90.field1 = ni;
  _polly_2e_par_2e_userContext90.field2 = (&_conv5_2e_i_2e_s2a);
  #pragma omp parallel 
{

  uint64_t _4 = (ni << 3) & 34359738360;
#pragma omp for
for(uint64_t _polly_2e_indvar = 0; _polly_2e_indvar<=(ni - 1);_polly_2e_indvar+=1){
for(uint64_t _polly_2e_indvar4 = 0; _polly_2e_indvar4 < ni;  _polly_2e_indvar4 = _polly_2e_indvar4 + 1){
  *((double*)((C+_4 * _polly_2e_indvar)+(_polly_2e_indvar4 << 3))) = (double)(_polly_2e_indvar) * (double)(_polly_2e_indvar4) / _conv5_2e_i_2e_s2a;
}
}
}
  _polly_2e_par_2e_userContext96.field0 = nj;
  _polly_2e_par_2e_userContext96.field1 = ni;
  #pragma omp parallel 
{

  uint64_t _5 = (ni << 3) & 34359738360;
#pragma omp for
for(uint64_t _polly_2e_indvar = 0; _polly_2e_indvar<=(ni - 1);_polly_2e_indvar+=1){
for(uint64_t _polly_2e_indvar4 = 0; _polly_2e_indvar4 < ni;  _polly_2e_indvar4 = _polly_2e_indvar4 + 1){
  *((double*)((C+_5 * _polly_2e_indvar)+(_polly_2e_indvar4 << 3))) = *((double*)((C+_5 * _polly_2e_indvar)+(_polly_2e_indvar4 << 3))) * 2123;
}
}
}
  _polly_2e_par_2e_userContext102.field0 = nj;
  _polly_2e_par_2e_userContext102.field1 = ni;
  #pragma omp parallel 
{

  uint64_t _6 = (nj << 3);
  uint64_t _7 = (nj << 3);
  uint64_t _8 = (nj << 3);
  uint64_t _9 = (nj << 3);
#pragma omp for
for(uint64_t _polly_2e_indvar = 0; _polly_2e_indvar<=(ni - 1);_polly_2e_indvar+=1){
for(uint64_t _polly_2e_indvar4 = 0; _polly_2e_indvar4 < ni;  _polly_2e_indvar4 = _polly_2e_indvar4 + 1){
for(uint64_t _polly_2e_indvar12 = 0; _polly_2e_indvar12 < nj;  _polly_2e_indvar12 = _polly_2e_indvar12 + 1){
  uint64_t _10 = (_polly_2e_indvar12 << 3);
  uint64_t _11 = (_polly_2e_indvar12 << 3);
  ((double*)C)[(_polly_2e_indvar * ni + _polly_2e_indvar4)] = ((((double*)C)[(_polly_2e_indvar * ni + _polly_2e_indvar4)] + *((double*)((A+_6 * _polly_2e_indvar)+_10)) * 32412 * *((double*)((B+_7 * _polly_2e_indvar4)+_10))) + *((double*)((B+_8 * _polly_2e_indvar)+_11)) * 32412 * *((double*)((A+_9 * _polly_2e_indvar4)+_11)));
}
}
}
}
  if (_call_2e_i == 1) {
for(uint64_t i = 0; i!=ni;  i = i + 1){
  _mul_2e_i70 = i * ni;
for(uint64_t j = 0; j!=ni;  j = j + 1){
  _call_2e_i73 = fprintf(stderr, (_OC_str), (((double*)C)+i * ni)[j]);
;
  if ((int)(_mul_2e_i70 + j) % (int)20 == 0) {
  _fputc26_2e_i = fputc(10, stderr);
;
}

}
}
  _fputc_2e_i = fputc(10, stderr);
;
free(C);
free(A);
free(B);
  return 0;
}

free(C);
free(A);
free(B);
  return 0;
}

