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
// System.Double[]
struct DoubleU5BU5D_t1889952540;

#include "AssemblyU2DCSharp_OnlineMapsDrawingElement539447654.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsDrawingRect
struct  OnlineMapsDrawingRect_t2548315780  : public OnlineMapsDrawingElement_t539447654
{
public:
	// UnityEngine.Color OnlineMapsDrawingRect::backgroundColor
	Color_t2020392075  ___backgroundColor_25;
	// UnityEngine.Color OnlineMapsDrawingRect::borderColor
	Color_t2020392075  ___borderColor_26;
	// System.Single OnlineMapsDrawingRect::borderWeight
	float ___borderWeight_27;
	// System.Double[] OnlineMapsDrawingRect::points
	DoubleU5BU5D_t1889952540* ___points_28;
	// System.Double OnlineMapsDrawingRect::_height
	double ____height_29;
	// System.Double OnlineMapsDrawingRect::_width
	double ____width_30;
	// System.Double OnlineMapsDrawingRect::_x
	double ____x_31;
	// System.Double OnlineMapsDrawingRect::_y
	double ____y_32;

public:
	inline static int32_t get_offset_of_backgroundColor_25() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780, ___backgroundColor_25)); }
	inline Color_t2020392075  get_backgroundColor_25() const { return ___backgroundColor_25; }
	inline Color_t2020392075 * get_address_of_backgroundColor_25() { return &___backgroundColor_25; }
	inline void set_backgroundColor_25(Color_t2020392075  value)
	{
		___backgroundColor_25 = value;
	}

	inline static int32_t get_offset_of_borderColor_26() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780, ___borderColor_26)); }
	inline Color_t2020392075  get_borderColor_26() const { return ___borderColor_26; }
	inline Color_t2020392075 * get_address_of_borderColor_26() { return &___borderColor_26; }
	inline void set_borderColor_26(Color_t2020392075  value)
	{
		___borderColor_26 = value;
	}

	inline static int32_t get_offset_of_borderWeight_27() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780, ___borderWeight_27)); }
	inline float get_borderWeight_27() const { return ___borderWeight_27; }
	inline float* get_address_of_borderWeight_27() { return &___borderWeight_27; }
	inline void set_borderWeight_27(float value)
	{
		___borderWeight_27 = value;
	}

	inline static int32_t get_offset_of_points_28() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780, ___points_28)); }
	inline DoubleU5BU5D_t1889952540* get_points_28() const { return ___points_28; }
	inline DoubleU5BU5D_t1889952540** get_address_of_points_28() { return &___points_28; }
	inline void set_points_28(DoubleU5BU5D_t1889952540* value)
	{
		___points_28 = value;
		Il2CppCodeGenWriteBarrier(&___points_28, value);
	}

	inline static int32_t get_offset_of__height_29() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780, ____height_29)); }
	inline double get__height_29() const { return ____height_29; }
	inline double* get_address_of__height_29() { return &____height_29; }
	inline void set__height_29(double value)
	{
		____height_29 = value;
	}

	inline static int32_t get_offset_of__width_30() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780, ____width_30)); }
	inline double get__width_30() const { return ____width_30; }
	inline double* get_address_of__width_30() { return &____width_30; }
	inline void set__width_30(double value)
	{
		____width_30 = value;
	}

	inline static int32_t get_offset_of__x_31() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780, ____x_31)); }
	inline double get__x_31() const { return ____x_31; }
	inline double* get_address_of__x_31() { return &____x_31; }
	inline void set__x_31(double value)
	{
		____x_31 = value;
	}

	inline static int32_t get_offset_of__y_32() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780, ____y_32)); }
	inline double get__y_32() const { return ____y_32; }
	inline double* get_address_of__y_32() { return &____y_32; }
	inline void set__y_32(double value)
	{
		____y_32 = value;
	}
};

struct OnlineMapsDrawingRect_t2548315780_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> OnlineMapsDrawingRect::vertices
	List_1_t1612828712 * ___vertices_19;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> OnlineMapsDrawingRect::normals
	List_1_t1612828712 * ___normals_20;
	// System.Collections.Generic.List`1<System.Int32> OnlineMapsDrawingRect::backTriangles
	List_1_t1440998580 * ___backTriangles_21;
	// System.Collections.Generic.List`1<System.Int32> OnlineMapsDrawingRect::borderTriangles
	List_1_t1440998580 * ___borderTriangles_22;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> OnlineMapsDrawingRect::uv
	List_1_t1612828711 * ___uv_23;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> OnlineMapsDrawingRect::activePoints
	List_1_t1612828711 * ___activePoints_24;

public:
	inline static int32_t get_offset_of_vertices_19() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780_StaticFields, ___vertices_19)); }
	inline List_1_t1612828712 * get_vertices_19() const { return ___vertices_19; }
	inline List_1_t1612828712 ** get_address_of_vertices_19() { return &___vertices_19; }
	inline void set_vertices_19(List_1_t1612828712 * value)
	{
		___vertices_19 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_19, value);
	}

	inline static int32_t get_offset_of_normals_20() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780_StaticFields, ___normals_20)); }
	inline List_1_t1612828712 * get_normals_20() const { return ___normals_20; }
	inline List_1_t1612828712 ** get_address_of_normals_20() { return &___normals_20; }
	inline void set_normals_20(List_1_t1612828712 * value)
	{
		___normals_20 = value;
		Il2CppCodeGenWriteBarrier(&___normals_20, value);
	}

	inline static int32_t get_offset_of_backTriangles_21() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780_StaticFields, ___backTriangles_21)); }
	inline List_1_t1440998580 * get_backTriangles_21() const { return ___backTriangles_21; }
	inline List_1_t1440998580 ** get_address_of_backTriangles_21() { return &___backTriangles_21; }
	inline void set_backTriangles_21(List_1_t1440998580 * value)
	{
		___backTriangles_21 = value;
		Il2CppCodeGenWriteBarrier(&___backTriangles_21, value);
	}

	inline static int32_t get_offset_of_borderTriangles_22() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780_StaticFields, ___borderTriangles_22)); }
	inline List_1_t1440998580 * get_borderTriangles_22() const { return ___borderTriangles_22; }
	inline List_1_t1440998580 ** get_address_of_borderTriangles_22() { return &___borderTriangles_22; }
	inline void set_borderTriangles_22(List_1_t1440998580 * value)
	{
		___borderTriangles_22 = value;
		Il2CppCodeGenWriteBarrier(&___borderTriangles_22, value);
	}

	inline static int32_t get_offset_of_uv_23() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780_StaticFields, ___uv_23)); }
	inline List_1_t1612828711 * get_uv_23() const { return ___uv_23; }
	inline List_1_t1612828711 ** get_address_of_uv_23() { return &___uv_23; }
	inline void set_uv_23(List_1_t1612828711 * value)
	{
		___uv_23 = value;
		Il2CppCodeGenWriteBarrier(&___uv_23, value);
	}

	inline static int32_t get_offset_of_activePoints_24() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingRect_t2548315780_StaticFields, ___activePoints_24)); }
	inline List_1_t1612828711 * get_activePoints_24() const { return ___activePoints_24; }
	inline List_1_t1612828711 ** get_address_of_activePoints_24() { return &___activePoints_24; }
	inline void set_activePoints_24(List_1_t1612828711 * value)
	{
		___activePoints_24 = value;
		Il2CppCodeGenWriteBarrier(&___activePoints_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
