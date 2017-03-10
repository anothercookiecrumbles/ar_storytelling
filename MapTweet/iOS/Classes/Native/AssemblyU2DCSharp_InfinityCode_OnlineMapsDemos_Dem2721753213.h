#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// OnlineMaps
struct OnlineMaps_t1893290312;
// OnlineMapsTileSetControl
struct OnlineMapsTileSetControl_t3368302803;
// System.String
struct String_t;
// OnlineMapsMarker
struct OnlineMapsMarker_t3492166682;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsDemos.Demo
struct  Demo_t2721753213  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform InfinityCode.OnlineMapsDemos.Demo::camera2D
	Transform_t3275118058 * ___camera2D_2;
	// UnityEngine.Transform InfinityCode.OnlineMapsDemos.Demo::camera3D
	Transform_t3275118058 * ___camera3D_3;
	// UnityEngine.Shader InfinityCode.OnlineMapsDemos.Demo::tileShader
	Shader_t2430389951 * ___tileShader_4;
	// System.Single InfinityCode.OnlineMapsDemos.Demo::CameraChangeTime
	float ___CameraChangeTime_5;
	// UnityEngine.GUIStyle InfinityCode.OnlineMapsDemos.Demo::activeRowStyle
	GUIStyle_t1799908754 * ___activeRowStyle_6;
	// System.Single InfinityCode.OnlineMapsDemos.Demo::animValue
	float ___animValue_7;
	// OnlineMaps InfinityCode.OnlineMapsDemos.Demo::api
	OnlineMaps_t1893290312 * ___api_8;
	// OnlineMapsTileSetControl InfinityCode.OnlineMapsDemos.Demo::control
	OnlineMapsTileSetControl_t3368302803 * ___control_9;
	// System.Boolean InfinityCode.OnlineMapsDemos.Demo::is2D
	bool ___is2D_10;
	// System.Boolean InfinityCode.OnlineMapsDemos.Demo::isCameraModeChange
	bool ___isCameraModeChange_11;
	// UnityEngine.GUIStyle InfinityCode.OnlineMapsDemos.Demo::rowStyle
	GUIStyle_t1799908754 * ___rowStyle_12;
	// System.String InfinityCode.OnlineMapsDemos.Demo::search
	String_t* ___search_13;
	// OnlineMapsMarker InfinityCode.OnlineMapsDemos.Demo::searchMarker
	OnlineMapsMarker_t3492166682 * ___searchMarker_14;
	// UnityEngine.Transform InfinityCode.OnlineMapsDemos.Demo::fromTransform
	Transform_t3275118058 * ___fromTransform_15;
	// UnityEngine.Transform InfinityCode.OnlineMapsDemos.Demo::toTransform
	Transform_t3275118058 * ___toTransform_16;

