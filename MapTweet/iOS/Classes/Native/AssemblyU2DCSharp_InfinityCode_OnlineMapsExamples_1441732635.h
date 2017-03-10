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
// OnlineMapsMarker
struct OnlineMapsMarker_t3492166682;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.MoveMarkerOnRouteExample
struct  MoveMarkerOnRouteExample_t1441732635  : public MonoBehaviour_t1158329972
{
public:
	// System.String InfinityCode.OnlineMapsExamples.MoveMarkerOnRouteExample::fromPlace
	String_t* ___fromPlace_2;
	// System.String InfinityCode.OnlineMapsExamples.MoveMarkerOnRouteExample::toPlace
	String_t* ___toPlace_3;
	// System.Single InfinityCode.OnlineMapsExamples.MoveMarkerOnRouteExample::speed
	float ___speed_4;
	// System.Boolean InfinityCode.OnlineMapsExamples.MoveMarkerOnRouteExample::lookToMarker
	bool ___lookToMarker_5;
	// System.Boolean InfinityCode.OnlineMapsExamples.MoveMarkerOnRouteExample::orientMarkerOnNextPoint
	bool ___orientMarkerOnNextPoint_6;
	// OnlineMapsMarker InfinityCode.OnlineMapsExamples.MoveMarkerOnRouteExample::marker
	OnlineMapsMarker_t3492166682 * ___marker_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> InfinityCode.OnlineMapsExamples.MoveMarkerOnRouteExample::points
	List_1_t1612828711 * ___points_8;
	// System.Int32 InfinityCode.OnlineMapsExamples.MoveMarkerOnRouteExample::pointIndex
	int32_t ___pointIndex_9;
	// System.Single InfinityCode.OnlineMapsExamples.MoveMarkerOnRouteExample::progress
	float ___progress_10;

public:
	inline static int32_t get_offset_of_fromPlace_2() { return static_cast<int32_t>(offsetof(MoveMarkerOnRouteExample_t1441732635, ___fromPlace_2)); }
	inline String_t* get_fromPlace_2() const { return ___fromPlace_2; }
	inline String_t** get_address_of_fromPlace_2() { return &___fromPlace_2; }
	inline void set_fromPlace_2(String_t* value)
	{
		___fromPlace_2 = value;
		Il2CppCodeGenWriteBarrier(&___fromPlace_2, value);
	}

	inline static int32_t get_offset_of_toPlace_3() { return static_cast<int32_t>(offsetof(MoveMarkerOnRouteExample_t1441732635, ___toPlace_3)); }
	inline String_t* get_toPlace_3() const { return ___toPlace_3; }
	inline String_t** get_address_of_toPlace_3() { return &___toPlace_3; }
	inline void set_toPlace_3(String_t* value)
	{
		___toPlace_3 = value;
		Il2CppCodeGenWriteBarrier(&___toPlace_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(MoveMarkerOnRouteExample_t1441732635, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_lookToMarker_5() { return static_cast<int32_t>(offsetof(MoveMarkerOnRouteExample_t1441732635, ___lookToMarker_5)); }
	inline bool get_lookToMarker_5() const { return ___lookToMarker_5; }
	inline bool* get_address_of_lookToMarker_5() { return &___lookToMarker_5; }
	inline void set_lookToMarker_5(bool value)
	{
		___lookToMarker_5 = value;
	}

	inline static int32_t get_offset_of_orientMarkerOnNextPoint_6() { return static_cast<int32_t>(offsetof(MoveMarkerOnRouteExample_t1441732635, ___orientMarkerOnNextPoint_6)); }
	inline bool get_orientMarkerOnNextPoint_6() const { return ___orientMarkerOnNextPoint_6; }
	inline bool* get_address_of_orientMarkerOnNextPoint_6() { return &___orientMarkerOnNextPoint_6; }
	inline void set_orientMarkerOnNextPoint_6(bool value)
	{
		___orientMarkerOnNextPoint_6 = value;
	}

	inline static int32_t get_offset_of_marker_7() { return static_cast<int32_t>(offsetof(MoveMarkerOnRouteExample_t1441732635, ___marker_7)); }
	inline OnlineMapsMarker_t3492166682 * get_marker_7() const { return ___marker_7; }
	inline OnlineMapsMarker_t3492166682 ** get_address_of_marker_7() { return &___marker_7; }
	inline void set_marker_7(OnlineMapsMarker_t3492166682 * value)
	{
		___marker_7 = value;
		Il2CppCodeGenWriteBarrier(&___marker_7, value);
	}

	inline static int32_t get_offset_of_points_8() { return static_cast<int32_t>(offsetof(MoveMarkerOnRouteExample_t1441732635, ___points_8)); }
	inline List_1_t1612828711 * get_points_8() const { return ___points_8; }
	inline List_1_t1612828711 ** get_address_of_points_8() { return &___points_8; }
	inline void set_points_8(List_1_t1612828711 * value)
	{
		___points_8 = value;
		Il2CppCodeGenWriteBarrier(&___points_8, value);
	}

	inline static int32_t get_offset_of_pointIndex_9() { return static_cast<int32_t>(offsetof(MoveMarkerOnRouteExample_t1441732635, ___pointIndex_9)); }
	inline int32_t get_pointIndex_9() const { return ___pointIndex_9; }
	inline int32_t* get_address_of_pointIndex_9() { return &___pointIndex_9; }
	inline void set_pointIndex_9(int32_t value)
	{
		___pointIndex_9 = value;
	}

	inline static int32_t get_offset_of_progress_10() { return static_cast<int32_t>(offsetof(MoveMarkerOnRouteExample_t1441732635, ___progress_10)); }
	inline float get_progress_10() const { return ___progress_10; }
	inline float* get_address_of_progress_10() { return &___progress_10; }
	inline void set_progress_10(float value)
	{
		___progress_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
