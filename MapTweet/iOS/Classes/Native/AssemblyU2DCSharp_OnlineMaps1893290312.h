#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Func`5<System.Double,System.Double,UnityEngine.Texture2D,System.String,OnlineMapsMarker>
struct Func_5_t2678275640;
// System.Action
struct Action_t3226471752;
// System.Action`1<OnlineMapsMarker>
struct Action_1_t3293966064;
// OnlineMaps/OnPrepareTooltipStyleDelegate
struct OnPrepareTooltipStyleDelegate_t326048564;
// System.Action`1<OnlineMapsTile>
struct Action_1_t4118096618;
// System.Predicate`1<OnlineMapsMarker>
struct Predicate_1_t1935136797;
// System.Predicate`1<System.Int32>
struct Predicate_1_t514847563;
// OnlineMaps
struct OnlineMaps_t1893290312;
// OnlineMapsControlBase
struct OnlineMapsControlBase_t473237564;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<OnlineMapsDrawingElement>
struct List_1_t4203536082;
// OnlineMapsMarker[]
struct OnlineMapsMarkerU5BU5D_t3424771647;
// OnlineMapsPositionRange
struct OnlineMapsPositionRange_t2844425400;
// OnlineMapsDrawingElement
struct OnlineMapsDrawingElement_t539447654;
// OnlineMapsMarkerBase
struct OnlineMapsMarkerBase_t3900955221;
// OnlineMapsTrafficProvider
struct OnlineMapsTrafficProvider_t692180616;
// OnlineMapsRange
struct OnlineMapsRange_t3791609909;
// OnlineMapsProvider/MapType
struct MapType_t2083261044;
// OnlineMapsBuffer
struct OnlineMapsBuffer_t2643049474;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// OnlineMapsMarker
struct OnlineMapsMarker_t3492166682;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// System.Threading.Thread
struct Thread_t241561612;
// OnlineMapsProjection
struct OnlineMapsProjection_t2624364075;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_OnlineMapsAlign3858887827.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_OnlineMapsProviderEnum1784547284.h"
#include "AssemblyU2DCSharp_OnlineMapsShowMarkerTooltip3336221582.h"
#include "AssemblyU2DCSharp_OnlineMapsSource4087519963.h"
#include "AssemblyU2DCSharp_OnlineMapsTarget2604759619.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsRedrawType1698729245.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMaps
struct  OnlineMaps_t1893290312  : public MonoBehaviour_t1158329972
{
public:
	// System.Func`5<System.Double,System.Double,UnityEngine.Texture2D,System.String,OnlineMapsMarker> OnlineMaps::OnAddMarker
	Func_5_t2678275640 * ___OnAddMarker_5;
	// System.Action OnlineMaps::OnChangePosition
	Action_t3226471752 * ___OnChangePosition_6;
	// System.Action OnlineMaps::OnChangeZoom
	Action_t3226471752 * ___OnChangeZoom_7;
	// System.Action OnlineMaps::OnGCCollect
	Action_t3226471752 * ___OnGCCollect_8;
	// System.Action OnlineMaps::OnLateUpdateAfter
	Action_t3226471752 * ___OnLateUpdateAfter_9;
	// System.Action OnlineMaps::OnLateUpdateBefore
	Action_t3226471752 * ___OnLateUpdateBefore_10;
	// System.Action OnlineMaps::OnMapUpdated
	Action_t3226471752 * ___OnMapUpdated_11;
	// System.Action`1<OnlineMapsMarker> OnlineMaps::OnMarkerAdded
	Action_1_t3293966064 * ___OnMarkerAdded_12;
	// System.Action OnlineMaps::OnPreloadTiles
	Action_t3226471752 * ___OnPreloadTiles_13;
	// OnlineMaps/OnPrepareTooltipStyleDelegate OnlineMaps::OnPrepareTooltipStyle
	OnPrepareTooltipStyleDelegate_t326048564 * ___OnPrepareTooltipStyle_14;
	// System.Action`1<OnlineMapsTile> OnlineMaps::OnStartDownloadTile
	Action_1_t4118096618 * ___OnStartDownloadTile_15;
	// System.Predicate`1<OnlineMapsMarker> OnlineMaps::OnRemoveMarker
	Predicate_1_t1935136797 * ___OnRemoveMarker_16;
	// System.Predicate`1<System.Int32> OnlineMaps::OnRemoveMarkerAt
	Predicate_1_t514847563 * ___OnRemoveMarkerAt_17;
	// System.Action OnlineMaps::OnSaveSettings
	Action_t3226471752 * ___OnSaveSettings_18;
	// System.Action OnlineMaps::OnUpdateBefore
	Action_t3226471752 * ___OnUpdateBefore_19;
	// System.Action OnlineMaps::OnUpdateLate
	Action_t3226471752 * ___OnUpdateLate_20;
	// System.Boolean OnlineMaps::allowRedraw
	bool ___allowRedraw_23;
	// OnlineMapsControlBase OnlineMaps::control
	OnlineMapsControlBase_t473237564 * ___control_24;
	// System.String OnlineMaps::customProviderURL
	String_t* ___customProviderURL_25;
	// System.String OnlineMaps::customTrafficProviderURL
	String_t* ___customTrafficProviderURL_26;
	// OnlineMapsAlign OnlineMaps::defaultMarkerAlign
	int32_t ___defaultMarkerAlign_27;
	// UnityEngine.Texture2D OnlineMaps::defaultMarkerTexture
	Texture2D_t3542995729 * ___defaultMarkerTexture_28;
	// UnityEngine.Texture2D OnlineMaps::defaultTileTexture
	Texture2D_t3542995729 * ___defaultTileTexture_29;
	// System.Boolean OnlineMaps::dispatchEvents
	bool ___dispatchEvents_30;
	// System.Collections.Generic.List`1<OnlineMapsDrawingElement> OnlineMaps::drawingElements
	List_1_t4203536082 * ___drawingElements_31;
	// UnityEngine.Color OnlineMaps::emptyColor
	Color_t2020392075  ___emptyColor_32;
	// System.Int32 OnlineMaps::height
	int32_t ___height_33;
	// System.Boolean OnlineMaps::labels
	bool ___labels_34;
	// System.String OnlineMaps::language
	String_t* ___language_35;
	// System.Boolean OnlineMaps::lockRedraw
	bool ___lockRedraw_36;
	// OnlineMapsMarker[] OnlineMaps::markers
	OnlineMapsMarkerU5BU5D_t3424771647* ___markers_37;
	// System.Boolean OnlineMaps::needRedraw
	bool ___needRedraw_38;
	// System.Boolean OnlineMaps::notInteractUnderGUI
	bool ___notInteractUnderGUI_39;
	// OnlineMapsPositionRange OnlineMaps::positionRange
	OnlineMapsPositionRange_t2844425400 * ___positionRange_40;
	// OnlineMapsProviderEnum OnlineMaps::provider
	int32_t ___provider_41;
	// System.String OnlineMaps::mapType
	String_t* ___mapType_42;
	// System.Boolean OnlineMaps::redrawOnPlay
	bool ___redrawOnPlay_43;
	// System.Boolean OnlineMaps::renderInThread
	bool ___renderInThread_44;
	// System.String OnlineMaps::resourcesPath
	String_t* ___resourcesPath_45;
	// OnlineMapsShowMarkerTooltip OnlineMaps::showMarkerTooltip
	int32_t ___showMarkerTooltip_46;
	// UnityEngine.Texture2D OnlineMaps::smartTexture
	Texture2D_t3542995729 * ___smartTexture_47;
	// OnlineMapsSource OnlineMaps::source
	int32_t ___source_48;
	// System.Boolean OnlineMaps::stopPlayingWhenScriptsCompile
	bool ___stopPlayingWhenScriptsCompile_49;
	// OnlineMapsTarget OnlineMaps::target
	int32_t ___target_50;
	// UnityEngine.Texture2D OnlineMaps::texture
	Texture2D_t3542995729 * ___texture_51;
	// System.Int32 OnlineMaps::tilesetWidth
	int32_t ___tilesetWidth_52;
	// System.Int32 OnlineMaps::tilesetHeight
	int32_t ___tilesetHeight_53;
	// UnityEngine.Vector2 OnlineMaps::tilesetSize
	Vector2_t2243707579  ___tilesetSize_54;
	// System.String OnlineMaps::tooltip
	String_t* ___tooltip_55;
	// OnlineMapsDrawingElement OnlineMaps::tooltipDrawingElement
	OnlineMapsDrawingElement_t539447654 * ___tooltipDrawingElement_56;
	// OnlineMapsMarkerBase OnlineMaps::tooltipMarker
	OnlineMapsMarkerBase_t3900955221 * ___tooltipMarker_57;
	// UnityEngine.Texture2D OnlineMaps::tooltipBackgroundTexture
	Texture2D_t3542995729 * ___tooltipBackgroundTexture_58;
	// System.Boolean OnlineMaps::traffic
	bool ___traffic_59;
	// OnlineMapsTrafficProvider OnlineMaps::trafficProvider
	OnlineMapsTrafficProvider_t692180616 * ___trafficProvider_60;
	// System.String OnlineMaps::trafficProviderID
	String_t* ___trafficProviderID_61;
	// System.Int32 OnlineMaps::type
	int32_t ___type_62;
	// System.Boolean OnlineMaps::useCurrentZoomTiles
	bool ___useCurrentZoomTiles_63;
	// System.Boolean OnlineMaps::useSoftwareJPEGDecoder
	bool ___useSoftwareJPEGDecoder_64;
	// System.Boolean OnlineMaps::useSmartTexture
	bool ___useSmartTexture_65;
	// System.Boolean OnlineMaps::useWebplayerProxy
	bool ___useWebplayerProxy_66;
	// System.String OnlineMaps::webplayerProxyURL
	String_t* ___webplayerProxyURL_67;
	// System.Int32 OnlineMaps::width
	int32_t ___width_68;
	// OnlineMapsRange OnlineMaps::zoomRange
	OnlineMapsRange_t3791609909 * ___zoomRange_69;
	// System.Double OnlineMaps::latitude
	double ___latitude_70;
	// System.Double OnlineMaps::longitude
	double ___longitude_71;
	// System.Int32 OnlineMaps::_zoom
	int32_t ____zoom_72;
	// OnlineMapsProvider/MapType OnlineMaps::_activeType
	MapType_t2083261044 * ____activeType_73;
	// OnlineMapsBuffer OnlineMaps::_buffer
	OnlineMapsBuffer_t2643049474 * ____buffer_74;
	// System.Boolean OnlineMaps::_labels
	bool ____labels_75;
	// System.String OnlineMaps::_language
	String_t* ____language_76;
	// System.String OnlineMaps::_mapType
	String_t* ____mapType_77;
	// System.Boolean OnlineMaps::_traffic
	bool ____traffic_78;
	// UnityEngine.Color[] OnlineMaps::defaultColors
	ColorU5BU5D_t672350442* ___defaultColors_79;
	// OnlineMapsRedrawType OnlineMaps::redrawType
	int32_t ___redrawType_80;
	// OnlineMapsMarker OnlineMaps::rolledMarker
	OnlineMapsMarker_t3492166682 * ___rolledMarker_81;
	// UnityEngine.GUIStyle OnlineMaps::tooltipStyle
	GUIStyle_t1799908754 * ___tooltipStyle_82;
	// System.Threading.Thread OnlineMaps::renderThread
	Thread_t241561612 * ___renderThread_83;
	// System.Double OnlineMaps::bottomRightLatitude
	double ___bottomRightLatitude_84;
	// System.Double OnlineMaps::bottomRightLongitude
	double ___bottomRightLongitude_85;
	// System.Double OnlineMaps::topLeftLatitude
	double ___topLeftLatitude_86;
	// System.Double OnlineMaps::topLeftLongitude
	double ___topLeftLongitude_87;
	// System.String OnlineMaps::_activeTypeSettings
	String_t* ____activeTypeSettings_88;
	// System.String OnlineMaps::_trafficProviderID
	String_t* ____trafficProviderID_89;
	// OnlineMapsProjection OnlineMaps::_projection
	OnlineMapsProjection_t2624364075 * ____projection_90;

public:
	inline static int32_t get_offset_of_OnAddMarker_5() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnAddMarker_5)); }
	inline Func_5_t2678275640 * get_OnAddMarker_5() const { return ___OnAddMarker_5; }
	inline Func_5_t2678275640 ** get_address_of_OnAddMarker_5() { return &___OnAddMarker_5; }
	inline void set_OnAddMarker_5(Func_5_t2678275640 * value)
	{
		___OnAddMarker_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnAddMarker_5, value);
	}

	inline static int32_t get_offset_of_OnChangePosition_6() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnChangePosition_6)); }
	inline Action_t3226471752 * get_OnChangePosition_6() const { return ___OnChangePosition_6; }
	inline Action_t3226471752 ** get_address_of_OnChangePosition_6() { return &___OnChangePosition_6; }
	inline void set_OnChangePosition_6(Action_t3226471752 * value)
	{
		___OnChangePosition_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnChangePosition_6, value);
	}

	inline static int32_t get_offset_of_OnChangeZoom_7() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnChangeZoom_7)); }
	inline Action_t3226471752 * get_OnChangeZoom_7() const { return ___OnChangeZoom_7; }
	inline Action_t3226471752 ** get_address_of_OnChangeZoom_7() { return &___OnChangeZoom_7; }
	inline void set_OnChangeZoom_7(Action_t3226471752 * value)
	{
		___OnChangeZoom_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnChangeZoom_7, value);
	}

	inline static int32_t get_offset_of_OnGCCollect_8() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnGCCollect_8)); }
	inline Action_t3226471752 * get_OnGCCollect_8() const { return ___OnGCCollect_8; }
	inline Action_t3226471752 ** get_address_of_OnGCCollect_8() { return &___OnGCCollect_8; }
	inline void set_OnGCCollect_8(Action_t3226471752 * value)
	{
		___OnGCCollect_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnGCCollect_8, value);
	}

	inline static int32_t get_offset_of_OnLateUpdateAfter_9() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnLateUpdateAfter_9)); }
	inline Action_t3226471752 * get_OnLateUpdateAfter_9() const { return ___OnLateUpdateAfter_9; }
	inline Action_t3226471752 ** get_address_of_OnLateUpdateAfter_9() { return &___OnLateUpdateAfter_9; }
	inline void set_OnLateUpdateAfter_9(Action_t3226471752 * value)
	{
		___OnLateUpdateAfter_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnLateUpdateAfter_9, value);
	}

	inline static int32_t get_offset_of_OnLateUpdateBefore_10() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnLateUpdateBefore_10)); }
	inline Action_t3226471752 * get_OnLateUpdateBefore_10() const { return ___OnLateUpdateBefore_10; }
	inline Action_t3226471752 ** get_address_of_OnLateUpdateBefore_10() { return &___OnLateUpdateBefore_10; }
	inline void set_OnLateUpdateBefore_10(Action_t3226471752 * value)
	{
		___OnLateUpdateBefore_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnLateUpdateBefore_10, value);
	}

	inline static int32_t get_offset_of_OnMapUpdated_11() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnMapUpdated_11)); }
	inline Action_t3226471752 * get_OnMapUpdated_11() const { return ___OnMapUpdated_11; }
	inline Action_t3226471752 ** get_address_of_OnMapUpdated_11() { return &___OnMapUpdated_11; }
	inline void set_OnMapUpdated_11(Action_t3226471752 * value)
	{
		___OnMapUpdated_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnMapUpdated_11, value);
	}

	inline static int32_t get_offset_of_OnMarkerAdded_12() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnMarkerAdded_12)); }
	inline Action_1_t3293966064 * get_OnMarkerAdded_12() const { return ___OnMarkerAdded_12; }
	inline Action_1_t3293966064 ** get_address_of_OnMarkerAdded_12() { return &___OnMarkerAdded_12; }
	inline void set_OnMarkerAdded_12(Action_1_t3293966064 * value)
	{
		___OnMarkerAdded_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnMarkerAdded_12, value);
	}

	inline static int32_t get_offset_of_OnPreloadTiles_13() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnPreloadTiles_13)); }
	inline Action_t3226471752 * get_OnPreloadTiles_13() const { return ___OnPreloadTiles_13; }
	inline Action_t3226471752 ** get_address_of_OnPreloadTiles_13() { return &___OnPreloadTiles_13; }
	inline void set_OnPreloadTiles_13(Action_t3226471752 * value)
	{
		___OnPreloadTiles_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnPreloadTiles_13, value);
	}

	inline static int32_t get_offset_of_OnPrepareTooltipStyle_14() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnPrepareTooltipStyle_14)); }
	inline OnPrepareTooltipStyleDelegate_t326048564 * get_OnPrepareTooltipStyle_14() const { return ___OnPrepareTooltipStyle_14; }
	inline OnPrepareTooltipStyleDelegate_t326048564 ** get_address_of_OnPrepareTooltipStyle_14() { return &___OnPrepareTooltipStyle_14; }
	inline void set_OnPrepareTooltipStyle_14(OnPrepareTooltipStyleDelegate_t326048564 * value)
	{
		___OnPrepareTooltipStyle_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnPrepareTooltipStyle_14, value);
	}

	inline static int32_t get_offset_of_OnStartDownloadTile_15() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnStartDownloadTile_15)); }
	inline Action_1_t4118096618 * get_OnStartDownloadTile_15() const { return ___OnStartDownloadTile_15; }
	inline Action_1_t4118096618 ** get_address_of_OnStartDownloadTile_15() { return &___OnStartDownloadTile_15; }
	inline void set_OnStartDownloadTile_15(Action_1_t4118096618 * value)
	{
		___OnStartDownloadTile_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnStartDownloadTile_15, value);
	}

	inline static int32_t get_offset_of_OnRemoveMarker_16() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnRemoveMarker_16)); }
	inline Predicate_1_t1935136797 * get_OnRemoveMarker_16() const { return ___OnRemoveMarker_16; }
	inline Predicate_1_t1935136797 ** get_address_of_OnRemoveMarker_16() { return &___OnRemoveMarker_16; }
	inline void set_OnRemoveMarker_16(Predicate_1_t1935136797 * value)
	{
		___OnRemoveMarker_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnRemoveMarker_16, value);
	}

	inline static int32_t get_offset_of_OnRemoveMarkerAt_17() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnRemoveMarkerAt_17)); }
	inline Predicate_1_t514847563 * get_OnRemoveMarkerAt_17() const { return ___OnRemoveMarkerAt_17; }
	inline Predicate_1_t514847563 ** get_address_of_OnRemoveMarkerAt_17() { return &___OnRemoveMarkerAt_17; }
	inline void set_OnRemoveMarkerAt_17(Predicate_1_t514847563 * value)
	{
		___OnRemoveMarkerAt_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnRemoveMarkerAt_17, value);
	}

	inline static int32_t get_offset_of_OnSaveSettings_18() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnSaveSettings_18)); }
	inline Action_t3226471752 * get_OnSaveSettings_18() const { return ___OnSaveSettings_18; }
	inline Action_t3226471752 ** get_address_of_OnSaveSettings_18() { return &___OnSaveSettings_18; }
	inline void set_OnSaveSettings_18(Action_t3226471752 * value)
	{
		___OnSaveSettings_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnSaveSettings_18, value);
	}

	inline static int32_t get_offset_of_OnUpdateBefore_19() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnUpdateBefore_19)); }
	inline Action_t3226471752 * get_OnUpdateBefore_19() const { return ___OnUpdateBefore_19; }
	inline Action_t3226471752 ** get_address_of_OnUpdateBefore_19() { return &___OnUpdateBefore_19; }
	inline void set_OnUpdateBefore_19(Action_t3226471752 * value)
	{
		___OnUpdateBefore_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnUpdateBefore_19, value);
	}

	inline static int32_t get_offset_of_OnUpdateLate_20() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___OnUpdateLate_20)); }
	inline Action_t3226471752 * get_OnUpdateLate_20() const { return ___OnUpdateLate_20; }
	inline Action_t3226471752 ** get_address_of_OnUpdateLate_20() { return &___OnUpdateLate_20; }
	inline void set_OnUpdateLate_20(Action_t3226471752 * value)
	{
		___OnUpdateLate_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnUpdateLate_20, value);
	}

	inline static int32_t get_offset_of_allowRedraw_23() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___allowRedraw_23)); }
	inline bool get_allowRedraw_23() const { return ___allowRedraw_23; }
	inline bool* get_address_of_allowRedraw_23() { return &___allowRedraw_23; }
	inline void set_allowRedraw_23(bool value)
	{
		___allowRedraw_23 = value;
	}

	inline static int32_t get_offset_of_control_24() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___control_24)); }
	inline OnlineMapsControlBase_t473237564 * get_control_24() const { return ___control_24; }
	inline OnlineMapsControlBase_t473237564 ** get_address_of_control_24() { return &___control_24; }
	inline void set_control_24(OnlineMapsControlBase_t473237564 * value)
	{
		___control_24 = value;
		Il2CppCodeGenWriteBarrier(&___control_24, value);
	}

	inline static int32_t get_offset_of_customProviderURL_25() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___customProviderURL_25)); }
	inline String_t* get_customProviderURL_25() const { return ___customProviderURL_25; }
	inline String_t** get_address_of_customProviderURL_25() { return &___customProviderURL_25; }
	inline void set_customProviderURL_25(String_t* value)
	{
		___customProviderURL_25 = value;
		Il2CppCodeGenWriteBarrier(&___customProviderURL_25, value);
	}

	inline static int32_t get_offset_of_customTrafficProviderURL_26() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___customTrafficProviderURL_26)); }
	inline String_t* get_customTrafficProviderURL_26() const { return ___customTrafficProviderURL_26; }
	inline String_t** get_address_of_customTrafficProviderURL_26() { return &___customTrafficProviderURL_26; }
	inline void set_customTrafficProviderURL_26(String_t* value)
	{
		___customTrafficProviderURL_26 = value;
		Il2CppCodeGenWriteBarrier(&___customTrafficProviderURL_26, value);
	}

	inline static int32_t get_offset_of_defaultMarkerAlign_27() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___defaultMarkerAlign_27)); }
	inline int32_t get_defaultMarkerAlign_27() const { return ___defaultMarkerAlign_27; }
	inline int32_t* get_address_of_defaultMarkerAlign_27() { return &___defaultMarkerAlign_27; }
	inline void set_defaultMarkerAlign_27(int32_t value)
	{
		___defaultMarkerAlign_27 = value;
	}

	inline static int32_t get_offset_of_defaultMarkerTexture_28() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___defaultMarkerTexture_28)); }
	inline Texture2D_t3542995729 * get_defaultMarkerTexture_28() const { return ___defaultMarkerTexture_28; }
	inline Texture2D_t3542995729 ** get_address_of_defaultMarkerTexture_28() { return &___defaultMarkerTexture_28; }
	inline void set_defaultMarkerTexture_28(Texture2D_t3542995729 * value)
	{
		___defaultMarkerTexture_28 = value;
		Il2CppCodeGenWriteBarrier(&___defaultMarkerTexture_28, value);
	}

	inline static int32_t get_offset_of_defaultTileTexture_29() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___defaultTileTexture_29)); }
	inline Texture2D_t3542995729 * get_defaultTileTexture_29() const { return ___defaultTileTexture_29; }
	inline Texture2D_t3542995729 ** get_address_of_defaultTileTexture_29() { return &___defaultTileTexture_29; }
	inline void set_defaultTileTexture_29(Texture2D_t3542995729 * value)
	{
		___defaultTileTexture_29 = value;
		Il2CppCodeGenWriteBarrier(&___defaultTileTexture_29, value);
	}

	inline static int32_t get_offset_of_dispatchEvents_30() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___dispatchEvents_30)); }
	inline bool get_dispatchEvents_30() const { return ___dispatchEvents_30; }
	inline bool* get_address_of_dispatchEvents_30() { return &___dispatchEvents_30; }
	inline void set_dispatchEvents_30(bool value)
	{
		___dispatchEvents_30 = value;
	}

	inline static int32_t get_offset_of_drawingElements_31() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___drawingElements_31)); }
	inline List_1_t4203536082 * get_drawingElements_31() const { return ___drawingElements_31; }
	inline List_1_t4203536082 ** get_address_of_drawingElements_31() { return &___drawingElements_31; }
	inline void set_drawingElements_31(List_1_t4203536082 * value)
	{
		___drawingElements_31 = value;
		Il2CppCodeGenWriteBarrier(&___drawingElements_31, value);
	}

	inline static int32_t get_offset_of_emptyColor_32() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___emptyColor_32)); }
	inline Color_t2020392075  get_emptyColor_32() const { return ___emptyColor_32; }
	inline Color_t2020392075 * get_address_of_emptyColor_32() { return &___emptyColor_32; }
	inline void set_emptyColor_32(Color_t2020392075  value)
	{
		___emptyColor_32 = value;
	}

	inline static int32_t get_offset_of_height_33() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___height_33)); }
	inline int32_t get_height_33() const { return ___height_33; }
	inline int32_t* get_address_of_height_33() { return &___height_33; }
	inline void set_height_33(int32_t value)
	{
		___height_33 = value;
	}

	inline static int32_t get_offset_of_labels_34() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___labels_34)); }
	inline bool get_labels_34() const { return ___labels_34; }
	inline bool* get_address_of_labels_34() { return &___labels_34; }
	inline void set_labels_34(bool value)
	{
		___labels_34 = value;
	}

	inline static int32_t get_offset_of_language_35() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___language_35)); }
	inline String_t* get_language_35() const { return ___language_35; }
	inline String_t** get_address_of_language_35() { return &___language_35; }
	inline void set_language_35(String_t* value)
	{
		___language_35 = value;
		Il2CppCodeGenWriteBarrier(&___language_35, value);
	}

	inline static int32_t get_offset_of_lockRedraw_36() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___lockRedraw_36)); }
	inline bool get_lockRedraw_36() const { return ___lockRedraw_36; }
	inline bool* get_address_of_lockRedraw_36() { return &___lockRedraw_36; }
	inline void set_lockRedraw_36(bool value)
	{
		___lockRedraw_36 = value;
	}

	inline static int32_t get_offset_of_markers_37() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___markers_37)); }
	inline OnlineMapsMarkerU5BU5D_t3424771647* get_markers_37() const { return ___markers_37; }
	inline OnlineMapsMarkerU5BU5D_t3424771647** get_address_of_markers_37() { return &___markers_37; }
	inline void set_markers_37(OnlineMapsMarkerU5BU5D_t3424771647* value)
	{
		___markers_37 = value;
		Il2CppCodeGenWriteBarrier(&___markers_37, value);
	}

	inline static int32_t get_offset_of_needRedraw_38() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___needRedraw_38)); }
	inline bool get_needRedraw_38() const { return ___needRedraw_38; }
	inline bool* get_address_of_needRedraw_38() { return &___needRedraw_38; }
	inline void set_needRedraw_38(bool value)
	{
		___needRedraw_38 = value;
	}

	inline static int32_t get_offset_of_notInteractUnderGUI_39() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___notInteractUnderGUI_39)); }
	inline bool get_notInteractUnderGUI_39() const { return ___notInteractUnderGUI_39; }
	inline bool* get_address_of_notInteractUnderGUI_39() { return &___notInteractUnderGUI_39; }
	inline void set_notInteractUnderGUI_39(bool value)
	{
		___notInteractUnderGUI_39 = value;
	}

	inline static int32_t get_offset_of_positionRange_40() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___positionRange_40)); }
	inline OnlineMapsPositionRange_t2844425400 * get_positionRange_40() const { return ___positionRange_40; }
	inline OnlineMapsPositionRange_t2844425400 ** get_address_of_positionRange_40() { return &___positionRange_40; }
	inline void set_positionRange_40(OnlineMapsPositionRange_t2844425400 * value)
	{
		___positionRange_40 = value;
		Il2CppCodeGenWriteBarrier(&___positionRange_40, value);
	}

	inline static int32_t get_offset_of_provider_41() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___provider_41)); }
	inline int32_t get_provider_41() const { return ___provider_41; }
	inline int32_t* get_address_of_provider_41() { return &___provider_41; }
	inline void set_provider_41(int32_t value)
	{
		___provider_41 = value;
	}

	inline static int32_t get_offset_of_mapType_42() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___mapType_42)); }
	inline String_t* get_mapType_42() const { return ___mapType_42; }
	inline String_t** get_address_of_mapType_42() { return &___mapType_42; }
	inline void set_mapType_42(String_t* value)
	{
		___mapType_42 = value;
		Il2CppCodeGenWriteBarrier(&___mapType_42, value);
	}

	inline static int32_t get_offset_of_redrawOnPlay_43() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___redrawOnPlay_43)); }
	inline bool get_redrawOnPlay_43() const { return ___redrawOnPlay_43; }
	inline bool* get_address_of_redrawOnPlay_43() { return &___redrawOnPlay_43; }
	inline void set_redrawOnPlay_43(bool value)
	{
		___redrawOnPlay_43 = value;
	}

	inline static int32_t get_offset_of_renderInThread_44() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___renderInThread_44)); }
	inline bool get_renderInThread_44() const { return ___renderInThread_44; }
	inline bool* get_address_of_renderInThread_44() { return &___renderInThread_44; }
	inline void set_renderInThread_44(bool value)
	{
		___renderInThread_44 = value;
	}

	inline static int32_t get_offset_of_resourcesPath_45() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___resourcesPath_45)); }
	inline String_t* get_resourcesPath_45() const { return ___resourcesPath_45; }
	inline String_t** get_address_of_resourcesPath_45() { return &___resourcesPath_45; }
	inline void set_resourcesPath_45(String_t* value)
	{
		___resourcesPath_45 = value;
		Il2CppCodeGenWriteBarrier(&___resourcesPath_45, value);
	}

	inline static int32_t get_offset_of_showMarkerTooltip_46() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___showMarkerTooltip_46)); }
	inline int32_t get_showMarkerTooltip_46() const { return ___showMarkerTooltip_46; }
	inline int32_t* get_address_of_showMarkerTooltip_46() { return &___showMarkerTooltip_46; }
	inline void set_showMarkerTooltip_46(int32_t value)
	{
		___showMarkerTooltip_46 = value;
	}

	inline static int32_t get_offset_of_smartTexture_47() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___smartTexture_47)); }
	inline Texture2D_t3542995729 * get_smartTexture_47() const { return ___smartTexture_47; }
	inline Texture2D_t3542995729 ** get_address_of_smartTexture_47() { return &___smartTexture_47; }
	inline void set_smartTexture_47(Texture2D_t3542995729 * value)
	{
		___smartTexture_47 = value;
		Il2CppCodeGenWriteBarrier(&___smartTexture_47, value);
	}

	inline static int32_t get_offset_of_source_48() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___source_48)); }
	inline int32_t get_source_48() const { return ___source_48; }
	inline int32_t* get_address_of_source_48() { return &___source_48; }
	inline void set_source_48(int32_t value)
	{
		___source_48 = value;
	}

	inline static int32_t get_offset_of_stopPlayingWhenScriptsCompile_49() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___stopPlayingWhenScriptsCompile_49)); }
	inline bool get_stopPlayingWhenScriptsCompile_49() const { return ___stopPlayingWhenScriptsCompile_49; }
	inline bool* get_address_of_stopPlayingWhenScriptsCompile_49() { return &___stopPlayingWhenScriptsCompile_49; }
	inline void set_stopPlayingWhenScriptsCompile_49(bool value)
	{
		___stopPlayingWhenScriptsCompile_49 = value;
	}

	inline static int32_t get_offset_of_target_50() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___target_50)); }
	inline int32_t get_target_50() const { return ___target_50; }
	inline int32_t* get_address_of_target_50() { return &___target_50; }
	inline void set_target_50(int32_t value)
	{
		___target_50 = value;
	}

	inline static int32_t get_offset_of_texture_51() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___texture_51)); }
	inline Texture2D_t3542995729 * get_texture_51() const { return ___texture_51; }
	inline Texture2D_t3542995729 ** get_address_of_texture_51() { return &___texture_51; }
	inline void set_texture_51(Texture2D_t3542995729 * value)
	{
		___texture_51 = value;
		Il2CppCodeGenWriteBarrier(&___texture_51, value);
	}

	inline static int32_t get_offset_of_tilesetWidth_52() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___tilesetWidth_52)); }
	inline int32_t get_tilesetWidth_52() const { return ___tilesetWidth_52; }
	inline int32_t* get_address_of_tilesetWidth_52() { return &___tilesetWidth_52; }
	inline void set_tilesetWidth_52(int32_t value)
	{
		___tilesetWidth_52 = value;
	}

	inline static int32_t get_offset_of_tilesetHeight_53() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___tilesetHeight_53)); }
	inline int32_t get_tilesetHeight_53() const { return ___tilesetHeight_53; }
	inline int32_t* get_address_of_tilesetHeight_53() { return &___tilesetHeight_53; }
	inline void set_tilesetHeight_53(int32_t value)
	{
		___tilesetHeight_53 = value;
	}

	inline static int32_t get_offset_of_tilesetSize_54() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___tilesetSize_54)); }
	inline Vector2_t2243707579  get_tilesetSize_54() const { return ___tilesetSize_54; }
	inline Vector2_t2243707579 * get_address_of_tilesetSize_54() { return &___tilesetSize_54; }
	inline void set_tilesetSize_54(Vector2_t2243707579  value)
	{
		___tilesetSize_54 = value;
	}

	inline static int32_t get_offset_of_tooltip_55() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___tooltip_55)); }
	inline String_t* get_tooltip_55() const { return ___tooltip_55; }
	inline String_t** get_address_of_tooltip_55() { return &___tooltip_55; }
	inline void set_tooltip_55(String_t* value)
	{
		___tooltip_55 = value;
		Il2CppCodeGenWriteBarrier(&___tooltip_55, value);
	}

	inline static int32_t get_offset_of_tooltipDrawingElement_56() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___tooltipDrawingElement_56)); }
	inline OnlineMapsDrawingElement_t539447654 * get_tooltipDrawingElement_56() const { return ___tooltipDrawingElement_56; }
	inline OnlineMapsDrawingElement_t539447654 ** get_address_of_tooltipDrawingElement_56() { return &___tooltipDrawingElement_56; }
	inline void set_tooltipDrawingElement_56(OnlineMapsDrawingElement_t539447654 * value)
	{
		___tooltipDrawingElement_56 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipDrawingElement_56, value);
	}

	inline static int32_t get_offset_of_tooltipMarker_57() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___tooltipMarker_57)); }
	inline OnlineMapsMarkerBase_t3900955221 * get_tooltipMarker_57() const { return ___tooltipMarker_57; }
	inline OnlineMapsMarkerBase_t3900955221 ** get_address_of_tooltipMarker_57() { return &___tooltipMarker_57; }
	inline void set_tooltipMarker_57(OnlineMapsMarkerBase_t3900955221 * value)
	{
		___tooltipMarker_57 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipMarker_57, value);
	}

	inline static int32_t get_offset_of_tooltipBackgroundTexture_58() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___tooltipBackgroundTexture_58)); }
	inline Texture2D_t3542995729 * get_tooltipBackgroundTexture_58() const { return ___tooltipBackgroundTexture_58; }
	inline Texture2D_t3542995729 ** get_address_of_tooltipBackgroundTexture_58() { return &___tooltipBackgroundTexture_58; }
	inline void set_tooltipBackgroundTexture_58(Texture2D_t3542995729 * value)
	{
		___tooltipBackgroundTexture_58 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipBackgroundTexture_58, value);
	}

	inline static int32_t get_offset_of_traffic_59() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___traffic_59)); }
	inline bool get_traffic_59() const { return ___traffic_59; }
	inline bool* get_address_of_traffic_59() { return &___traffic_59; }
	inline void set_traffic_59(bool value)
	{
		___traffic_59 = value;
	}

	inline static int32_t get_offset_of_trafficProvider_60() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___trafficProvider_60)); }
	inline OnlineMapsTrafficProvider_t692180616 * get_trafficProvider_60() const { return ___trafficProvider_60; }
	inline OnlineMapsTrafficProvider_t692180616 ** get_address_of_trafficProvider_60() { return &___trafficProvider_60; }
	inline void set_trafficProvider_60(OnlineMapsTrafficProvider_t692180616 * value)
	{
		___trafficProvider_60 = value;
		Il2CppCodeGenWriteBarrier(&___trafficProvider_60, value);
	}

	inline static int32_t get_offset_of_trafficProviderID_61() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___trafficProviderID_61)); }
	inline String_t* get_trafficProviderID_61() const { return ___trafficProviderID_61; }
	inline String_t** get_address_of_trafficProviderID_61() { return &___trafficProviderID_61; }
	inline void set_trafficProviderID_61(String_t* value)
	{
		___trafficProviderID_61 = value;
		Il2CppCodeGenWriteBarrier(&___trafficProviderID_61, value);
	}

	inline static int32_t get_offset_of_type_62() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___type_62)); }
	inline int32_t get_type_62() const { return ___type_62; }
	inline int32_t* get_address_of_type_62() { return &___type_62; }
	inline void set_type_62(int32_t value)
	{
		___type_62 = value;
	}

	inline static int32_t get_offset_of_useCurrentZoomTiles_63() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___useCurrentZoomTiles_63)); }
	inline bool get_useCurrentZoomTiles_63() const { return ___useCurrentZoomTiles_63; }
	inline bool* get_address_of_useCurrentZoomTiles_63() { return &___useCurrentZoomTiles_63; }
	inline void set_useCurrentZoomTiles_63(bool value)
	{
		___useCurrentZoomTiles_63 = value;
	}

	inline static int32_t get_offset_of_useSoftwareJPEGDecoder_64() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___useSoftwareJPEGDecoder_64)); }
	inline bool get_useSoftwareJPEGDecoder_64() const { return ___useSoftwareJPEGDecoder_64; }
	inline bool* get_address_of_useSoftwareJPEGDecoder_64() { return &___useSoftwareJPEGDecoder_64; }
	inline void set_useSoftwareJPEGDecoder_64(bool value)
	{
		___useSoftwareJPEGDecoder_64 = value;
	}

	inline static int32_t get_offset_of_useSmartTexture_65() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___useSmartTexture_65)); }
	inline bool get_useSmartTexture_65() const { return ___useSmartTexture_65; }
	inline bool* get_address_of_useSmartTexture_65() { return &___useSmartTexture_65; }
	inline void set_useSmartTexture_65(bool value)
	{
		___useSmartTexture_65 = value;
	}

	inline static int32_t get_offset_of_useWebplayerProxy_66() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___useWebplayerProxy_66)); }
	inline bool get_useWebplayerProxy_66() const { return ___useWebplayerProxy_66; }
	inline bool* get_address_of_useWebplayerProxy_66() { return &___useWebplayerProxy_66; }
	inline void set_useWebplayerProxy_66(bool value)
	{
		___useWebplayerProxy_66 = value;
	}

	inline static int32_t get_offset_of_webplayerProxyURL_67() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___webplayerProxyURL_67)); }
	inline String_t* get_webplayerProxyURL_67() const { return ___webplayerProxyURL_67; }
	inline String_t** get_address_of_webplayerProxyURL_67() { return &___webplayerProxyURL_67; }
	inline void set_webplayerProxyURL_67(String_t* value)
	{
		___webplayerProxyURL_67 = value;
		Il2CppCodeGenWriteBarrier(&___webplayerProxyURL_67, value);
	}

	inline static int32_t get_offset_of_width_68() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___width_68)); }
	inline int32_t get_width_68() const { return ___width_68; }
	inline int32_t* get_address_of_width_68() { return &___width_68; }
	inline void set_width_68(int32_t value)
	{
		___width_68 = value;
	}

	inline static int32_t get_offset_of_zoomRange_69() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___zoomRange_69)); }
	inline OnlineMapsRange_t3791609909 * get_zoomRange_69() const { return ___zoomRange_69; }
	inline OnlineMapsRange_t3791609909 ** get_address_of_zoomRange_69() { return &___zoomRange_69; }
	inline void set_zoomRange_69(OnlineMapsRange_t3791609909 * value)
	{
		___zoomRange_69 = value;
		Il2CppCodeGenWriteBarrier(&___zoomRange_69, value);
	}

	inline static int32_t get_offset_of_latitude_70() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___latitude_70)); }
	inline double get_latitude_70() const { return ___latitude_70; }
	inline double* get_address_of_latitude_70() { return &___latitude_70; }
	inline void set_latitude_70(double value)
	{
		___latitude_70 = value;
	}

	inline static int32_t get_offset_of_longitude_71() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___longitude_71)); }
	inline double get_longitude_71() const { return ___longitude_71; }
	inline double* get_address_of_longitude_71() { return &___longitude_71; }
	inline void set_longitude_71(double value)
	{
		___longitude_71 = value;
	}

	inline static int32_t get_offset_of__zoom_72() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ____zoom_72)); }
	inline int32_t get__zoom_72() const { return ____zoom_72; }
	inline int32_t* get_address_of__zoom_72() { return &____zoom_72; }
	inline void set__zoom_72(int32_t value)
	{
		____zoom_72 = value;
	}

	inline static int32_t get_offset_of__activeType_73() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ____activeType_73)); }
	inline MapType_t2083261044 * get__activeType_73() const { return ____activeType_73; }
	inline MapType_t2083261044 ** get_address_of__activeType_73() { return &____activeType_73; }
	inline void set__activeType_73(MapType_t2083261044 * value)
	{
		____activeType_73 = value;
		Il2CppCodeGenWriteBarrier(&____activeType_73, value);
	}

	inline static int32_t get_offset_of__buffer_74() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ____buffer_74)); }
	inline OnlineMapsBuffer_t2643049474 * get__buffer_74() const { return ____buffer_74; }
	inline OnlineMapsBuffer_t2643049474 ** get_address_of__buffer_74() { return &____buffer_74; }
	inline void set__buffer_74(OnlineMapsBuffer_t2643049474 * value)
	{
		____buffer_74 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_74, value);
	}

	inline static int32_t get_offset_of__labels_75() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ____labels_75)); }
	inline bool get__labels_75() const { return ____labels_75; }
	inline bool* get_address_of__labels_75() { return &____labels_75; }
	inline void set__labels_75(bool value)
	{
		____labels_75 = value;
	}

	inline static int32_t get_offset_of__language_76() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ____language_76)); }
	inline String_t* get__language_76() const { return ____language_76; }
	inline String_t** get_address_of__language_76() { return &____language_76; }
	inline void set__language_76(String_t* value)
	{
		____language_76 = value;
		Il2CppCodeGenWriteBarrier(&____language_76, value);
	}

	inline static int32_t get_offset_of__mapType_77() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ____mapType_77)); }
	inline String_t* get__mapType_77() const { return ____mapType_77; }
	inline String_t** get_address_of__mapType_77() { return &____mapType_77; }
	inline void set__mapType_77(String_t* value)
	{
		____mapType_77 = value;
		Il2CppCodeGenWriteBarrier(&____mapType_77, value);
	}

	inline static int32_t get_offset_of__traffic_78() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ____traffic_78)); }
	inline bool get__traffic_78() const { return ____traffic_78; }
	inline bool* get_address_of__traffic_78() { return &____traffic_78; }
	inline void set__traffic_78(bool value)
	{
		____traffic_78 = value;
	}

	inline static int32_t get_offset_of_defaultColors_79() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___defaultColors_79)); }
	inline ColorU5BU5D_t672350442* get_defaultColors_79() const { return ___defaultColors_79; }
	inline ColorU5BU5D_t672350442** get_address_of_defaultColors_79() { return &___defaultColors_79; }
	inline void set_defaultColors_79(ColorU5BU5D_t672350442* value)
	{
		___defaultColors_79 = value;
		Il2CppCodeGenWriteBarrier(&___defaultColors_79, value);
	}

	inline static int32_t get_offset_of_redrawType_80() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___redrawType_80)); }
	inline int32_t get_redrawType_80() const { return ___redrawType_80; }
	inline int32_t* get_address_of_redrawType_80() { return &___redrawType_80; }
	inline void set_redrawType_80(int32_t value)
	{
		___redrawType_80 = value;
	}

	inline static int32_t get_offset_of_rolledMarker_81() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___rolledMarker_81)); }
	inline OnlineMapsMarker_t3492166682 * get_rolledMarker_81() const { return ___rolledMarker_81; }
	inline OnlineMapsMarker_t3492166682 ** get_address_of_rolledMarker_81() { return &___rolledMarker_81; }
	inline void set_rolledMarker_81(OnlineMapsMarker_t3492166682 * value)
	{
		___rolledMarker_81 = value;
		Il2CppCodeGenWriteBarrier(&___rolledMarker_81, value);
	}

	inline static int32_t get_offset_of_tooltipStyle_82() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___tooltipStyle_82)); }
	inline GUIStyle_t1799908754 * get_tooltipStyle_82() const { return ___tooltipStyle_82; }
	inline GUIStyle_t1799908754 ** get_address_of_tooltipStyle_82() { return &___tooltipStyle_82; }
	inline void set_tooltipStyle_82(GUIStyle_t1799908754 * value)
	{
		___tooltipStyle_82 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipStyle_82, value);
	}

	inline static int32_t get_offset_of_renderThread_83() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___renderThread_83)); }
	inline Thread_t241561612 * get_renderThread_83() const { return ___renderThread_83; }
	inline Thread_t241561612 ** get_address_of_renderThread_83() { return &___renderThread_83; }
	inline void set_renderThread_83(Thread_t241561612 * value)
	{
		___renderThread_83 = value;
		Il2CppCodeGenWriteBarrier(&___renderThread_83, value);
	}

	inline static int32_t get_offset_of_bottomRightLatitude_84() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___bottomRightLatitude_84)); }
	inline double get_bottomRightLatitude_84() const { return ___bottomRightLatitude_84; }
	inline double* get_address_of_bottomRightLatitude_84() { return &___bottomRightLatitude_84; }
	inline void set_bottomRightLatitude_84(double value)
	{
		___bottomRightLatitude_84 = value;
	}

	inline static int32_t get_offset_of_bottomRightLongitude_85() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___bottomRightLongitude_85)); }
	inline double get_bottomRightLongitude_85() const { return ___bottomRightLongitude_85; }
	inline double* get_address_of_bottomRightLongitude_85() { return &___bottomRightLongitude_85; }
	inline void set_bottomRightLongitude_85(double value)
	{
		___bottomRightLongitude_85 = value;
	}

	inline static int32_t get_offset_of_topLeftLatitude_86() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___topLeftLatitude_86)); }
	inline double get_topLeftLatitude_86() const { return ___topLeftLatitude_86; }
	inline double* get_address_of_topLeftLatitude_86() { return &___topLeftLatitude_86; }
	inline void set_topLeftLatitude_86(double value)
	{
		___topLeftLatitude_86 = value;
	}

	inline static int32_t get_offset_of_topLeftLongitude_87() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ___topLeftLongitude_87)); }
	inline double get_topLeftLongitude_87() const { return ___topLeftLongitude_87; }
	inline double* get_address_of_topLeftLongitude_87() { return &___topLeftLongitude_87; }
	inline void set_topLeftLongitude_87(double value)
	{
		___topLeftLongitude_87 = value;
	}

	inline static int32_t get_offset_of__activeTypeSettings_88() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ____activeTypeSettings_88)); }
	inline String_t* get__activeTypeSettings_88() const { return ____activeTypeSettings_88; }
	inline String_t** get_address_of__activeTypeSettings_88() { return &____activeTypeSettings_88; }
	inline void set__activeTypeSettings_88(String_t* value)
	{
		____activeTypeSettings_88 = value;
		Il2CppCodeGenWriteBarrier(&____activeTypeSettings_88, value);
	}

	inline static int32_t get_offset_of__trafficProviderID_89() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ____trafficProviderID_89)); }
	inline String_t* get__trafficProviderID_89() const { return ____trafficProviderID_89; }
	inline String_t** get_address_of__trafficProviderID_89() { return &____trafficProviderID_89; }
	inline void set__trafficProviderID_89(String_t* value)
	{
		____trafficProviderID_89 = value;
		Il2CppCodeGenWriteBarrier(&____trafficProviderID_89, value);
	}

	inline static int32_t get_offset_of__projection_90() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312, ____projection_90)); }
	inline OnlineMapsProjection_t2624364075 * get__projection_90() const { return ____projection_90; }
	inline OnlineMapsProjection_t2624364075 ** get_address_of__projection_90() { return &____projection_90; }
	inline void set__projection_90(OnlineMapsProjection_t2624364075 * value)
	{
		____projection_90 = value;
		Il2CppCodeGenWriteBarrier(&____projection_90, value);
	}
};

