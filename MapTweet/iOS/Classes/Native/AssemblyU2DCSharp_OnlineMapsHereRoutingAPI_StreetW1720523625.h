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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPI/StreetWaypoint
struct  StreetWaypoint_t1720523625  : public Waypoint_t4201288802
{
public:
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPI/StreetWaypoint::displayLatitude
	Nullable_1_t2341081996  ___displayLatitude_1;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPI/StreetWaypoint::displayLongitude
	Nullable_1_t2341081996  ___displayLongitude_2;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPI/StreetWaypoint::displayAltitude
	Nullable_1_t2341081996  ___displayAltitude_3;
	// System.String OnlineMapsHereRoutingAPI/StreetWaypoint::userLabel
	String_t* ___userLabel_4;
	// System.Double OnlineMapsHereRoutingAPI/StreetWaypoint::streetLatitude
	double ___streetLatitude_5;
	// System.Double OnlineMapsHereRoutingAPI/StreetWaypoint::streetLongitude
	double ___streetLongitude_6;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPI/StreetWaypoint::streetAltitude
	Nullable_1_t2341081996  ___streetAltitude_7;
	// System.String OnlineMapsHereRoutingAPI/StreetWaypoint::streetName
	String_t* ___streetName_8;

public:
	inline static int32_t get_offset_of_displayLatitude_1() { return static_cast<int32_t>(offsetof(StreetWaypoint_t1720523625, ___displayLatitude_1)); }
	inline Nullable_1_t2341081996  get_displayLatitude_1() const { return ___displayLatitude_1; }
	inline Nullable_1_t2341081996 * get_address_of_displayLatitude_1() { return &___displayLatitude_1; }
	inline void set_displayLatitude_1(Nullable_1_t2341081996  value)
	{
		___displayLatitude_1 = value;
	}

	inline static int32_t get_offset_of_displayLongitude_2() { return static_cast<int32_t>(offsetof(StreetWaypoint_t1720523625, ___displayLongitude_2)); }
	inline Nullable_1_t2341081996  get_displayLongitude_2() const { return ___displayLongitude_2; }
	inline Nullable_1_t2341081996 * get_address_of_displayLongitude_2() { return &___displayLongitude_2; }
	inline void set_displayLongitude_2(Nullable_1_t2341081996  value)
	{
		___displayLongitude_2 = value;
	}

	inline static int32_t get_offset_of_displayAltitude_3() { return static_cast<int32_t>(offsetof(StreetWaypoint_t1720523625, ___displayAltitude_3)); }
	inline Nullable_1_t2341081996  get_displayAltitude_3() const { return ___displayAltitude_3; }
	inline Nullable_1_t2341081996 * get_address_of_displayAltitude_3() { return &___displayAltitude_3; }
	inline void set_displayAltitude_3(Nullable_1_t2341081996  value)
	{
		___displayAltitude_3 = value;
	}

	inline static int32_t get_offset_of_userLabel_4() { return static_cast<int32_t>(offsetof(StreetWaypoint_t1720523625, ___userLabel_4)); }
	inline String_t* get_userLabel_4() const { return ___userLabel_4; }
	inline String_t** get_address_of_userLabel_4() { return &___userLabel_4; }
	inline void set_userLabel_4(String_t* value)
	{
		___userLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___userLabel_4, value);
	}

	inline static int32_t get_offset_of_streetLatitude_5() { return static_cast<int32_t>(offsetof(StreetWaypoint_t1720523625, ___streetLatitude_5)); }
	inline double get_streetLatitude_5() const { return ___streetLatitude_5; }
	inline double* get_address_of_streetLatitude_5() { return &___streetLatitude_5; }
	inline void set_streetLatitude_5(double value)
	{
		___streetLatitude_5 = value;
	}

	inline static int32_t get_offset_of_streetLongitude_6() { return static_cast<int32_t>(offsetof(StreetWaypoint_t1720523625, ___streetLongitude_6)); }
	inline double get_streetLongitude_6() const { return ___streetLongitude_6; }
	inline double* get_address_of_streetLongitude_6() { return &___streetLongitude_6; }
	inline void set_streetLongitude_6(double value)
	{
		___streetLongitude_6 = value;
	}

	inline static int32_t get_offset_of_streetAltitude_7() { return static_cast<int32_t>(offsetof(StreetWaypoint_t1720523625, ___streetAltitude_7)); }
	inline Nullable_1_t2341081996  get_streetAltitude_7() const { return ___streetAltitude_7; }
	inline Nullable_1_t2341081996 * get_address_of_streetAltitude_7() { return &___streetAltitude_7; }
	inline void set_streetAltitude_7(Nullable_1_t2341081996  value)
	{
		___streetAltitude_7 = value;
	}

	inline static int32_t get_offset_of_streetName_8() { return static_cast<int32_t>(offsetof(StreetWaypoint_t1720523625, ___streetName_8)); }
	inline String_t* get_streetName_8() const { return ___streetName_8; }
	inline String_t** get_address_of_streetName_8() { return &___streetName_8; }
	inline void set_streetName_8(String_t* value)
	{
		___streetName_8 = value;
		Il2CppCodeGenWriteBarrier(&___streetName_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
