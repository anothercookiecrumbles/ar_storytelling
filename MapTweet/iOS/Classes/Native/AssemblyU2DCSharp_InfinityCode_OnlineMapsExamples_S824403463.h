#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.SmoothMoveExample
struct  SmoothMoveExample_t824403463  : public MonoBehaviour_t1158329972
{
public:
	// System.Single InfinityCode.OnlineMapsExamples.SmoothMoveExample::time
	float ___time_2;
	// System.Single InfinityCode.OnlineMapsExamples.SmoothMoveExample::angle
	float ___angle_3;
	// System.Boolean InfinityCode.OnlineMapsExamples.SmoothMoveExample::isMovement
	bool ___isMovement_4;
	// UnityEngine.Vector2 InfinityCode.OnlineMapsExamples.SmoothMoveExample::fromPosition
	Vector2_t2243707579  ___fromPosition_5;
	// UnityEngine.Vector2 InfinityCode.OnlineMapsExamples.SmoothMoveExample::toPosition
	Vector2_t2243707579  ___toPosition_6;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(SmoothMoveExample_t824403463, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_angle_3() { return static_cast<int32_t>(offsetof(SmoothMoveExample_t824403463, ___angle_3)); }
	inline float get_angle_3() const { return ___angle_3; }
	inline float* get_address_of_angle_3() { return &___angle_3; }
	inline void set_angle_3(float value)
	{
		___angle_3 = value;
	}

	inline static int32_t get_offset_of_isMovement_4() { return static_cast<int32_t>(offsetof(SmoothMoveExample_t824403463, ___isMovement_4)); }
	inline bool get_isMovement_4() const { return ___isMovement_4; }
	inline bool* get_address_of_isMovement_4() { return &___isMovement_4; }
	inline void set_isMovement_4(bool value)
	{
		___isMovement_4 = value;
	}

	inline static int32_t get_offset_of_fromPosition_5() { return static_cast<int32_t>(offsetof(SmoothMoveExample_t824403463, ___fromPosition_5)); }
	inline Vector2_t2243707579  get_fromPosition_5() const { return ___fromPosition_5; }
	inline Vector2_t2243707579 * get_address_of_fromPosition_5() { return &___fromPosition_5; }
	inline void set_fromPosition_5(Vector2_t2243707579  value)
	{
		___fromPosition_5 = value;
	}

	inline static int32_t get_offset_of_toPosition_6() { return static_cast<int32_t>(offsetof(SmoothMoveExample_t824403463, ___toPosition_6)); }
	inline Vector2_t2243707579  get_toPosition_6() const { return ___toPosition_6; }
	inline Vector2_t2243707579 * get_address_of_toPosition_6() { return &___toPosition_6; }
	inline void set_toPosition_6(Vector2_t2243707579  value)
	{
		___toPosition_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
