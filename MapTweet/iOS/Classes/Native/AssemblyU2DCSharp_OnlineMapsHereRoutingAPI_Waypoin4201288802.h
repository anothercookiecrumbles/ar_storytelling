#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2796770634.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPI/Waypoint
struct  Waypoint_t4201288802  : public Il2CppObject
{
public:
	// System.Nullable`1<OnlineMapsHereRoutingAPI/Waypoint/Type> OnlineMapsHereRoutingAPI/Waypoint::type
	Nullable_1_t2796770634  ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Waypoint_t4201288802, ___type_0)); }
	inline Nullable_1_t2796770634  get_type_0() const { return ___type_0; }
	inline Nullable_1_t2796770634 * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Nullable_1_t2796770634  value)
	{
		___type_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
