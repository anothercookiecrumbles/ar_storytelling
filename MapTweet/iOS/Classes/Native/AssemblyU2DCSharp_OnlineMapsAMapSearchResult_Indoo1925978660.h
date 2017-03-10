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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsAMapSearchResult/IndoorData
struct  IndoorData_t1925978660  : public Il2CppObject
{
public:
	// System.String OnlineMapsAMapSearchResult/IndoorData::cpid
	String_t* ___cpid_0;
	// System.String OnlineMapsAMapSearchResult/IndoorData::floor
	String_t* ___floor_1;
	// System.String OnlineMapsAMapSearchResult/IndoorData::truefloor
	String_t* ___truefloor_2;
	// System.String OnlineMapsAMapSearchResult/IndoorData::cmsid
	String_t* ___cmsid_3;

public:
	inline static int32_t get_offset_of_cpid_0() { return static_cast<int32_t>(offsetof(IndoorData_t1925978660, ___cpid_0)); }
	inline String_t* get_cpid_0() const { return ___cpid_0; }
	inline String_t** get_address_of_cpid_0() { return &___cpid_0; }
	inline void set_cpid_0(String_t* value)
	{
		___cpid_0 = value;
		Il2CppCodeGenWriteBarrier(&___cpid_0, value);
	}

	inline static int32_t get_offset_of_floor_1() { return static_cast<int32_t>(offsetof(IndoorData_t1925978660, ___floor_1)); }
	inline String_t* get_floor_1() const { return ___floor_1; }
	inline String_t** get_address_of_floor_1() { return &___floor_1; }
	inline void set_floor_1(String_t* value)
	{
		___floor_1 = value;
		Il2CppCodeGenWriteBarrier(&___floor_1, value);
	}

	inline static int32_t get_offset_of_truefloor_2() { return static_cast<int32_t>(offsetof(IndoorData_t1925978660, ___truefloor_2)); }
	inline String_t* get_truefloor_2() const { return ___truefloor_2; }
	inline String_t** get_address_of_truefloor_2() { return &___truefloor_2; }
	inline void set_truefloor_2(String_t* value)
	{
		___truefloor_2 = value;
		Il2CppCodeGenWriteBarrier(&___truefloor_2, value);
	}

	inline static int32_t get_offset_of_cmsid_3() { return static_cast<int32_t>(offsetof(IndoorData_t1925978660, ___cmsid_3)); }
	inline String_t* get_cmsid_3() const { return ___cmsid_3; }
	inline String_t** get_address_of_cmsid_3() { return &___cmsid_3; }
	inline void set_cmsid_3(String_t* value)
	{
		___cmsid_3 = value;
		Il2CppCodeGenWriteBarrier(&___cmsid_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
