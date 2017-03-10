#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OnlineMapsJSON_Token1193842908.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsJSON
struct  OnlineMapsJSON_t693643906  : public Il2CppObject
{
public:
	// System.String OnlineMapsJSON::json
	String_t* ___json_0;
	// System.Int32 OnlineMapsJSON::index
	int32_t ___index_1;
	// OnlineMapsJSON/Token OnlineMapsJSON::lookAheadToken
	int32_t ___lookAheadToken_2;
	// System.Text.StringBuilder OnlineMapsJSON::s
	StringBuilder_t1221177846 * ___s_3;
	// System.Int32 OnlineMapsJSON::length
	int32_t ___length_4;

public:
	inline static int32_t get_offset_of_json_0() { return static_cast<int32_t>(offsetof(OnlineMapsJSON_t693643906, ___json_0)); }
	inline String_t* get_json_0() const { return ___json_0; }
	inline String_t** get_address_of_json_0() { return &___json_0; }
	inline void set_json_0(String_t* value)
	{
		___json_0 = value;
		Il2CppCodeGenWriteBarrier(&___json_0, value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(OnlineMapsJSON_t693643906, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_lookAheadToken_2() { return static_cast<int32_t>(offsetof(OnlineMapsJSON_t693643906, ___lookAheadToken_2)); }
	inline int32_t get_lookAheadToken_2() const { return ___lookAheadToken_2; }
	inline int32_t* get_address_of_lookAheadToken_2() { return &___lookAheadToken_2; }
	inline void set_lookAheadToken_2(int32_t value)
	{
		___lookAheadToken_2 = value;
	}

	inline static int32_t get_offset_of_s_3() { return static_cast<int32_t>(offsetof(OnlineMapsJSON_t693643906, ___s_3)); }
	inline StringBuilder_t1221177846 * get_s_3() const { return ___s_3; }
	inline StringBuilder_t1221177846 ** get_address_of_s_3() { return &___s_3; }
	inline void set_s_3(StringBuilder_t1221177846 * value)
	{
		___s_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_3, value);
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(OnlineMapsJSON_t693643906, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
