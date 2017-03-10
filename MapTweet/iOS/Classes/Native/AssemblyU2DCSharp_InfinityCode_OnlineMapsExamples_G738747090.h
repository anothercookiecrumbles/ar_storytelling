#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<OnlineMapsMarker>
struct List_1_t2861287814;
// System.Func`2<OnlineMapsMarker,OnlineMapsMarker>
struct Func_2_t3438359081;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.GroupMarkersExample
struct  GroupMarkersExample_t738747090  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D InfinityCode.OnlineMapsExamples.GroupMarkersExample::groupTexture
	Texture2D_t3542995729 * ___groupTexture_2;
	// System.Int32 InfinityCode.OnlineMapsExamples.GroupMarkersExample::countMarkers
	int32_t ___countMarkers_3;
	// System.Single InfinityCode.OnlineMapsExamples.GroupMarkersExample::distance
	float ___distance_4;
	// UnityEngine.Texture2D InfinityCode.OnlineMapsExamples.GroupMarkersExample::font
	Texture2D_t3542995729 * ___font_5;
	// System.Collections.Generic.List`1<OnlineMapsMarker> InfinityCode.OnlineMapsExamples.GroupMarkersExample::markers
	List_1_t2861287814 * ___markers_6;

public:
	inline static int32_t get_offset_of_groupTexture_2() { return static_cast<int32_t>(offsetof(GroupMarkersExample_t738747090, ___groupTexture_2)); }
	inline Texture2D_t3542995729 * get_groupTexture_2() const { return ___groupTexture_2; }
	inline Texture2D_t3542995729 ** get_address_of_groupTexture_2() { return &___groupTexture_2; }
	inline void set_groupTexture_2(Texture2D_t3542995729 * value)
	{
		___groupTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___groupTexture_2, value);
	}

	inline static int32_t get_offset_of_countMarkers_3() { return static_cast<int32_t>(offsetof(GroupMarkersExample_t738747090, ___countMarkers_3)); }
	inline int32_t get_countMarkers_3() const { return ___countMarkers_3; }
	inline int32_t* get_address_of_countMarkers_3() { return &___countMarkers_3; }
	inline void set_countMarkers_3(int32_t value)
	{
		___countMarkers_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(GroupMarkersExample_t738747090, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_font_5() { return static_cast<int32_t>(offsetof(GroupMarkersExample_t738747090, ___font_5)); }
	inline Texture2D_t3542995729 * get_font_5() const { return ___font_5; }
	inline Texture2D_t3542995729 ** get_address_of_font_5() { return &___font_5; }
	inline void set_font_5(Texture2D_t3542995729 * value)
	{
		___font_5 = value;
		Il2CppCodeGenWriteBarrier(&___font_5, value);
	}

	inline static int32_t get_offset_of_markers_6() { return static_cast<int32_t>(offsetof(GroupMarkersExample_t738747090, ___markers_6)); }
	inline List_1_t2861287814 * get_markers_6() const { return ___markers_6; }
	inline List_1_t2861287814 ** get_address_of_markers_6() { return &___markers_6; }
	inline void set_markers_6(List_1_t2861287814 * value)
	{
		___markers_6 = value;
		Il2CppCodeGenWriteBarrier(&___markers_6, value);
	}
};

struct GroupMarkersExample_t738747090_StaticFields
{
public:
	// System.Func`2<OnlineMapsMarker,OnlineMapsMarker> InfinityCode.OnlineMapsExamples.GroupMarkersExample::<>f__am$cache0
	Func_2_t3438359081 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(GroupMarkersExample_t738747090_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Func_2_t3438359081 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Func_2_t3438359081 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Func_2_t3438359081 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
