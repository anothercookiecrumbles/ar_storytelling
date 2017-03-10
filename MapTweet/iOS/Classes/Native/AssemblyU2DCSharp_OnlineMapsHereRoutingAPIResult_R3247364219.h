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
// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate
struct GeoCoordinate_t2186656463;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route/Waypoint
struct  Waypoint_t3247364219  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/Route/Waypoint::linkId
	String_t* ___linkId_0;
	// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate OnlineMapsHereRoutingAPIResult/Route/Waypoint::mappedPosition
	GeoCoordinate_t2186656463 * ___mappedPosition_1;
	// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate OnlineMapsHereRoutingAPIResult/Route/Waypoint::originalPosition
	GeoCoordinate_t2186656463 * ___originalPosition_2;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Waypoint::type
	String_t* ___type_3;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPIResult/Route/Waypoint::spot
	Nullable_1_t2341081996  ___spot_4;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Waypoint::sideOfStreet
	String_t* ___sideOfStreet_5;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Waypoint::mappedRoadName
	String_t* ___mappedRoadName_6;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Waypoint::label
	String_t* ___label_7;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Waypoint::userLabel
	String_t* ___userLabel_8;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPIResult/Route/Waypoint::shapeIndex
	Nullable_1_t334943763  ___shapeIndex_9;

public:
	inline static int32_t get_offset_of_linkId_0() { return static_cast<int32_t>(offsetof(Waypoint_t3247364219, ___linkId_0)); }
	inline String_t* get_linkId_0() const { return ___linkId_0; }
	inline String_t** get_address_of_linkId_0() { return &___linkId_0; }
	inline void set_linkId_0(String_t* value)
	{
		___linkId_0 = value;
		Il2CppCodeGenWriteBarrier(&___linkId_0, value);
	}

	inline static int32_t get_offset_of_mappedPosition_1() { return static_cast<int32_t>(offsetof(Waypoint_t3247364219, ___mappedPosition_1)); }
	inline GeoCoordinate_t2186656463 * get_mappedPosition_1() const { return ___mappedPosition_1; }
	inline GeoCoordinate_t2186656463 ** get_address_of_mappedPosition_1() { return &___mappedPosition_1; }
	inline void set_mappedPosition_1(GeoCoordinate_t2186656463 * value)
	{
		___mappedPosition_1 = value;
		Il2CppCodeGenWriteBarrier(&___mappedPosition_1, value);
	}

	inline static int32_t get_offset_of_originalPosition_2() { return static_cast<int32_t>(offsetof(Waypoint_t3247364219, ___originalPosition_2)); }
	inline GeoCoordinate_t2186656463 * get_originalPosition_2() const { return ___originalPosition_2; }
	inline GeoCoordinate_t2186656463 ** get_address_of_originalPosition_2() { return &___originalPosition_2; }
	inline void set_originalPosition_2(GeoCoordinate_t2186656463 * value)
	{
		___originalPosition_2 = value;
		Il2CppCodeGenWriteBarrier(&___originalPosition_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(Waypoint_t3247364219, ___type_3)); }
	inline String_t* get_type_3() const { return ___type_3; }
	inline String_t** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(String_t* value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_3, value);
	}

	inline static int32_t get_offset_of_spot_4() { return static_cast<int32_t>(offsetof(Waypoint_t3247364219, ___spot_4)); }
	inline Nullable_1_t2341081996  get_spot_4() const { return ___spot_4; }
	inline Nullable_1_t2341081996 * get_address_of_spot_4() { return &___spot_4; }
	inline void set_spot_4(Nullable_1_t2341081996  value)
	{
		___spot_4 = value;
	}

	inline static int32_t get_offset_of_sideOfStreet_5() { return static_cast<int32_t>(offsetof(Waypoint_t3247364219, ___sideOfStreet_5)); }
	inline String_t* get_sideOfStreet_5() const { return ___sideOfStreet_5; }
	inline String_t** get_address_of_sideOfStreet_5() { return &___sideOfStreet_5; }
	inline void set_sideOfStreet_5(String_t* value)
	{
		___sideOfStreet_5 = value;
		Il2CppCodeGenWriteBarrier(&___sideOfStreet_5, value);
	}

	inline static int32_t get_offset_of_mappedRoadName_6() { return static_cast<int32_t>(offsetof(Waypoint_t3247364219, ___mappedRoadName_6)); }
	inline String_t* get_mappedRoadName_6() const { return ___mappedRoadName_6; }
	inline String_t** get_address_of_mappedRoadName_6() { return &___mappedRoadName_6; }
	inline void set_mappedRoadName_6(String_t* value)
	{
		___mappedRoadName_6 = value;
		Il2CppCodeGenWriteBarrier(&___mappedRoadName_6, value);
	}

	inline static int32_t get_offset_of_label_7() { return static_cast<int32_t>(offsetof(Waypoint_t3247364219, ___label_7)); }
	inline String_t* get_label_7() const { return ___label_7; }
	inline String_t** get_address_of_label_7() { return &___label_7; }
	inline void set_label_7(String_t* value)
	{
		___label_7 = value;
		Il2CppCodeGenWriteBarrier(&___label_7, value);
	}

	inline static int32_t get_offset_of_userLabel_8() { return static_cast<int32_t>(offsetof(Waypoint_t3247364219, ___userLabel_8)); }
	inline String_t* get_userLabel_8() const { return ___userLabel_8; }
	inline String_t** get_address_of_userLabel_8() { return &___userLabel_8; }
	inline void set_userLabel_8(String_t* value)
	{
		___userLabel_8 = value;
		Il2CppCodeGenWriteBarrier(&___userLabel_8, value);
	}

	inline static int32_t get_offset_of_shapeIndex_9() { return static_cast<int32_t>(offsetof(Waypoint_t3247364219, ___shapeIndex_9)); }
	inline Nullable_1_t334943763  get_shapeIndex_9() const { return ___shapeIndex_9; }
	inline Nullable_1_t334943763 * get_address_of_shapeIndex_9() { return &___shapeIndex_9; }
	inline void set_shapeIndex_9(Nullable_1_t334943763  value)
	{
		___shapeIndex_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
