#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsLocationServiceBase
struct OnlineMapsLocationServiceBase_t653486915;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// OnlineMapsLocationServiceBase/OnGetLocationDelegate
struct OnGetLocationDelegate_t812030577;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t2045506961;
// System.Action
struct Action_t3226471752;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// OnlineMaps
struct OnlineMaps_t1893290312;
// OnlineMapsMarkerBase
struct OnlineMapsMarkerBase_t3900955221;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsLocationServiceMarkerT2500453164.h"
#include "AssemblyU2DCSharp_OnlineMapsAlign3858887827.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsLocationServiceBase
struct  OnlineMapsLocationServiceBase_t653486915  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<System.Single> OnlineMapsLocationServiceBase::OnCompassChanged
	Action_1_t1878309314 * ___OnCompassChanged_3;
	// OnlineMapsLocationServiceBase/OnGetLocationDelegate OnlineMapsLocationServiceBase::OnGetLocation
	OnGetLocationDelegate_t812030577 * ___OnGetLocation_4;
	// System.Action`1<UnityEngine.Vector2> OnlineMapsLocationServiceBase::OnLocationChanged
	Action_1_t2045506961 * ___OnLocationChanged_5;
	// System.Action OnlineMapsLocationServiceBase::OnLocationInited
	Action_t3226471752 * ___OnLocationInited_6;
	// System.Boolean OnlineMapsLocationServiceBase::autoStopUpdateOnInput
	bool ___autoStopUpdateOnInput_7;
	// System.Single OnlineMapsLocationServiceBase::compassThreshold
	float ___compassThreshold_8;
	// System.Boolean OnlineMapsLocationServiceBase::createMarkerInUserPosition
	bool ___createMarkerInUserPosition_9;
	// System.Boolean OnlineMapsLocationServiceBase::disableEmulatorInPublish
	bool ___disableEmulatorInPublish_10;
	// System.Single OnlineMapsLocationServiceBase::emulatorCompass
	float ___emulatorCompass_11;
	// UnityEngine.Vector2 OnlineMapsLocationServiceBase::emulatorPosition
	Vector2_t2243707579  ___emulatorPosition_12;
	// System.Boolean OnlineMapsLocationServiceBase::findLocationByIP
	bool ___findLocationByIP_13;
	// System.String OnlineMapsLocationServiceBase::markerTooltip
	String_t* ___markerTooltip_14;
	// OnlineMapsLocationServiceMarkerType OnlineMapsLocationServiceBase::markerType
	int32_t ___markerType_15;
	// OnlineMapsAlign OnlineMapsLocationServiceBase::marker2DAlign
	int32_t ___marker2DAlign_16;
	// UnityEngine.Texture2D OnlineMapsLocationServiceBase::marker2DTexture
	Texture2D_t3542995729 * ___marker2DTexture_17;
	// UnityEngine.GameObject OnlineMapsLocationServiceBase::marker3DPrefab
	GameObject_t1756533147 * ___marker3DPrefab_18;
	// System.Int32 OnlineMapsLocationServiceBase::maxPositionCount
	int32_t ___maxPositionCount_19;
	// UnityEngine.Vector2 OnlineMapsLocationServiceBase::position
	Vector2_t2243707579  ___position_20;
	// System.Int32 OnlineMapsLocationServiceBase::restoreAfter
	int32_t ___restoreAfter_21;
	// System.Single OnlineMapsLocationServiceBase::trueHeading
	float ___trueHeading_22;
	// System.Boolean OnlineMapsLocationServiceBase::updatePosition
	bool ___updatePosition_23;
	// System.Boolean OnlineMapsLocationServiceBase::useCompassForMarker
	bool ___useCompassForMarker_24;
	// System.Boolean OnlineMapsLocationServiceBase::useGPSEmulator
	bool ___useGPSEmulator_25;
	// OnlineMaps OnlineMapsLocationServiceBase::api
	OnlineMaps_t1893290312 * ___api_26;
	// System.Boolean OnlineMapsLocationServiceBase::_allowUpdatePosition
	bool ____allowUpdatePosition_27;
	// System.Int64 OnlineMapsLocationServiceBase::lastPositionChangedTime
	int64_t ___lastPositionChangedTime_28;
	// System.Boolean OnlineMapsLocationServiceBase::lockDisable
	bool ___lockDisable_29;
	// System.Boolean OnlineMapsLocationServiceBase::isPositionInited
	bool ___isPositionInited_30;
	// OnlineMapsMarkerBase OnlineMapsLocationServiceBase::_marker
	OnlineMapsMarkerBase_t3900955221 * ____marker_31;
	// System.Single OnlineMapsLocationServiceBase::_speed
	float ____speed_32;
	// System.Boolean OnlineMapsLocationServiceBase::started
	bool ___started_33;

