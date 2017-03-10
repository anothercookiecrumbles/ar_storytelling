#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`4<System.Double,System.Double,UnityEngine.GameObject,OnlineMapsMarker3D>
struct Func_4_t3013934535;
// System.Action
struct Action_t3226471752;
// System.Action`1<OnlineMapsMarker3D>
struct Action_1_t378614921;
// System.Predicate`1<OnlineMapsMarker3D>
struct Predicate_1_t3314752950;
// System.Predicate`1<System.Int32>
struct Predicate_1_t514847563;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// OnlineMapsMarker3D[]
struct OnlineMapsMarker3DU5BU5D_t1514879522;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_t725277715;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_t3921398993;
// System.Collections.Generic.Dictionary`2<System.Int32,OnlineMapsMarkerBillboard>
struct Dictionary_2_t3797896220;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Renderer
struct Renderer_t257310565;
// System.Func`2<OnlineMapsMarker3D,System.Boolean>
struct Func_2_t1861874992;

#include "AssemblyU2DCSharp_OnlineMapsControlBase473237564.h"
#include "AssemblyU2DCSharp_OnlineMapsCameraAdjust2909462084.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsMarker2DMode2893795757.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsControlBase3D
struct  OnlineMapsControlBase3D_t2801313279  : public OnlineMapsControlBase_t473237564
{
public:
	// System.Func`4<System.Double,System.Double,UnityEngine.GameObject,OnlineMapsMarker3D> OnlineMapsControlBase3D::OnAddMarker3D
	Func_4_t3013934535 * ___OnAddMarker3D_41;
	// System.Action OnlineMapsControlBase3D::OnCameraControl
	Action_t3226471752 * ___OnCameraControl_42;
	// System.Action`1<OnlineMapsMarker3D> OnlineMapsControlBase3D::OnMarker3DAdded
	Action_1_t378614921 * ___OnMarker3DAdded_43;
	// System.Predicate`1<OnlineMapsMarker3D> OnlineMapsControlBase3D::OnRemoveMarker3D
	Predicate_1_t3314752950 * ___OnRemoveMarker3D_44;
	// System.Predicate`1<System.Int32> OnlineMapsControlBase3D::OnRemoveMarker3DAt
	Predicate_1_t514847563 * ___OnRemoveMarker3DAt_45;
	// UnityEngine.Camera OnlineMapsControlBase3D::activeCamera
	Camera_t189460977 * ___activeCamera_46;
	// System.Boolean OnlineMapsControlBase3D::allowAddMarker3DByN
	bool ___allowAddMarker3DByN_47;
	// System.Boolean OnlineMapsControlBase3D::allowDefaultMarkerEvents
	bool ___allowDefaultMarkerEvents_48;
	// System.Boolean OnlineMapsControlBase3D::allowCameraControl
	bool ___allowCameraControl_49;
	// OnlineMapsCameraAdjust OnlineMapsControlBase3D::cameraAdjustTo
	int32_t ___cameraAdjustTo_50;
	// System.Single OnlineMapsControlBase3D::cameraDistance
	float ___cameraDistance_51;
	// UnityEngine.Vector2 OnlineMapsControlBase3D::cameraRotation
	Vector2_t2243707579  ___cameraRotation_52;
	// UnityEngine.Vector2 OnlineMapsControlBase3D::cameraSpeed
	Vector2_t2243707579  ___cameraSpeed_53;
	// UnityEngine.GameObject OnlineMapsControlBase3D::default3DMarker
	GameObject_t1756533147 * ___default3DMarker_54;
	// OnlineMapsMarker2DMode OnlineMapsControlBase3D::marker2DMode
	int32_t ___marker2DMode_55;
	// System.Single OnlineMapsControlBase3D::marker2DSize
	float ___marker2DSize_56;
	// OnlineMapsMarker3D[] OnlineMapsControlBase3D::markers3D
	OnlineMapsMarker3DU5BU5D_t1514879522* ___markers3D_57;
	// System.Single OnlineMapsControlBase3D::marker3DScale
	float ___marker3DScale_58;
	// System.Single OnlineMapsControlBase3D::maxCameraRotationX
	float ___maxCameraRotationX_59;
	// UnityEngine.Vector3 OnlineMapsControlBase3D::originalPosition
	Vector3_t2243707580  ___originalPosition_60;
	// UnityEngine.Vector3 OnlineMapsControlBase3D::originalScale
	Vector3_t2243707580  ___originalScale_61;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> OnlineMapsControlBase3D::markersGameObjects
	List_1_t1125654279 * ___markersGameObjects_62;
	// System.Collections.Generic.List`1<UnityEngine.Mesh> OnlineMapsControlBase3D::markersMeshes
	List_1_t725277715 * ___markersMeshes_63;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> OnlineMapsControlBase3D::markersRenderers
	List_1_t3921398993 * ___markersRenderers_64;
	// System.Collections.Generic.Dictionary`2<System.Int32,OnlineMapsMarkerBillboard> OnlineMapsControlBase3D::markerBillboards
	Dictionary_2_t3797896220 * ___markerBillboards_65;
	// UnityEngine.Collider OnlineMapsControlBase3D::_cl
	Collider_t3497673348 * ____cl_66;
	// UnityEngine.Renderer OnlineMapsControlBase3D::_renderer
	Renderer_t257310565 * ____renderer_67;

public:
	inline static int32_t get_offset_of_OnAddMarker3D_41() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___OnAddMarker3D_41)); }
	inline Func_4_t3013934535 * get_OnAddMarker3D_41() const { return ___OnAddMarker3D_41; }
	inline Func_4_t3013934535 ** get_address_of_OnAddMarker3D_41() { return &___OnAddMarker3D_41; }
	inline void set_OnAddMarker3D_41(Func_4_t3013934535 * value)
	{
		___OnAddMarker3D_41 = value;
		Il2CppCodeGenWriteBarrier(&___OnAddMarker3D_41, value);
	}

	inline static int32_t get_offset_of_OnCameraControl_42() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___OnCameraControl_42)); }
	inline Action_t3226471752 * get_OnCameraControl_42() const { return ___OnCameraControl_42; }
	inline Action_t3226471752 ** get_address_of_OnCameraControl_42() { return &___OnCameraControl_42; }
	inline void set_OnCameraControl_42(Action_t3226471752 * value)
	{
		___OnCameraControl_42 = value;
		Il2CppCodeGenWriteBarrier(&___OnCameraControl_42, value);
	}

	inline static int32_t get_offset_of_OnMarker3DAdded_43() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___OnMarker3DAdded_43)); }
	inline Action_1_t378614921 * get_OnMarker3DAdded_43() const { return ___OnMarker3DAdded_43; }
	inline Action_1_t378614921 ** get_address_of_OnMarker3DAdded_43() { return &___OnMarker3DAdded_43; }
	inline void set_OnMarker3DAdded_43(Action_1_t378614921 * value)
	{
		___OnMarker3DAdded_43 = value;
		Il2CppCodeGenWriteBarrier(&___OnMarker3DAdded_43, value);
	}

	inline static int32_t get_offset_of_OnRemoveMarker3D_44() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___OnRemoveMarker3D_44)); }
	inline Predicate_1_t3314752950 * get_OnRemoveMarker3D_44() const { return ___OnRemoveMarker3D_44; }
	inline Predicate_1_t3314752950 ** get_address_of_OnRemoveMarker3D_44() { return &___OnRemoveMarker3D_44; }
	inline void set_OnRemoveMarker3D_44(Predicate_1_t3314752950 * value)
	{
		___OnRemoveMarker3D_44 = value;
		Il2CppCodeGenWriteBarrier(&___OnRemoveMarker3D_44, value);
	}

	inline static int32_t get_offset_of_OnRemoveMarker3DAt_45() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___OnRemoveMarker3DAt_45)); }
	inline Predicate_1_t514847563 * get_OnRemoveMarker3DAt_45() const { return ___OnRemoveMarker3DAt_45; }
	inline Predicate_1_t514847563 ** get_address_of_OnRemoveMarker3DAt_45() { return &___OnRemoveMarker3DAt_45; }
	inline void set_OnRemoveMarker3DAt_45(Predicate_1_t514847563 * value)
	{
		___OnRemoveMarker3DAt_45 = value;
		Il2CppCodeGenWriteBarrier(&___OnRemoveMarker3DAt_45, value);
	}

	inline static int32_t get_offset_of_activeCamera_46() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___activeCamera_46)); }
	inline Camera_t189460977 * get_activeCamera_46() const { return ___activeCamera_46; }
	inline Camera_t189460977 ** get_address_of_activeCamera_46() { return &___activeCamera_46; }
	inline void set_activeCamera_46(Camera_t189460977 * value)
	{
		___activeCamera_46 = value;
		Il2CppCodeGenWriteBarrier(&___activeCamera_46, value);
	}

	inline static int32_t get_offset_of_allowAddMarker3DByN_47() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___allowAddMarker3DByN_47)); }
	inline bool get_allowAddMarker3DByN_47() const { return ___allowAddMarker3DByN_47; }
	inline bool* get_address_of_allowAddMarker3DByN_47() { return &___allowAddMarker3DByN_47; }
	inline void set_allowAddMarker3DByN_47(bool value)
	{
		___allowAddMarker3DByN_47 = value;
	}

	inline static int32_t get_offset_of_allowDefaultMarkerEvents_48() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___allowDefaultMarkerEvents_48)); }
	inline bool get_allowDefaultMarkerEvents_48() const { return ___allowDefaultMarkerEvents_48; }
	inline bool* get_address_of_allowDefaultMarkerEvents_48() { return &___allowDefaultMarkerEvents_48; }
	inline void set_allowDefaultMarkerEvents_48(bool value)
	{
		___allowDefaultMarkerEvents_48 = value;
	}

	inline static int32_t get_offset_of_allowCameraControl_49() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___allowCameraControl_49)); }
	inline bool get_allowCameraControl_49() const { return ___allowCameraControl_49; }
	inline bool* get_address_of_allowCameraControl_49() { return &___allowCameraControl_49; }
	inline void set_allowCameraControl_49(bool value)
	{
		___allowCameraControl_49 = value;
	}

	inline static int32_t get_offset_of_cameraAdjustTo_50() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___cameraAdjustTo_50)); }
	inline int32_t get_cameraAdjustTo_50() const { return ___cameraAdjustTo_50; }
	inline int32_t* get_address_of_cameraAdjustTo_50() { return &___cameraAdjustTo_50; }
	inline void set_cameraAdjustTo_50(int32_t value)
	{
		___cameraAdjustTo_50 = value;
	}

	inline static int32_t get_offset_of_cameraDistance_51() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___cameraDistance_51)); }
	inline float get_cameraDistance_51() const { return ___cameraDistance_51; }
	inline float* get_address_of_cameraDistance_51() { return &___cameraDistance_51; }
	inline void set_cameraDistance_51(float value)
	{
		___cameraDistance_51 = value;
	}

	inline static int32_t get_offset_of_cameraRotation_52() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___cameraRotation_52)); }
	inline Vector2_t2243707579  get_cameraRotation_52() const { return ___cameraRotation_52; }
	inline Vector2_t2243707579 * get_address_of_cameraRotation_52() { return &___cameraRotation_52; }
	inline void set_cameraRotation_52(Vector2_t2243707579  value)
	{
		___cameraRotation_52 = value;
	}

	inline static int32_t get_offset_of_cameraSpeed_53() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___cameraSpeed_53)); }
	inline Vector2_t2243707579  get_cameraSpeed_53() const { return ___cameraSpeed_53; }
	inline Vector2_t2243707579 * get_address_of_cameraSpeed_53() { return &___cameraSpeed_53; }
	inline void set_cameraSpeed_53(Vector2_t2243707579  value)
	{
		___cameraSpeed_53 = value;
	}

	inline static int32_t get_offset_of_default3DMarker_54() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___default3DMarker_54)); }
	inline GameObject_t1756533147 * get_default3DMarker_54() const { return ___default3DMarker_54; }
	inline GameObject_t1756533147 ** get_address_of_default3DMarker_54() { return &___default3DMarker_54; }
	inline void set_default3DMarker_54(GameObject_t1756533147 * value)
	{
		___default3DMarker_54 = value;
		Il2CppCodeGenWriteBarrier(&___default3DMarker_54, value);
	}

	inline static int32_t get_offset_of_marker2DMode_55() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___marker2DMode_55)); }
	inline int32_t get_marker2DMode_55() const { return ___marker2DMode_55; }
	inline int32_t* get_address_of_marker2DMode_55() { return &___marker2DMode_55; }
	inline void set_marker2DMode_55(int32_t value)
	{
		___marker2DMode_55 = value;
	}

	inline static int32_t get_offset_of_marker2DSize_56() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___marker2DSize_56)); }
	inline float get_marker2DSize_56() const { return ___marker2DSize_56; }
	inline float* get_address_of_marker2DSize_56() { return &___marker2DSize_56; }
	inline void set_marker2DSize_56(float value)
	{
		___marker2DSize_56 = value;
	}

	inline static int32_t get_offset_of_markers3D_57() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___markers3D_57)); }
	inline OnlineMapsMarker3DU5BU5D_t1514879522* get_markers3D_57() const { return ___markers3D_57; }
	inline OnlineMapsMarker3DU5BU5D_t1514879522** get_address_of_markers3D_57() { return &___markers3D_57; }
	inline void set_markers3D_57(OnlineMapsMarker3DU5BU5D_t1514879522* value)
	{
		___markers3D_57 = value;
		Il2CppCodeGenWriteBarrier(&___markers3D_57, value);
	}

	inline static int32_t get_offset_of_marker3DScale_58() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___marker3DScale_58)); }
	inline float get_marker3DScale_58() const { return ___marker3DScale_58; }
	inline float* get_address_of_marker3DScale_58() { return &___marker3DScale_58; }
	inline void set_marker3DScale_58(float value)
	{
		___marker3DScale_58 = value;
	}

	inline static int32_t get_offset_of_maxCameraRotationX_59() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___maxCameraRotationX_59)); }
	inline float get_maxCameraRotationX_59() const { return ___maxCameraRotationX_59; }
	inline float* get_address_of_maxCameraRotationX_59() { return &___maxCameraRotationX_59; }
	inline void set_maxCameraRotationX_59(float value)
	{
		___maxCameraRotationX_59 = value;
	}

	inline static int32_t get_offset_of_originalPosition_60() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___originalPosition_60)); }
	inline Vector3_t2243707580  get_originalPosition_60() const { return ___originalPosition_60; }
	inline Vector3_t2243707580 * get_address_of_originalPosition_60() { return &___originalPosition_60; }
	inline void set_originalPosition_60(Vector3_t2243707580  value)
	{
		___originalPosition_60 = value;
	}

	inline static int32_t get_offset_of_originalScale_61() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___originalScale_61)); }
	inline Vector3_t2243707580  get_originalScale_61() const { return ___originalScale_61; }
	inline Vector3_t2243707580 * get_address_of_originalScale_61() { return &___originalScale_61; }
	inline void set_originalScale_61(Vector3_t2243707580  value)
	{
		___originalScale_61 = value;
	}

	inline static int32_t get_offset_of_markersGameObjects_62() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___markersGameObjects_62)); }
	inline List_1_t1125654279 * get_markersGameObjects_62() const { return ___markersGameObjects_62; }
	inline List_1_t1125654279 ** get_address_of_markersGameObjects_62() { return &___markersGameObjects_62; }
	inline void set_markersGameObjects_62(List_1_t1125654279 * value)
	{
		___markersGameObjects_62 = value;
		Il2CppCodeGenWriteBarrier(&___markersGameObjects_62, value);
	}

	inline static int32_t get_offset_of_markersMeshes_63() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___markersMeshes_63)); }
	inline List_1_t725277715 * get_markersMeshes_63() const { return ___markersMeshes_63; }
	inline List_1_t725277715 ** get_address_of_markersMeshes_63() { return &___markersMeshes_63; }
	inline void set_markersMeshes_63(List_1_t725277715 * value)
	{
		___markersMeshes_63 = value;
		Il2CppCodeGenWriteBarrier(&___markersMeshes_63, value);
	}

	inline static int32_t get_offset_of_markersRenderers_64() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___markersRenderers_64)); }
	inline List_1_t3921398993 * get_markersRenderers_64() const { return ___markersRenderers_64; }
	inline List_1_t3921398993 ** get_address_of_markersRenderers_64() { return &___markersRenderers_64; }
	inline void set_markersRenderers_64(List_1_t3921398993 * value)
	{
		___markersRenderers_64 = value;
		Il2CppCodeGenWriteBarrier(&___markersRenderers_64, value);
	}

	inline static int32_t get_offset_of_markerBillboards_65() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ___markerBillboards_65)); }
	inline Dictionary_2_t3797896220 * get_markerBillboards_65() const { return ___markerBillboards_65; }
	inline Dictionary_2_t3797896220 ** get_address_of_markerBillboards_65() { return &___markerBillboards_65; }
	inline void set_markerBillboards_65(Dictionary_2_t3797896220 * value)
	{
		___markerBillboards_65 = value;
		Il2CppCodeGenWriteBarrier(&___markerBillboards_65, value);
	}

	inline static int32_t get_offset_of__cl_66() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ____cl_66)); }
	inline Collider_t3497673348 * get__cl_66() const { return ____cl_66; }
	inline Collider_t3497673348 ** get_address_of__cl_66() { return &____cl_66; }
	inline void set__cl_66(Collider_t3497673348 * value)
	{
		____cl_66 = value;
		Il2CppCodeGenWriteBarrier(&____cl_66, value);
	}

	inline static int32_t get_offset_of__renderer_67() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279, ____renderer_67)); }
	inline Renderer_t257310565 * get__renderer_67() const { return ____renderer_67; }
	inline Renderer_t257310565 ** get_address_of__renderer_67() { return &____renderer_67; }
	inline void set__renderer_67(Renderer_t257310565 * value)
	{
		____renderer_67 = value;
		Il2CppCodeGenWriteBarrier(&____renderer_67, value);
	}
};

struct OnlineMapsControlBase3D_t2801313279_StaticFields
{
public:
	// System.Func`2<OnlineMapsMarker3D,System.Boolean> OnlineMapsControlBase3D::<>f__am$cache0
	Func_2_t1861874992 * ___U3CU3Ef__amU24cache0_68;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_68() { return static_cast<int32_t>(offsetof(OnlineMapsControlBase3D_t2801313279_StaticFields, ___U3CU3Ef__amU24cache0_68)); }
	inline Func_2_t1861874992 * get_U3CU3Ef__amU24cache0_68() const { return ___U3CU3Ef__amU24cache0_68; }
	inline Func_2_t1861874992 ** get_address_of_U3CU3Ef__amU24cache0_68() { return &___U3CU3Ef__amU24cache0_68; }
	inline void set_U3CU3Ef__amU24cache0_68(Func_2_t1861874992 * value)
	{
		___U3CU3Ef__amU24cache0_68 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_68, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
