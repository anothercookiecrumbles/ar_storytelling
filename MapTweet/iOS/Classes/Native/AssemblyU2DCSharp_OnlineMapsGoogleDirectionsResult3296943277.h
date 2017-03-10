#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsGoogleDirectionsResult/Step[]
struct StepU5BU5D_t1511993080;
// OnlineMapsGoogleDirectionsResult/TextValue`1<System.Int32>
struct TextValue_1_t1400946205;
// System.String
struct String_t;
// OnlineMapsGoogleDirectionsResult/ViaWaypoint
struct ViaWaypoint_t3437876992;
// OnlineMapsGoogleDirectionsResult/TextValueZone`1<System.String>
struct TextValueZone_1_t2115376360;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleDirectionsResult/Leg
struct  Leg_t3296943277  : public Il2CppObject
{
public:
	// OnlineMapsGoogleDirectionsResult/Step[] OnlineMapsGoogleDirectionsResult/Leg::steps
	StepU5BU5D_t1511993080* ___steps_0;
	// OnlineMapsGoogleDirectionsResult/TextValue`1<System.Int32> OnlineMapsGoogleDirectionsResult/Leg::duration
	TextValue_1_t1400946205 * ___duration_1;
	// OnlineMapsGoogleDirectionsResult/TextValue`1<System.Int32> OnlineMapsGoogleDirectionsResult/Leg::duration_in_traffic
	TextValue_1_t1400946205 * ___duration_in_traffic_2;
	// OnlineMapsGoogleDirectionsResult/TextValue`1<System.Int32> OnlineMapsGoogleDirectionsResult/Leg::distance
	TextValue_1_t1400946205 * ___distance_3;
	// UnityEngine.Vector2 OnlineMapsGoogleDirectionsResult/Leg::start_location
	Vector2_t2243707579  ___start_location_4;
	// UnityEngine.Vector2 OnlineMapsGoogleDirectionsResult/Leg::end_location
	Vector2_t2243707579  ___end_location_5;
	// System.String OnlineMapsGoogleDirectionsResult/Leg::start_address
	String_t* ___start_address_6;
	// System.String OnlineMapsGoogleDirectionsResult/Leg::end_address
	String_t* ___end_address_7;
	// OnlineMapsGoogleDirectionsResult/ViaWaypoint OnlineMapsGoogleDirectionsResult/Leg::via_waypoint
	ViaWaypoint_t3437876992 * ___via_waypoint_8;
	// OnlineMapsGoogleDirectionsResult/TextValueZone`1<System.String> OnlineMapsGoogleDirectionsResult/Leg::arrival_time
	TextValueZone_1_t2115376360 * ___arrival_time_9;
	// OnlineMapsGoogleDirectionsResult/TextValueZone`1<System.String> OnlineMapsGoogleDirectionsResult/Leg::departure_time
	TextValueZone_1_t2115376360 * ___departure_time_10;

public:
	inline static int32_t get_offset_of_steps_0() { return static_cast<int32_t>(offsetof(Leg_t3296943277, ___steps_0)); }
	inline StepU5BU5D_t1511993080* get_steps_0() const { return ___steps_0; }
	inline StepU5BU5D_t1511993080** get_address_of_steps_0() { return &___steps_0; }
	inline void set_steps_0(StepU5BU5D_t1511993080* value)
	{
		___steps_0 = value;
		Il2CppCodeGenWriteBarrier(&___steps_0, value);
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(Leg_t3296943277, ___duration_1)); }
	inline TextValue_1_t1400946205 * get_duration_1() const { return ___duration_1; }
	inline TextValue_1_t1400946205 ** get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(TextValue_1_t1400946205 * value)
	{
		___duration_1 = value;
		Il2CppCodeGenWriteBarrier(&___duration_1, value);
	}

	inline static int32_t get_offset_of_duration_in_traffic_2() { return static_cast<int32_t>(offsetof(Leg_t3296943277, ___duration_in_traffic_2)); }
	inline TextValue_1_t1400946205 * get_duration_in_traffic_2() const { return ___duration_in_traffic_2; }
	inline TextValue_1_t1400946205 ** get_address_of_duration_in_traffic_2() { return &___duration_in_traffic_2; }
	inline void set_duration_in_traffic_2(TextValue_1_t1400946205 * value)
	{
		___duration_in_traffic_2 = value;
		Il2CppCodeGenWriteBarrier(&___duration_in_traffic_2, value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(Leg_t3296943277, ___distance_3)); }
	inline TextValue_1_t1400946205 * get_distance_3() const { return ___distance_3; }
	inline TextValue_1_t1400946205 ** get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(TextValue_1_t1400946205 * value)
	{
		___distance_3 = value;
		Il2CppCodeGenWriteBarrier(&___distance_3, value);
	}

	inline static int32_t get_offset_of_start_location_4() { return static_cast<int32_t>(offsetof(Leg_t3296943277, ___start_location_4)); }
	inline Vector2_t2243707579  get_start_location_4() const { return ___start_location_4; }
	inline Vector2_t2243707579 * get_address_of_start_location_4() { return &___start_location_4; }
	inline void set_start_location_4(Vector2_t2243707579  value)
	{
		___start_location_4 = value;
	}

	inline static int32_t get_offset_of_end_location_5() { return static_cast<int32_t>(offsetof(Leg_t3296943277, ___end_location_5)); }
	inline Vector2_t2243707579  get_end_location_5() const { return ___end_location_5; }
	inline Vector2_t2243707579 * get_address_of_end_location_5() { return &___end_location_5; }
	inline void set_end_location_5(Vector2_t2243707579  value)
	{
		___end_location_5 = value;
	}

	inline static int32_t get_offset_of_start_address_6() { return static_cast<int32_t>(offsetof(Leg_t3296943277, ___start_address_6)); }
	inline String_t* get_start_address_6() const { return ___start_address_6; }
	inline String_t** get_address_of_start_address_6() { return &___start_address_6; }
	inline void set_start_address_6(String_t* value)
	{
		___start_address_6 = value;
		Il2CppCodeGenWriteBarrier(&___start_address_6, value);
	}

	inline static int32_t get_offset_of_end_address_7() { return static_cast<int32_t>(offsetof(Leg_t3296943277, ___end_address_7)); }
	inline String_t* get_end_address_7() const { return ___end_address_7; }
	inline String_t** get_address_of_end_address_7() { return &___end_address_7; }
	inline void set_end_address_7(String_t* value)
	{
		___end_address_7 = value;
		Il2CppCodeGenWriteBarrier(&___end_address_7, value);
	}

	inline static int32_t get_offset_of_via_waypoint_8() { return static_cast<int32_t>(offsetof(Leg_t3296943277, ___via_waypoint_8)); }
	inline ViaWaypoint_t3437876992 * get_via_waypoint_8() const { return ___via_waypoint_8; }
	inline ViaWaypoint_t3437876992 ** get_address_of_via_waypoint_8() { return &___via_waypoint_8; }
	inline void set_via_waypoint_8(ViaWaypoint_t3437876992 * value)
	{
		___via_waypoint_8 = value;
		Il2CppCodeGenWriteBarrier(&___via_waypoint_8, value);
	}

	inline static int32_t get_offset_of_arrival_time_9() { return static_cast<int32_t>(offsetof(Leg_t3296943277, ___arrival_time_9)); }
	inline TextValueZone_1_t2115376360 * get_arrival_time_9() const { return ___arrival_time_9; }
	inline TextValueZone_1_t2115376360 ** get_address_of_arrival_time_9() { return &___arrival_time_9; }
	inline void set_arrival_time_9(TextValueZone_1_t2115376360 * value)
	{
		___arrival_time_9 = value;
		Il2CppCodeGenWriteBarrier(&___arrival_time_9, value);
	}

	inline static int32_t get_offset_of_departure_time_10() { return static_cast<int32_t>(offsetof(Leg_t3296943277, ___departure_time_10)); }
	inline TextValueZone_1_t2115376360 * get_departure_time_10() const { return ___departure_time_10; }
	inline TextValueZone_1_t2115376360 ** get_address_of_departure_time_10() { return &___departure_time_10; }
	inline void set_departure_time_10(TextValueZone_1_t2115376360 * value)
	{
		___departure_time_10 = value;
		Il2CppCodeGenWriteBarrier(&___departure_time_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
