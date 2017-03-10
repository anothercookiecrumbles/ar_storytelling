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
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_OnlineMapsRWTConnectorMode2301498079.h"
#include "AssemblyU2DCSharp_OnlineMapsRWTConnectorPositionMo1024163612.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsRWTConnector
struct  OnlineMapsRWTConnector_t1023776356  : public MonoBehaviour_t1158329972
{
public:
	// OnlineMapsRWTConnectorMode OnlineMapsRWTConnector::mode
	int32_t ___mode_2;
	// OnlineMapsRWTConnectorPositionMode OnlineMapsRWTConnector::positionMode
	int32_t ___positionMode_3;
	// UnityEngine.Texture2D OnlineMapsRWTConnector::markerTexture
	Texture2D_t3542995729 * ___markerTexture_4;
	// System.String OnlineMapsRWTConnector::markerLabel
	String_t* ___markerLabel_5;
	// UnityEngine.Vector3 OnlineMapsRWTConnector::scenePosition
	Vector3_t2243707580  ___scenePosition_6;
	// UnityEngine.Vector2 OnlineMapsRWTConnector::coordinates
	Vector2_t2243707579  ___coordinates_7;
	// UnityEngine.Transform OnlineMapsRWTConnector::targetTransform
	Transform_t3275118058 * ___targetTransform_8;

public:
	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(OnlineMapsRWTConnector_t1023776356, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_positionMode_3() { return static_cast<int32_t>(offsetof(OnlineMapsRWTConnector_t1023776356, ___positionMode_3)); }
	inline int32_t get_positionMode_3() const { return ___positionMode_3; }
	inline int32_t* get_address_of_positionMode_3() { return &___positionMode_3; }
	inline void set_positionMode_3(int32_t value)
	{
		___positionMode_3 = value;
	}

	inline static int32_t get_offset_of_markerTexture_4() { return static_cast<int32_t>(offsetof(OnlineMapsRWTConnector_t1023776356, ___markerTexture_4)); }
	inline Texture2D_t3542995729 * get_markerTexture_4() const { return ___markerTexture_4; }
	inline Texture2D_t3542995729 ** get_address_of_markerTexture_4() { return &___markerTexture_4; }
	inline void set_markerTexture_4(Texture2D_t3542995729 * value)
	{
		___markerTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___markerTexture_4, value);
	}

	inline static int32_t get_offset_of_markerLabel_5() { return static_cast<int32_t>(offsetof(OnlineMapsRWTConnector_t1023776356, ___markerLabel_5)); }
	inline String_t* get_markerLabel_5() const { return ___markerLabel_5; }
	inline String_t** get_address_of_markerLabel_5() { return &___markerLabel_5; }
	inline void set_markerLabel_5(String_t* value)
	{
		___markerLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___markerLabel_5, value);
	}

	inline static int32_t get_offset_of_scenePosition_6() { return static_cast<int32_t>(offsetof(OnlineMapsRWTConnector_t1023776356, ___scenePosition_6)); }
	inline Vector3_t2243707580  get_scenePosition_6() const { return ___scenePosition_6; }
	inline Vector3_t2243707580 * get_address_of_scenePosition_6() { return &___scenePosition_6; }
	inline void set_scenePosition_6(Vector3_t2243707580  value)
	{
		___scenePosition_6 = value;
	}

	inline static int32_t get_offset_of_coordinates_7() { return static_cast<int32_t>(offsetof(OnlineMapsRWTConnector_t1023776356, ___coordinates_7)); }
	inline Vector2_t2243707579  get_coordinates_7() const { return ___coordinates_7; }
	inline Vector2_t2243707579 * get_address_of_coordinates_7() { return &___coordinates_7; }
	inline void set_coordinates_7(Vector2_t2243707579  value)
	{
		___coordinates_7 = value;
	}

	inline static int32_t get_offset_of_targetTransform_8() { return static_cast<int32_t>(offsetof(OnlineMapsRWTConnector_t1023776356, ___targetTransform_8)); }
	inline Transform_t3275118058 * get_targetTransform_8() const { return ___targetTransform_8; }
	inline Transform_t3275118058 ** get_address_of_targetTransform_8() { return &___targetTransform_8; }
	inline void set_targetTransform_8(Transform_t3275118058 * value)
	{
		___targetTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___targetTransform_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
