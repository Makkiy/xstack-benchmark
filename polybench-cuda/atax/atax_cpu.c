/* Provide Declarations */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
struct l_struct_struct_OC__IO_FILE;
struct l_struct_struct_OC_dim3;
struct l_unnamed_1;

/* Function definitions */

/* Types Definitions */
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
struct l_struct_struct_OC_dim3 {
  uint32_t field0;
  uint32_t field1;
  uint32_t field2;
};
struct l_unnamed_1 {
  uint64_t field0;
  uint32_t field1;
};

/* External Global Variable Declarations */

/* Function Declarations */
uint32_t cudaSetupArgument(uint8_t*, uint64_t, uint64_t);
uint32_t cudaLaunch(uint8_t*);
int main(int, char **) __ATTRIBUTELIST__((noinline));
void _ZL10init_arrayiiPdS_S_S_(uint32_t, uint32_t, double*, double*, double*, double*) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t cudaMemcpy(uint8_t*, uint8_t*, uint64_t, uint32_t);
uint32_t _ZL10num_blocksii(uint32_t, uint32_t) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t cudaConfigureCall(uint64_t, uint32_t, uint64_t, uint32_t, uint64_t, void*);
void _ZL11print_arrayiPd(uint32_t, double*) __ATTRIBUTELIST__((noinline));
uint32_t cudaMalloc(uint8_t**, uint64_t);
void _Z7kernel3iiPdS_S_S__OC_1(uint32_t, uint32_t, double*, double*, double*, double*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) __ATTRIBUTELIST__((noinline, nothrow));
void _Z7kernel4iiPdS_S_S__OC_2(uint32_t, uint32_t, double*, double*, double*, double*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) __ATTRIBUTELIST__((noinline, nothrow));


