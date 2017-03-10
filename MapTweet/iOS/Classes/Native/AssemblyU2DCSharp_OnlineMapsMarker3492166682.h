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
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;

#include "AssemblyU2DCSharp_OnlineMapsMarkerBase3900955221.h"
#include "AssemblyU2DCSharp_OnlineMapsAlign3858887827.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsMarker
struct  OnlineMapsMarker_t3492166682  : public OnlineMapsMarkerBase_t3900955221
{
public:
	// OnlineMapsAlign OnlineMapsMarker::align
	int32_t ___align_18;
	// System.Boolean OnlineMapsMarker::locked
	bool ___locked_19;
	// UnityEngine.Rect OnlineMapsMarker::markerColliderRect
	Rect_t3681755626  ___markerColliderRect_20;
	// UnityEngine.Texture2D OnlineMapsMarker::texture
	Texture2D_t3542995729 * ___texture_21;
	// UnityEngine.Color32[] OnlineMapsMarker::_colors
	Color32U5BU5D_t30278651* ____colors_22;
	// System.Int32 OnlineMapsMarker::_height
	int32_t ____height_23;
	// System.Single OnlineMapsMarker::_rotation
	float ____rotation_24;
	// UnityEngine.Color32[] OnlineMapsMarker::_rotatedColors
	Color32U5BU5D_t30278651* ____rotatedColors_25;
	// System.Int32 OnlineMapsMarker::_textureHeight
	int32_t ____textureHeight_26;
	// System.Int32 OnlineMapsMarker::_textureWidth
	int32_t ____textureWidth_27;
	// System.Int32 OnlineMapsMarker::_width
	int32_t ____width_28;
	// System.Single OnlineMapsMarker::_lastRotation
	float ____lastRotation_29;
	// System.Single OnlineMapsMarker::_lastScale
	float ____lastScale_30;

public:
	inline static int32_t get_offset_of_align_18() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ___align_18)); }
	inline int32_t get_align_18() const { return ___align_18; }
	inline int32_t* get_address_of_align_18() { return &___align_18; }
	inline void set_align_18(int32_t value)
	{
		___align_18 = value;
	}

	inline static int32_t get_offset_of_locked_19() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ___locked_19)); }
	inline bool get_locked_19() const { return ___locked_19; }
	inline bool* get_address_of_locked_19() { return &___locked_19; }
	inline void set_locked_19(bool value)
	{
		___locked_19 = value;
	}

	inline static int32_t get_offset_of_markerColliderRect_20() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ___markerColliderRect_20)); }
	inline Rect_t3681755626  get_markerColliderRect_20() const { return ___markerColliderRect_20; }
	inline Rect_t3681755626 * get_address_of_markerColliderRect_20() { return &___markerColliderRect_20; }
	inline void set_markerColliderRect_20(Rect_t3681755626  value)
	{
		___markerColliderRect_20 = value;
	}

	inline static int32_t get_offset_of_texture_21() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ___texture_21)); }
	inline Texture2D_t3542995729 * get_texture_21() const { return ___texture_21; }
	inline Texture2D_t3542995729 ** get_address_of_texture_21() { return &___texture_21; }
	inline void set_texture_21(Texture2D_t3542995729 * value)
	{
		___texture_21 = value;
		Il2CppCodeGenWriteBarrier(&___texture_21, value);
	}

	inline static int32_t get_offset_of__colors_22() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ____colors_22)); }
	inline Color32U5BU5D_t30278651* get__colors_22() const { return ____colors_22; }
	inline Color32U5BU5D_t30278651** get_address_of__colors_22() { return &____colors_22; }
	inline void set__colors_22(Color32U5BU5D_t30278651* value)
	{
		____colors_22 = value;
		Il2CppCodeGenWriteBarrier(&____colors_22, value);
	}

	inline static int32_t get_offset_of__height_23() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ____height_23)); }
	inline int32_t get__height_23() const { return ____height_23; }
	inline int32_t* get_address_of__height_23() { return &____height_23; }
	inline void set__height_23(int32_t value)
	{
		____height_23 = value;
	}

	inline static int32_t get_offset_of__rotation_24() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ____rotation_24)); }
	inline float get__rotation_24() const { return ____rotation_24; }
	inline float* get_address_of__rotation_24() { return &____rotation_24; }
	inline void set__rotation_24(float value)
	{
		____rotation_24 = value;
	}

	inline static int32_t get_offset_of__rotatedColors_25() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ____rotatedColors_25)); }
	inline Color32U5BU5D_t30278651* get__rotatedColors_25() const { return ____rotatedColors_25; }
	inline Color32U5BU5D_t30278651** get_address_of__rotatedColors_25() { return &____rotatedColors_25; }
	inline void set__rotatedColors_25(Color32U5BU5D_t30278651* value)
	{
		____rotatedColors_25 = value;
		Il2CppCodeGenWriteBarrier(&____rotatedColors_25, value);
	}

	inline static int32_t get_offset_of__textureHeight_26() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ____textureHeight_26)); }
	inline int32_t get__textureHeight_26() const { return ____textureHeight_26; }
	inline int32_t* get_address_of__textureHeight_26() { return &____textureHeight_26; }
	inline void set__textureHeight_26(int32_t value)
	{
		____textureHeight_26 = value;
	}

	inline static int32_t get_offset_of__textureWidth_27() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ____textureWidth_27)); }
	inline int32_t get__textureWidth_27() const { return ____textureWidth_27; }
	inline int32_t* get_address_of__textureWidth_27() { return &____textureWidth_27; }
	inline void set__textureWidth_27(int32_t value)
	{
		____textureWidth_27 = value;
	}

	inline static int32_t get_offset_of__width_28() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ____width_28)); }
	inline int32_t get__width_28() const { return ____width_28; }
	inline int32_t* get_address_of__width_28() { return &____width_28; }
	inline void set__width_28(int32_t value)
	{
		____width_28 = value;
	}

	inline static int32_t get_offset_of__lastRotation_29() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ____lastRotation_29)); }
	inline float get__lastRotation_29() const { return ____lastRotation_29; }
	inline float* get_address_of__lastRotation_29() { return &____lastRotation_29; }
	inline void set__lastRotation_29(float value)
	{
		____lastRotation_29 = value;
	}

	inline static int32_t get_offset_of__lastScale_30() { return static_cast<int32_t>(offsetof(OnlineMapsMarker_t3492166682, ____lastScale_30)); }
	inline float get__lastScale_30() const { return ____lastScale_30; }
	inline float* get_address_of__lastScale_30() { return &____lastScale_30; }
	inline void set__lastScale_30(float value)
	{
		____lastScale_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
