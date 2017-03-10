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
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsDirectionStep
struct  OnlineMapsDirectionStep_t2252483185  : public Il2CppObject
{
public:
	// System.Int32 OnlineMapsDirectionStep::distance
	int32_t ___distance_0;
	// System.Int32 OnlineMapsDirectionStep::duration
	int32_t ___duration_1;
	// UnityEngine.Vector2 OnlineMapsDirectionStep::end
	Vector2_t2243707579  ___end_2;
	// System.String OnlineMapsDirectionStep::instructions
	String_t* ___instructions_3;
	// System.String OnlineMapsDirectionStep::maneuver
	String_t* ___maneuver_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> OnlineMapsDirectionStep::points
	List_1_t1612828711 * ___points_5;
	// UnityEngine.Vector2 OnlineMapsDirectionStep::start
	Vector2_t2243707579  ___start_6;
	// System.String OnlineMapsDirectionStep::stringInstructions
	String_t* ___stringInstructions_7;

public:
	inline static int32_t get_offset_of_distance_0() { return static_cast<int32_t>(offsetof(OnlineMapsDirectionStep_t2252483185, ___distance_0)); }
	inline int32_t get_distance_0() const { return ___distance_0; }
	inline int32_t* get_address_of_distance_0() { return &___distance_0; }
	inline void set_distance_0(int32_t value)
	{
		___distance_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(OnlineMapsDirectionStep_t2252483185, ___duration_1)); }
	inline int32_t get_duration_1() const { return ___duration_1; }
	inline int32_t* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(int32_t value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_end_2() { return static_cast<int32_t>(offsetof(OnlineMapsDirectionStep_t2252483185, ___end_2)); }
	inline Vector2_t2243707579  get_end_2() const { return ___end_2; }
	inline Vector2_t2243707579 * get_address_of_end_2() { return &___end_2; }
	inline void set_end_2(Vector2_t2243707579  value)
	{
		___end_2 = value;
	}

	inline static int32_t get_offset_of_instructions_3() { return static_cast<int32_t>(offsetof(OnlineMapsDirectionStep_t2252483185, ___instructions_3)); }
	inline String_t* get_instructions_3() const { return ___instructions_3; }
	inline String_t** get_address_of_instructions_3() { return &___instructions_3; }
	inline void set_instructions_3(String_t* value)
	{
		___instructions_3 = value;
		Il2CppCodeGenWriteBarrier(&___instructions_3, value);
	}

	inline static int32_t get_offset_of_maneuver_4() { return static_cast<int32_t>(offsetof(OnlineMapsDirectionStep_t2252483185, ___maneuver_4)); }
	inline String_t* get_maneuver_4() const { return ___maneuver_4; }
	inline String_t** get_address_of_maneuver_4() { return &___maneuver_4; }
	inline void set_maneuver_4(String_t* value)
	{
		___maneuver_4 = value;
		Il2CppCodeGenWriteBarrier(&___maneuver_4, value);
	}

	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(OnlineMapsDirectionStep_t2252483185, ___points_5)); }
	inline List_1_t1612828711 * get_points_5() const { return ___points_5; }
	inline List_1_t1612828711 ** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(List_1_t1612828711 * value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier(&___points_5, value);
	}

	inline static int32_t get_offset_of_start_6() { return static_cast<int32_t>(offsetof(OnlineMapsDirectionStep_t2252483185, ___start_6)); }
	inline Vector2_t2243707579  get_start_6() const { return ___start_6; }
	inline Vector2_t2243707579 * get_address_of_start_6() { return &___start_6; }
	inline void set_start_6(Vector2_t2243707579  value)
	{
		___start_6 = value;
	}

	inline static int32_t get_offset_of_stringInstructions_7() { return static_cast<int32_t>(offsetof(OnlineMapsDirectionStep_t2252483185, ___stringInstructions_7)); }
	inline String_t* get_stringInstructions_7() const { return ___stringInstructions_7; }
	inline String_t** get_address_of_stringInstructions_7() { return &___stringInstructions_7; }
	inline void set_stringInstructions_7(String_t* value)
	{
		___stringInstructions_7 = value;
		Il2CppCodeGenWriteBarrier(&___stringInstructions_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