struct OnlineMaps_t1893290312_StaticFields
{
public:
	// System.Int32 OnlineMaps::maxTileDownloads
	int32_t ___maxTileDownloads_4;
	// System.Boolean OnlineMaps::isUserControl
	bool ___isUserControl_21;
	// OnlineMaps OnlineMaps::_instance
	OnlineMaps_t1893290312 * ____instance_22;

public:
	inline static int32_t get_offset_of_maxTileDownloads_4() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312_StaticFields, ___maxTileDownloads_4)); }
	inline int32_t get_maxTileDownloads_4() const { return ___maxTileDownloads_4; }
	inline int32_t* get_address_of_maxTileDownloads_4() { return &___maxTileDownloads_4; }
	inline void set_maxTileDownloads_4(int32_t value)
	{
		___maxTileDownloads_4 = value;
	}

	inline static int32_t get_offset_of_isUserControl_21() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312_StaticFields, ___isUserControl_21)); }
	inline bool get_isUserControl_21() const { return ___isUserControl_21; }
	inline bool* get_address_of_isUserControl_21() { return &___isUserControl_21; }
	inline void set_isUserControl_21(bool value)
	{
		___isUserControl_21 = value;
	}

	inline static int32_t get_offset_of__instance_22() { return static_cast<int32_t>(offsetof(OnlineMaps_t1893290312_StaticFields, ____instance_22)); }
	inline OnlineMaps_t1893290312 * get__instance_22() const { return ____instance_22; }
	inline OnlineMaps_t1893290312 ** get_address_of__instance_22() { return &____instance_22; }
	inline void set__instance_22(OnlineMaps_t1893290312 * value)
	{
		____instance_22 = value;
		Il2CppCodeGenWriteBarrier(&____instance_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
