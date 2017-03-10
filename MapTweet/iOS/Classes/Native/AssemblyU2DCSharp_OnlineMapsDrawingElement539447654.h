#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<OnlineMapsDrawingElement>
struct Action_1_t341247036;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsDrawingElement
struct  OnlineMapsDrawingElement_t539447654  : public Il2CppObject
{
public:
	// System.Action`1<OnlineMapsDrawingElement> OnlineMapsDrawingElement::OnClick
	Action_1_t341247036 * ___OnClick_1;
	// System.Action`1<OnlineMapsDrawingElement> OnlineMapsDrawingElement::OnDoubleClick
	Action_1_t341247036 * ___OnDoubleClick_2;
	// System.Action`1<OnlineMapsDrawingElement> OnlineMapsDrawingElement::OnDrawTooltip
	Action_1_t341247036 * ___OnDrawTooltip_3;
	// System.Action`1<OnlineMapsDrawingElement> OnlineMapsDrawingElement::OnPress
	Action_1_t341247036 * ___OnPress_4;
	// System.Action`1<OnlineMapsDrawingElement> OnlineMapsDrawingElement::OnRelease
	Action_1_t341247036 * ___OnRelease_5;
	// System.Object OnlineMapsDrawingElement::customData
	Il2CppObject * ___customData_6;
	// System.String OnlineMapsDrawingElement::tooltip
	String_t* ___tooltip_7;
	// UnityEngine.Mesh OnlineMapsDrawingElement::mesh
	Mesh_t1356156583 * ___mesh_8;
	// UnityEngine.GameObject OnlineMapsDrawingElement::gameObject
	GameObject_t1756533147 * ___gameObject_9;
	// System.Boolean OnlineMapsDrawingElement::_visible
	bool ____visible_10;
	// System.Single OnlineMapsDrawingElement::bestElevationYScale
	float ___bestElevationYScale_11;
	// System.Double OnlineMapsDrawingElement::tlx
	double ___tlx_12;
	// System.Double OnlineMapsDrawingElement::tly
	double ___tly_13;
	// System.Double OnlineMapsDrawingElement::brx
	double ___brx_14;
	// System.Double OnlineMapsDrawingElement::bry
	double ___bry_15;
	// UnityEngine.Material[] OnlineMapsDrawingElement::materials
	MaterialU5BU5D_t3123989686* ___materials_16;
	// System.Int32 OnlineMapsDrawingElement::_renderQueueOffset
	int32_t ____renderQueueOffset_17;

public:
	inline static int32_t get_offset_of_OnClick_1() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___OnClick_1)); }
	inline Action_1_t341247036 * get_OnClick_1() const { return ___OnClick_1; }
	inline Action_1_t341247036 ** get_address_of_OnClick_1() { return &___OnClick_1; }
	inline void set_OnClick_1(Action_1_t341247036 * value)
	{
		___OnClick_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnClick_1, value);
	}

	inline static int32_t get_offset_of_OnDoubleClick_2() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___OnDoubleClick_2)); }
	inline Action_1_t341247036 * get_OnDoubleClick_2() const { return ___OnDoubleClick_2; }
	inline Action_1_t341247036 ** get_address_of_OnDoubleClick_2() { return &___OnDoubleClick_2; }
	inline void set_OnDoubleClick_2(Action_1_t341247036 * value)
	{
		___OnDoubleClick_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnDoubleClick_2, value);
	}

	inline static int32_t get_offset_of_OnDrawTooltip_3() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___OnDrawTooltip_3)); }
	inline Action_1_t341247036 * get_OnDrawTooltip_3() const { return ___OnDrawTooltip_3; }
	inline Action_1_t341247036 ** get_address_of_OnDrawTooltip_3() { return &___OnDrawTooltip_3; }
	inline void set_OnDrawTooltip_3(Action_1_t341247036 * value)
	{
		___OnDrawTooltip_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnDrawTooltip_3, value);
	}

	inline static int32_t get_offset_of_OnPress_4() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___OnPress_4)); }
	inline Action_1_t341247036 * get_OnPress_4() const { return ___OnPress_4; }
	inline Action_1_t341247036 ** get_address_of_OnPress_4() { return &___OnPress_4; }
	inline void set_OnPress_4(Action_1_t341247036 * value)
	{
		___OnPress_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnPress_4, value);
	}

	inline static int32_t get_offset_of_OnRelease_5() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___OnRelease_5)); }
	inline Action_1_t341247036 * get_OnRelease_5() const { return ___OnRelease_5; }
	inline Action_1_t341247036 ** get_address_of_OnRelease_5() { return &___OnRelease_5; }
	inline void set_OnRelease_5(Action_1_t341247036 * value)
	{
		___OnRelease_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnRelease_5, value);
	}

	inline static int32_t get_offset_of_customData_6() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___customData_6)); }
	inline Il2CppObject * get_customData_6() const { return ___customData_6; }
	inline Il2CppObject ** get_address_of_customData_6() { return &___customData_6; }
	inline void set_customData_6(Il2CppObject * value)
	{
		___customData_6 = value;
		Il2CppCodeGenWriteBarrier(&___customData_6, value);
	}

	inline static int32_t get_offset_of_tooltip_7() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___tooltip_7)); }
	inline String_t* get_tooltip_7() const { return ___tooltip_7; }
	inline String_t** get_address_of_tooltip_7() { return &___tooltip_7; }
	inline void set_tooltip_7(String_t* value)
	{
		___tooltip_7 = value;
		Il2CppCodeGenWriteBarrier(&___tooltip_7, value);
	}

	inline static int32_t get_offset_of_mesh_8() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___mesh_8)); }
	inline Mesh_t1356156583 * get_mesh_8() const { return ___mesh_8; }
	inline Mesh_t1356156583 ** get_address_of_mesh_8() { return &___mesh_8; }
	inline void set_mesh_8(Mesh_t1356156583 * value)
	{
		___mesh_8 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_8, value);
	}

	inline static int32_t get_offset_of_gameObject_9() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___gameObject_9)); }
	inline GameObject_t1756533147 * get_gameObject_9() const { return ___gameObject_9; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_9() { return &___gameObject_9; }
	inline void set_gameObject_9(GameObject_t1756533147 * value)
	{
		___gameObject_9 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_9, value);
	}

	inline static int32_t get_offset_of__visible_10() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ____visible_10)); }
	inline bool get__visible_10() const { return ____visible_10; }
	inline bool* get_address_of__visible_10() { return &____visible_10; }
	inline void set__visible_10(bool value)
	{
		____visible_10 = value;
	}

	inline static int32_t get_offset_of_bestElevationYScale_11() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___bestElevationYScale_11)); }
	inline float get_bestElevationYScale_11() const { return ___bestElevationYScale_11; }
	inline float* get_address_of_bestElevationYScale_11() { return &___bestElevationYScale_11; }
	inline void set_bestElevationYScale_11(float value)
	{
		___bestElevationYScale_11 = value;
	}

	inline static int32_t get_offset_of_tlx_12() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___tlx_12)); }
	inline double get_tlx_12() const { return ___tlx_12; }
	inline double* get_address_of_tlx_12() { return &___tlx_12; }
	inline void set_tlx_12(double value)
	{
		___tlx_12 = value;
	}

	inline static int32_t get_offset_of_tly_13() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___tly_13)); }
	inline double get_tly_13() const { return ___tly_13; }
	inline double* get_address_of_tly_13() { return &___tly_13; }
	inline void set_tly_13(double value)
	{
		___tly_13 = value;
	}

	inline static int32_t get_offset_of_brx_14() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___brx_14)); }
	inline double get_brx_14() const { return ___brx_14; }
	inline double* get_address_of_brx_14() { return &___brx_14; }
	inline void set_brx_14(double value)
	{
		___brx_14 = value;
	}

	inline static int32_t get_offset_of_bry_15() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___bry_15)); }
	inline double get_bry_15() const { return ___bry_15; }
	inline double* get_address_of_bry_15() { return &___bry_15; }
	inline void set_bry_15(double value)
	{
		___bry_15 = value;
	}

	inline static int32_t get_offset_of_materials_16() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ___materials_16)); }
	inline MaterialU5BU5D_t3123989686* get_materials_16() const { return ___materials_16; }
	inline MaterialU5BU5D_t3123989686** get_address_of_materials_16() { return &___materials_16; }
	inline void set_materials_16(MaterialU5BU5D_t3123989686* value)
	{
		___materials_16 = value;
		Il2CppCodeGenWriteBarrier(&___materials_16, value);
	}

	inline static int32_t get_offset_of__renderQueueOffset_17() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654, ____renderQueueOffset_17)); }
	inline int32_t get__renderQueueOffset_17() const { return ____renderQueueOffset_17; }
	inline int32_t* get_address_of__renderQueueOffset_17() { return &____renderQueueOffset_17; }
	inline void set__renderQueueOffset_17(int32_t value)
	{
		____renderQueueOffset_17 = value;
	}
};

