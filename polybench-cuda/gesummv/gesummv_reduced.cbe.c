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
void _ZL10init_arrayiPdS_S_S_S_(uint32_t, double*, double*, double*, double*, double*) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t cudaMemcpy(uint8_t*, uint8_t*, uint64_t, uint32_t);
uint32_t _ZL10num_blocksii(uint32_t, uint32_t) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t cudaConfigureCall(uint64_t, uint32_t, uint64_t, uint32_t, uint64_t, void*);
void _ZL11print_arrayiPd(uint32_t, double*) __ATTRIBUTELIST__((noinline));
uint32_t cudaFree(uint8_t*);
uint32_t cudaMalloc(uint8_t**, uint64_t);
void _Z8kernel_yiddPdS_S_S_S__OC_1(uint32_t, double, double, double*, double*, double*, double*, double*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) __ATTRIBUTELIST__((noinline, nothrow));


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
  struct l_struct_struct_OC_dim3 agg_2e_tmp59;    /* Address-exposed local */
  struct l_unnamed_1 agg_2e_tmp_2e_coerce;    /* Address-exposed local */
  struct l_unnamed_1 agg_2e_tmp59_2e_coerce;    /* Address-exposed local */
  int32_t n;
  int32_t dump_code;
  uint8_t* alpha;
  uint8_t* beta;
  uint8_t* A;
  uint8_t* B;
  uint8_t* tmp;
  uint8_t* x;
  uint8_t* y;
  uint8_t* dev_A;
  uint8_t* dev_B;
  uint8_t* dev_tmp;
  uint8_t* dev_x;
  uint8_t* dev_y;
  uint8_t* dev_alpha;
  uint8_t* dev_beta;
  uint8_t* _1;
  uint8_t* _2;
  uint8_t* _3;
  uint8_t* _4;
  uint8_t* _5;
  uint8_t* _6;
  uint8_t* _7;
  int32_t call58;
  uint8_t* _8;
  uint8_t* _9;
  uint32_t i;
  uint32_t j;
  uint8_t* _10;

  n = atoi(argv[2]);
  dump_code = atoi(argv[1]);
  alpha = malloc(8);
  beta = malloc(8);
  A = malloc(n * n * 8);
  B = malloc(n * n * 8);
  tmp = malloc(n * 8);
  x = malloc(n * 8);
  y = malloc(n * 8);
_ZL10init_arrayiPdS_S_S_S_(n, ((double*)alpha), ((double*)beta), ((double*)A), ((double*)B), ((double*)x));
  dev_A = malloc(n * n * 8);
  dev_B = malloc(n * n * 8);
  dev_tmp = malloc(n * 8);
  dev_x = malloc(n * 8);
  dev_y = malloc(n * 8);
  dev_alpha = malloc(8);
  dev_beta = malloc(8);
  memcpy(((uint8_t*)((double*)dev_A)), ((uint8_t*)((double*)A)), n * n * 8);
  memcpy(((uint8_t*)((double*)dev_B)), ((uint8_t*)((double*)B)), n * n * 8);
  memcpy(((uint8_t*)((double*)dev_tmp)), ((uint8_t*)((double*)tmp)), n * 8);
  memcpy(((uint8_t*)((double*)dev_x)), ((uint8_t*)((double*)x)), n * 8);
  memcpy(((uint8_t*)((double*)dev_y)), ((uint8_t*)((double*)y)), n * 8);
  memcpy(((uint8_t*)((double*)dev_alpha)), ((uint8_t*)((double*)alpha)), 8);
  memcpy(((uint8_t*)((double*)dev_beta)), ((uint8_t*)((double*)beta)), 8);
  call58 = _ZL10num_blocksii(n, 256);
  agg_2e_tmp.field0 = call58;
  agg_2e_tmp.field1 = 1;
  agg_2e_tmp.field2 = 1;
  agg_2e_tmp59.field0 = 256;
  agg_2e_tmp59.field1 = 1;
  agg_2e_tmp59.field2 = 1;
  memcpy(((uint8_t*)(&agg_2e_tmp_2e_coerce)), ((uint8_t*)(&agg_2e_tmp)), 12);
  memcpy(((uint8_t*)(&agg_2e_tmp59_2e_coerce)), ((uint8_t*)(&agg_2e_tmp59)), 12);
