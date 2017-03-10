#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<OnlineMapsGPXObject/Waypoint>
struct List_1_t1700864428;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGPXObject/TrackSegment
struct  TrackSegment_t2776109187  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<OnlineMapsGPXObject/Waypoint> OnlineMapsGPXObject/TrackSegment::points
	List_1_t1700864428 * ___points_0;
	// OnlineMapsXML OnlineMapsGPXObject/TrackSegment::extensions
	OnlineMapsXML_t3341520387 * ___extensions_1;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(TrackSegment_t2776109187, ___points_0)); }
	inline List_1_t1700864428 * get_points_0() const { return ___points_0; }
	inline List_1_t1700864428 ** get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(List_1_t1700864428 * value)
	{
		___points_0 = value;
		Il2CppCodeGenWriteBarrier(&___points_0, value);
	}

	inline static int32_t get_offset_of_extensions_1() { return static_cast<int32_t>(offsetof(TrackSegment_t2776109187, ___extensions_1)); }
	inline OnlineMapsXML_t3341520387 * get_extensions_1() const { return ___extensions_1; }
	inline OnlineMapsXML_t3341520387 ** get_address_of_extensions_1() { return &___extensions_1; }
	inline void set_extensions_1(OnlineMapsXML_t3341520387 * value)
	{
		___extensions_1 = value;
		Il2CppCodeGenWriteBarrier(&___extensions_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