struct OnlineMapsDrawingElement_t539447654_StaticFields
{
public:
	// System.Action`1<OnlineMapsDrawingElement> OnlineMapsDrawingElement::OnElementDrawTooltip
	Action_1_t341247036 * ___OnElementDrawTooltip_0;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> OnlineMapsDrawingElement::localPoints
	List_1_t1612828711 * ___localPoints_18;

public:
	inline static int32_t get_offset_of_OnElementDrawTooltip_0() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654_StaticFields, ___OnElementDrawTooltip_0)); }
	inline Action_1_t341247036 * get_OnElementDrawTooltip_0() const { return ___OnElementDrawTooltip_0; }
	inline Action_1_t341247036 ** get_address_of_OnElementDrawTooltip_0() { return &___OnElementDrawTooltip_0; }
	inline void set_OnElementDrawTooltip_0(Action_1_t341247036 * value)
	{
		___OnElementDrawTooltip_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnElementDrawTooltip_0, value);
	}

	inline static int32_t get_offset_of_localPoints_18() { return static_cast<int32_t>(offsetof(OnlineMapsDrawingElement_t539447654_StaticFields, ___localPoints_18)); }
	inline List_1_t1612828711 * get_localPoints_18() const { return ___localPoints_18; }
	inline List_1_t1612828711 ** get_address_of_localPoints_18() { return &___localPoints_18; }
	inline void set_localPoints_18(List_1_t1612828711 * value)
	{
		___localPoints_18 = value;
		Il2CppCodeGenWriteBarrier(&___localPoints_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