#pragma omp parallel for 
for(int32_t i = 0; i < call58;   i = i + 1){

for(int32_t j = 0; j < 256;   j = j + 1){
_Z8kernel_yiddPdS_S_S_S__OC_1(n, *((double*)dev_alpha), *((double*)dev_beta), ((double*)dev_A), ((double*)dev_B), ((double*)dev_tmp), ((double*)dev_x), ((double*)dev_y), call58, 1, 1, 256, 1, 1, i, 0, 0, j, 0, 0);
}
}
  _10 = memcpy(((uint8_t*)((double*)y)), ((uint8_t*)((double*)dev_y)), n * 8);
  if (dump_code == 1) {
_ZL11print_arrayiPd(n, ((double*)y));
  }
free(((uint8_t*)((double*)A)));
free(((uint8_t*)((double*)B)));
free(((uint8_t*)((double*)tmp)));
free(((uint8_t*)((double*)x)));
free(((uint8_t*)((double*)y)));
free(((uint8_t*)((double*)alpha)));
free(((uint8_t*)((double*)beta)));
free(((uint8_t*)((double*)dev_A)));
free(((uint8_t*)((double*)dev_B)));
free(((uint8_t*)((double*)dev_tmp)));
free(((uint8_t*)((double*)dev_x)));
free(((uint8_t*)((double*)dev_y)));
free(((uint8_t*)((double*)dev_alpha)));
free(((uint8_t*)((double*)dev_beta)));
  return 0;
}


void _ZL10init_arrayiPdS_S_S_S_(uint32_t n, double* alpha, double* beta, double* A, double* B, double* x) {
  int64_t i;
  uint64_t j;

  *alpha = 43532;
  *beta = 12313;
#pragma omp parallel for 
for(int64_t i = 0; i < n;   i = i + 1){
  x[i] = (double)(i) / (double)(n);

for(int64_t j = 0; j < n;   j = j + 1){
  A[(i * n + j)] = (double)(i) * (double)(j) / (double)(n);
  B[(i * n + j)] = (double)(i) * (double)(j) / (double)(n);
}
}
  return;
}


uint32_t _ZL10num_blocksii(uint32_t num, uint32_t factor) {
  return ((num + factor) - 1) / factor;
}


void _ZL11print_arrayiPd(uint32_t n, double* y) {
  int64_t i;


for(int64_t i = 0; i < n;   i = i + 1){
  uint32_t call = fprintf(stderr, _OC_str, y[i]);
  if (i % 20 == 0) {
  fprintf(stderr, _OC_str_OC_1);
  }
}
  return;
}


void _Z8kernel_yiddPdS_S_S_S__OC_1(uint32_t n, double alpha, double beta, double* A, double* B, double* tmp, double* x, double* y, uint32_t gridDim_2e_x, uint32_t gridDim_2e_y, uint32_t gridDim_2e_z, uint32_t blockDim_2e_x, uint32_t blockDim_2e_y, uint32_t blockDim_2e_z, uint32_t blockIdx_2e_x, uint32_t blockIdx_2e_y, uint32_t blockIdx_2e_z, uint32_t threadIdx_2e_x, uint32_t threadIdx_2e_y, uint32_t threadIdx_2e_z) {
  int64_t i;
  int64_t j;

  i = blockDim_2e_x * blockIdx_2e_x + threadIdx_2e_x;
  if (i < n) {
  tmp[i] = 0;
  y[i] = 0;

for(int64_t j = 0; j < n;   j = j + 1){
  tmp[i] = (tmp[i] + A[(i * n + j)] * x[j]);
  y[i] = (y[i] + B[(i * n + j)] * x[j]);
}
  y[i] = (alpha * tmp[i] + beta * y[i]);
  }
  return;
}