/* Global Variable Definitions and Initialization */
uint8_t _OC_str[8] = { "%0.2lf " };
uint8_t _OC_str_OC_1[2] = { "\n" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_add_u64(uint64_t a, uint64_t b) {
  uint64_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_sub_u32(uint32_t a, uint32_t b) {
  uint32_t r = a - b;
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
static __forceinline uint32_t llvm_sdiv_u32(int32_t a, int32_t b) {
  uint32_t r = a / b;
  return r;
}
static __forceinline uint32_t llvm_urem_u32(uint32_t a, uint32_t b) {
  uint32_t r = a % b;
  return r;
}


/* Function Bodies */

int main(int argc, char ** argv) {
  struct l_struct_struct_OC_dim3 agg_2e_tmp;    /* Address-exposed local */
  struct l_struct_struct_OC_dim3 agg_2e_tmp43;    /* Address-exposed local */
  struct l_unnamed_1 agg_2e_tmp_2e_coerce;    /* Address-exposed local */
  struct l_unnamed_1 agg_2e_tmp43_2e_coerce;    /* Address-exposed local */
  struct l_struct_struct_OC_dim3 agg_2e_tmp45;    /* Address-exposed local */
  struct l_struct_struct_OC_dim3 agg_2e_tmp47;    /* Address-exposed local */
  struct l_unnamed_1 agg_2e_tmp45_2e_coerce;    /* Address-exposed local */
  struct l_unnamed_1 agg_2e_tmp47_2e_coerce;    /* Address-exposed local */
  int32_t nx;
  int32_t ny;
  int32_t dump_code;
  uint32_t i;
  uint32_t j;
  uint32_t k;

  nx = atoi(argv[2]);
  ny = atoi(argv[3]);
  dump_code = atoi(argv[1]);

for(int32_t i = 0; i < 50;   i = i + 1){
  uint8_t* A = malloc(nx * ny * 8);
  uint8_t* x = malloc(ny * 8);
  uint8_t* y = malloc(ny * 8);
  uint8_t* tmp = malloc(nx * 8);
_ZL10init_arrayiiPdS_S_S_(nx, ny, ((double*)A), ((double*)x), ((double*)tmp), ((double*)y));
  uint32_t call42 = _ZL10num_blocksii(nx, 256);
  agg_2e_tmp.field0 = call42;
  agg_2e_tmp.field1 = 1;
  agg_2e_tmp.field2 = 1;
  agg_2e_tmp43.field0 = 256;
  agg_2e_tmp43.field1 = 1;
  agg_2e_tmp43.field2 = 1;
  memcpy(((uint8_t*)(&agg_2e_tmp_2e_coerce)), ((uint8_t*)(&agg_2e_tmp)), 12);
  memcpy(((uint8_t*)(&agg_2e_tmp43_2e_coerce)), ((uint8_t*)(&agg_2e_tmp43)), 12);
#pragma omp parallel for collapse(2)
for(int32_t j = 0; j < call42;   j = j + 1){

for(int32_t k = 0; k < 256;   k = k + 1){
_Z7kernel3iiPdS_S_S__OC_1(nx, ny, ((double*)A), ((double*)x), ((double*)y), ((double*)tmp), call42, 1, 1, 256, 1, 1, j, 0, 0, k, 0, 0);
}
}
  uint32_t call46 = _ZL10num_blocksii(ny, 256);
  agg_2e_tmp45.field0 = call46;
  agg_2e_tmp45.field1 = 1;
  agg_2e_tmp45.field2 = 1;
  agg_2e_tmp47.field0 = 256;
  agg_2e_tmp47.field1 = 1;
  agg_2e_tmp47.field2 = 1;
  memcpy(((uint8_t*)(&agg_2e_tmp45_2e_coerce)), ((uint8_t*)(&agg_2e_tmp45)), 12);
  memcpy(((uint8_t*)(&agg_2e_tmp47_2e_coerce)), ((uint8_t*)(&agg_2e_tmp47)), 12);
#pragma omp parallel for collapse(2)
for(int32_t j = 0; j < call46;   j = j + 1){

for(int32_t k = 0; k < 256;   k = k + 1){
_Z7kernel4iiPdS_S_S__OC_2(nx, ny, ((double*)A), ((double*)x), ((double*)y), ((double*)tmp), call46, 1, 1, 256, 1, 1, j, 0, 0, k, 0, 0);
}
}
  if (dump_code == 1) {
_ZL11print_arrayiPd(nx, ((double*)y));
free(((uint8_t*)((double*)A)));
free(((uint8_t*)((double*)x)));
free(((uint8_t*)((double*)y)));
free(((uint8_t*)((double*)tmp)));
  }
}
  return 0;
}


void _ZL10init_arrayiiPdS_S_S_(uint32_t nx, uint32_t ny, double* A, double* x, double* tmp, double* y) {
  int64_t i;
  int64_t j;


for(int64_t i = 0; i < ny;   i = i + 1){
  x[i] = (double)(i) * 3.1415926535897931;
}

for(int64_t i = 0; i < nx;   i = i + 1){
  tmp[i] = 0;
}

for(int64_t i = 0; i < nx;   i = i + 1){

for(int64_t j = 0; j < ny;   j = j + 1){
  A[(i * ny + j)] = (double)(i) * (double)((j + 1)) / (double)(nx);
}
}
  return;
}


uint32_t _ZL10num_blocksii(uint32_t num, uint32_t factor) {
  return ((num + factor) - 1) / factor;
}


void _ZL11print_arrayiPd(uint32_t nx, double* y) {
  int64_t i;
  int32_t call3;


for(int64_t i = 0; i < nx;   i = i + 1){
  uint32_t call = fprintf(stderr, (_OC_str), y[i]);
  if (i % 20 == 0) {
  fprintf(stderr, (_OC_str_OC_1));
  }
}
  fprintf(stderr, (_OC_str_OC_1));
}


void _Z7kernel3iiPdS_S_S__OC_1(uint32_t m, uint32_t n, double* A, double* x, double* y, double* tmp, uint32_t gridDim_2e_x, uint32_t gridDim_2e_y, uint32_t gridDim_2e_z, uint32_t blockDim_2e_x, uint32_t blockDim_2e_y, uint32_t blockDim_2e_z, uint32_t blockIdx_2e_x, uint32_t blockIdx_2e_y, uint32_t blockIdx_2e_z, uint32_t threadIdx_2e_x, uint32_t threadIdx_2e_y, uint32_t threadIdx_2e_z) {
  int64_t i;
  int64_t j;
  double dot;

  i = blockDim_2e_x * blockIdx_2e_x + threadIdx_2e_x;
  if (i < m) {
  dot = 0;

for(int64_t j = 0; j < n;   j = j + 1){
  dot = (dot + A[(i * n + j)] * x[j]);
}
  tmp[i] = dot;
  }
  return;
}


void _Z7kernel4iiPdS_S_S__OC_2(uint32_t m, uint32_t n, double* A, double* x, double* y, double* tmp, uint32_t gridDim_2e_x, uint32_t gridDim_2e_y, uint32_t gridDim_2e_z, uint32_t blockDim_2e_x, uint32_t blockDim_2e_y, uint32_t blockDim_2e_z, uint32_t blockIdx_2e_x, uint32_t blockIdx_2e_y, uint32_t blockIdx_2e_z, uint32_t threadIdx_2e_x, uint32_t threadIdx_2e_y, uint32_t threadIdx_2e_z) {
  int64_t j;
  int64_t i;
  double dot;

  j = blockDim_2e_x * blockIdx_2e_x + threadIdx_2e_x;
  if (j < n) {
  y[j] = 0;
  dot = 0;

for(int64_t i = 0; i < m;   i = i + 1){
  dot = (dot + A[(i * n + j)] * tmp[i]);
}
  y[j] = dot;
  }
  return;
}
