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

// OnlineMapsHereRoutingAPI/LinkWaypoint
struct  LinkWaypoint_t3085950106  : public Waypoint_t4201288802
{
public:
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPI/LinkWaypoint::displayLatitude
	Nullable_1_t2341081996  ___displayLatitude_1;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPI/LinkWaypoint::displayLongitude
	Nullable_1_t2341081996  ___displayLongitude_2;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPI/LinkWaypoint::displayAltitude
	Nullable_1_t2341081996  ___displayAltitude_3;
	// System.String OnlineMapsHereRoutingAPI/LinkWaypoint::userLabel
	String_t* ___userLabel_4;
	// System.String OnlineMapsHereRoutingAPI/LinkWaypoint::linkId
	String_t* ___linkId_5;
	// System.String OnlineMapsHereRoutingAPI/LinkWaypoint::spot
	String_t* ___spot_6;

public:
	inline static int32_t get_offset_of_displayLatitude_1() { return static_cast<int32_t>(offsetof(LinkWaypoint_t3085950106, ___displayLatitude_1)); }
	inline Nullable_1_t2341081996  get_displayLatitude_1() const { return ___displayLatitude_1; }
	inline Nullable_1_t2341081996 * get_address_of_displayLatitude_1() { return &___displayLatitude_1; }
	inline void set_displayLatitude_1(Nullable_1_t2341081996  value)
	{
		___displayLatitude_1 = value;
	}

	inline static int32_t get_offset_of_displayLongitude_2() { return static_cast<int32_t>(offsetof(LinkWaypoint_t3085950106, ___displayLongitude_2)); }
	inline Nullable_1_t2341081996  get_displayLongitude_2() const { return ___displayLongitude_2; }
	inline Nullable_1_t2341081996 * get_address_of_displayLongitude_2() { return &___displayLongitude_2; }
	inline void set_displayLongitude_2(Nullable_1_t2341081996  value)
	{
		___displayLongitude_2 = value;
	}

	inline static int32_t get_offset_of_displayAltitude_3() { return static_cast<int32_t>(offsetof(LinkWaypoint_t3085950106, ___displayAltitude_3)); }
	inline Nullable_1_t2341081996  get_displayAltitude_3() const { return ___displayAltitude_3; }
	inline Nullable_1_t2341081996 * get_address_of_displayAltitude_3() { return &___displayAltitude_3; }
	inline void set_displayAltitude_3(Nullable_1_t2341081996  value)
	{
		___displayAltitude_3 = value;
	}

	inline static int32_t get_offset_of_userLabel_4() { return static_cast<int32_t>(offsetof(LinkWaypoint_t3085950106, ___userLabel_4)); }
	inline String_t* get_userLabel_4() const { return ___userLabel_4; }
	inline String_t** get_address_of_userLabel_4() { return &___userLabel_4; }
	inline void set_userLabel_4(String_t* value)
	{
		___userLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___userLabel_4, value);
	}

	inline static int32_t get_offset_of_linkId_5() { return static_cast<int32_t>(offsetof(LinkWaypoint_t3085950106, ___linkId_5)); }
	inline String_t* get_linkId_5() const { return ___linkId_5; }
	inline String_t** get_address_of_linkId_5() { return &___linkId_5; }
	inline void set_linkId_5(String_t* value)
	{
		___linkId_5 = value;
		Il2CppCodeGenWriteBarrier(&___linkId_5, value);
	}

	inline static int32_t get_offset_of_spot_6() { return static_cast<int32_t>(offsetof(LinkWaypoint_t3085950106, ___spot_6)); }
	inline String_t* get_spot_6() const { return ___spot_6; }
	inline String_t** get_address_of_spot_6() { return &___spot_6; }
	inline void set_spot_6(String_t* value)
	{
		___spot_6 = value;
		Il2CppCodeGenWriteBarrier(&___spot_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
