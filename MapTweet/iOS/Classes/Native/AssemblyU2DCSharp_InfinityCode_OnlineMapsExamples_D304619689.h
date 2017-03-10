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

// InfinityCode.OnlineMapsExamples.DistanceAndDirectionExample
struct  DistanceAndDirectionExample_t304619689  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 InfinityCode.OnlineMapsExamples.DistanceAndDirectionExample::userCoordinares
	Vector2_t2243707579  ___userCoordinares_2;
	// UnityEngine.Vector2 InfinityCode.OnlineMapsExamples.DistanceAndDirectionExample::markerCoordinates
	Vector2_t2243707579  ___markerCoordinates_3;
	// System.Single InfinityCode.OnlineMapsExamples.DistanceAndDirectionExample::compassTrueHeading
	float ___compassTrueHeading_4;

public:
	inline static int32_t get_offset_of_userCoordinares_2() { return static_cast<int32_t>(offsetof(DistanceAndDirectionExample_t304619689, ___userCoordinares_2)); }
	inline Vector2_t2243707579  get_userCoordinares_2() const { return ___userCoordinares_2; }
	inline Vector2_t2243707579 * get_address_of_userCoordinares_2() { return &___userCoordinares_2; }
	inline void set_userCoordinares_2(Vector2_t2243707579  value)
	{
		___userCoordinares_2 = value;
	}

	inline static int32_t get_offset_of_markerCoordinates_3() { return static_cast<int32_t>(offsetof(DistanceAndDirectionExample_t304619689, ___markerCoordinates_3)); }
	inline Vector2_t2243707579  get_markerCoordinates_3() const { return ___markerCoordinates_3; }
	inline Vector2_t2243707579 * get_address_of_markerCoordinates_3() { return &___markerCoordinates_3; }
	inline void set_markerCoordinates_3(Vector2_t2243707579  value)
	{
		___markerCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_compassTrueHeading_4() { return static_cast<int32_t>(offsetof(DistanceAndDirectionExample_t304619689, ___compassTrueHeading_4)); }
	inline float get_compassTrueHeading_4() const { return ___compassTrueHeading_4; }
	inline float* get_address_of_compassTrueHeading_4() { return &___compassTrueHeading_4; }
	inline void set_compassTrueHeading_4(float value)
	{
		___compassTrueHeading_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
