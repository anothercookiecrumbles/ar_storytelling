#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// OnlineMaps
struct OnlineMaps_t1893290312;
// OnlineMapsProvider/MapType
struct MapType_t2083261044;
// OnlineMapsBuffer
struct OnlineMapsBuffer_t2643049474;
// OnlineMapsProjection
struct OnlineMapsProjection_t2624364075;
// OnlineMapsDrawingElement
struct OnlineMapsDrawingElement_t539447654;
// OnlineMapsMarker
struct OnlineMapsMarker_t3492166682;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// OnlineMapsMarker[]
struct OnlineMapsMarkerU5BU5D_t3424771647;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// OnlineMapsEvents[]
struct OnlineMapsEventsU5BU5D_t2569217244;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// OnlineMapsWWW
struct OnlineMapsWWW_t3247411593;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;
// OnlineMapsTile
struct OnlineMapsTile_t21329940;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsProvider_MapType2083261044.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsBufferStatus201731616.h"
#include "AssemblyU2DCSharp_OnlineMapsDrawingElement539447654.h"
#include "AssemblyU2DCSharp_OnlineMapsMarker3492166682.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "AssemblyU2DCSharp_OnlineMapsProviderEnum1784547284.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "AssemblyU2DCSharp_OnlineMapsWWW3247411593.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"
#include "AssemblyU2DCSharp_OnlineMapsTile21329940.h"

