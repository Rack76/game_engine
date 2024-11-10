#pragma once
#include "defines.h"

using v = void;

using i8 = signed char;
using i16 = signed short;
using i32 = signed int;
using i64 = signed long long;

using u8 = unsigned char;
using u16 = unsigned short;
using u32 = unsigned int;
using u64 = unsigned long long;

using f32 = float;
using f64 = double;

using c_str = char*;
using read_c_str = const char*;
using vptr = void*;
using read_vptr = const void*;

union any128 {
	u8   u8[16];
	u16  u16[8];
	u32  u32[4];
	u64  u64[2];

	i8   i8[16];
	i16  i16[8];
	i32  i32[4];
	i64  i64[2];

	f32  f32[4];
	f64  f64[2];

	vptr vptr[2];
};

union any256 {
	u8   u8[32];
	u16  u16[16];
	u32  u32[8];
	u64  u64[4];

	i8   i8[32];
	i16  i16[16];
	i32  i32[8];
	i64  i64[4];

	f32  f32[8];
	f64  f64[4];

	vptr vptr[4];
};

union any512 {
	u8   u8[64];
	u16  u16[32];
	u32  u32[16];
	u64  u64[8];

	i8   i8[64];
	i16  i16[32];
	i32  i32[16];
	i64  i64[8];

	f32  f32[16];
	f64  f64[8];

	vptr vptr[8];
};

union any1024 {
	u8   u8[128];
	u16  u16[64];
	u32  u32[32];
	u64  u64[16];

	i8   i8[128];
	i16  i16[64];
	i32  i32[32];
	i64  i64[16];

	f32  f32[32];
	f64  f64[16];

	vptr vptr[16];
};

class _ {
public:
	INLINE explicit operator u64() { return m_error; }
	INLINE explicit operator bool() { return m_error != 0; }
	INLINE constexpr _(u64 error_code) : m_error(error_code) {}
private:
	const u64 m_error;
};

