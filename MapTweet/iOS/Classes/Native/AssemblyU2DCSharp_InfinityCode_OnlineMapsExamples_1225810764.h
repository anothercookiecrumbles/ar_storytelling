#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsMarker
struct OnlineMapsMarker_t3492166682;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.MoveMarkersExample
struct  MoveMarkersExample_t1225810764  : public MonoBehaviour_t1158329972
{
public:
	// System.Single InfinityCode.OnlineMapsExamples.MoveMarkersExample::time
	float ___time_2;
	// OnlineMapsMarker InfinityCode.OnlineMapsExamples.MoveMarkersExample::marker
	OnlineMapsMarker_t3492166682 * ___marker_3;
	// UnityEngine.Vector2 InfinityCode.OnlineMapsExamples.MoveMarkersExample::fromPosition
	Vector2_t2243707579  ___fromPosition_4;
	// UnityEngine.Vector2 InfinityCode.OnlineMapsExamples.MoveMarkersExample::toPosition
	Vector2_t2243707579  ___toPosition_5;
	// System.Single InfinityCode.OnlineMapsExamples.MoveMarkersExample::angle
	float ___angle_6;
	// System.Int32 InfinityCode.OnlineMapsExamples.MoveMarkersExample::direction
	int32_t ___direction_7;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(MoveMarkersExample_t1225810764, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_marker_3() { return static_cast<int32_t>(offsetof(MoveMarkersExample_t1225810764, ___marker_3)); }
	inline OnlineMapsMarker_t3492166682 * get_marker_3() const { return ___marker_3; }
	inline OnlineMapsMarker_t3492166682 ** get_address_of_marker_3() { return &___marker_3; }
	inline void set_marker_3(OnlineMapsMarker_t3492166682 * value)
	{
		___marker_3 = value;
		Il2CppCodeGenWriteBarrier(&___marker_3, value);
	}

	inline static int32_t get_offset_of_fromPosition_4() { return static_cast<int32_t>(offsetof(MoveMarkersExample_t1225810764, ___fromPosition_4)); }
	inline Vector2_t2243707579  get_fromPosition_4() const { return ___fromPosition_4; }
	inline Vector2_t2243707579 * get_address_of_fromPosition_4() { return &___fromPosition_4; }
	inline void set_fromPosition_4(Vector2_t2243707579  value)
	{
		___fromPosition_4 = value;
	}

	inline static int32_t get_offset_of_toPosition_5() { return static_cast<int32_t>(offsetof(MoveMarkersExample_t1225810764, ___toPosition_5)); }
	inline Vector2_t2243707579  get_toPosition_5() const { return ___toPosition_5; }
	inline Vector2_t2243707579 * get_address_of_toPosition_5() { return &___toPosition_5; }
	inline void set_toPosition_5(Vector2_t2243707579  value)
	{
		___toPosition_5 = value;
	}

	inline static int32_t get_offset_of_angle_6() { return static_cast<int32_t>(offsetof(MoveMarkersExample_t1225810764, ___angle_6)); }
	inline float get_angle_6() const { return ___angle_6; }
	inline float* get_address_of_angle_6() { return &___angle_6; }
	inline void set_angle_6(float value)
	{
		___angle_6 = value;
	}

	inline static int32_t get_offset_of_direction_7() { return static_cast<int32_t>(offsetof(MoveMarkersExample_t1225810764, ___direction_7)); }
	inline int32_t get_direction_7() const { return ___direction_7; }
	inline int32_t* get_address_of_direction_7() { return &___direction_7; }
	inline void set_direction_7(int32_t value)
	{
		___direction_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
