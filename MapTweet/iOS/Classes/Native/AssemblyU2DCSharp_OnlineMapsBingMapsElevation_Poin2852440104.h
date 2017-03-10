#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerable
struct IEnumerable_t2911409499;

#include "AssemblyU2DCSharp_OnlineMapsBingMapsElevation_Para1354251003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsBingMapsElevation/PointsParams
struct  PointsParams_t2852440104  : public Params_t1354251003
{
public:
	// System.Collections.IEnumerable OnlineMapsBingMapsElevation/PointsParams::points
	Il2CppObject * ___points_3;

public:
	inline static int32_t get_offset_of_points_3() { return static_cast<int32_t>(offsetof(PointsParams_t2852440104, ___points_3)); }
	inline Il2CppObject * get_points_3() const { return ___points_3; }
	inline Il2CppObject ** get_address_of_points_3() { return &___points_3; }
	inline void set_points_3(Il2CppObject * value)
	{
		___points_3 = value;
		Il2CppCodeGenWriteBarrier(&___points_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
