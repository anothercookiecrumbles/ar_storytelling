#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsGoogleRoads/Location
struct Location_t3214886680;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleRoads/SnapToRoadResult
struct  SnapToRoadResult_t3333140637  : public Il2CppObject
{
public:
	// OnlineMapsGoogleRoads/Location OnlineMapsGoogleRoads/SnapToRoadResult::location
	Location_t3214886680 * ___location_0;
	// System.Int32 OnlineMapsGoogleRoads/SnapToRoadResult::originalIndex
	int32_t ___originalIndex_1;
	// System.String OnlineMapsGoogleRoads/SnapToRoadResult::placeId
	String_t* ___placeId_2;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(SnapToRoadResult_t3333140637, ___location_0)); }
	inline Location_t3214886680 * get_location_0() const { return ___location_0; }
	inline Location_t3214886680 ** get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(Location_t3214886680 * value)
	{
		___location_0 = value;
		Il2CppCodeGenWriteBarrier(&___location_0, value);
	}

	inline static int32_t get_offset_of_originalIndex_1() { return static_cast<int32_t>(offsetof(SnapToRoadResult_t3333140637, ___originalIndex_1)); }
	inline int32_t get_originalIndex_1() const { return ___originalIndex_1; }
	inline int32_t* get_address_of_originalIndex_1() { return &___originalIndex_1; }
	inline void set_originalIndex_1(int32_t value)
	{
		___originalIndex_1 = value;
	}

	inline static int32_t get_offset_of_placeId_2() { return static_cast<int32_t>(offsetof(SnapToRoadResult_t3333140637, ___placeId_2)); }
	inline String_t* get_placeId_2() const { return ___placeId_2; }
	inline String_t** get_address_of_placeId_2() { return &___placeId_2; }
	inline void set_placeId_2(String_t* value)
	{
		___placeId_2 = value;
		Il2CppCodeGenWriteBarrier(&___placeId_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
