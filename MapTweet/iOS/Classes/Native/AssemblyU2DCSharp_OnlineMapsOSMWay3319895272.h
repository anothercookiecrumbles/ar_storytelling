#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "AssemblyU2DCSharp_OnlineMapsOSMBase540795536.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsOSMWay
struct  OnlineMapsOSMWay_t3319895272  : public OnlineMapsOSMBase_t540795536
{
public:
	// System.Collections.Generic.List`1<System.String> OnlineMapsOSMWay::_nodeRefs
	List_1_t1398341365 * ____nodeRefs_2;

public:
	inline static int32_t get_offset_of__nodeRefs_2() { return static_cast<int32_t>(offsetof(OnlineMapsOSMWay_t3319895272, ____nodeRefs_2)); }
	inline List_1_t1398341365 * get__nodeRefs_2() const { return ____nodeRefs_2; }
	inline List_1_t1398341365 ** get_address_of__nodeRefs_2() { return &____nodeRefs_2; }
	inline void set__nodeRefs_2(List_1_t1398341365 * value)
	{
		____nodeRefs_2 = value;
		Il2CppCodeGenWriteBarrier(&____nodeRefs_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
