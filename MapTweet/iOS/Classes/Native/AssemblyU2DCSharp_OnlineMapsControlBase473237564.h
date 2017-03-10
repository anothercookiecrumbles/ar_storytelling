#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsControlBase
struct OnlineMapsControlBase_t473237564;
// System.Func`1<UnityEngine.Vector2>
struct Func_1_t4198100261;
// System.Func`1<System.Int32>
struct Func_1_t4026270130;
// System.Action
struct Action_t3226471752;
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t199503262;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// OnlineMaps
struct OnlineMaps_t1893290312;
// OnlineMapsMarkerBase
struct OnlineMapsMarkerBase_t3900955221;
// System.Int64[]
struct Int64U5BU5D_t717125112;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_OnlineMapsZoomMode2419411716.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsControlBase
struct  OnlineMapsControlBase_t473237564  : public MonoBehaviour_t1158329972
{
public:
	// System.Func`1<UnityEngine.Vector2> OnlineMapsControlBase::OnGetInputPosition
	Func_1_t4198100261 * ___OnGetInputPosition_5;
	// System.Func`1<System.Int32> OnlineMapsControlBase::OnGetTouchCount
	Func_1_t4026270130 * ___OnGetTouchCount_6;
	// System.Action OnlineMapsControlBase::OnMapClick
	Action_t3226471752 * ___OnMapClick_7;
	// System.Action OnlineMapsControlBase::OnMapDoubleClick
	Action_t3226471752 * ___OnMapDoubleClick_8;
	// System.Action OnlineMapsControlBase::OnMapDrag
	Action_t3226471752 * ___OnMapDrag_9;
	// System.Action OnlineMapsControlBase::OnMapLongPress
	Action_t3226471752 * ___OnMapLongPress_10;
	// System.Action OnlineMapsControlBase::OnMapPress
	Action_t3226471752 * ___OnMapPress_11;
	// System.Action OnlineMapsControlBase::OnMapRelease
	Action_t3226471752 * ___OnMapRelease_12;
	// System.Action OnlineMapsControlBase::OnMapZoom
	Action_t3226471752 * ___OnMapZoom_13;
	// System.Action OnlineMapsControlBase::OnUpdateAfter
	Action_t3226471752 * ___OnUpdateAfter_14;
	// System.Action OnlineMapsControlBase::OnUpdateBefore
	Action_t3226471752 * ___OnUpdateBefore_15;
	// System.Predicate`1<UnityEngine.GameObject> OnlineMapsControlBase::OnValidateMouseWheel
	Predicate_1_t199503262 * ___OnValidateMouseWheel_16;
	// UnityEngine.Texture2D OnlineMapsControlBase::activeTexture
	Texture2D_t3542995729 * ___activeTexture_17;
	// System.Boolean OnlineMapsControlBase::allowAddMarkerByM
	bool ___allowAddMarkerByM_18;
	// System.Boolean OnlineMapsControlBase::allowZoom
	bool ___allowZoom_19;
	// System.Boolean OnlineMapsControlBase::allowUserControl
	bool ___allowUserControl_20;
	// System.Boolean OnlineMapsControlBase::isMapDrag
	bool ___isMapDrag_21;
	// System.Boolean OnlineMapsControlBase::invertTouchZoom
	bool ___invertTouchZoom_22;
	// System.Boolean OnlineMapsControlBase::zoomInOnDoubleClick
	bool ___zoomInOnDoubleClick_23;
	// OnlineMapsZoomMode OnlineMapsControlBase::zoomMode
	int32_t ___zoomMode_24;
	// UnityEngine.Rect OnlineMapsControlBase::_screenRect
	Rect_t3681755626  ____screenRect_25;
	// OnlineMaps OnlineMapsControlBase::map
	OnlineMaps_t1893290312 * ___map_26;
	// System.Single OnlineMapsControlBase::lastGestureDistance
	float ___lastGestureDistance_27;
	// UnityEngine.Vector2 OnlineMapsControlBase::lastInputPosition
	Vector2_t2243707579  ___lastInputPosition_28;
	// System.Int32 OnlineMapsControlBase::lastTouchCount
	int32_t ___lastTouchCount_29;
	// System.Boolean OnlineMapsControlBase::lockClick
	bool ___lockClick_30;
	// System.Boolean OnlineMapsControlBase::waitZeroTouches
	bool ___waitZeroTouches_31;
	// OnlineMapsMarkerBase OnlineMapsControlBase::_dragMarker
	OnlineMapsMarkerBase_t3900955221 * ____dragMarker_32;
	// System.Int64[] OnlineMapsControlBase::lastClickTimes
	Int64U5BU5D_t717125112* ___lastClickTimes_33;
	// UnityEngine.Vector2 OnlineMapsControlBase::pressPoint
	Vector2_t2243707579  ___pressPoint_34;
	// System.Collections.IEnumerator OnlineMapsControlBase::longPressEnumenator
	Il2CppObject * ___longPressEnumenator_35;
	// UnityEngine.Vector2 OnlineMapsControlBase::lastGestureCenter
	Vector2_t2243707579  ___lastGestureCenter_36;
	// System.Double OnlineMapsControlBase::lastPositionLng
	double ___lastPositionLng_37;
	// System.Double OnlineMapsControlBase::lastPositionLat
	double ___lastPositionLat_38;
	// System.Boolean OnlineMapsControlBase::isMapPress
	bool ___isMapPress_39;
	// System.Boolean OnlineMapsControlBase::mapDragStarted
	bool ___mapDragStarted_40;

public:
	inline static int32_t get_offset_of_OnGetInputPosition_5() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___OnGetInputPosition_5)); }
	inline Func_1_t4198100261 * get_OnGetInputPosition_5() const { return ___OnGetInputPosition_5; }
	inline Func_1_t4198100261 ** get_address_of_OnGetInputPosition_5() { return &___OnGetInputPosition_5; }
	inline void set_OnGetInputPosition_5(Func_1_t4198100261 * value)
	{
		___OnGetInputPosition_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnGetInputPosition_5, value);
	}

	inline static int32_t get_offset_of_OnGetTouchCount_6() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___OnGetTouchCount_6)); }
	inline Func_1_t4026270130 * get_OnGetTouchCount_6() const { return ___OnGetTouchCount_6; }
	inline Func_1_t4026270130 ** get_address_of_OnGetTouchCount_6() { return &___OnGetTouchCount_6; }
	inline void set_OnGetTouchCount_6(Func_1_t4026270130 * value)
	{
		___OnGetTouchCount_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnGetTouchCount_6, value);
	}

	inline static int32_t get_offset_of_OnMapClick_7() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___OnMapClick_7)); }
	inline Action_t3226471752 * get_OnMapClick_7() const { return ___OnMapClick_7; }
	inline Action_t3226471752 ** get_address_of_OnMapClick_7() { return &___OnMapClick_7; }
	inline void set_OnMapClick_7(Action_t3226471752 * value)
	{
		___OnMapClick_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnMapClick_7, value);
	}

	inline static int32_t get_offset_of_OnMapDoubleClick_8() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___OnMapDoubleClick_8)); }
	inline Action_t3226471752 * get_OnMapDoubleClick_8() const { return ___OnMapDoubleClick_8; }
	inline Action_t3226471752 ** get_address_of_OnMapDoubleClick_8() { return &___OnMapDoubleClick_8; }
	inline void set_OnMapDoubleClick_8(Action_t3226471752 * value)
	{
		___OnMapDoubleClick_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnMapDoubleClick_8, value);
	}

	inline static int32_t get_offset_of_OnMapDrag_9() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___OnMapDrag_9)); }
	inline Action_t3226471752 * get_OnMapDrag_9() const { return ___OnMapDrag_9; }
	inline Action_t3226471752 ** get_address_of_OnMapDrag_9() { return &___OnMapDrag_9; }
	inline void set_OnMapDrag_9(Action_t3226471752 * value)
	{
		___OnMapDrag_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnMapDrag_9, value);
	}

	inline static int32_t get_offset_of_OnMapLongPress_10() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___OnMapLongPress_10)); }
	inline Action_t3226471752 * get_OnMapLongPress_10() const { return ___OnMapLongPress_10; }
	inline Action_t3226471752 ** get_address_of_OnMapLongPress_10() { return &___OnMapLongPress_10; }
	inline void set_OnMapLongPress_10(Action_t3226471752 * value)
	{
		___OnMapLongPress_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnMapLongPress_10, value);
	}

	inline static int32_t get_offset_of_OnMapPress_11() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___OnMapPress_11)); }
	inline Action_t3226471752 * get_OnMapPress_11() const { return ___OnMapPress_11; }
	inline Action_t3226471752 ** get_address_of_OnMapPress_11() { return &___OnMapPress_11; }
	inline void set_OnMapPress_11(Action_t3226471752 * value)
	{
		___OnMapPress_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnMapPress_11, value);
	}

	inline static int32_t get_offset_of_OnMapRelease_12() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___OnMapRelease_12)); }
	inline Action_t3226471752 * get_OnMapRelease_12() const { return ___OnMapRelease_12; }
	inline Action_t3226471752 ** get_address_of_OnMapRelease_12() { return &___OnMapRelease_12; }
	inline void set_OnMapRelease_12(Action_t3226471752 * value)
	{
		___OnMapRelease_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnMapRelease_12, value);
	}

	inline static int32_t get_offset_of_OnMapZoom_13() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___OnMapZoom_13)); }
	inline Action_t3226471752 * get_OnMapZoom_13() const { return ___OnMapZoom_13; }
	inline Action_t3226471752 ** get_address_of_OnMapZoom_13() { return &___OnMapZoom_13; }
	inline void set_OnMapZoom_13(Action_t3226471752 * value)
	{
		___OnMapZoom_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnMapZoom_13, value);
	}

	inline static int32_t get_offset_of_OnUpdateAfter_14() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___OnUpdateAfter_14)); }
	inline Action_t3226471752 * get_OnUpdateAfter_14() const { return ___OnUpdateAfter_14; }
	inline Action_t3226471752 ** get_address_of_OnUpdateAfter_14() { return &___OnUpdateAfter_14; }
	inline void set_OnUpdateAfter_14(Action_t3226471752 * value)
	{
		___OnUpdateAfter_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnUpdateAfter_14, value);
	}

	inline static int32_t get_offset_of_OnUpdateBefore_15() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___OnUpdateBefore_15)); }
	inline Action_t3226471752 * get_OnUpdateBefore_15() const { return ___OnUpdateBefore_15; }
	inline Action_t3226471752 ** get_address_of_OnUpdateBefore_15() { return &___OnUpdateBefore_15; }
	inline void set_OnUpdateBefore_15(Action_t3226471752 * value)
	{
		___OnUpdateBefore_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnUpdateBefore_15, value);
	}

	inline static int32_t get_offset_of_OnValidateMouseWheel_16() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___OnValidateMouseWheel_16)); }
	inline Predicate_1_t199503262 * get_OnValidateMouseWheel_16() const { return ___OnValidateMouseWheel_16; }
	inline Predicate_1_t199503262 ** get_address_of_OnValidateMouseWheel_16() { return &___OnValidateMouseWheel_16; }
	inline void set_OnValidateMouseWheel_16(Predicate_1_t199503262 * value)
	{
		___OnValidateMouseWheel_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnValidateMouseWheel_16, value);
	}

	inline static int32_t get_offset_of_activeTexture_17() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___activeTexture_17)); }
	inline Texture2D_t3542995729 * get_activeTexture_17() const { return ___activeTexture_17; }
	inline Texture2D_t3542995729 ** get_address_of_activeTexture_17() { return &___activeTexture_17; }
	inline void set_activeTexture_17(Texture2D_t3542995729 * value)
	{
		___activeTexture_17 = value;
		Il2CppCodeGenWriteBarrier(&___activeTexture_17, value);
	}

	inline static int32_t get_offset_of_allowAddMarkerByM_18() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___allowAddMarkerByM_18)); }
	inline bool get_allowAddMarkerByM_18() const { return ___allowAddMarkerByM_18; }
	inline bool* get_address_of_allowAddMarkerByM_18() { return &___allowAddMarkerByM_18; }
	inline void set_allowAddMarkerByM_18(bool value)
	{
		___allowAddMarkerByM_18 = value;
	}

	inline static int32_t get_offset_of_allowZoom_19() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___allowZoom_19)); }
	inline bool get_allowZoom_19() const { return ___allowZoom_19; }
	inline bool* get_address_of_allowZoom_19() { return &___allowZoom_19; }
	inline void set_allowZoom_19(bool value)
	{
		___allowZoom_19 = value;
	}

	inline static int32_t get_offset_of_allowUserControl_20() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___allowUserControl_20)); }
	inline bool get_allowUserControl_20() const { return ___allowUserControl_20; }
	inline bool* get_address_of_allowUserControl_20() { return &___allowUserControl_20; }
	inline void set_allowUserControl_20(bool value)
	{
		___allowUserControl_20 = value;
	}

	inline static int32_t get_offset_of_isMapDrag_21() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___isMapDrag_21)); }
	inline bool get_isMapDrag_21() const { return ___isMapDrag_21; }
	inline bool* get_address_of_isMapDrag_21() { return &___isMapDrag_21; }
	inline void set_isMapDrag_21(bool value)
	{
		___isMapDrag_21 = value;
	}

	inline static int32_t get_offset_of_invertTouchZoom_22() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___invertTouchZoom_22)); }
	inline bool get_invertTouchZoom_22() const { return ___invertTouchZoom_22; }
	inline bool* get_address_of_invertTouchZoom_22() { return &___invertTouchZoom_22; }
	inline void set_invertTouchZoom_22(bool value)
	{
		___invertTouchZoom_22 = value;
	}

	inline static int32_t get_offset_of_zoomInOnDoubleClick_23() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___zoomInOnDoubleClick_23)); }
	inline bool get_zoomInOnDoubleClick_23() const { return ___zoomInOnDoubleClick_23; }
	inline bool* get_address_of_zoomInOnDoubleClick_23() { return &___zoomInOnDoubleClick_23; }
	inline void set_zoomInOnDoubleClick_23(bool value)
	{
		___zoomInOnDoubleClick_23 = value;
	}

	inline static int32_t get_offset_of_zoomMode_24() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___zoomMode_24)); }
	inline int32_t get_zoomMode_24() const { return ___zoomMode_24; }
	inline int32_t* get_address_of_zoomMode_24() { return &___zoomMode_24; }
	inline void set_zoomMode_24(int32_t value)
	{
		___zoomMode_24 = value;
	}

	inline static int32_t get_offset_of__screenRect_25() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ____screenRect_25)); }
	inline Rect_t3681755626  get__screenRect_25() const { return ____screenRect_25; }
	inline Rect_t3681755626 * get_address_of__screenRect_25() { return &____screenRect_25; }
	inline void set__screenRect_25(Rect_t3681755626  value)
	{
		____screenRect_25 = value;
	}

	inline static int32_t get_offset_of_map_26() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___map_26)); }
	inline OnlineMaps_t1893290312 * get_map_26() const { return ___map_26; }
	inline OnlineMaps_t1893290312 ** get_address_of_map_26() { return &___map_26; }
	inline void set_map_26(OnlineMaps_t1893290312 * value)
	{
		___map_26 = value;
		Il2CppCodeGenWriteBarrier(&___map_26, value);
	}

	inline static int32_t get_offset_of_lastGestureDistance_27() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___lastGestureDistance_27)); }
	inline float get_lastGestureDistance_27() const { return ___lastGestureDistance_27; }
	inline float* get_address_of_lastGestureDistance_27() { return &___lastGestureDistance_27; }
	inline void set_lastGestureDistance_27(float value)
	{
		___lastGestureDistance_27 = value;
	}

	inline static int32_t get_offset_of_lastInputPosition_28() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___lastInputPosition_28)); }
	inline Vector2_t2243707579  get_lastInputPosition_28() const { return ___lastInputPosition_28; }
	inline Vector2_t2243707579 * get_address_of_lastInputPosition_28() { return &___lastInputPosition_28; }
	inline void set_lastInputPosition_28(Vector2_t2243707579  value)
	{
		___lastInputPosition_28 = value;
	}

	inline static int32_t get_offset_of_lastTouchCount_29() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___lastTouchCount_29)); }
	inline int32_t get_lastTouchCount_29() const { return ___lastTouchCount_29; }
	inline int32_t* get_address_of_lastTouchCount_29() { return &___lastTouchCount_29; }
	inline void set_lastTouchCount_29(int32_t value)
	{
		___lastTouchCount_29 = value;
	}

	inline static int32_t get_offset_of_lockClick_30() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___lockClick_30)); }
	inline bool get_lockClick_30() const { return ___lockClick_30; }
	inline bool* get_address_of_lockClick_30() { return &___lockClick_30; }
	inline void set_lockClick_30(bool value)
	{
		___lockClick_30 = value;
	}

	inline static int32_t get_offset_of_waitZeroTouches_31() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___waitZeroTouches_31)); }
	inline bool get_waitZeroTouches_31() const { return ___waitZeroTouches_31; }
	inline bool* get_address_of_waitZeroTouches_31() { return &___waitZeroTouches_31; }
	inline void set_waitZeroTouches_31(bool value)
	{
		___waitZeroTouches_31 = value;
	}

	inline static int32_t get_offset_of__dragMarker_32() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ____dragMarker_32)); }
	inline OnlineMapsMarkerBase_t3900955221 * get__dragMarker_32() const { return ____dragMarker_32; }
	inline OnlineMapsMarkerBase_t3900955221 ** get_address_of__dragMarker_32() { return &____dragMarker_32; }
	inline void set__dragMarker_32(OnlineMapsMarkerBase_t3900955221 * value)
	{
		____dragMarker_32 = value;
		Il2CppCodeGenWriteBarrier(&____dragMarker_32, value);
	}

	inline static int32_t get_offset_of_lastClickTimes_33() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___lastClickTimes_33)); }
	inline Int64U5BU5D_t717125112* get_lastClickTimes_33() const { return ___lastClickTimes_33; }
	inline Int64U5BU5D_t717125112** get_address_of_lastClickTimes_33() { return &___lastClickTimes_33; }
	inline void set_lastClickTimes_33(Int64U5BU5D_t717125112* value)
	{
		___lastClickTimes_33 = value;
		Il2CppCodeGenWriteBarrier(&___lastClickTimes_33, value);
	}

	inline static int32_t get_offset_of_pressPoint_34() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___pressPoint_34)); }
	inline Vector2_t2243707579  get_pressPoint_34() const { return ___pressPoint_34; }
	inline Vector2_t2243707579 * get_address_of_pressPoint_34() { return &___pressPoint_34; }
	inline void set_pressPoint_34(Vector2_t2243707579  value)
	{
		___pressPoint_34 = value;
	}

	inline static int32_t get_offset_of_longPressEnumenator_35() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___longPressEnumenator_35)); }
	inline Il2CppObject * get_longPressEnumenator_35() const { return ___longPressEnumenator_35; }
	inline Il2CppObject ** get_address_of_longPressEnumenator_35() { return &___longPressEnumenator_35; }
	inline void set_longPressEnumenator_35(Il2CppObject * value)
	{
		___longPressEnumenator_35 = value;
		Il2CppCodeGenWriteBarrier(&___longPressEnumenator_35, value);
	}

	inline static int32_t get_offset_of_lastGestureCenter_36() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___lastGestureCenter_36)); }
	inline Vector2_t2243707579  get_lastGestureCenter_36() const { return ___lastGestureCenter_36; }
	inline Vector2_t2243707579 * get_address_of_lastGestureCenter_36() { return &___lastGestureCenter_36; }
	inline void set_lastGestureCenter_36(Vector2_t2243707579  value)
	{
		___lastGestureCenter_36 = value;
	}

	inline static int32_t get_offset_of_lastPositionLng_37() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___lastPositionLng_37)); }
	inline double get_lastPositionLng_37() const { return ___lastPositionLng_37; }
	inline double* get_address_of_lastPositionLng_37() { return &___lastPositionLng_37; }
	inline void set_lastPositionLng_37(double value)
	{
		___lastPositionLng_37 = value;
	}

	inline static int32_t get_offset_of_lastPositionLat_38() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___lastPositionLat_38)); }
	inline double get_lastPositionLat_38() const { return ___lastPositionLat_38; }
	inline double* get_address_of_lastPositionLat_38() { return &___lastPositionLat_38; }
	inline void set_lastPositionLat_38(double value)
	{
		___lastPositionLat_38 = value;
	}

	inline static int32_t get_offset_of_isMapPress_39() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___isMapPress_39)); }
	inline bool get_isMapPress_39() const { return ___isMapPress_39; }
	inline bool* get_address_of_isMapPress_39() { return &___isMapPress_39; }
	inline void set_isMapPress_39(bool value)
	{
		___isMapPress_39 = value;
	}

	inline static int32_t get_offset_of_mapDragStarted_40() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564, ___mapDragStarted_40)); }
	inline bool get_mapDragStarted_40() const { return ___mapDragStarted_40; }
	inline bool* get_address_of_mapDragStarted_40() { return &___mapDragStarted_40; }
	inline void set_mapDragStarted_40(bool value)
	{
		___mapDragStarted_40 = value;
	}
};

