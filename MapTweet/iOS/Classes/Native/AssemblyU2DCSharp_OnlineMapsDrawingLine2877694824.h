#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;

#include "AssemblyU2DCSharp_OnlineMapsDrawingElement539447654.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsDrawingLine
struct  OnlineMapsDrawingLine_t2877694824  : public OnlineMapsDrawingElement_t539447654
{
public:
	// UnityEngine.Color OnlineMapsDrawingLine::color
	Color_t2020392075  ___color_23;
	// UnityEngine.Texture2D OnlineMapsDrawingLine::texture
	Texture2D_t3542995729 * ___texture_24;
	// System.Single OnlineMapsDrawingLine::weight
	float ___weight_25;
	// System.Collections.IEnumerable OnlineMapsDrawingLine::_points
	Il2CppObject * ____points_26;

public:
	inline static int32_t get_offset_of_color_23() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingLine_t2877694824, ___color_23)); }
	inline Color_t2020392075  get_color_23() const { return ___color_23; }
	inline Color_t2020392075 * get_address_of_color_23() { return &___color_23; }
	inline void set_color_23(Color_t2020392075  value)
	{
		___color_23 = value;
	}

	inline static int32_t get_offset_of_texture_24() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingLine_t2877694824, ___texture_24)); }
	inline Texture2D_t3542995729 * get_texture_24() const { return ___texture_24; }
	inline Texture2D_t3542995729 ** get_address_of_texture_24() { return &___texture_24; }
	inline void set_texture_24(Texture2D_t3542995729 * value)
	{
		___texture_24 = value;
		Il2CppCodeGenWriteBarrier(&___texture_24, value);
	}

	inline static int32_t get_offset_of_weight_25() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingLine_t2877694824, ___weight_25)); }
	inline float get_weight_25() const { return ___weight_25; }
	inline float* get_address_of_weight_25() { return &___weight_25; }
	inline void set_weight_25(float value)
	{
		___weight_25 = value;
	}

	inline static int32_t get_offset_of__points_26() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingLine_t2877694824, ____points_26)); }
	inline Il2CppObject * get__points_26() const { return ____points_26; }
	inline Il2CppObject ** get_address_of__points_26() { return &____points_26; }
	inline void set__points_26(Il2CppObject * value)
	{
		____points_26 = value;
		Il2CppCodeGenWriteBarrier(&____points_26, value);
	}
};

struct OnlineMapsDrawingLine_t2877694824_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> OnlineMapsDrawingLine::vertices
	List_1_t1612828712 * ___vertices_19;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> OnlineMapsDrawingLine::normals
	List_1_t1612828712 * ___normals_20;
	// System.Collections.Generic.List`1<System.Int32> OnlineMapsDrawingLine::triangles
	List_1_t1440998580 * ___triangles_21;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> OnlineMapsDrawingLine::uv
	List_1_t1612828711 * ___uv_22;

public:
	inline static int32_t get_offset_of_vertices_19() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingLine_t2877694824_StaticFields, ___vertices_19)); }
	inline List_1_t1612828712 * get_vertices_19() const { return ___vertices_19; }
	inline List_1_t1612828712 ** get_address_of_vertices_19() { return &___vertices_19; }
	inline void set_vertices_19(List_1_t1612828712 * value)
	{
		___vertices_19 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_19, value);
	}

	inline static int32_t get_offset_of_normals_20() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingLine_t2877694824_StaticFields, ___normals_20)); }
	inline List_1_t1612828712 * get_normals_20() const { return ___normals_20; }
	inline List_1_t1612828712 ** get_address_of_normals_20() { return &___normals_20; }
	inline void set_normals_20(List_1_t1612828712 * value)
	{
		___normals_20 = value;
		Il2CppCodeGenWriteBarrier(&___normals_20, value);
	}

	inline static int32_t get_offset_of_triangles_21() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingLine_t2877694824_StaticFields, ___triangles_21)); }
	inline List_1_t1440998580 * get_triangles_21() const { return ___triangles_21; }
	inline List_1_t1440998580 ** get_address_of_triangles_21() { return &___triangles_21; }
	inline void set_triangles_21(List_1_t1440998580 * value)
	{
		___triangles_21 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_21, value);
	}

	inline static int32_t get_offset_of_uv_22() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingLine_t2877694824_StaticFields, ___uv_22)); }
	inline List_1_t1612828711 * get_uv_22() const { return ___uv_22; }
	inline List_1_t1612828711 ** get_address_of_uv_22() { return &___uv_22; }
	inline void set_uv_22(List_1_t1612828711 * value)
	{
		___uv_22 = value;
		Il2CppCodeGenWriteBarrier(&___uv_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
