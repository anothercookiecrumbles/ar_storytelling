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
// OnlineMapsGoogleDirectionsResult/Route[]
struct RouteU5BU5D_t3632526339;
// OnlineMapsGoogleDirectionsResult/GeocodedWaypoint[]
struct GeocodedWaypointU5BU5D_t1107931787;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleDirectionsResult
struct  OnlineMapsGoogleDirectionsResult_t3904223280  : public Il2CppObject
{
public:
	// System.String OnlineMapsGoogleDirectionsResult::status
	String_t* ___status_0;
	// System.String OnlineMapsGoogleDirectionsResult::error_message
	String_t* ___error_message_1;
	// OnlineMapsGoogleDirectionsResult/Route[] OnlineMapsGoogleDirectionsResult::routes
	RouteU5BU5D_t3632526339* ___routes_2;
	// OnlineMapsGoogleDirectionsResult/GeocodedWaypoint[] OnlineMapsGoogleDirectionsResult::geocoded_waypoints
	GeocodedWaypointU5BU5D_t1107931787* ___geocoded_waypoints_3;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleDirectionsResult_t3904223280, ___status_0)); }
	inline String_t* get_status_0() const { return ___status_0; }
	inline String_t** get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(String_t* value)
	{
		___status_0 = value;
		Il2CppCodeGenWriteBarrier(&___status_0, value);
	}

	inline static int32_t get_offset_of_error_message_1() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleDirectionsResult_t3904223280, ___error_message_1)); }
	inline String_t* get_error_message_1() const { return ___error_message_1; }
	inline String_t** get_address_of_error_message_1() { return &___error_message_1; }
	inline void set_error_message_1(String_t* value)
	{
		___error_message_1 = value;
		Il2CppCodeGenWriteBarrier(&___error_message_1, value);
	}

	inline static int32_t get_offset_of_routes_2() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleDirectionsResult_t3904223280, ___routes_2)); }
	inline RouteU5BU5D_t3632526339* get_routes_2() const { return ___routes_2; }
	inline RouteU5BU5D_t3632526339** get_address_of_routes_2() { return &___routes_2; }
	inline void set_routes_2(RouteU5BU5D_t3632526339* value)
	{
		___routes_2 = value;
		Il2CppCodeGenWriteBarrier(&___routes_2, value);
	}

	inline static int32_t get_offset_of_geocoded_waypoints_3() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleDirectionsResult_t3904223280, ___geocoded_waypoints_3)); }
	inline GeocodedWaypointU5BU5D_t1107931787* get_geocoded_waypoints_3() const { return ___geocoded_waypoints_3; }
	inline GeocodedWaypointU5BU5D_t1107931787** get_address_of_geocoded_waypoints_3() { return &___geocoded_waypoints_3; }
	inline void set_geocoded_waypoints_3(GeocodedWaypointU5BU5D_t1107931787* value)
	{
		___geocoded_waypoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___geocoded_waypoints_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
