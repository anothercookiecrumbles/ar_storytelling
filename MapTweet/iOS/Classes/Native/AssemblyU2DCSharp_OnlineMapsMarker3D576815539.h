#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<OnlineMapsMarker3D>
struct Action_1_t378614921;
// OnlineMapsControlBase3D
struct OnlineMapsControlBase3D_t2801313279;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_OnlineMapsMarkerBase3900955221.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsMarker3D
struct  OnlineMapsMarker3D_t576815539  : public OnlineMapsMarkerBase_t3900955221
{
public:
	// System.Action`1<OnlineMapsMarker3D> OnlineMapsMarker3D::OnPositionChanged
	Action_1_t378614921 * ___OnPositionChanged_18;
	// System.Boolean OnlineMapsMarker3D::allowDefaultMarkerEvents
	bool ___allowDefaultMarkerEvents_19;
	// System.Nullable`1<System.Single> OnlineMapsMarker3D::altitude
	Nullable_1_t339576247  ___altitude_20;
	// System.Boolean OnlineMapsMarker3D::checkMapBoundaries
	bool ___checkMapBoundaries_21;
	// OnlineMapsControlBase3D OnlineMapsMarker3D::control
	OnlineMapsControlBase3D_t2801313279 * ___control_22;
	// System.Boolean OnlineMapsMarker3D::inited
	bool ___inited_23;
	// UnityEngine.GameObject OnlineMapsMarker3D::instance
	GameObject_t1756533147 * ___instance_24;
	// UnityEngine.GameObject OnlineMapsMarker3D::prefab
	GameObject_t1756533147 * ___prefab_25;
	// UnityEngine.GameObject OnlineMapsMarker3D::_prefab
	GameObject_t1756533147 * ____prefab_26;
	// UnityEngine.Vector3 OnlineMapsMarker3D::_relativePosition
	Vector3_t2243707580  ____relativePosition_27;
	// System.Boolean OnlineMapsMarker3D::_visible
	bool ____visible_28;
	// System.Single OnlineMapsMarker3D::_rotationY
	float ____rotationY_29;

public:
	inline static int32_t get_offset_of_OnPositionChanged_18() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3D_t576815539, ___OnPositionChanged_18)); }
	inline Action_1_t378614921 * get_OnPositionChanged_18() const { return ___OnPositionChanged_18; }
	inline Action_1_t378614921 ** get_address_of_OnPositionChanged_18() { return &___OnPositionChanged_18; }
	inline void set_OnPositionChanged_18(Action_1_t378614921 * value)
	{
		___OnPositionChanged_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnPositionChanged_18, value);
	}

	inline static int32_t get_offset_of_allowDefaultMarkerEvents_19() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3D_t576815539, ___allowDefaultMarkerEvents_19)); }
	inline bool get_allowDefaultMarkerEvents_19() const { return ___allowDefaultMarkerEvents_19; }
	inline bool* get_address_of_allowDefaultMarkerEvents_19() { return &___allowDefaultMarkerEvents_19; }
	inline void set_allowDefaultMarkerEvents_19(bool value)
	{
		___allowDefaultMarkerEvents_19 = value;
	}

	inline static int32_t get_offset_of_altitude_20() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3D_t576815539, ___altitude_20)); }
	inline Nullable_1_t339576247  get_altitude_20() const { return ___altitude_20; }
	inline Nullable_1_t339576247 * get_address_of_altitude_20() { return &___altitude_20; }
	inline void set_altitude_20(Nullable_1_t339576247  value)
	{
		___altitude_20 = value;
	}

	inline static int32_t get_offset_of_checkMapBoundaries_21() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3D_t576815539, ___checkMapBoundaries_21)); }
	inline bool get_checkMapBoundaries_21() const { return ___checkMapBoundaries_21; }
	inline bool* get_address_of_checkMapBoundaries_21() { return &___checkMapBoundaries_21; }
	inline void set_checkMapBoundaries_21(bool value)
	{
		___checkMapBoundaries_21 = value;
	}

	inline static int32_t get_offset_of_control_22() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3D_t576815539, ___control_22)); }
	inline OnlineMapsControlBase3D_t2801313279 * get_control_22() const { return ___control_22; }
	inline OnlineMapsControlBase3D_t2801313279 ** get_address_of_control_22() { return &___control_22; }
	inline void set_control_22(OnlineMapsControlBase3D_t2801313279 * value)
	{
		___control_22 = value;
		Il2CppCodeGenWriteBarrier(&___control_22, value);
	}

	inline static int32_t get_offset_of_inited_23() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3D_t576815539, ___inited_23)); }
	inline bool get_inited_23() const { return ___inited_23; }
	inline bool* get_address_of_inited_23() { return &___inited_23; }
	inline void set_inited_23(bool value)
	{
		___inited_23 = value;
	}

	inline static int32_t get_offset_of_instance_24() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3D_t576815539, ___instance_24)); }
	inline GameObject_t1756533147 * get_instance_24() const { return ___instance_24; }
	inline GameObject_t1756533147 ** get_address_of_instance_24() { return &___instance_24; }
	inline void set_instance_24(GameObject_t1756533147 * value)
	{
		___instance_24 = value;
		Il2CppCodeGenWriteBarrier(&___instance_24, value);
	}

	inline static int32_t get_offset_of_prefab_25() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3D_t576815539, ___prefab_25)); }
	inline GameObject_t1756533147 * get_prefab_25() const { return ___prefab_25; }
	inline GameObject_t1756533147 ** get_address_of_prefab_25() { return &___prefab_25; }
	inline void set_prefab_25(GameObject_t1756533147 * value)
	{
		___prefab_25 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_25, value);
	}

	inline static int32_t get_offset_of__prefab_26() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3D_t576815539, ____prefab_26)); }
	inline GameObject_t1756533147 * get__prefab_26() const { return ____prefab_26; }
	inline GameObject_t1756533147 ** get_address_of__prefab_26() { return &____prefab_26; }
	inline void set__prefab_26(GameObject_t1756533147 * value)
	{
		____prefab_26 = value;
		Il2CppCodeGenWriteBarrier(&____prefab_26, value);
	}

	inline static int32_t get_offset_of__relativePosition_27() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3D_t576815539, ____relativePosition_27)); }
	inline Vector3_t2243707580  get__relativePosition_27() const { return ____relativePosition_27; }
	inline Vector3_t2243707580 * get_address_of__relativePosition_27() { return &____relativePosition_27; }
	inline void set__relativePosition_27(Vector3_t2243707580  value)
	{
		____relativePosition_27 = value;
	}

	inline static int32_t get_offset_of__visible_28() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3D_t576815539, ____visible_28)); }
	inline bool get__visible_28() const { return ____visible_28; }
	inline bool* get_address_of__visible_28() { return &____visible_28; }
	inline void set__visible_28(bool value)
	{
		____visible_28 = value;
	}

	inline static int32_t get_offset_of__rotationY_29() { return static_cast<int32_t>(offsetof(OnlineMapsMarker3D_t576815539, ____rotationY_29)); }
	inline float get__rotationY_29() const { return ____rotationY_29; }
	inline float* get_address_of__rotationY_29() { return &____rotationY_29; }
	inline void set__rotationY_29(float value)
	{
		____rotationY_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
