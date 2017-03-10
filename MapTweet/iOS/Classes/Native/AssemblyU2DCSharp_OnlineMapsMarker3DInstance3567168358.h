#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int64[]
struct Int64U5BU5D_t717125112;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// OnlineMapsMarker3D
struct OnlineMapsMarker3D_t576815539;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3685274804;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1214023521;
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_OnlineMapsMarkerInstanceBase538187336.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsMarker3DInstance
struct  OnlineMapsMarker3DInstance_t3567168358  : public OnlineMapsMarkerInstanceBase_t538187336
{
public:
	// System.Double OnlineMapsMarker3DInstance::_longitude
	double ____longitude_3;
	// System.Double OnlineMapsMarker3DInstance::_latitude
	double ____latitude_4;
	// System.Single OnlineMapsMarker3DInstance::_scale
	float ____scale_5;
	// System.Int32 OnlineMapsMarker3DInstance::lastTouchCount
	int32_t ___lastTouchCount_6;
	// System.Boolean OnlineMapsMarker3DInstance::isPressed
	bool ___isPressed_7;
	// System.Int64[] OnlineMapsMarker3DInstance::lastClickTimes
	Int64U5BU5D_t717125112* ___lastClickTimes_8;
	// System.Collections.IEnumerator OnlineMapsMarker3DInstance::longPressEnumenator
	Il2CppObject * ___longPressEnumenator_9;
	// UnityEngine.Vector2 OnlineMapsMarker3DInstance::pressPoint
	Vector2_t2243707579  ___pressPoint_10;
	// OnlineMapsMarker3D OnlineMapsMarker3DInstance::_marker
	OnlineMapsMarker3D_t576815539 * ____marker_11;

public:
	inline static int32_t get_offset_of__longitude_3() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358, ____longitude_3)); }
	inline double get__longitude_3() const { return ____longitude_3; }
	inline double* get_address_of__longitude_3() { return &____longitude_3; }
	inline void set__longitude_3(double value)
	{
		____longitude_3 = value;
	}

	inline static int32_t get_offset_of__latitude_4() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358, ____latitude_4)); }
	inline double get__latitude_4() const { return ____latitude_4; }
	inline double* get_address_of__latitude_4() { return &____latitude_4; }
	inline void set__latitude_4(double value)
	{
		____latitude_4 = value;
	}

	inline static int32_t get_offset_of__scale_5() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358, ____scale_5)); }
	inline float get__scale_5() const { return ____scale_5; }
	inline float* get_address_of__scale_5() { return &____scale_5; }
	inline void set__scale_5(float value)
	{
		____scale_5 = value;
	}

	inline static int32_t get_offset_of_lastTouchCount_6() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358, ___lastTouchCount_6)); }
	inline int32_t get_lastTouchCount_6() const { return ___lastTouchCount_6; }
	inline int32_t* get_address_of_lastTouchCount_6() { return &___lastTouchCount_6; }
	inline void set_lastTouchCount_6(int32_t value)
	{
		___lastTouchCount_6 = value;
	}

	inline static int32_t get_offset_of_isPressed_7() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358, ___isPressed_7)); }
	inline bool get_isPressed_7() const { return ___isPressed_7; }
	inline bool* get_address_of_isPressed_7() { return &___isPressed_7; }
	inline void set_isPressed_7(bool value)
	{
		___isPressed_7 = value;
	}

	inline static int32_t get_offset_of_lastClickTimes_8() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358, ___lastClickTimes_8)); }
	inline Int64U5BU5D_t717125112* get_lastClickTimes_8() const { return ___lastClickTimes_8; }
	inline Int64U5BU5D_t717125112** get_address_of_lastClickTimes_8() { return &___lastClickTimes_8; }
	inline void set_lastClickTimes_8(Int64U5BU5D_t717125112* value)
	{
		___lastClickTimes_8 = value;
		Il2CppCodeGenWriteBarrier(&___lastClickTimes_8, value);
	}

	inline static int32_t get_offset_of_longPressEnumenator_9() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358, ___longPressEnumenator_9)); }
	inline Il2CppObject * get_longPressEnumenator_9() const { return ___longPressEnumenator_9; }
	inline Il2CppObject ** get_address_of_longPressEnumenator_9() { return &___longPressEnumenator_9; }
	inline void set_longPressEnumenator_9(Il2CppObject * value)
	{
		___longPressEnumenator_9 = value;
		Il2CppCodeGenWriteBarrier(&___longPressEnumenator_9, value);
	}

	inline static int32_t get_offset_of_pressPoint_10() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358, ___pressPoint_10)); }
	inline Vector2_t2243707579  get_pressPoint_10() const { return ___pressPoint_10; }
	inline Vector2_t2243707579 * get_address_of_pressPoint_10() { return &___pressPoint_10; }
	inline void set_pressPoint_10(Vector2_t2243707579  value)
	{
		___pressPoint_10 = value;
	}

	inline static int32_t get_offset_of__marker_11() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358, ____marker_11)); }
	inline OnlineMapsMarker3D_t576815539 * get__marker_11() const { return ____marker_11; }
	inline OnlineMapsMarker3D_t576815539 ** get_address_of__marker_11() { return &____marker_11; }
	inline void set__marker_11(OnlineMapsMarker3D_t576815539 * value)
	{
		____marker_11 = value;
		Il2CppCodeGenWriteBarrier(&____marker_11, value);
	}
};

