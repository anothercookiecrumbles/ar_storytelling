#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<OnlineMapsTile,UnityEngine.Material>
struct Action_2_t2903233652;
// System.Predicate`1<OnlineMapsMarker>
struct Predicate_1_t1935136797;
// System.Action`2<UnityEngine.Vector2,UnityEngine.Vector2>
struct Action_2_t3492767325;
// System.Action
struct Action_t3226471752;
// System.Func`2<OnlineMapsMarker,System.Single>
struct Func_2_t2022702331;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Shader
struct Shader_t2430389951;
// OnlineMapsRange
struct OnlineMapsRange_t3791609909;
// System.Collections.Generic.IComparer`1<OnlineMapsMarker>
struct IComparer_1_t1446629804;
// UnityEngine.Material
struct Material_t193706927;
// OnlineMapsVector2i
struct OnlineMapsVector2i_t2180897250;
// OnlineMapsBingMapsElevation
struct OnlineMapsBingMapsElevation_t2714164788;
// System.Int16[0...,0...]
struct Int16U5BU2CU5D_t3104283264;
// UnityEngine.MeshCollider
struct MeshCollider_t2718867283;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// System.Collections.Generic.List`1<OnlineMapsTileSetControl/TilesetFlatMarker>
struct List_1_t2920006219;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// UnityEngine.BoxCollider
struct BoxCollider_t22920061;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Func`2<OnlineMapsMarker,OnlineMapsMarker>
struct Func_2_t3438359081;
// System.Func`2<OnlineMapsMarker,System.Double>
struct Func_2_t4024208080;
// System.Func`2<OnlineMapsTileSetControl/TilesetSortedMarker,System.Single>
struct Func_2_t1961126510;
// System.Func`2<OnlineMapsTileSetControl/TilesetSortedMarker,OnlineMapsMarker>
struct Func_2_t3376783260;

