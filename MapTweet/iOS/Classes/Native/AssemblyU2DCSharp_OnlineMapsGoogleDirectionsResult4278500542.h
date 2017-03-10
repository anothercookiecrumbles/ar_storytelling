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
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleDirectionsResult/GeocodedWaypoint
struct  GeocodedWaypoint_t4278500542  : public Il2CppObject
{
public:
	// System.String OnlineMapsGoogleDirectionsResult/GeocodedWaypoint::geocoder_status
	String_t* ___geocoder_status_0;
	// System.String[] OnlineMapsGoogleDirectionsResult/GeocodedWaypoint::types
	StringU5BU5D_t1642385972* ___types_1;
	// System.String OnlineMapsGoogleDirectionsResult/GeocodedWaypoint::place_id
	String_t* ___place_id_2;
	// System.String OnlineMapsGoogleDirectionsResult/GeocodedWaypoint::partial_match
	String_t* ___partial_match_3;

public:
	inline static int32_t get_offset_of_geocoder_status_0() { return static_cast<int32_t>(offsetof(GeocodedWaypoint_t4278500542, ___geocoder_status_0)); }
	inline String_t* get_geocoder_status_0() const { return ___geocoder_status_0; }
	inline String_t** get_address_of_geocoder_status_0() { return &___geocoder_status_0; }
	inline void set_geocoder_status_0(String_t* value)
	{
		___geocoder_status_0 = value;
		Il2CppCodeGenWriteBarrier(&___geocoder_status_0, value);
	}

	inline static int32_t get_offset_of_types_1() { return static_cast<int32_t>(offsetof(GeocodedWaypoint_t4278500542, ___types_1)); }
	inline StringU5BU5D_t1642385972* get_types_1() const { return ___types_1; }
	inline StringU5BU5D_t1642385972** get_address_of_types_1() { return &___types_1; }
	inline void set_types_1(StringU5BU5D_t1642385972* value)
	{
		___types_1 = value;
		Il2CppCodeGenWriteBarrier(&___types_1, value);
	}

	inline static int32_t get_offset_of_place_id_2() { return static_cast<int32_t>(offsetof(GeocodedWaypoint_t4278500542, ___place_id_2)); }
	inline String_t* get_place_id_2() const { return ___place_id_2; }
	inline String_t** get_address_of_place_id_2() { return &___place_id_2; }
	inline void set_place_id_2(String_t* value)
	{
		___place_id_2 = value;
		Il2CppCodeGenWriteBarrier(&___place_id_2, value);
	}

	inline static int32_t get_offset_of_partial_match_3() { return static_cast<int32_t>(offsetof(GeocodedWaypoint_t4278500542, ___partial_match_3)); }
	inline String_t* get_partial_match_3() const { return ___partial_match_3; }
	inline String_t** get_address_of_partial_match_3() { return &___partial_match_3; }
	inline void set_partial_match_3(String_t* value)
	{
		___partial_match_3 = value;
		Il2CppCodeGenWriteBarrier(&___partial_match_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