struct OnlineMapsControlBase_t473237564_StaticFields
{
public:
	// System.Single OnlineMapsControlBase::longPressDelay
	float ___longPressDelay_2;
	// System.Single OnlineMapsControlBase::startDragDistance
	float ___startDragDistance_3;
	// OnlineMapsControlBase OnlineMapsControlBase::_instance
	OnlineMapsControlBase_t473237564 * ____instance_4;

public:
	inline static int32_t get_offset_of_longPressDelay_2() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564_StaticFields, ___longPressDelay_2)); }
	inline float get_longPressDelay_2() const { return ___longPressDelay_2; }
	inline float* get_address_of_longPressDelay_2() { return &___longPressDelay_2; }
	inline void set_longPressDelay_2(float value)
	{
		___longPressDelay_2 = value;
	}

	inline static int32_t get_offset_of_startDragDistance_3() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564_StaticFields, ___startDragDistance_3)); }
	inline float get_startDragDistance_3() const { return ___startDragDistance_3; }
	inline float* get_address_of_startDragDistance_3() { return &___startDragDistance_3; }
	inline void set_startDragDistance_3(float value)
	{
		___startDragDistance_3 = value;
	}

	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase_t473237564_StaticFields, ____instance_4)); }
	inline OnlineMapsControlBase_t473237564 * get__instance_4() const { return ____instance_4; }
	inline OnlineMapsControlBase_t473237564 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(OnlineMapsControlBase_t473237564 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier(&____instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
