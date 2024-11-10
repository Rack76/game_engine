#pragma once

#define DEBUG_MODE

#if defined(__clang__) || defined(__gcc__)
#define STATIC_ASSERT _Static_assert
#else
#define STATIC_ASSERT static_assert
#endif

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) 
// Windows
#define PLATFORM_WINDOWS 
#ifndef _WIN64
#error "64-bit is required!"
#endif
#endif

#if defined(__clang__) || defined(__gcc__)
#define INLINE __attribute__((always_inline)) inline
#elif defined(_MSC_VER)
#define INLINE __forceinline
#else
#define INLINE static inline
#endif

#if defined(__clang__) || defined(__gcc__)
#define NOINLINE __attribute__((noinline))
#elif defined(_MSC_VER)
#define NOINLINE __declspec(noinline)
#else
#define NOINLINE
#endif