// System.Void OnlineMaps::.ctor()
extern "C"  void OnlineMaps__ctor_m828907723 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMaps OnlineMaps::get_instance()
extern "C"  OnlineMaps_t1893290312 * OnlineMaps_get_instance_m491170226 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsProvider/MapType OnlineMaps::get_activeType()
extern "C"  MapType_t2083261044 * OnlineMaps_get_activeType_m922240079 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::set_activeType(OnlineMapsProvider/MapType)
extern "C"  void OnlineMaps_set_activeType_m2541639680 (OnlineMaps_t1893290312 * __this, MapType_t2083261044 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMaps::get_bottomRightPosition()
extern "C"  Vector2_t2243707579  OnlineMaps_get_bottomRightPosition_m2988512599 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBuffer OnlineMaps::get_buffer()
extern "C"  OnlineMapsBuffer_t2643049474 * OnlineMaps_get_buffer_m1225980505 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBufferStatus OnlineMaps::get_bufferStatus()
extern "C"  int32_t OnlineMaps_get_bufferStatus_m2062978249 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMaps::get_position()
extern "C"  Vector2_t2243707579  OnlineMaps_get_position_m3150611202 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::set_position(UnityEngine.Vector2)
extern "C"  void OnlineMaps_set_position_m2426567487 (OnlineMaps_t1893290312 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsProjection OnlineMaps::get_projection()
extern "C"  OnlineMapsProjection_t2624364075 * OnlineMaps_get_projection_m2388295317 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMaps::get_topLeftPosition()
extern "C"  Vector2_t2243707579  OnlineMaps_get_topLeftPosition_m2656658004 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMaps::get_zoom()
extern "C"  int32_t OnlineMaps_get_zoom_m3999767999 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::set_zoom(System.Int32)
extern "C"  void OnlineMaps_set_zoom_m4029497604 (OnlineMaps_t1893290312 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::AddDrawingElement(OnlineMapsDrawingElement)
extern "C"  void OnlineMaps_AddDrawingElement_m877163200 (OnlineMaps_t1893290312 * __this, OnlineMapsDrawingElement_t539447654 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarker OnlineMaps::AddMarker(OnlineMapsMarker)
extern "C"  OnlineMapsMarker_t3492166682 * OnlineMaps_AddMarker_m497705663 (OnlineMaps_t1893290312 * __this, OnlineMapsMarker_t3492166682 * ___marker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarker OnlineMaps::AddMarker(UnityEngine.Vector2,System.String)
extern "C"  OnlineMapsMarker_t3492166682 * OnlineMaps_AddMarker_m3936489783 (OnlineMaps_t1893290312 * __this, Vector2_t2243707579  ___markerPosition0, String_t* ___label1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarker OnlineMaps::AddMarker(System.Double,System.Double,System.String)
extern "C"  OnlineMapsMarker_t3492166682 * OnlineMaps_AddMarker_m2946913707 (OnlineMaps_t1893290312 * __this, double ___markerLng0, double ___markerLat1, String_t* ___label2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarker OnlineMaps::AddMarker(UnityEngine.Vector2,UnityEngine.Texture2D,System.String)
extern "C"  OnlineMapsMarker_t3492166682 * OnlineMaps_AddMarker_m3212593581 (OnlineMaps_t1893290312 * __this, Vector2_t2243707579  ___markerPosition0, Texture2D_t3542995729 * ___markerTexture1, String_t* ___label2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarker OnlineMaps::AddMarker(System.Double,System.Double,UnityEngine.Texture2D,System.String)
extern "C"  OnlineMapsMarker_t3492166682 * OnlineMaps_AddMarker_m3295724821 (OnlineMaps_t1893290312 * __this, double ___markerLng0, double ___markerLat1, Texture2D_t3542995729 * ___markerTexture2, String_t* ___label3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::AddMarkers(OnlineMapsMarker[])
extern "C"  void OnlineMaps_AddMarkers_m75381143 (OnlineMaps_t1893290312 * __this, OnlineMapsMarkerU5BU5D_t3424771647* ___newMarkers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::Awake()
extern "C"  void OnlineMaps_Awake_m195094808 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::CheckBaseProps()
extern "C"  void OnlineMaps_CheckBaseProps_m3710271542 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::CheckBufferComplete()
extern "C"  void OnlineMaps_CheckBufferComplete_m4072295234 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMaps::CheckMapSize(System.Int32)
extern "C"  int32_t OnlineMaps_CheckMapSize_m1126147359 (OnlineMaps_t1893290312 * __this, int32_t ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::CheckRedrawType()
extern "C"  void OnlineMaps_CheckRedrawType_m1452697328 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::CheckServerConnection(System.Action`1<System.Boolean>)
extern "C"  void OnlineMaps_CheckServerConnection_m2377067151 (OnlineMaps_t1893290312 * __this, Action_1_t3627374100 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::DispatchEvent(OnlineMapsEvents[])
extern "C"  void OnlineMaps_DispatchEvent_m2546826238 (OnlineMaps_t1893290312 * __this, OnlineMapsEventsU5BU5D_t2569217244* ___evs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] OnlineMaps::GetAvailableTypes(OnlineMapsProviderEnum)
extern "C"  StringU5BU5D_t1642385972* OnlineMaps_GetAvailableTypes_m559173544 (Il2CppObject * __this /* static, unused */, int32_t ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::GetBottomRightPosition(System.Double&,System.Double&)
extern "C"  void OnlineMaps_GetBottomRightPosition_m945706163 (OnlineMaps_t1893290312 * __this, double* ___lng0, double* ___lat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::GetCorners(System.Double&,System.Double&,System.Double&,System.Double&)
extern "C"  void OnlineMaps_GetCorners_m242659229 (OnlineMaps_t1893290312 * __this, double* ___tlx0, double* ___tly1, double* ___brx2, double* ___bry3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsDrawingElement OnlineMaps::GetDrawingElement(UnityEngine.Vector2)
extern "C"  OnlineMapsDrawingElement_t539447654 * OnlineMaps_GetDrawingElement_m562658214 (OnlineMaps_t1893290312 * __this, Vector2_t2243707579  ___screenPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarker OnlineMaps::GetMarkerFromScreen(UnityEngine.Vector2)
extern "C"  OnlineMapsMarker_t3492166682 * OnlineMaps_GetMarkerFromScreen_m2691745866 (OnlineMaps_t1893290312 * __this, Vector2_t2243707579  ___screenPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::GetPosition(System.Double&,System.Double&)
extern "C"  void OnlineMaps_GetPosition_m2404551726 (OnlineMaps_t1893290312 * __this, double* ___lng0, double* ___lat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::GetTileCorners(System.Double&,System.Double&,System.Double&,System.Double&)
extern "C"  void OnlineMaps_GetTileCorners_m3123857385 (OnlineMaps_t1893290312 * __this, double* ___tlx0, double* ___tly1, double* ___brx2, double* ___bry3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::GetTileCorners(System.Double&,System.Double&,System.Double&,System.Double&,System.Int32)
extern "C"  void OnlineMaps_GetTileCorners_m3926859580 (OnlineMaps_t1893290312 * __this, double* ___tlx0, double* ___tly1, double* ___brx2, double* ___bry3, int32_t ___zoom4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::GetTilePosition(System.Double&,System.Double&)
extern "C"  void OnlineMaps_GetTilePosition_m104037930 (OnlineMaps_t1893290312 * __this, double* ___px0, double* ___py1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::GetTilePosition(System.Double&,System.Double&,System.Int32)
extern "C"  void OnlineMaps_GetTilePosition_m961589401 (OnlineMaps_t1893290312 * __this, double* ___px0, double* ___py1, int32_t ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::GetTopLeftPosition(System.Double&,System.Double&)
extern "C"  void OnlineMaps_GetTopLeftPosition_m1966083608 (OnlineMaps_t1893290312 * __this, double* ___lng0, double* ___lat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::LateUpdate()
extern "C"  void OnlineMaps_LateUpdate_m4238656462 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::OnAfterDeserialize()
extern "C"  void OnlineMaps_OnAfterDeserialize_m876370541 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::OnBeforeSerialize()
extern "C"  void OnlineMaps_OnBeforeSerialize_m2015383577 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::OnDestroy()
extern "C"  void OnlineMaps_OnDestroy_m1796255910 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::OnDisable()
extern "C"  void OnlineMaps_OnDisable_m49658068 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::OnEnable()
extern "C"  void OnlineMaps_OnEnable_m2166483079 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::OnGUI()
extern "C"  void OnlineMaps_OnGUI_m104230597 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::OnGUITooltip(UnityEngine.GUIStyle,System.String,UnityEngine.Vector2)
extern "C"  void OnlineMaps_OnGUITooltip_m3175932761 (OnlineMaps_t1893290312 * __this, GUIStyle_t1799908754 * ___style0, String_t* ___text1, Vector2_t2243707579  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::OnPostRender()
extern "C"  void OnlineMaps_OnPostRender_m3744541908 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::OnTileWWWComplete(OnlineMapsWWW)
extern "C"  void OnlineMaps_OnTileWWWComplete_m226453007 (OnlineMaps_t1893290312 * __this, OnlineMapsWWW_t3247411593 * ___www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::OnTrafficWWWComplete(OnlineMapsWWW)
extern "C"  void OnlineMaps_OnTrafficWWWComplete_m3565117948 (OnlineMaps_t1893290312 * __this, OnlineMapsWWW_t3247411593 * ___www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::Redraw()
extern "C"  void OnlineMaps_Redraw_m3352703156 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::RedrawImmediately()
extern "C"  void OnlineMaps_RedrawImmediately_m935989472 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::RemoveAllDrawingElements()
extern "C"  void OnlineMaps_RemoveAllDrawingElements_m691216833 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::RemoveAllMarkers()
extern "C"  void OnlineMaps_RemoveAllMarkers_m3102614897 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::RemoveDrawingElement(OnlineMapsDrawingElement,System.Boolean)
extern "C"  void OnlineMaps_RemoveDrawingElement_m3702135182 (OnlineMaps_t1893290312 * __this, OnlineMapsDrawingElement_t539447654 * ___element0, bool ___disposeElement1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::RemoveDrawingElementAt(System.Int32)
extern "C"  void OnlineMaps_RemoveDrawingElementAt_m1788926355 (OnlineMaps_t1893290312 * __this, int32_t ___elementIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::RemoveMarker(OnlineMapsMarker,System.Boolean)
extern "C"  void OnlineMaps_RemoveMarker_m985178478 (OnlineMaps_t1893290312 * __this, OnlineMapsMarker_t3492166682 * ___marker0, bool ___disposeMarker1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::RemoveMarkerAt(System.Int32)
extern "C"  void OnlineMaps_RemoveMarkerAt_m4068167303 (OnlineMaps_t1893290312 * __this, int32_t ___markerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::Save()
extern "C"  void OnlineMaps_Save_m326981402 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::SaveMarkers(OnlineMapsXML)
extern "C"  void OnlineMaps_SaveMarkers_m1740572432 (OnlineMaps_t1893290312 * __this, OnlineMapsXML_t3341520387 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsXML OnlineMaps::SaveSettings(OnlineMapsXML)
extern "C"  OnlineMapsXML_t3341520387 * OnlineMaps_SaveSettings_m1567567810 (OnlineMaps_t1893290312 * __this, OnlineMapsXML_t3341520387 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::SetPosition(System.Double,System.Double)
extern "C"  void OnlineMaps_SetPosition_m3884821578 (OnlineMaps_t1893290312 * __this, double ___lng0, double ___lat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::SetPositionAndZoom(System.Single,System.Single,System.Int32)
extern "C"  void OnlineMaps_SetPositionAndZoom_m3796886349 (OnlineMaps_t1893290312 * __this, float ___lng0, float ___lat1, int32_t ___ZOOM2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::SetTexture(UnityEngine.Texture2D)
extern "C"  void OnlineMaps_SetTexture_m1050189490 (OnlineMaps_t1893290312 * __this, Texture2D_t3542995729 * ___newTexture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::ShowMarkersTooltip(UnityEngine.Vector2)
extern "C"  void OnlineMaps_ShowMarkersTooltip_m1023579684 (OnlineMaps_t1893290312 * __this, Vector2_t2243707579  ___screenPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::Start()
extern "C"  void OnlineMaps_Start_m3354382023 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::StartDownloading()
extern "C"  void OnlineMaps_StartDownloading_m616997839 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::StartDownloadTile(OnlineMapsTile)
extern "C"  void OnlineMaps_StartDownloadTile_m271605211 (OnlineMaps_t1893290312 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::StartBuffer()
extern "C"  void OnlineMaps_StartBuffer_m485942659 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::Update()
extern "C"  void OnlineMaps_Update_m1937654250 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::UpdateBorders()
extern "C"  void OnlineMaps_UpdateBorders_m2427214461 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::UpdateBottonRightPosition()
extern "C"  void OnlineMaps_UpdateBottonRightPosition_m162609147 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::UpdateTopLeftPosition()
extern "C"  void OnlineMaps_UpdateTopLeftPosition_m2755599707 (OnlineMaps_t1893290312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps::.cctor()
extern "C"  void OnlineMaps__cctor_m2121127866 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
