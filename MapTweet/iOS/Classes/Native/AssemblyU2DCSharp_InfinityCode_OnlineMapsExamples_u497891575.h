#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// UnityEngine.UI.Graphic
struct Graphic_t2426225576;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// System.Func`2<UnityEngine.Touch,UnityEngine.Vector2>
struct Func_2_t2652393509;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample
struct  uGUISmoothZoomExample_t497891575  : public MonoBehaviour_t1158329972
{
public:
	// System.Action InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::OnSmoothZoomBegin
	Action_t3226471752 * ___OnSmoothZoomBegin_2;
	// System.Action InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::OnSmoothZoomFinish
	Action_t3226471752 * ___OnSmoothZoomFinish_3;
	// System.Action InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::OnSmoothZoomProcess
	Action_t3226471752 * ___OnSmoothZoomProcess_4;
	// System.Int32 InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::touchCount
	int32_t ___touchCount_5;
	// System.Boolean InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::smoothZoomStarted
	bool ___smoothZoomStarted_6;
	// UnityEngine.UI.Graphic InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::graphic
	Graphic_t2426225576 * ___graphic_7;
	// UnityEngine.RectTransform InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::rectTransform
	RectTransform_t3349966182 * ___rectTransform_8;
	// UnityEngine.Vector2 InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::defPivot
	Vector2_t2243707579  ___defPivot_9;
	// UnityEngine.Vector2 InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::defSize
	Vector2_t2243707579  ___defSize_10;
	// UnityEngine.Vector2 InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::defPosition
	Vector2_t2243707579  ___defPosition_11;
	// UnityEngine.Vector2 InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::initialPosition
	Vector2_t2243707579  ___initialPosition_12;
	// UnityEngine.Rect InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::mapRect
	Rect_t3681755626  ___mapRect_13;
	// System.Boolean InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::needRestore
	bool ___needRestore_14;
	// UnityEngine.Vector2[] InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::positions
	Vector2U5BU5D_t686124026* ___positions_15;
	// System.Single InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::initialDistance
	float ___initialDistance_16;

public:
	inline static int32_t get_offset_of_OnSmoothZoomBegin_2() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___OnSmoothZoomBegin_2)); }
	inline Action_t3226471752 * get_OnSmoothZoomBegin_2() const { return ___OnSmoothZoomBegin_2; }
	inline Action_t3226471752 ** get_address_of_OnSmoothZoomBegin_2() { return &___OnSmoothZoomBegin_2; }
	inline void set_OnSmoothZoomBegin_2(Action_t3226471752 * value)
	{
		___OnSmoothZoomBegin_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnSmoothZoomBegin_2, value);
	}

	inline static int32_t get_offset_of_OnSmoothZoomFinish_3() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___OnSmoothZoomFinish_3)); }
	inline Action_t3226471752 * get_OnSmoothZoomFinish_3() const { return ___OnSmoothZoomFinish_3; }
	inline Action_t3226471752 ** get_address_of_OnSmoothZoomFinish_3() { return &___OnSmoothZoomFinish_3; }
	inline void set_OnSmoothZoomFinish_3(Action_t3226471752 * value)
	{
		___OnSmoothZoomFinish_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnSmoothZoomFinish_3, value);
	}

	inline static int32_t get_offset_of_OnSmoothZoomProcess_4() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___OnSmoothZoomProcess_4)); }
	inline Action_t3226471752 * get_OnSmoothZoomProcess_4() const { return ___OnSmoothZoomProcess_4; }
	inline Action_t3226471752 ** get_address_of_OnSmoothZoomProcess_4() { return &___OnSmoothZoomProcess_4; }
	inline void set_OnSmoothZoomProcess_4(Action_t3226471752 * value)
	{
		___OnSmoothZoomProcess_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnSmoothZoomProcess_4, value);
	}

	inline static int32_t get_offset_of_touchCount_5() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___touchCount_5)); }
	inline int32_t get_touchCount_5() const { return ___touchCount_5; }
	inline int32_t* get_address_of_touchCount_5() { return &___touchCount_5; }
	inline void set_touchCount_5(int32_t value)
	{
		___touchCount_5 = value;
	}

	inline static int32_t get_offset_of_smoothZoomStarted_6() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___smoothZoomStarted_6)); }
	inline bool get_smoothZoomStarted_6() const { return ___smoothZoomStarted_6; }
	inline bool* get_address_of_smoothZoomStarted_6() { return &___smoothZoomStarted_6; }
	inline void set_smoothZoomStarted_6(bool value)
	{
		___smoothZoomStarted_6 = value;
	}

	inline static int32_t get_offset_of_graphic_7() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___graphic_7)); }
	inline Graphic_t2426225576 * get_graphic_7() const { return ___graphic_7; }
	inline Graphic_t2426225576 ** get_address_of_graphic_7() { return &___graphic_7; }
	inline void set_graphic_7(Graphic_t2426225576 * value)
	{
		___graphic_7 = value;
		Il2CppCodeGenWriteBarrier(&___graphic_7, value);
	}

	inline static int32_t get_offset_of_rectTransform_8() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___rectTransform_8)); }
	inline RectTransform_t3349966182 * get_rectTransform_8() const { return ___rectTransform_8; }
	inline RectTransform_t3349966182 ** get_address_of_rectTransform_8() { return &___rectTransform_8; }
	inline void set_rectTransform_8(RectTransform_t3349966182 * value)
	{
		___rectTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_8, value);
	}

	inline static int32_t get_offset_of_defPivot_9() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___defPivot_9)); }
	inline Vector2_t2243707579  get_defPivot_9() const { return ___defPivot_9; }
	inline Vector2_t2243707579 * get_address_of_defPivot_9() { return &___defPivot_9; }
	inline void set_defPivot_9(Vector2_t2243707579  value)
	{
		___defPivot_9 = value;
	}

	inline static int32_t get_offset_of_defSize_10() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___defSize_10)); }
	inline Vector2_t2243707579  get_defSize_10() const { return ___defSize_10; }
	inline Vector2_t2243707579 * get_address_of_defSize_10() { return &___defSize_10; }
	inline void set_defSize_10(Vector2_t2243707579  value)
	{
		___defSize_10 = value;
	}

	inline static int32_t get_offset_of_defPosition_11() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___defPosition_11)); }
	inline Vector2_t2243707579  get_defPosition_11() const { return ___defPosition_11; }
	inline Vector2_t2243707579 * get_address_of_defPosition_11() { return &___defPosition_11; }
	inline void set_defPosition_11(Vector2_t2243707579  value)
	{
		___defPosition_11 = value;
	}

	inline static int32_t get_offset_of_initialPosition_12() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___initialPosition_12)); }
	inline Vector2_t2243707579  get_initialPosition_12() const { return ___initialPosition_12; }
	inline Vector2_t2243707579 * get_address_of_initialPosition_12() { return &___initialPosition_12; }
	inline void set_initialPosition_12(Vector2_t2243707579  value)
	{
		___initialPosition_12 = value;
	}

	inline static int32_t get_offset_of_mapRect_13() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___mapRect_13)); }
	inline Rect_t3681755626  get_mapRect_13() const { return ___mapRect_13; }
	inline Rect_t3681755626 * get_address_of_mapRect_13() { return &___mapRect_13; }
	inline void set_mapRect_13(Rect_t3681755626  value)
	{
		___mapRect_13 = value;
	}

	inline static int32_t get_offset_of_needRestore_14() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___needRestore_14)); }
	inline bool get_needRestore_14() const { return ___needRestore_14; }
	inline bool* get_address_of_needRestore_14() { return &___needRestore_14; }
	inline void set_needRestore_14(bool value)
	{
		___needRestore_14 = value;
	}

	inline static int32_t get_offset_of_positions_15() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___positions_15)); }
	inline Vector2U5BU5D_t686124026* get_positions_15() const { return ___positions_15; }
	inline Vector2U5BU5D_t686124026** get_address_of_positions_15() { return &___positions_15; }
	inline void set_positions_15(Vector2U5BU5D_t686124026* value)
	{
		___positions_15 = value;
		Il2CppCodeGenWriteBarrier(&___positions_15, value);
	}

	inline static int32_t get_offset_of_initialDistance_16() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575, ___initialDistance_16)); }
	inline float get_initialDistance_16() const { return ___initialDistance_16; }
	inline float* get_address_of_initialDistance_16() { return &___initialDistance_16; }
	inline void set_initialDistance_16(float value)
	{
		___initialDistance_16 = value;
	}
};

struct uGUISmoothZoomExample_t497891575_StaticFields
{
public:
	// System.Func`2<UnityEngine.Touch,UnityEngine.Vector2> InfinityCode.OnlineMapsExamples.uGUISmoothZoomExample::<>f__am$cache0
	Func_2_t2652393509 * ___U3CU3Ef__amU24cache0_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_17() { return static_cast<int32_t>(offsetof(uGUISmoothZoomExample_t497891575_StaticFields, ___U3CU3Ef__amU24cache0_17)); }
	inline Func_2_t2652393509 * get_U3CU3Ef__amU24cache0_17() const { return ___U3CU3Ef__amU24cache0_17; }
	inline Func_2_t2652393509 ** get_address_of_U3CU3Ef__amU24cache0_17() { return &___U3CU3Ef__amU24cache0_17; }
	inline void set_U3CU3Ef__amU24cache0_17(Func_2_t2652393509 * value)
	{
		___U3CU3Ef__amU24cache0_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
