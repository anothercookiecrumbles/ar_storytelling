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
// OnlineMaps
struct OnlineMaps_t1893290312;
// System.Collections.Generic.List`1<OnlineMapsMarker>
struct List_1_t2861287814;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// OnlineMapsDrawingPoly
struct OnlineMapsDrawingPoly_t2218936412;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.CalcAreaExample
struct  CalcAreaExample_t2197875796  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D InfinityCode.OnlineMapsExamples.CalcAreaExample::markerTexture
	Texture2D_t3542995729 * ___markerTexture_2;
	// System.Single InfinityCode.OnlineMapsExamples.CalcAreaExample::borderWeight
	float ___borderWeight_3;
	// OnlineMaps InfinityCode.OnlineMapsExamples.CalcAreaExample::map
	OnlineMaps_t1893290312 * ___map_4;
	// System.Boolean InfinityCode.OnlineMapsExamples.CalcAreaExample::changed
	bool ___changed_5;
	// System.Collections.Generic.List`1<OnlineMapsMarker> InfinityCode.OnlineMapsExamples.CalcAreaExample::markers
	List_1_t2861287814 * ___markers_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> InfinityCode.OnlineMapsExamples.CalcAreaExample::markerPositions
	List_1_t1612828711 * ___markerPositions_7;
	// OnlineMapsDrawingPoly InfinityCode.OnlineMapsExamples.CalcAreaExample::polygon
	OnlineMapsDrawingPoly_t2218936412 * ___polygon_8;
	// System.Single InfinityCode.OnlineMapsExamples.CalcAreaExample::_borderWeight
	float ____borderWeight_9;

public:
	inline static int32_t get_offset_of_markerTexture_2() { return static_cast<int32_t>(offsetof(CalcAreaExample_t2197875796, ___markerTexture_2)); }
	inline Texture2D_t3542995729 * get_markerTexture_2() const { return ___markerTexture_2; }
	inline Texture2D_t3542995729 ** get_address_of_markerTexture_2() { return &___markerTexture_2; }
	inline void set_markerTexture_2(Texture2D_t3542995729 * value)
	{
		___markerTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___markerTexture_2, value);
	}

	inline static int32_t get_offset_of_borderWeight_3() { return static_cast<int32_t>(offsetof(CalcAreaExample_t2197875796, ___borderWeight_3)); }
	inline float get_borderWeight_3() const { return ___borderWeight_3; }
	inline float* get_address_of_borderWeight_3() { return &___borderWeight_3; }
	inline void set_borderWeight_3(float value)
	{
		___borderWeight_3 = value;
	}

	inline static int32_t get_offset_of_map_4() { return static_cast<int32_t>(offsetof(CalcAreaExample_t2197875796, ___map_4)); }
	inline OnlineMaps_t1893290312 * get_map_4() const { return ___map_4; }
	inline OnlineMaps_t1893290312 ** get_address_of_map_4() { return &___map_4; }
	inline void set_map_4(OnlineMaps_t1893290312 * value)
	{
		___map_4 = value;
		Il2CppCodeGenWriteBarrier(&___map_4, value);
	}

	inline static int32_t get_offset_of_changed_5() { return static_cast<int32_t>(offsetof(CalcAreaExample_t2197875796, ___changed_5)); }
	inline bool get_changed_5() const { return ___changed_5; }
	inline bool* get_address_of_changed_5() { return &___changed_5; }
	inline void set_changed_5(bool value)
	{
		___changed_5 = value;
	}

	inline static int32_t get_offset_of_markers_6() { return static_cast<int32_t>(offsetof(CalcAreaExample_t2197875796, ___markers_6)); }
	inline List_1_t2861287814 * get_markers_6() const { return ___markers_6; }
	inline List_1_t2861287814 ** get_address_of_markers_6() { return &___markers_6; }
	inline void set_markers_6(List_1_t2861287814 * value)
	{
		___markers_6 = value;
		Il2CppCodeGenWriteBarrier(&___markers_6, value);
	}

	inline static int32_t get_offset_of_markerPositions_7() { return static_cast<int32_t>(offsetof(CalcAreaExample_t2197875796, ___markerPositions_7)); }
	inline List_1_t1612828711 * get_markerPositions_7() const { return ___markerPositions_7; }
	inline List_1_t1612828711 ** get_address_of_markerPositions_7() { return &___markerPositions_7; }
	inline void set_markerPositions_7(List_1_t1612828711 * value)
	{
		___markerPositions_7 = value;
		Il2CppCodeGenWriteBarrier(&___markerPositions_7, value);
	}

	inline static int32_t get_offset_of_polygon_8() { return static_cast<int32_t>(offsetof(CalcAreaExample_t2197875796, ___polygon_8)); }
	inline OnlineMapsDrawingPoly_t2218936412 * get_polygon_8() const { return ___polygon_8; }
	inline OnlineMapsDrawingPoly_t2218936412 ** get_address_of_polygon_8() { return &___polygon_8; }
	inline void set_polygon_8(OnlineMapsDrawingPoly_t2218936412 * value)
	{
		___polygon_8 = value;
		Il2CppCodeGenWriteBarrier(&___polygon_8, value);
	}

	inline static int32_t get_offset_of__borderWeight_9() { return static_cast<int32_t>(offsetof(CalcAreaExample_t2197875796, ____borderWeight_9)); }
	inline float get__borderWeight_9() const { return ____borderWeight_9; }
	inline float* get_address_of__borderWeight_9() { return &____borderWeight_9; }
	inline void set__borderWeight_9(float value)
	{
		____borderWeight_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
