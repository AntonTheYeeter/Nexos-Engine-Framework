#ifndef NX_DEF_H
#define NX_DEF_H

#define NX_NULL ((void*)0)

typedef unsigned char NX_U8;
typedef unsigned short NX_U16;
typedef unsigned int NX_U32;
typedef unsigned long long NX_U64;

typedef signed char NX_I8;
typedef signed short NX_I16;
typedef signed int NX_I32;
typedef signed long long NX_I64;

typedef float NX_F32;
typedef double NX_F64;

typedef char NX_B8;
typedef int NX_B32;

#define NX_TRUE 1
#define NX_FALSE 0

#include <assert.h>

#if defined(__clang__) || defined(__gcc__)
#define NX_STATIC_ASSERT _Static_assert
#else
#define NX_STATIC_ASSERT static_assert
#endif

NX_STATIC_ASSERT(sizeof(NX_U8) == 1, "NX_U8 must be 1 byte in size!!!");
NX_STATIC_ASSERT(sizeof(NX_U16) == 2, "NX_U16 must be 2 bytes in size!!!");
NX_STATIC_ASSERT(sizeof(NX_U32) == 4, "NX_U32 must be 4 bytes in size!!!");
NX_STATIC_ASSERT(sizeof(NX_U64) == 8, "NX_U64 must be 8 bytes in size!!!");

NX_STATIC_ASSERT(sizeof(NX_I8) == 1, "NX_I8 must be 1 byte in size!!!");
NX_STATIC_ASSERT(sizeof(NX_I16) == 2, "NX_I16 must be 2 bytes in size!!!");
NX_STATIC_ASSERT(sizeof(NX_I32) == 4, "NX_I32 must be 4 bytes in size!!!");
NX_STATIC_ASSERT(sizeof(NX_I64) == 8, "NX_I64 must be 8 bytes in size!!!");

NX_STATIC_ASSERT(sizeof(NX_F32) == 4, "NX_F32 must be 4 bytes in size!!!");
NX_STATIC_ASSERT(sizeof(NX_F64) == 8, "NX_F64 must be 8 bytes in size!!!");

NX_STATIC_ASSERT(sizeof(NX_B8) == 1, "NX_B8 must be 1 byte in size!!!");
NX_STATIC_ASSERT(sizeof(NX_B32) == 4, "NX_B32 must be 4 bytes in size!!!");

#endif