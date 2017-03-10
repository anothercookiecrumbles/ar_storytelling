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

#include "AssemblyU2DCSharp_OnlineMapsHereRoutingAPI_Waypoin4201288802.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPI/GeoWaypoint
struct  GeoWaypoint_t936085465  : public Waypoint_t4201288802
{
public:
	// System.Double OnlineMapsHereRoutingAPI/GeoWaypoint::latitude
	double ___latitude_1;
	// System.Double OnlineMapsHereRoutingAPI/GeoWaypoint::longitude
	double ___longitude_2;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPI/GeoWaypoint::altitude
	Nullable_1_t2341081996  ___altitude_3;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPI/GeoWaypoint::transitRadius
	Nullable_1_t334943763  ___transitRadius_4;
	// System.String OnlineMapsHereRoutingAPI/GeoWaypoint::userLabel
	String_t* ___userLabel_5;

public:
	inline static int32_t get_offset_of_latitude_1() { return static_cast<int32_t>(offsetof(GeoWaypoint_t936085465, ___latitude_1)); }
	inline double get_latitude_1() const { return ___latitude_1; }
	inline double* get_address_of_latitude_1() { return &___latitude_1; }
	inline void set_latitude_1(double value)
	{
		___latitude_1 = value;
	}

	inline static int32_t get_offset_of_longitude_2() { return static_cast<int32_t>(offsetof(GeoWaypoint_t936085465, ___longitude_2)); }
	inline double get_longitude_2() const { return ___longitude_2; }
	inline double* get_address_of_longitude_2() { return &___longitude_2; }
	inline void set_longitude_2(double value)
	{
		___longitude_2 = value;
	}

	inline static int32_t get_offset_of_altitude_3() { return static_cast<int32_t>(offsetof(GeoWaypoint_t936085465, ___altitude_3)); }
	inline Nullable_1_t2341081996  get_altitude_3() const { return ___altitude_3; }
	inline Nullable_1_t2341081996 * get_address_of_altitude_3() { return &___altitude_3; }
	inline void set_altitude_3(Nullable_1_t2341081996  value)
	{
		___altitude_3 = value;
	}

	inline static int32_t get_offset_of_transitRadius_4() { return static_cast<int32_t>(offsetof(GeoWaypoint_t936085465, ___transitRadius_4)); }
	inline Nullable_1_t334943763  get_transitRadius_4() const { return ___transitRadius_4; }
	inline Nullable_1_t334943763 * get_address_of_transitRadius_4() { return &___transitRadius_4; }
	inline void set_transitRadius_4(Nullable_1_t334943763  value)
	{
		___transitRadius_4 = value;
	}

	inline static int32_t get_offset_of_userLabel_5() { return static_cast<int32_t>(offsetof(GeoWaypoint_t936085465, ___userLabel_5)); }
	inline String_t* get_userLabel_5() const { return ___userLabel_5; }
	inline String_t** get_address_of_userLabel_5() { return &___userLabel_5; }
	inline void set_userLabel_5(String_t* value)
	{
		___userLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___userLabel_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