#include "AssemblyU2DCSharp_OnlineMapsControlBase3D2801313279.h"
#include "AssemblyU2DCSharp_OnlineMapsTilesetCheckMarker2DVi1564781124.h"
#include "AssemblyU2DCSharp_OnlineMapsTileSetControl_OnlineM3256055626.h"
#include "AssemblyU2DCSharp_OnlineMapsTilesetDrawingMode2982024227.h"
#include "AssemblyU2DCSharp_OnlineMapsTileSetControl_Elevati1983507059.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsTileSetControl
struct  OnlineMapsTileSetControl_t3368302803  : public OnlineMapsControlBase3D_t2801313279
{
public:
	// System.Action`2<OnlineMapsTile,UnityEngine.Material> OnlineMapsTileSetControl::OnChangeMaterialTexture
	Action_2_t2903233652 * ___OnChangeMaterialTexture_69;
	// System.Predicate`1<OnlineMapsMarker> OnlineMapsTileSetControl::OnCheckMarker2DVisibility
	Predicate_1_t1935136797 * ___OnCheckMarker2DVisibility_70;
	// System.Action`2<OnlineMapsTile,UnityEngine.Material> OnlineMapsTileSetControl::OnDrawTile
	Action_2_t2903233652 * ___OnDrawTile_71;
	// System.Action`2<UnityEngine.Vector2,UnityEngine.Vector2> OnlineMapsTileSetControl::OnGetElevation
	Action_2_t3492767325 * ___OnGetElevation_72;
	// System.Action OnlineMapsTileSetControl::OnElevationUpdated
	Action_t3226471752 * ___OnElevationUpdated_73;
	// System.Func`2<OnlineMapsMarker,System.Single> OnlineMapsTileSetControl::OnGetFlatMarkerOffsetY
	Func_2_t2022702331 * ___OnGetFlatMarkerOffsetY_74;
	// System.Action OnlineMapsTileSetControl::OnMeshUpdated
	Action_t3226471752 * ___OnMeshUpdated_75;
	// System.Action OnlineMapsTileSetControl::OnSmoothZoomBegin
	Action_t3226471752 * ___OnSmoothZoomBegin_76;
	// System.Action OnlineMapsTileSetControl::OnSmoothZoomFinish
	Action_t3226471752 * ___OnSmoothZoomFinish_77;
	// System.Action OnlineMapsTileSetControl::OnSmoothZoomInit
	Action_t3226471752 * ___OnSmoothZoomInit_78;
	// System.Action OnlineMapsTileSetControl::OnSmoothZoomProcess
	Action_t3226471752 * ___OnSmoothZoomProcess_79;
	// System.String OnlineMapsTileSetControl::bingAPI
	String_t* ___bingAPI_80;
	// OnlineMapsTilesetCheckMarker2DVisibility OnlineMapsTileSetControl::checkMarker2DVisibility
	int32_t ___checkMarker2DVisibility_81;
	// OnlineMapsTileSetControl/OnlineMapsColliderType OnlineMapsTileSetControl::colliderType
	int32_t ___colliderType_82;
	// UnityEngine.GameObject OnlineMapsTileSetControl::drawingsGameObject
	GameObject_t1756533147 * ___drawingsGameObject_83;
	// OnlineMapsTilesetDrawingMode OnlineMapsTileSetControl::drawingMode
	int32_t ___drawingMode_84;
	// UnityEngine.Shader OnlineMapsTileSetControl::drawingShader
	Shader_t2430389951 * ___drawingShader_85;
	// OnlineMapsRange OnlineMapsTileSetControl::elevationZoomRange
	OnlineMapsRange_t3791609909 * ___elevationZoomRange_86;
	// System.Single OnlineMapsTileSetControl::elevationScale
	float ___elevationScale_87;
	// OnlineMapsTileSetControl/ElevationBottomMode OnlineMapsTileSetControl::elevationBottomMode
	int32_t ___elevationBottomMode_88;
	// System.Int32 OnlineMapsTileSetControl::elevationResolution
	int32_t ___elevationResolution_89;
	// System.Int16 OnlineMapsTileSetControl::elevationMinValue
	int16_t ___elevationMinValue_90;
	// System.Int16 OnlineMapsTileSetControl::elevationMaxValue
	int16_t ___elevationMaxValue_91;
	// System.Boolean OnlineMapsTileSetControl::lockYScale
	bool ___lockYScale_92;
	// System.Collections.Generic.IComparer`1<OnlineMapsMarker> OnlineMapsTileSetControl::markerComparer
	Il2CppObject* ___markerComparer_93;
	// UnityEngine.Material OnlineMapsTileSetControl::markerMaterial
	Material_t193706927 * ___markerMaterial_94;
	// UnityEngine.Shader OnlineMapsTileSetControl::markerShader
	Shader_t2430389951 * ___markerShader_95;
	// System.Boolean OnlineMapsTileSetControl::smoothZoom
	bool ___smoothZoom_96;
	// System.Single OnlineMapsTileSetControl::smoothZoomMinScale
	float ___smoothZoomMinScale_97;
	// System.Single OnlineMapsTileSetControl::smoothZoomMaxScale
	float ___smoothZoomMaxScale_98;
	// System.Boolean OnlineMapsTileSetControl::smoothZoomStarted
	bool ___smoothZoomStarted_99;
	// UnityEngine.Material OnlineMapsTileSetControl::tileMaterial
	Material_t193706927 * ___tileMaterial_100;
	// UnityEngine.Shader OnlineMapsTileSetControl::tilesetShader
	Shader_t2430389951 * ___tilesetShader_101;
	// System.Boolean OnlineMapsTileSetControl::useElevation
	bool ___useElevation_102;
	// System.Single OnlineMapsTileSetControl::yScaleValue
	float ___yScaleValue_103;
	// System.Boolean OnlineMapsTileSetControl::_useElevation
	bool ____useElevation_104;
	// OnlineMapsVector2i OnlineMapsTileSetControl::_bufferPosition
	OnlineMapsVector2i_t2180897250 * ____bufferPosition_105;
	// OnlineMapsBingMapsElevation OnlineMapsTileSetControl::elevationRequest
	OnlineMapsBingMapsElevation_t2714164788 * ___elevationRequest_106;
	// System.Single OnlineMapsTileSetControl::elevationRequestX1
	float ___elevationRequestX1_107;
	// System.Single OnlineMapsTileSetControl::elevationRequestY1
	float ___elevationRequestY1_108;
	// System.Single OnlineMapsTileSetControl::elevationRequestX2
	float ___elevationRequestX2_109;
	// System.Single OnlineMapsTileSetControl::elevationRequestY2
	float ___elevationRequestY2_110;
	// System.Single OnlineMapsTileSetControl::elevationRequestW
	float ___elevationRequestW_111;
	// System.Single OnlineMapsTileSetControl::elevationRequestH
	float ___elevationRequestH_112;
	// System.Int16[0...,0...] OnlineMapsTileSetControl::elevationData
	Int16U5BU2CU5D_t3104283264* ___elevationData_113;
	// System.Single OnlineMapsTileSetControl::elevationX1
	float ___elevationX1_114;
	// System.Single OnlineMapsTileSetControl::elevationY1
	float ___elevationY1_115;
	// System.Single OnlineMapsTileSetControl::elevationW
	float ___elevationW_116;
	// System.Single OnlineMapsTileSetControl::elevationH
	float ___elevationH_117;
	// UnityEngine.MeshCollider OnlineMapsTileSetControl::meshCollider
	MeshCollider_t2718867283 * ___meshCollider_118;
	// System.Boolean OnlineMapsTileSetControl::ignoreGetElevation
	bool ___ignoreGetElevation_119;
	// UnityEngine.Mesh OnlineMapsTileSetControl::tilesetMesh
	Mesh_t1356156583 * ___tilesetMesh_120;
	// System.Int32[] OnlineMapsTileSetControl::triangles
	Int32U5BU5D_t3030399641* ___triangles_121;
	// UnityEngine.Vector2[] OnlineMapsTileSetControl::uv
	Vector2U5BU5D_t686124026* ___uv_122;
	// UnityEngine.Vector3[] OnlineMapsTileSetControl::vertices
	Vector3U5BU5D_t1172311765* ___vertices_123;
	// OnlineMapsVector2i OnlineMapsTileSetControl::elevationBufferPosition
	OnlineMapsVector2i_t2180897250 * ___elevationBufferPosition_124;
	// UnityEngine.Vector2 OnlineMapsTileSetControl::smoothZoomPoint
	Vector2_t2243707579  ___smoothZoomPoint_125;
	// UnityEngine.Vector3 OnlineMapsTileSetControl::smoothZoomOffset
	Vector3_t2243707580  ___smoothZoomOffset_126;
	// UnityEngine.Vector3 OnlineMapsTileSetControl::smoothZoomHitPoint
	Vector3_t2243707580  ___smoothZoomHitPoint_127;
	// System.Boolean OnlineMapsTileSetControl::firstUpdate
	bool ___firstUpdate_128;
	// System.Collections.Generic.List`1<OnlineMapsTileSetControl/TilesetFlatMarker> OnlineMapsTileSetControl::usedMarkers
	List_1_t2920006219 * ___usedMarkers_129;
	// UnityEngine.Color32[] OnlineMapsTileSetControl::overlayFrontBuffer
	Color32U5BU5D_t30278651* ___overlayFrontBuffer_130;
	// System.Boolean OnlineMapsTileSetControl::colliderWithElevation
	bool ___colliderWithElevation_131;
	// UnityEngine.BoxCollider OnlineMapsTileSetControl::boxCollider
	BoxCollider_t22920061 * ___boxCollider_132;
	// System.Int32 OnlineMapsTileSetControl::elevationDataWidth
	int32_t ___elevationDataWidth_133;
	// System.Int32 OnlineMapsTileSetControl::elevationDataHeight
	int32_t ___elevationDataHeight_134;
	// System.Boolean OnlineMapsTileSetControl::waitSetElevationData
	bool ___waitSetElevationData_135;
	// System.Int32 OnlineMapsTileSetControl::waitMapZoom
	int32_t ___waitMapZoom_136;
	// System.Boolean OnlineMapsTileSetControl::needRestoreGestureZoom
	bool ___needRestoreGestureZoom_137;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> OnlineMapsTileSetControl::markersVerticles
	List_1_t1612828712 * ___markersVerticles_138;

public:
	inline static int32_t get_offset_of_OnChangeMaterialTexture_69() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___OnChangeMaterialTexture_69)); }
	inline Action_2_t2903233652 * get_OnChangeMaterialTexture_69() const { return ___OnChangeMaterialTexture_69; }
	inline Action_2_t2903233652 ** get_address_of_OnChangeMaterialTexture_69() { return &___OnChangeMaterialTexture_69; }
	inline void set_OnChangeMaterialTexture_69(Action_2_t2903233652 * value)
	{
		___OnChangeMaterialTexture_69 = value;
		Il2CppCodeGenWriteBarrier(&___OnChangeMaterialTexture_69, value);
	}

	inline static int32_t get_offset_of_OnCheckMarker2DVisibility_70() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___OnCheckMarker2DVisibility_70)); }
	inline Predicate_1_t1935136797 * get_OnCheckMarker2DVisibility_70() const { return ___OnCheckMarker2DVisibility_70; }
	inline Predicate_1_t1935136797 ** get_address_of_OnCheckMarker2DVisibility_70() { return &___OnCheckMarker2DVisibility_70; }
	inline void set_OnCheckMarker2DVisibility_70(Predicate_1_t1935136797 * value)
	{
		___OnCheckMarker2DVisibility_70 = value;
		Il2CppCodeGenWriteBarrier(&___OnCheckMarker2DVisibility_70, value);
	}

	inline static int32_t get_offset_of_OnDrawTile_71() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___OnDrawTile_71)); }
	inline Action_2_t2903233652 * get_OnDrawTile_71() const { return ___OnDrawTile_71; }
	inline Action_2_t2903233652 ** get_address_of_OnDrawTile_71() { return &___OnDrawTile_71; }
	inline void set_OnDrawTile_71(Action_2_t2903233652 * value)
	{
		___OnDrawTile_71 = value;
		Il2CppCodeGenWriteBarrier(&___OnDrawTile_71, value);
	}

	inline static int32_t get_offset_of_OnGetElevation_72() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___OnGetElevation_72)); }
	inline Action_2_t3492767325 * get_OnGetElevation_72() const { return ___OnGetElevation_72; }
	inline Action_2_t3492767325 ** get_address_of_OnGetElevation_72() { return &___OnGetElevation_72; }
	inline void set_OnGetElevation_72(Action_2_t3492767325 * value)
	{
		___OnGetElevation_72 = value;
		Il2CppCodeGenWriteBarrier(&___OnGetElevation_72, value);
	}

	inline static int32_t get_offset_of_OnElevationUpdated_73() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___OnElevationUpdated_73)); }
	inline Action_t3226471752 * get_OnElevationUpdated_73() const { return ___OnElevationUpdated_73; }
	inline Action_t3226471752 ** get_address_of_OnElevationUpdated_73() { return &___OnElevationUpdated_73; }
	inline void set_OnElevationUpdated_73(Action_t3226471752 * value)
	{
		___OnElevationUpdated_73 = value;
		Il2CppCodeGenWriteBarrier(&___OnElevationUpdated_73, value);
	}

	inline static int32_t get_offset_of_OnGetFlatMarkerOffsetY_74() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___OnGetFlatMarkerOffsetY_74)); }
	inline Func_2_t2022702331 * get_OnGetFlatMarkerOffsetY_74() const { return ___OnGetFlatMarkerOffsetY_74; }
	inline Func_2_t2022702331 ** get_address_of_OnGetFlatMarkerOffsetY_74() { return &___OnGetFlatMarkerOffsetY_74; }
	inline void set_OnGetFlatMarkerOffsetY_74(Func_2_t2022702331 * value)
	{
		___OnGetFlatMarkerOffsetY_74 = value;
		Il2CppCodeGenWriteBarrier(&___OnGetFlatMarkerOffsetY_74, value);
	}

	inline static int32_t get_offset_of_OnMeshUpdated_75() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___OnMeshUpdated_75)); }
	inline Action_t3226471752 * get_OnMeshUpdated_75() const { return ___OnMeshUpdated_75; }
	inline Action_t3226471752 ** get_address_of_OnMeshUpdated_75() { return &___OnMeshUpdated_75; }
	inline void set_OnMeshUpdated_75(Action_t3226471752 * value)
	{
		___OnMeshUpdated_75 = value;
		Il2CppCodeGenWriteBarrier(&___OnMeshUpdated_75, value);
	}

	inline static int32_t get_offset_of_OnSmoothZoomBegin_76() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___OnSmoothZoomBegin_76)); }
	inline Action_t3226471752 * get_OnSmoothZoomBegin_76() const { return ___OnSmoothZoomBegin_76; }
	inline Action_t3226471752 ** get_address_of_OnSmoothZoomBegin_76() { return &___OnSmoothZoomBegin_76; }
	inline void set_OnSmoothZoomBegin_76(Action_t3226471752 * value)
	{
		___OnSmoothZoomBegin_76 = value;
		Il2CppCodeGenWriteBarrier(&___OnSmoothZoomBegin_76, value);
	}

	inline static int32_t get_offset_of_OnSmoothZoomFinish_77() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___OnSmoothZoomFinish_77)); }
	inline Action_t3226471752 * get_OnSmoothZoomFinish_77() const { return ___OnSmoothZoomFinish_77; }
	inline Action_t3226471752 ** get_address_of_OnSmoothZoomFinish_77() { return &___OnSmoothZoomFinish_77; }
	inline void set_OnSmoothZoomFinish_77(Action_t3226471752 * value)
	{
		___OnSmoothZoomFinish_77 = value;
		Il2CppCodeGenWriteBarrier(&___OnSmoothZoomFinish_77, value);
	}

	inline static int32_t get_offset_of_OnSmoothZoomInit_78() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___OnSmoothZoomInit_78)); }
	inline Action_t3226471752 * get_OnSmoothZoomInit_78() const { return ___OnSmoothZoomInit_78; }
	inline Action_t3226471752 ** get_address_of_OnSmoothZoomInit_78() { return &___OnSmoothZoomInit_78; }
	inline void set_OnSmoothZoomInit_78(Action_t3226471752 * value)
	{
		___OnSmoothZoomInit_78 = value;
		Il2CppCodeGenWriteBarrier(&___OnSmoothZoomInit_78, value);
	}

	inline static int32_t get_offset_of_OnSmoothZoomProcess_79() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___OnSmoothZoomProcess_79)); }
	inline Action_t3226471752 * get_OnSmoothZoomProcess_79() const { return ___OnSmoothZoomProcess_79; }
	inline Action_t3226471752 ** get_address_of_OnSmoothZoomProcess_79() { return &___OnSmoothZoomProcess_79; }
	inline void set_OnSmoothZoomProcess_79(Action_t3226471752 * value)
	{
		___OnSmoothZoomProcess_79 = value;
		Il2CppCodeGenWriteBarrier(&___OnSmoothZoomProcess_79, value);
	}

	inline static int32_t get_offset_of_bingAPI_80() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___bingAPI_80)); }
	inline String_t* get_bingAPI_80() const { return ___bingAPI_80; }
	inline String_t** get_address_of_bingAPI_80() { return &___bingAPI_80; }
	inline void set_bingAPI_80(String_t* value)
	{
		___bingAPI_80 = value;
		Il2CppCodeGenWriteBarrier(&___bingAPI_80, value);
	}

	inline static int32_t get_offset_of_checkMarker2DVisibility_81() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___checkMarker2DVisibility_81)); }
	inline int32_t get_checkMarker2DVisibility_81() const { return ___checkMarker2DVisibility_81; }
	inline int32_t* get_address_of_checkMarker2DVisibility_81() { return &___checkMarker2DVisibility_81; }
	inline void set_checkMarker2DVisibility_81(int32_t value)
	{
		___checkMarker2DVisibility_81 = value;
	}

	inline static int32_t get_offset_of_colliderType_82() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___colliderType_82)); }
	inline int32_t get_colliderType_82() const { return ___colliderType_82; }
	inline int32_t* get_address_of_colliderType_82() { return &___colliderType_82; }
	inline void set_colliderType_82(int32_t value)
	{
		___colliderType_82 = value;
	}

	inline static int32_t get_offset_of_drawingsGameObject_83() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___drawingsGameObject_83)); }
	inline GameObject_t1756533147 * get_drawingsGameObject_83() const { return ___drawingsGameObject_83; }
	inline GameObject_t1756533147 ** get_address_of_drawingsGameObject_83() { return &___drawingsGameObject_83; }
	inline void set_drawingsGameObject_83(GameObject_t1756533147 * value)
	{
		___drawingsGameObject_83 = value;
		Il2CppCodeGenWriteBarrier(&___drawingsGameObject_83, value);
	}

	inline static int32_t get_offset_of_drawingMode_84() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___drawingMode_84)); }
	inline int32_t get_drawingMode_84() const { return ___drawingMode_84; }
	inline int32_t* get_address_of_drawingMode_84() { return &___drawingMode_84; }
	inline void set_drawingMode_84(int32_t value)
	{
		___drawingMode_84 = value;
	}

	inline static int32_t get_offset_of_drawingShader_85() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___drawingShader_85)); }
	inline Shader_t2430389951 * get_drawingShader_85() const { return ___drawingShader_85; }
	inline Shader_t2430389951 ** get_address_of_drawingShader_85() { return &___drawingShader_85; }
	inline void set_drawingShader_85(Shader_t2430389951 * value)
	{
		___drawingShader_85 = value;
		Il2CppCodeGenWriteBarrier(&___drawingShader_85, value);
	}

	inline static int32_t get_offset_of_elevationZoomRange_86() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationZoomRange_86)); }
	inline OnlineMapsRange_t3791609909 * get_elevationZoomRange_86() const { return ___elevationZoomRange_86; }
	inline OnlineMapsRange_t3791609909 ** get_address_of_elevationZoomRange_86() { return &___elevationZoomRange_86; }
	inline void set_elevationZoomRange_86(OnlineMapsRange_t3791609909 * value)
	{
		___elevationZoomRange_86 = value;
		Il2CppCodeGenWriteBarrier(&___elevationZoomRange_86, value);
	}

	inline static int32_t get_offset_of_elevationScale_87() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationScale_87)); }
	inline float get_elevationScale_87() const { return ___elevationScale_87; }
	inline float* get_address_of_elevationScale_87() { return &___elevationScale_87; }
	inline void set_elevationScale_87(float value)
	{
		___elevationScale_87 = value;
	}

	inline static int32_t get_offset_of_elevationBottomMode_88() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationBottomMode_88)); }
	inline int32_t get_elevationBottomMode_88() const { return ___elevationBottomMode_88; }
	inline int32_t* get_address_of_elevationBottomMode_88() { return &___elevationBottomMode_88; }
	inline void set_elevationBottomMode_88(int32_t value)
	{
		___elevationBottomMode_88 = value;
	}

	inline static int32_t get_offset_of_elevationResolution_89() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationResolution_89)); }
	inline int32_t get_elevationResolution_89() const { return ___elevationResolution_89; }
	inline int32_t* get_address_of_elevationResolution_89() { return &___elevationResolution_89; }
	inline void set_elevationResolution_89(int32_t value)
	{
		___elevationResolution_89 = value;
	}

	inline static int32_t get_offset_of_elevationMinValue_90() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationMinValue_90)); }
	inline int16_t get_elevationMinValue_90() const { return ___elevationMinValue_90; }
	inline int16_t* get_address_of_elevationMinValue_90() { return &___elevationMinValue_90; }
	inline void set_elevationMinValue_90(int16_t value)
	{
		___elevationMinValue_90 = value;
	}

	inline static int32_t get_offset_of_elevationMaxValue_91() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationMaxValue_91)); }
	inline int16_t get_elevationMaxValue_91() const { return ___elevationMaxValue_91; }
	inline int16_t* get_address_of_elevationMaxValue_91() { return &___elevationMaxValue_91; }
	inline void set_elevationMaxValue_91(int16_t value)
	{
		___elevationMaxValue_91 = value;
	}

	inline static int32_t get_offset_of_lockYScale_92() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___lockYScale_92)); }
	inline bool get_lockYScale_92() const { return ___lockYScale_92; }
	inline bool* get_address_of_lockYScale_92() { return &___lockYScale_92; }
	inline void set_lockYScale_92(bool value)
	{
		___lockYScale_92 = value;
	}

	inline static int32_t get_offset_of_markerComparer_93() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___markerComparer_93)); }
	inline Il2CppObject* get_markerComparer_93() const { return ___markerComparer_93; }
	inline Il2CppObject** get_address_of_markerComparer_93() { return &___markerComparer_93; }
	inline void set_markerComparer_93(Il2CppObject* value)
	{
		___markerComparer_93 = value;
		Il2CppCodeGenWriteBarrier(&___markerComparer_93, value);
	}

	inline static int32_t get_offset_of_markerMaterial_94() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___markerMaterial_94)); }
	inline Material_t193706927 * get_markerMaterial_94() const { return ___markerMaterial_94; }
	inline Material_t193706927 ** get_address_of_markerMaterial_94() { return &___markerMaterial_94; }
	inline void set_markerMaterial_94(Material_t193706927 * value)
	{
		___markerMaterial_94 = value;
		Il2CppCodeGenWriteBarrier(&___markerMaterial_94, value);
	}

	inline static int32_t get_offset_of_markerShader_95() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___markerShader_95)); }
	inline Shader_t2430389951 * get_markerShader_95() const { return ___markerShader_95; }
	inline Shader_t2430389951 ** get_address_of_markerShader_95() { return &___markerShader_95; }
	inline void set_markerShader_95(Shader_t2430389951 * value)
	{
		___markerShader_95 = value;
		Il2CppCodeGenWriteBarrier(&___markerShader_95, value);
	}

	inline static int32_t get_offset_of_smoothZoom_96() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___smoothZoom_96)); }
	inline bool get_smoothZoom_96() const { return ___smoothZoom_96; }
	inline bool* get_address_of_smoothZoom_96() { return &___smoothZoom_96; }
	inline void set_smoothZoom_96(bool value)
	{
		___smoothZoom_96 = value;
	}

	inline static int32_t get_offset_of_smoothZoomMinScale_97() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___smoothZoomMinScale_97)); }
	inline float get_smoothZoomMinScale_97() const { return ___smoothZoomMinScale_97; }
	inline float* get_address_of_smoothZoomMinScale_97() { return &___smoothZoomMinScale_97; }
	inline void set_smoothZoomMinScale_97(float value)
	{
		___smoothZoomMinScale_97 = value;
	}

	inline static int32_t get_offset_of_smoothZoomMaxScale_98() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___smoothZoomMaxScale_98)); }
	inline float get_smoothZoomMaxScale_98() const { return ___smoothZoomMaxScale_98; }
	inline float* get_address_of_smoothZoomMaxScale_98() { return &___smoothZoomMaxScale_98; }
	inline void set_smoothZoomMaxScale_98(float value)
	{
		___smoothZoomMaxScale_98 = value;
	}

	inline static int32_t get_offset_of_smoothZoomStarted_99() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___smoothZoomStarted_99)); }
	inline bool get_smoothZoomStarted_99() const { return ___smoothZoomStarted_99; }
	inline bool* get_address_of_smoothZoomStarted_99() { return &___smoothZoomStarted_99; }
	inline void set_smoothZoomStarted_99(bool value)
	{
		___smoothZoomStarted_99 = value;
	}

	inline static int32_t get_offset_of_tileMaterial_100() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___tileMaterial_100)); }
	inline Material_t193706927 * get_tileMaterial_100() const { return ___tileMaterial_100; }
	inline Material_t193706927 ** get_address_of_tileMaterial_100() { return &___tileMaterial_100; }
	inline void set_tileMaterial_100(Material_t193706927 * value)
	{
		___tileMaterial_100 = value;
		Il2CppCodeGenWriteBarrier(&___tileMaterial_100, value);
	}

	inline static int32_t get_offset_of_tilesetShader_101() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___tilesetShader_101)); }
	inline Shader_t2430389951 * get_tilesetShader_101() const { return ___tilesetShader_101; }
	inline Shader_t2430389951 ** get_address_of_tilesetShader_101() { return &___tilesetShader_101; }
	inline void set_tilesetShader_101(Shader_t2430389951 * value)
	{
		___tilesetShader_101 = value;
		Il2CppCodeGenWriteBarrier(&___tilesetShader_101, value);
	}

	inline static int32_t get_offset_of_useElevation_102() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___useElevation_102)); }
	inline bool get_useElevation_102() const { return ___useElevation_102; }
	inline bool* get_address_of_useElevation_102() { return &___useElevation_102; }
	inline void set_useElevation_102(bool value)
	{
		___useElevation_102 = value;
	}

	inline static int32_t get_offset_of_yScaleValue_103() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___yScaleValue_103)); }
	inline float get_yScaleValue_103() const { return ___yScaleValue_103; }
	inline float* get_address_of_yScaleValue_103() { return &___yScaleValue_103; }
	inline void set_yScaleValue_103(float value)
	{
		___yScaleValue_103 = value;
	}

	inline static int32_t get_offset_of__useElevation_104() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ____useElevation_104)); }
	inline bool get__useElevation_104() const { return ____useElevation_104; }
	inline bool* get_address_of__useElevation_104() { return &____useElevation_104; }
	inline void set__useElevation_104(bool value)
	{
		____useElevation_104 = value;
	}

	inline static int32_t get_offset_of__bufferPosition_105() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ____bufferPosition_105)); }
	inline OnlineMapsVector2i_t2180897250 * get__bufferPosition_105() const { return ____bufferPosition_105; }
	inline OnlineMapsVector2i_t2180897250 ** get_address_of__bufferPosition_105() { return &____bufferPosition_105; }
	inline void set__bufferPosition_105(OnlineMapsVector2i_t2180897250 * value)
	{
		____bufferPosition_105 = value;
		Il2CppCodeGenWriteBarrier(&____bufferPosition_105, value);
	}

	inline static int32_t get_offset_of_elevationRequest_106() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationRequest_106)); }
	inline OnlineMapsBingMapsElevation_t2714164788 * get_elevationRequest_106() const { return ___elevationRequest_106; }
	inline OnlineMapsBingMapsElevation_t2714164788 ** get_address_of_elevationRequest_106() { return &___elevationRequest_106; }
	inline void set_elevationRequest_106(OnlineMapsBingMapsElevation_t2714164788 * value)
	{
		___elevationRequest_106 = value;
		Il2CppCodeGenWriteBarrier(&___elevationRequest_106, value);
	}

	inline static int32_t get_offset_of_elevationRequestX1_107() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationRequestX1_107)); }
	inline float get_elevationRequestX1_107() const { return ___elevationRequestX1_107; }
	inline float* get_address_of_elevationRequestX1_107() { return &___elevationRequestX1_107; }
	inline void set_elevationRequestX1_107(float value)
	{
		___elevationRequestX1_107 = value;
	}

	inline static int32_t get_offset_of_elevationRequestY1_108() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationRequestY1_108)); }
	inline float get_elevationRequestY1_108() const { return ___elevationRequestY1_108; }
	inline float* get_address_of_elevationRequestY1_108() { return &___elevationRequestY1_108; }
	inline void set_elevationRequestY1_108(float value)
	{
		___elevationRequestY1_108 = value;
	}

	inline static int32_t get_offset_of_elevationRequestX2_109() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationRequestX2_109)); }
	inline float get_elevationRequestX2_109() const { return ___elevationRequestX2_109; }
	inline float* get_address_of_elevationRequestX2_109() { return &___elevationRequestX2_109; }
	inline void set_elevationRequestX2_109(float value)
	{
		___elevationRequestX2_109 = value;
	}

	inline static int32_t get_offset_of_elevationRequestY2_110() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationRequestY2_110)); }
	inline float get_elevationRequestY2_110() const { return ___elevationRequestY2_110; }
	inline float* get_address_of_elevationRequestY2_110() { return &___elevationRequestY2_110; }
	inline void set_elevationRequestY2_110(float value)
	{
		___elevationRequestY2_110 = value;
	}

	inline static int32_t get_offset_of_elevationRequestW_111() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationRequestW_111)); }
	inline float get_elevationRequestW_111() const { return ___elevationRequestW_111; }
	inline float* get_address_of_elevationRequestW_111() { return &___elevationRequestW_111; }
	inline void set_elevationRequestW_111(float value)
	{
		___elevationRequestW_111 = value;
	}

	inline static int32_t get_offset_of_elevationRequestH_112() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationRequestH_112)); }
	inline float get_elevationRequestH_112() const { return ___elevationRequestH_112; }
	inline float* get_address_of_elevationRequestH_112() { return &___elevationRequestH_112; }
	inline void set_elevationRequestH_112(float value)
	{
		___elevationRequestH_112 = value;
	}

	inline static int32_t get_offset_of_elevationData_113() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationData_113)); }
	inline Int16U5BU2CU5D_t3104283264* get_elevationData_113() const { return ___elevationData_113; }
	inline Int16U5BU2CU5D_t3104283264** get_address_of_elevationData_113() { return &___elevationData_113; }
	inline void set_elevationData_113(Int16U5BU2CU5D_t3104283264* value)
	{
		___elevationData_113 = value;
		Il2CppCodeGenWriteBarrier(&___elevationData_113, value);
	}

	inline static int32_t get_offset_of_elevationX1_114() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationX1_114)); }
	inline float get_elevationX1_114() const { return ___elevationX1_114; }
	inline float* get_address_of_elevationX1_114() { return &___elevationX1_114; }
	inline void set_elevationX1_114(float value)
	{
		___elevationX1_114 = value;
	}

	inline static int32_t get_offset_of_elevationY1_115() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationY1_115)); }
	inline float get_elevationY1_115() const { return ___elevationY1_115; }
	inline float* get_address_of_elevationY1_115() { return &___elevationY1_115; }
	inline void set_elevationY1_115(float value)
	{
		___elevationY1_115 = value;
	}

	inline static int32_t get_offset_of_elevationW_116() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationW_116)); }
	inline float get_elevationW_116() const { return ___elevationW_116; }
	inline float* get_address_of_elevationW_116() { return &___elevationW_116; }
	inline void set_elevationW_116(float value)
	{
		___elevationW_116 = value;
	}

	inline static int32_t get_offset_of_elevationH_117() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationH_117)); }
	inline float get_elevationH_117() const { return ___elevationH_117; }
	inline float* get_address_of_elevationH_117() { return &___elevationH_117; }
	inline void set_elevationH_117(float value)
	{
		___elevationH_117 = value;
	}

	inline static int32_t get_offset_of_meshCollider_118() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___meshCollider_118)); }
	inline MeshCollider_t2718867283 * get_meshCollider_118() const { return ___meshCollider_118; }
	inline MeshCollider_t2718867283 ** get_address_of_meshCollider_118() { return &___meshCollider_118; }
	inline void set_meshCollider_118(MeshCollider_t2718867283 * value)
	{
		___meshCollider_118 = value;
		Il2CppCodeGenWriteBarrier(&___meshCollider_118, value);
	}

	inline static int32_t get_offset_of_ignoreGetElevation_119() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___ignoreGetElevation_119)); }
	inline bool get_ignoreGetElevation_119() const { return ___ignoreGetElevation_119; }
	inline bool* get_address_of_ignoreGetElevation_119() { return &___ignoreGetElevation_119; }
	inline void set_ignoreGetElevation_119(bool value)
	{
		___ignoreGetElevation_119 = value;
	}

	inline static int32_t get_offset_of_tilesetMesh_120() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___tilesetMesh_120)); }
	inline Mesh_t1356156583 * get_tilesetMesh_120() const { return ___tilesetMesh_120; }
	inline Mesh_t1356156583 ** get_address_of_tilesetMesh_120() { return &___tilesetMesh_120; }
	inline void set_tilesetMesh_120(Mesh_t1356156583 * value)
	{
		___tilesetMesh_120 = value;
		Il2CppCodeGenWriteBarrier(&___tilesetMesh_120, value);
	}

	inline static int32_t get_offset_of_triangles_121() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___triangles_121)); }
	inline Int32U5BU5D_t3030399641* get_triangles_121() const { return ___triangles_121; }
	inline Int32U5BU5D_t3030399641** get_address_of_triangles_121() { return &___triangles_121; }
	inline void set_triangles_121(Int32U5BU5D_t3030399641* value)
	{
		___triangles_121 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_121, value);
	}

	inline static int32_t get_offset_of_uv_122() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___uv_122)); }
	inline Vector2U5BU5D_t686124026* get_uv_122() const { return ___uv_122; }
	inline Vector2U5BU5D_t686124026** get_address_of_uv_122() { return &___uv_122; }
	inline void set_uv_122(Vector2U5BU5D_t686124026* value)
	{
		___uv_122 = value;
		Il2CppCodeGenWriteBarrier(&___uv_122, value);
	}

	inline static int32_t get_offset_of_vertices_123() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___vertices_123)); }
	inline Vector3U5BU5D_t1172311765* get_vertices_123() const { return ___vertices_123; }
	inline Vector3U5BU5D_t1172311765** get_address_of_vertices_123() { return &___vertices_123; }
	inline void set_vertices_123(Vector3U5BU5D_t1172311765* value)
	{
		___vertices_123 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_123, value);
	}

	inline static int32_t get_offset_of_elevationBufferPosition_124() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationBufferPosition_124)); }
	inline OnlineMapsVector2i_t2180897250 * get_elevationBufferPosition_124() const { return ___elevationBufferPosition_124; }
	inline OnlineMapsVector2i_t2180897250 ** get_address_of_elevationBufferPosition_124() { return &___elevationBufferPosition_124; }
	inline void set_elevationBufferPosition_124(OnlineMapsVector2i_t2180897250 * value)
	{
		___elevationBufferPosition_124 = value;
		Il2CppCodeGenWriteBarrier(&___elevationBufferPosition_124, value);
	}

	inline static int32_t get_offset_of_smoothZoomPoint_125() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___smoothZoomPoint_125)); }
	inline Vector2_t2243707579  get_smoothZoomPoint_125() const { return ___smoothZoomPoint_125; }
	inline Vector2_t2243707579 * get_address_of_smoothZoomPoint_125() { return &___smoothZoomPoint_125; }
	inline void set_smoothZoomPoint_125(Vector2_t2243707579  value)
	{
		___smoothZoomPoint_125 = value;
	}

	inline static int32_t get_offset_of_smoothZoomOffset_126() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___smoothZoomOffset_126)); }
	inline Vector3_t2243707580  get_smoothZoomOffset_126() const { return ___smoothZoomOffset_126; }
	inline Vector3_t2243707580 * get_address_of_smoothZoomOffset_126() { return &___smoothZoomOffset_126; }
	inline void set_smoothZoomOffset_126(Vector3_t2243707580  value)
	{
		___smoothZoomOffset_126 = value;
	}

	inline static int32_t get_offset_of_smoothZoomHitPoint_127() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___smoothZoomHitPoint_127)); }
	inline Vector3_t2243707580  get_smoothZoomHitPoint_127() const { return ___smoothZoomHitPoint_127; }
	inline Vector3_t2243707580 * get_address_of_smoothZoomHitPoint_127() { return &___smoothZoomHitPoint_127; }
	inline void set_smoothZoomHitPoint_127(Vector3_t2243707580  value)
	{
		___smoothZoomHitPoint_127 = value;
	}

	inline static int32_t get_offset_of_firstUpdate_128() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___firstUpdate_128)); }
	inline bool get_firstUpdate_128() const { return ___firstUpdate_128; }
	inline bool* get_address_of_firstUpdate_128() { return &___firstUpdate_128; }
	inline void set_firstUpdate_128(bool value)
	{
		___firstUpdate_128 = value;
	}

	inline static int32_t get_offset_of_usedMarkers_129() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___usedMarkers_129)); }
	inline List_1_t2920006219 * get_usedMarkers_129() const { return ___usedMarkers_129; }
	inline List_1_t2920006219 ** get_address_of_usedMarkers_129() { return &___usedMarkers_129; }
	inline void set_usedMarkers_129(List_1_t2920006219 * value)
	{
		___usedMarkers_129 = value;
		Il2CppCodeGenWriteBarrier(&___usedMarkers_129, value);
	}

	inline static int32_t get_offset_of_overlayFrontBuffer_130() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___overlayFrontBuffer_130)); }
	inline Color32U5BU5D_t30278651* get_overlayFrontBuffer_130() const { return ___overlayFrontBuffer_130; }
	inline Color32U5BU5D_t30278651** get_address_of_overlayFrontBuffer_130() { return &___overlayFrontBuffer_130; }
	inline void set_overlayFrontBuffer_130(Color32U5BU5D_t30278651* value)
	{
		___overlayFrontBuffer_130 = value;
		Il2CppCodeGenWriteBarrier(&___overlayFrontBuffer_130, value);
	}

	inline static int32_t get_offset_of_colliderWithElevation_131() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___colliderWithElevation_131)); }
	inline bool get_colliderWithElevation_131() const { return ___colliderWithElevation_131; }
	inline bool* get_address_of_colliderWithElevation_131() { return &___colliderWithElevation_131; }
	inline void set_colliderWithElevation_131(bool value)
	{
		___colliderWithElevation_131 = value;
	}

	inline static int32_t get_offset_of_boxCollider_132() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___boxCollider_132)); }
	inline BoxCollider_t22920061 * get_boxCollider_132() const { return ___boxCollider_132; }
	inline BoxCollider_t22920061 ** get_address_of_boxCollider_132() { return &___boxCollider_132; }
	inline void set_boxCollider_132(BoxCollider_t22920061 * value)
	{
		___boxCollider_132 = value;
		Il2CppCodeGenWriteBarrier(&___boxCollider_132, value);
	}

	inline static int32_t get_offset_of_elevationDataWidth_133() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationDataWidth_133)); }
	inline int32_t get_elevationDataWidth_133() const { return ___elevationDataWidth_133; }
	inline int32_t* get_address_of_elevationDataWidth_133() { return &___elevationDataWidth_133; }
	inline void set_elevationDataWidth_133(int32_t value)
	{
		___elevationDataWidth_133 = value;
	}

	inline static int32_t get_offset_of_elevationDataHeight_134() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___elevationDataHeight_134)); }
	inline int32_t get_elevationDataHeight_134() const { return ___elevationDataHeight_134; }
	inline int32_t* get_address_of_elevationDataHeight_134() { return &___elevationDataHeight_134; }
	inline void set_elevationDataHeight_134(int32_t value)
	{
		___elevationDataHeight_134 = value;
	}

	inline static int32_t get_offset_of_waitSetElevationData_135() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___waitSetElevationData_135)); }
	inline bool get_waitSetElevationData_135() const { return ___waitSetElevationData_135; }
	inline bool* get_address_of_waitSetElevationData_135() { return &___waitSetElevationData_135; }
	inline void set_waitSetElevationData_135(bool value)
	{
		___waitSetElevationData_135 = value;
	}

	inline static int32_t get_offset_of_waitMapZoom_136() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___waitMapZoom_136)); }
	inline int32_t get_waitMapZoom_136() const { return ___waitMapZoom_136; }
	inline int32_t* get_address_of_waitMapZoom_136() { return &___waitMapZoom_136; }
	inline void set_waitMapZoom_136(int32_t value)
	{
		___waitMapZoom_136 = value;
	}

	inline static int32_t get_offset_of_needRestoreGestureZoom_137() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___needRestoreGestureZoom_137)); }
	inline bool get_needRestoreGestureZoom_137() const { return ___needRestoreGestureZoom_137; }
	inline bool* get_address_of_needRestoreGestureZoom_137() { return &___needRestoreGestureZoom_137; }
	inline void set_needRestoreGestureZoom_137(bool value)
	{
		___needRestoreGestureZoom_137 = value;
	}

	inline static int32_t get_offset_of_markersVerticles_138() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803, ___markersVerticles_138)); }
	inline List_1_t1612828712 * get_markersVerticles_138() const { return ___markersVerticles_138; }
	inline List_1_t1612828712 ** get_address_of_markersVerticles_138() { return &___markersVerticles_138; }
	inline void set_markersVerticles_138(List_1_t1612828712 * value)
	{
		___markersVerticles_138 = value;
		Il2CppCodeGenWriteBarrier(&___markersVerticles_138, value);
	}
};