public:
	inline static int32_t get_offset_of_OnCompassChanged_3() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___OnCompassChanged_3)); }
	inline Action_1_t1878309314 * get_OnCompassChanged_3() const { return ___OnCompassChanged_3; }
	inline Action_1_t1878309314 ** get_address_of_OnCompassChanged_3() { return &___OnCompassChanged_3; }
	inline void set_OnCompassChanged_3(Action_1_t1878309314 * value)
	{
		___OnCompassChanged_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnCompassChanged_3, value);
	}

	inline static int32_t get_offset_of_OnGetLocation_4() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___OnGetLocation_4)); }
	inline OnGetLocationDelegate_t812030577 * get_OnGetLocation_4() const { return ___OnGetLocation_4; }
	inline OnGetLocationDelegate_t812030577 ** get_address_of_OnGetLocation_4() { return &___OnGetLocation_4; }
	inline void set_OnGetLocation_4(OnGetLocationDelegate_t812030577 * value)
	{
		___OnGetLocation_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnGetLocation_4, value);
	}

	inline static int32_t get_offset_of_OnLocationChanged_5() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___OnLocationChanged_5)); }
	inline Action_1_t2045506961 * get_OnLocationChanged_5() const { return ___OnLocationChanged_5; }
	inline Action_1_t2045506961 ** get_address_of_OnLocationChanged_5() { return &___OnLocationChanged_5; }
	inline void set_OnLocationChanged_5(Action_1_t2045506961 * value)
	{
		___OnLocationChanged_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnLocationChanged_5, value);
	}

	inline static int32_t get_offset_of_OnLocationInited_6() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___OnLocationInited_6)); }
	inline Action_t3226471752 * get_OnLocationInited_6() const { return ___OnLocationInited_6; }
	inline Action_t3226471752 ** get_address_of_OnLocationInited_6() { return &___OnLocationInited_6; }
	inline void set_OnLocationInited_6(Action_t3226471752 * value)
	{
		___OnLocationInited_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnLocationInited_6, value);
	}

	inline static int32_t get_offset_of_autoStopUpdateOnInput_7() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___autoStopUpdateOnInput_7)); }
	inline bool get_autoStopUpdateOnInput_7() const { return ___autoStopUpdateOnInput_7; }
	inline bool* get_address_of_autoStopUpdateOnInput_7() { return &___autoStopUpdateOnInput_7; }
	inline void set_autoStopUpdateOnInput_7(bool value)
	{
		___autoStopUpdateOnInput_7 = value;
	}

	inline static int32_t get_offset_of_compassThreshold_8() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___compassThreshold_8)); }
	inline float get_compassThreshold_8() const { return ___compassThreshold_8; }
	inline float* get_address_of_compassThreshold_8() { return &___compassThreshold_8; }
	inline void set_compassThreshold_8(float value)
	{
		___compassThreshold_8 = value;
	}

	inline static int32_t get_offset_of_createMarkerInUserPosition_9() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___createMarkerInUserPosition_9)); }
	inline bool get_createMarkerInUserPosition_9() const { return ___createMarkerInUserPosition_9; }
	inline bool* get_address_of_createMarkerInUserPosition_9() { return &___createMarkerInUserPosition_9; }
	inline void set_createMarkerInUserPosition_9(bool value)
	{
		___createMarkerInUserPosition_9 = value;
	}

	inline static int32_t get_offset_of_disableEmulatorInPublish_10() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___disableEmulatorInPublish_10)); }
	inline bool get_disableEmulatorInPublish_10() const { return ___disableEmulatorInPublish_10; }
	inline bool* get_address_of_disableEmulatorInPublish_10() { return &___disableEmulatorInPublish_10; }
	inline void set_disableEmulatorInPublish_10(bool value)
	{
		___disableEmulatorInPublish_10 = value;
	}

	inline static int32_t get_offset_of_emulatorCompass_11() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___emulatorCompass_11)); }
	inline float get_emulatorCompass_11() const { return ___emulatorCompass_11; }
	inline float* get_address_of_emulatorCompass_11() { return &___emulatorCompass_11; }
	inline void set_emulatorCompass_11(float value)
	{
		___emulatorCompass_11 = value;
	}

	inline static int32_t get_offset_of_emulatorPosition_12() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___emulatorPosition_12)); }
	inline Vector2_t2243707579  get_emulatorPosition_12() const { return ___emulatorPosition_12; }
	inline Vector2_t2243707579 * get_address_of_emulatorPosition_12() { return &___emulatorPosition_12; }
	inline void set_emulatorPosition_12(Vector2_t2243707579  value)
	{
		___emulatorPosition_12 = value;
	}

	inline static int32_t get_offset_of_findLocationByIP_13() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___findLocationByIP_13)); }
	inline bool get_findLocationByIP_13() const { return ___findLocationByIP_13; }
	inline bool* get_address_of_findLocationByIP_13() { return &___findLocationByIP_13; }
	inline void set_findLocationByIP_13(bool value)
	{
		___findLocationByIP_13 = value;
	}

	inline static int32_t get_offset_of_markerTooltip_14() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___markerTooltip_14)); }
	inline String_t* get_markerTooltip_14() const { return ___markerTooltip_14; }
	inline String_t** get_address_of_markerTooltip_14() { return &___markerTooltip_14; }
	inline void set_markerTooltip_14(String_t* value)
	{
		___markerTooltip_14 = value;
		Il2CppCodeGenWriteBarrier(&___markerTooltip_14, value);
	}

	inline static int32_t get_offset_of_markerType_15() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___markerType_15)); }
	inline int32_t get_markerType_15() const { return ___markerType_15; }
	inline int32_t* get_address_of_markerType_15() { return &___markerType_15; }
	inline void set_markerType_15(int32_t value)
	{
		___markerType_15 = value;
	}

	inline static int32_t get_offset_of_marker2DAlign_16() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___marker2DAlign_16)); }
	inline int32_t get_marker2DAlign_16() const { return ___marker2DAlign_16; }
	inline int32_t* get_address_of_marker2DAlign_16() { return &___marker2DAlign_16; }
	inline void set_marker2DAlign_16(int32_t value)
	{
		___marker2DAlign_16 = value;
	}

	inline static int32_t get_offset_of_marker2DTexture_17() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___marker2DTexture_17)); }
	inline Texture2D_t3542995729 * get_marker2DTexture_17() const { return ___marker2DTexture_17; }
	inline Texture2D_t3542995729 ** get_address_of_marker2DTexture_17() { return &___marker2DTexture_17; }
	inline void set_marker2DTexture_17(Texture2D_t3542995729 * value)
	{
		___marker2DTexture_17 = value;
		Il2CppCodeGenWriteBarrier(&___marker2DTexture_17, value);
	}

	inline static int32_t get_offset_of_marker3DPrefab_18() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___marker3DPrefab_18)); }
	inline GameObject_t1756533147 * get_marker3DPrefab_18() const { return ___marker3DPrefab_18; }
	inline GameObject_t1756533147 ** get_address_of_marker3DPrefab_18() { return &___marker3DPrefab_18; }
	inline void set_marker3DPrefab_18(GameObject_t1756533147 * value)
	{
		___marker3DPrefab_18 = value;
		Il2CppCodeGenWriteBarrier(&___marker3DPrefab_18, value);
	}

	inline static int32_t get_offset_of_maxPositionCount_19() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___maxPositionCount_19)); }
	inline int32_t get_maxPositionCount_19() const { return ___maxPositionCount_19; }
	inline int32_t* get_address_of_maxPositionCount_19() { return &___maxPositionCount_19; }
	inline void set_maxPositionCount_19(int32_t value)
	{
		___maxPositionCount_19 = value;
	}

	inline static int32_t get_offset_of_position_20() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___position_20)); }
	inline Vector2_t2243707579  get_position_20() const { return ___position_20; }
	inline Vector2_t2243707579 * get_address_of_position_20() { return &___position_20; }
	inline void set_position_20(Vector2_t2243707579  value)
	{
		___position_20 = value;
	}

	inline static int32_t get_offset_of_restoreAfter_21() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___restoreAfter_21)); }
	inline int32_t get_restoreAfter_21() const { return ___restoreAfter_21; }
	inline int32_t* get_address_of_restoreAfter_21() { return &___restoreAfter_21; }
	inline void set_restoreAfter_21(int32_t value)
	{
		___restoreAfter_21 = value;
	}

	inline static int32_t get_offset_of_trueHeading_22() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___trueHeading_22)); }
	inline float get_trueHeading_22() const { return ___trueHeading_22; }
	inline float* get_address_of_trueHeading_22() { return &___trueHeading_22; }
	inline void set_trueHeading_22(float value)
	{
		___trueHeading_22 = value;
	}

	inline static int32_t get_offset_of_updatePosition_23() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___updatePosition_23)); }
	inline bool get_updatePosition_23() const { return ___updatePosition_23; }
	inline bool* get_address_of_updatePosition_23() { return &___updatePosition_23; }
	inline void set_updatePosition_23(bool value)
	{
		___updatePosition_23 = value;
	}

	inline static int32_t get_offset_of_useCompassForMarker_24() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___useCompassForMarker_24)); }
	inline bool get_useCompassForMarker_24() const { return ___useCompassForMarker_24; }
	inline bool* get_address_of_useCompassForMarker_24() { return &___useCompassForMarker_24; }
	inline void set_useCompassForMarker_24(bool value)
	{
		___useCompassForMarker_24 = value;
	}

	inline static int32_t get_offset_of_useGPSEmulator_25() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___useGPSEmulator_25)); }
	inline bool get_useGPSEmulator_25() const { return ___useGPSEmulator_25; }
	inline bool* get_address_of_useGPSEmulator_25() { return &___useGPSEmulator_25; }
	inline void set_useGPSEmulator_25(bool value)
	{
		___useGPSEmulator_25 = value;
	}

	inline static int32_t get_offset_of_api_26() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___api_26)); }
	inline OnlineMaps_t1893290312 * get_api_26() const { return ___api_26; }
	inline OnlineMaps_t1893290312 ** get_address_of_api_26() { return &___api_26; }
	inline void set_api_26(OnlineMaps_t1893290312 * value)
	{
		___api_26 = value;
		Il2CppCodeGenWriteBarrier(&___api_26, value);
	}

	inline static int32_t get_offset_of__allowUpdatePosition_27() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ____allowUpdatePosition_27)); }
	inline bool get__allowUpdatePosition_27() const { return ____allowUpdatePosition_27; }
	inline bool* get_address_of__allowUpdatePosition_27() { return &____allowUpdatePosition_27; }
	inline void set__allowUpdatePosition_27(bool value)
	{
		____allowUpdatePosition_27 = value;
	}

	inline static int32_t get_offset_of_lastPositionChangedTime_28() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___lastPositionChangedTime_28)); }
	inline int64_t get_lastPositionChangedTime_28() const { return ___lastPositionChangedTime_28; }
	inline int64_t* get_address_of_lastPositionChangedTime_28() { return &___lastPositionChangedTime_28; }
	inline void set_lastPositionChangedTime_28(int64_t value)
	{
		___lastPositionChangedTime_28 = value;
	}

	inline static int32_t get_offset_of_lockDisable_29() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___lockDisable_29)); }
	inline bool get_lockDisable_29() const { return ___lockDisable_29; }
	inline bool* get_address_of_lockDisable_29() { return &___lockDisable_29; }
	inline void set_lockDisable_29(bool value)
	{
		___lockDisable_29 = value;
	}

	inline static int32_t get_offset_of_isPositionInited_30() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___isPositionInited_30)); }
	inline bool get_isPositionInited_30() const { return ___isPositionInited_30; }
	inline bool* get_address_of_isPositionInited_30() { return &___isPositionInited_30; }
	inline void set_isPositionInited_30(bool value)
	{
		___isPositionInited_30 = value;
	}

	inline static int32_t get_offset_of__marker_31() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ____marker_31)); }
	inline OnlineMapsMarkerBase_t3900955221 * get__marker_31() const { return ____marker_31; }
	inline OnlineMapsMarkerBase_t3900955221 ** get_address_of__marker_31() { return &____marker_31; }
	inline void set__marker_31(OnlineMapsMarkerBase_t3900955221 * value)
	{
		____marker_31 = value;
		Il2CppCodeGenWriteBarrier(&____marker_31, value);
	}

	inline static int32_t get_offset_of__speed_32() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ____speed_32)); }
	inline float get__speed_32() const { return ____speed_32; }
	inline float* get_address_of__speed_32() { return &____speed_32; }
	inline void set__speed_32(float value)
	{
		____speed_32 = value;
	}

	inline static int32_t get_offset_of_started_33() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915, ___started_33)); }
	inline bool get_started_33() const { return ___started_33; }
	inline bool* get_address_of_started_33() { return &___started_33; }
	inline void set_started_33(bool value)
	{
		___started_33 = value;
	}
};

struct OnlineMapsLocationServiceBase_t653486915_StaticFields
{
public:
	// OnlineMapsLocationServiceBase OnlineMapsLocationServiceBase::_baseInstance
	OnlineMapsLocationServiceBase_t653486915 * ____baseInstance_2;

public:
	inline static int32_t get_offset_of__baseInstance_2() { return static_cast<int32_t>(offsetof(OnlineMapsLocationServiceBase_t653486915_StaticFields, ____baseInstance_2)); }
	inline OnlineMapsLocationServiceBase_t653486915 * get__baseInstance_2() const { return ____baseInstance_2; }
	inline OnlineMapsLocationServiceBase_t653486915 ** get_address_of__baseInstance_2() { return &____baseInstance_2; }
	inline void set__baseInstance_2(OnlineMapsLocationServiceBase_t653486915 * value)
	{
		____baseInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&____baseInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
