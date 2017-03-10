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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// OnlineMapsGoogleDirectionsResult/TextValue`1<System.Int32>
struct TextValue_1_t1400946205;
// OnlineMapsGoogleDirectionsResult/TransitDetails
struct TransitDetails_t3700021106;
// OnlineMapsGoogleDirectionsResult/Step[]
struct StepU5BU5D_t1511993080;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleDirectionsResult/Step
struct  Step_t1737255189  : public Il2CppObject
{
public:
	// System.String OnlineMapsGoogleDirectionsResult/Step::travel_mode
	String_t* ___travel_mode_0;
	// UnityEngine.Vector2 OnlineMapsGoogleDirectionsResult/Step::start_location
	Vector2_t2243707579  ___start_location_1;
	// UnityEngine.Vector2 OnlineMapsGoogleDirectionsResult/Step::end_location
	Vector2_t2243707579  ___end_location_2;
	// UnityEngine.Vector2[] OnlineMapsGoogleDirectionsResult/Step::polyline
	Vector2U5BU5D_t686124026* ___polyline_3;
	// OnlineMapsGoogleDirectionsResult/TextValue`1<System.Int32> OnlineMapsGoogleDirectionsResult/Step::duration
	TextValue_1_t1400946205 * ___duration_4;
	// OnlineMapsGoogleDirectionsResult/TextValue`1<System.Int32> OnlineMapsGoogleDirectionsResult/Step::distance
	TextValue_1_t1400946205 * ___distance_5;
	// System.String OnlineMapsGoogleDirectionsResult/Step::html_instructions
	String_t* ___html_instructions_6;
	// System.String OnlineMapsGoogleDirectionsResult/Step::string_instructions
	String_t* ___string_instructions_7;
	// System.String OnlineMapsGoogleDirectionsResult/Step::maneuver
	String_t* ___maneuver_8;
	// OnlineMapsGoogleDirectionsResult/TransitDetails OnlineMapsGoogleDirectionsResult/Step::transit_details
	TransitDetails_t3700021106 * ___transit_details_9;
	// OnlineMapsGoogleDirectionsResult/Step[] OnlineMapsGoogleDirectionsResult/Step::steps
	StepU5BU5D_t1511993080* ___steps_10;

public:
	inline static int32_t get_offset_of_travel_mode_0() { return static_cast<int32_t>(offsetof(Step_t1737255189, ___travel_mode_0)); }
	inline String_t* get_travel_mode_0() const { return ___travel_mode_0; }
	inline String_t** get_address_of_travel_mode_0() { return &___travel_mode_0; }
	inline void set_travel_mode_0(String_t* value)
	{
		___travel_mode_0 = value;
		Il2CppCodeGenWriteBarrier(&___travel_mode_0, value);
	}

	inline static int32_t get_offset_of_start_location_1() { return static_cast<int32_t>(offsetof(Step_t1737255189, ___start_location_1)); }
	inline Vector2_t2243707579  get_start_location_1() const { return ___start_location_1; }
	inline Vector2_t2243707579 * get_address_of_start_location_1() { return &___start_location_1; }
	inline void set_start_location_1(Vector2_t2243707579  value)
	{
		___start_location_1 = value;
	}

	inline static int32_t get_offset_of_end_location_2() { return static_cast<int32_t>(offsetof(Step_t1737255189, ___end_location_2)); }
	inline Vector2_t2243707579  get_end_location_2() const { return ___end_location_2; }
	inline Vector2_t2243707579 * get_address_of_end_location_2() { return &___end_location_2; }
	inline void set_end_location_2(Vector2_t2243707579  value)
	{
		___end_location_2 = value;
	}

	inline static int32_t get_offset_of_polyline_3() { return static_cast<int32_t>(offsetof(Step_t1737255189, ___polyline_3)); }
	inline Vector2U5BU5D_t686124026* get_polyline_3() const { return ___polyline_3; }
	inline Vector2U5BU5D_t686124026** get_address_of_polyline_3() { return &___polyline_3; }
	inline void set_polyline_3(Vector2U5BU5D_t686124026* value)
	{
		___polyline_3 = value;
		Il2CppCodeGenWriteBarrier(&___polyline_3, value);
	}

	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(Step_t1737255189, ___duration_4)); }
	inline TextValue_1_t1400946205 * get_duration_4() const { return ___duration_4; }
	inline TextValue_1_t1400946205 ** get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(TextValue_1_t1400946205 * value)
	{
		___duration_4 = value;
		Il2CppCodeGenWriteBarrier(&___duration_4, value);
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(Step_t1737255189, ___distance_5)); }
	inline TextValue_1_t1400946205 * get_distance_5() const { return ___distance_5; }
	inline TextValue_1_t1400946205 ** get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(TextValue_1_t1400946205 * value)
	{
		___distance_5 = value;
		Il2CppCodeGenWriteBarrier(&___distance_5, value);
	}

	inline static int32_t get_offset_of_html_instructions_6() { return static_cast<int32_t>(offsetof(Step_t1737255189, ___html_instructions_6)); }
	inline String_t* get_html_instructions_6() const { return ___html_instructions_6; }
	inline String_t** get_address_of_html_instructions_6() { return &___html_instructions_6; }
	inline void set_html_instructions_6(String_t* value)
	{
		___html_instructions_6 = value;
		Il2CppCodeGenWriteBarrier(&___html_instructions_6, value);
	}

	inline static int32_t get_offset_of_string_instructions_7() { return static_cast<int32_t>(offsetof(Step_t1737255189, ___string_instructions_7)); }
	inline String_t* get_string_instructions_7() const { return ___string_instructions_7; }
	inline String_t** get_address_of_string_instructions_7() { return &___string_instructions_7; }
	inline void set_string_instructions_7(String_t* value)
	{
		___string_instructions_7 = value;
		Il2CppCodeGenWriteBarrier(&___string_instructions_7, value);
	}

	inline static int32_t get_offset_of_maneuver_8() { return static_cast<int32_t>(offsetof(Step_t1737255189, ___maneuver_8)); }
	inline String_t* get_maneuver_8() const { return ___maneuver_8; }
	inline String_t** get_address_of_maneuver_8() { return &___maneuver_8; }
	inline void set_maneuver_8(String_t* value)
	{
		___maneuver_8 = value;
		Il2CppCodeGenWriteBarrier(&___maneuver_8, value);
	}

	inline static int32_t get_offset_of_transit_details_9() { return static_cast<int32_t>(offsetof(Step_t1737255189, ___transit_details_9)); }
	inline TransitDetails_t3700021106 * get_transit_details_9() const { return ___transit_details_9; }
	inline TransitDetails_t3700021106 ** get_address_of_transit_details_9() { return &___transit_details_9; }
	inline void set_transit_details_9(TransitDetails_t3700021106 * value)
	{
		___transit_details_9 = value;
		Il2CppCodeGenWriteBarrier(&___transit_details_9, value);
	}

	inline static int32_t get_offset_of_steps_10() { return static_cast<int32_t>(offsetof(Step_t1737255189, ___steps_10)); }
	inline StepU5BU5D_t1511993080* get_steps_10() const { return ___steps_10; }
	inline StepU5BU5D_t1511993080** get_address_of_steps_10() { return &___steps_10; }
	inline void set_steps_10(StepU5BU5D_t1511993080* value)
	{
		___steps_10 = value;
		Il2CppCodeGenWriteBarrier(&___steps_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