struct OnlineMapsMarker3DInstance_t3567168358_StaticFields
{
public:
	// System.Boolean OnlineMapsMarker3DInstance::eventInited
	bool ___eventInited_2;
	// UnityEngine.Vector2 OnlineMapsMarker3DInstance::inputPosition
	Vector2_t2243707579  ___inputPosition_12;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> OnlineMapsMarker3DInstance::uiHits
	List_1_t3685274804 * ___uiHits_13;
	// UnityEngine.RaycastHit[] OnlineMapsMarker3DInstance::hits
	RaycastHitU5BU5D_t1214023521* ___hits_14;
	// System.Action OnlineMapsMarker3DInstance::<>f__mg$cache0
	Action_t3226471752 * ___U3CU3Ef__mgU24cache0_15;

public:
	inline static int32_t get_offset_of_eventInited_2() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358_StaticFields, ___eventInited_2)); }
	inline bool get_eventInited_2() const { return ___eventInited_2; }
	inline bool* get_address_of_eventInited_2() { return &___eventInited_2; }
	inline void set_eventInited_2(bool value)
	{
		___eventInited_2 = value;
	}

	inline static int32_t get_offset_of_inputPosition_12() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358_StaticFields, ___inputPosition_12)); }
	inline Vector2_t2243707579  get_inputPosition_12() const { return ___inputPosition_12; }
	inline Vector2_t2243707579 * get_address_of_inputPosition_12() { return &___inputPosition_12; }
	inline void set_inputPosition_12(Vector2_t2243707579  value)
	{
		___inputPosition_12 = value;
	}

	inline static int32_t get_offset_of_uiHits_13() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358_StaticFields, ___uiHits_13)); }
	inline List_1_t3685274804 * get_uiHits_13() const { return ___uiHits_13; }
	inline List_1_t3685274804 ** get_address_of_uiHits_13() { return &___uiHits_13; }
	inline void set_uiHits_13(List_1_t3685274804 * value)
	{
		___uiHits_13 = value;
		Il2CppCodeGenWriteBarrier(&___uiHits_13, value);
	}

	inline static int32_t get_offset_of_hits_14() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358_StaticFields, ___hits_14)); }
	inline RaycastHitU5BU5D_t1214023521* get_hits_14() const { return ___hits_14; }
	inline RaycastHitU5BU5D_t1214023521** get_address_of_hits_14() { return &___hits_14; }
	inline void set_hits_14(RaycastHitU5BU5D_t1214023521* value)
	{
		___hits_14 = value;
		Il2CppCodeGenWriteBarrier(&___hits_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3DInstance_t3567168358_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
