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

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OnlineMapsBingMapsElevation_Heigh688094327.h"
#include "AssemblyU2DCSharp_OnlineMapsBingMapsElevation_Outp2838038948.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsBingMapsElevation/Params
struct  Params_t1354251003  : public Il2CppObject
{
public:
	// System.String OnlineMapsBingMapsElevation/Params::key
	String_t* ___key_0;
	// OnlineMapsBingMapsElevation/Heights OnlineMapsBingMapsElevation/Params::heights
	int32_t ___heights_1;
	// OnlineMapsBingMapsElevation/Output OnlineMapsBingMapsElevation/Params::output
	int32_t ___output_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Params_t1354251003, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_heights_1() { return static_cast<int32_t>(offsetof(Params_t1354251003, ___heights_1)); }
	inline int32_t get_heights_1() const { return ___heights_1; }
	inline int32_t* get_address_of_heights_1() { return &___heights_1; }
	inline void set_heights_1(int32_t value)
	{
		___heights_1 = value;
	}

	inline static int32_t get_offset_of_output_2() { return static_cast<int32_t>(offsetof(Params_t1354251003, ___output_2)); }
	inline int32_t get_output_2() const { return ___output_2; }
	inline int32_t* get_address_of_output_2() { return &___output_2; }
	inline void set_output_2(int32_t value)
	{
		___output_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