public:
	inline static int32_t get_offset_of_camera2D_2() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___camera2D_2)); }
	inline Transform_t3275118058 * get_camera2D_2() const { return ___camera2D_2; }
	inline Transform_t3275118058 ** get_address_of_camera2D_2() { return &___camera2D_2; }
	inline void set_camera2D_2(Transform_t3275118058 * value)
	{
		___camera2D_2 = value;
		Il2CppCodeGenWriteBarrier(&___camera2D_2, value);
	}

	inline static int32_t get_offset_of_camera3D_3() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___camera3D_3)); }
	inline Transform_t3275118058 * get_camera3D_3() const { return ___camera3D_3; }
	inline Transform_t3275118058 ** get_address_of_camera3D_3() { return &___camera3D_3; }
	inline void set_camera3D_3(Transform_t3275118058 * value)
	{
		___camera3D_3 = value;
		Il2CppCodeGenWriteBarrier(&___camera3D_3, value);
	}

	inline static int32_t get_offset_of_tileShader_4() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___tileShader_4)); }
	inline Shader_t2430389951 * get_tileShader_4() const { return ___tileShader_4; }
	inline Shader_t2430389951 ** get_address_of_tileShader_4() { return &___tileShader_4; }
	inline void set_tileShader_4(Shader_t2430389951 * value)
	{
		___tileShader_4 = value;
		Il2CppCodeGenWriteBarrier(&___tileShader_4, value);
	}

	inline static int32_t get_offset_of_CameraChangeTime_5() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___CameraChangeTime_5)); }
	inline float get_CameraChangeTime_5() const { return ___CameraChangeTime_5; }
	inline float* get_address_of_CameraChangeTime_5() { return &___CameraChangeTime_5; }
	inline void set_CameraChangeTime_5(float value)
	{
		___CameraChangeTime_5 = value;
	}

	inline static int32_t get_offset_of_activeRowStyle_6() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___activeRowStyle_6)); }
	inline GUIStyle_t1799908754 * get_activeRowStyle_6() const { return ___activeRowStyle_6; }
	inline GUIStyle_t1799908754 ** get_address_of_activeRowStyle_6() { return &___activeRowStyle_6; }
	inline void set_activeRowStyle_6(GUIStyle_t1799908754 * value)
	{
		___activeRowStyle_6 = value;
		Il2CppCodeGenWriteBarrier(&___activeRowStyle_6, value);
	}

	inline static int32_t get_offset_of_animValue_7() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___animValue_7)); }
	inline float get_animValue_7() const { return ___animValue_7; }
	inline float* get_address_of_animValue_7() { return &___animValue_7; }
	inline void set_animValue_7(float value)
	{
		___animValue_7 = value;
	}

	inline static int32_t get_offset_of_api_8() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___api_8)); }
	inline OnlineMaps_t1893290312 * get_api_8() const { return ___api_8; }
	inline OnlineMaps_t1893290312 ** get_address_of_api_8() { return &___api_8; }
	inline void set_api_8(OnlineMaps_t1893290312 * value)
	{
		___api_8 = value;
		Il2CppCodeGenWriteBarrier(&___api_8, value);
	}

	inline static int32_t get_offset_of_control_9() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___control_9)); }
	inline OnlineMapsTileSetControl_t3368302803 * get_control_9() const { return ___control_9; }
	inline OnlineMapsTileSetControl_t3368302803 ** get_address_of_control_9() { return &___control_9; }
	inline void set_control_9(OnlineMapsTileSetControl_t3368302803 * value)
	{
		___control_9 = value;
		Il2CppCodeGenWriteBarrier(&___control_9, value);
	}

	inline static int32_t get_offset_of_is2D_10() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___is2D_10)); }
	inline bool get_is2D_10() const { return ___is2D_10; }
	inline bool* get_address_of_is2D_10() { return &___is2D_10; }
	inline void set_is2D_10(bool value)
	{
		___is2D_10 = value;
	}

	inline static int32_t get_offset_of_isCameraModeChange_11() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___isCameraModeChange_11)); }
	inline bool get_isCameraModeChange_11() const { return ___isCameraModeChange_11; }
	inline bool* get_address_of_isCameraModeChange_11() { return &___isCameraModeChange_11; }
	inline void set_isCameraModeChange_11(bool value)
	{
		___isCameraModeChange_11 = value;
	}

	inline static int32_t get_offset_of_rowStyle_12() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___rowStyle_12)); }
	inline GUIStyle_t1799908754 * get_rowStyle_12() const { return ___rowStyle_12; }
	inline GUIStyle_t1799908754 ** get_address_of_rowStyle_12() { return &___rowStyle_12; }
	inline void set_rowStyle_12(GUIStyle_t1799908754 * value)
	{
		___rowStyle_12 = value;
		Il2CppCodeGenWriteBarrier(&___rowStyle_12, value);
	}

	inline static int32_t get_offset_of_search_13() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___search_13)); }
	inline String_t* get_search_13() const { return ___search_13; }
	inline String_t** get_address_of_search_13() { return &___search_13; }
	inline void set_search_13(String_t* value)
	{
		___search_13 = value;
		Il2CppCodeGenWriteBarrier(&___search_13, value);
	}

	inline static int32_t get_offset_of_searchMarker_14() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___searchMarker_14)); }
	inline OnlineMapsMarker_t3492166682 * get_searchMarker_14() const { return ___searchMarker_14; }
	inline OnlineMapsMarker_t3492166682 ** get_address_of_searchMarker_14() { return &___searchMarker_14; }
	inline void set_searchMarker_14(OnlineMapsMarker_t3492166682 * value)
	{
		___searchMarker_14 = value;
		Il2CppCodeGenWriteBarrier(&___searchMarker_14, value);
	}

	inline static int32_t get_offset_of_fromTransform_15() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___fromTransform_15)); }
	inline Transform_t3275118058 * get_fromTransform_15() const { return ___fromTransform_15; }
	inline Transform_t3275118058 ** get_address_of_fromTransform_15() { return &___fromTransform_15; }
	inline void set_fromTransform_15(Transform_t3275118058 * value)
	{
		___fromTransform_15 = value;
		Il2CppCodeGenWriteBarrier(&___fromTransform_15, value);
	}

	inline static int32_t get_offset_of_toTransform_16() { return static_cast<int32_t>(offsetof(Demo_t2721753213, ___toTransform_16)); }
	inline Transform_t3275118058 * get_toTransform_16() const { return ___toTransform_16; }
	inline Transform_t3275118058 ** get_address_of_toTransform_16() { return &___toTransform_16; }
	inline void set_toTransform_16(Transform_t3275118058 * value)
	{
		___toTransform_16 = value;
		Il2CppCodeGenWriteBarrier(&___toTransform_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