struct OnlineMapsTileSetControl_t3368302803_StaticFields
{
public:
	// System.Func`2<OnlineMapsMarker,OnlineMapsMarker> OnlineMapsTileSetControl::<>f__am$cache0
	Func_2_t3438359081 * ___U3CU3Ef__amU24cache0_139;
	// System.Func`2<OnlineMapsMarker,System.Double> OnlineMapsTileSetControl::<>f__am$cache1
	Func_2_t4024208080 * ___U3CU3Ef__amU24cache1_140;
	// System.Func`2<OnlineMapsTileSetControl/TilesetSortedMarker,System.Single> OnlineMapsTileSetControl::<>f__am$cache2
	Func_2_t1961126510 * ___U3CU3Ef__amU24cache2_141;
	// System.Func`2<OnlineMapsTileSetControl/TilesetSortedMarker,OnlineMapsMarker> OnlineMapsTileSetControl::<>f__am$cache3
	Func_2_t3376783260 * ___U3CU3Ef__amU24cache3_142;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_139() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803_StaticFields, ___U3CU3Ef__amU24cache0_139)); }
	inline Func_2_t3438359081 * get_U3CU3Ef__amU24cache0_139() const { return ___U3CU3Ef__amU24cache0_139; }
	inline Func_2_t3438359081 ** get_address_of_U3CU3Ef__amU24cache0_139() { return &___U3CU3Ef__amU24cache0_139; }
	inline void set_U3CU3Ef__amU24cache0_139(Func_2_t3438359081 * value)
	{
		___U3CU3Ef__amU24cache0_139 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_139, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_140() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803_StaticFields, ___U3CU3Ef__amU24cache1_140)); }
	inline Func_2_t4024208080 * get_U3CU3Ef__amU24cache1_140() const { return ___U3CU3Ef__amU24cache1_140; }
	inline Func_2_t4024208080 ** get_address_of_U3CU3Ef__amU24cache1_140() { return &___U3CU3Ef__amU24cache1_140; }
	inline void set_U3CU3Ef__amU24cache1_140(Func_2_t4024208080 * value)
	{
		___U3CU3Ef__amU24cache1_140 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_140, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_141() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803_StaticFields, ___U3CU3Ef__amU24cache2_141)); }
	inline Func_2_t1961126510 * get_U3CU3Ef__amU24cache2_141() const { return ___U3CU3Ef__amU24cache2_141; }
	inline Func_2_t1961126510 ** get_address_of_U3CU3Ef__amU24cache2_141() { return &___U3CU3Ef__amU24cache2_141; }
	inline void set_U3CU3Ef__amU24cache2_141(Func_2_t1961126510 * value)
	{
		___U3CU3Ef__amU24cache2_141 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_141, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_142() { return static_cast<int32_t>(offsetof(OnlineMapsTileSetControl_t3368302803_StaticFields, ___U3CU3Ef__amU24cache3_142)); }
	inline Func_2_t3376783260 * get_U3CU3Ef__amU24cache3_142() const { return ___U3CU3Ef__amU24cache3_142; }
	inline Func_2_t3376783260 ** get_address_of_U3CU3Ef__amU24cache3_142() { return &___U3CU3Ef__amU24cache3_142; }
	inline void set_U3CU3Ef__amU24cache3_142(Func_2_t3376783260 * value)
	{
		___U3CU3Ef__amU24cache3_142 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_142, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
