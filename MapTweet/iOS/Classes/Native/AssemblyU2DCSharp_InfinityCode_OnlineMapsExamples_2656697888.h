#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Canvas
struct Canvas_t209405766;
// OnlineMapsMarker
struct OnlineMapsMarker_t3492166682;
// System.Action`1<OnlineMapsMarkerBase>
struct Action_1_t3702754603;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.uGUICustomTooltipExample
struct  uGUICustomTooltipExample_t2656697888  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject InfinityCode.OnlineMapsExamples.uGUICustomTooltipExample::tooltipPrefab
	GameObject_t1756533147 * ___tooltipPrefab_2;
	// UnityEngine.Canvas InfinityCode.OnlineMapsExamples.uGUICustomTooltipExample::container
	Canvas_t209405766 * ___container_3;
	// OnlineMapsMarker InfinityCode.OnlineMapsExamples.uGUICustomTooltipExample::marker
	OnlineMapsMarker_t3492166682 * ___marker_4;
	// UnityEngine.GameObject InfinityCode.OnlineMapsExamples.uGUICustomTooltipExample::tooltip
	GameObject_t1756533147 * ___tooltip_5;

public:
	inline static int32_t get_offset_of_tooltipPrefab_2() { return static_cast<int32_t>(offsetof(uGUICustomTooltipExample_t2656697888, ___tooltipPrefab_2)); }
	inline GameObject_t1756533147 * get_tooltipPrefab_2() const { return ___tooltipPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_tooltipPrefab_2() { return &___tooltipPrefab_2; }
	inline void set_tooltipPrefab_2(GameObject_t1756533147 * value)
	{
		___tooltipPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipPrefab_2, value);
	}

	inline static int32_t get_offset_of_container_3() { return static_cast<int32_t>(offsetof(uGUICustomTooltipExample_t2656697888, ___container_3)); }
	inline Canvas_t209405766 * get_container_3() const { return ___container_3; }
	inline Canvas_t209405766 ** get_address_of_container_3() { return &___container_3; }
	inline void set_container_3(Canvas_t209405766 * value)
	{
		___container_3 = value;
		Il2CppCodeGenWriteBarrier(&___container_3, value);
	}

	inline static int32_t get_offset_of_marker_4() { return static_cast<int32_t>(offsetof(uGUICustomTooltipExample_t2656697888, ___marker_4)); }
	inline OnlineMapsMarker_t3492166682 * get_marker_4() const { return ___marker_4; }
	inline OnlineMapsMarker_t3492166682 ** get_address_of_marker_4() { return &___marker_4; }
	inline void set_marker_4(OnlineMapsMarker_t3492166682 * value)
	{
		___marker_4 = value;
		Il2CppCodeGenWriteBarrier(&___marker_4, value);
	}

	inline static int32_t get_offset_of_tooltip_5() { return static_cast<int32_t>(offsetof(uGUICustomTooltipExample_t2656697888, ___tooltip_5)); }
	inline GameObject_t1756533147 * get_tooltip_5() const { return ___tooltip_5; }
	inline GameObject_t1756533147 ** get_address_of_tooltip_5() { return &___tooltip_5; }
	inline void set_tooltip_5(GameObject_t1756533147 * value)
	{
		___tooltip_5 = value;
		Il2CppCodeGenWriteBarrier(&___tooltip_5, value);
	}
};

struct uGUICustomTooltipExample_t2656697888_StaticFields
{
public:
	// System.Action`1<OnlineMapsMarkerBase> InfinityCode.OnlineMapsExamples.uGUICustomTooltipExample::<>f__am$cache0
	Action_1_t3702754603 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(uGUICustomTooltipExample_t2656697888_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_1_t3702754603 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_1_t3702754603 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_1_t3702754603 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
