#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Func`2<OnlineMapsTile,System.String>
struct Func_2_t697231990;
// System.Func`3<OnlineMapsTile,System.String,System.String>
struct Func_3_t2650565996;
// System.Action`1<OnlineMapsTile>
struct Action_1_t4118096618;
// System.Collections.Generic.Dictionary`2<System.UInt64,OnlineMapsTile>
struct Dictionary_2_t1962412005;
// System.Collections.Generic.List`1<OnlineMapsTile>
struct List_1_t3685418368;
// OnlineMaps
struct OnlineMaps_t1893290312;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// OnlineMapsTile
struct OnlineMapsTile_t21329940;
// OnlineMapsProvider/MapType
struct MapType_t2083261044;
// OnlineMapsWWW
struct OnlineMapsWWW_t3247411593;
// OnlineMapsTile[]
struct OnlineMapsTileU5BU5D_t2146591005;
// OnlineMapsTrafficProvider
struct OnlineMapsTrafficProvider_t692180616;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsTileStatus3389371110.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsTile
struct  OnlineMapsTile_t21329940  : public Il2CppObject
{
public:
	// System.Action`1<OnlineMapsTile> OnlineMapsTile::OnDisposed
	Action_1_t4118096618 * ___OnDisposed_11;
	// System.Action`1<OnlineMapsTile> OnlineMapsTile::OnSetColor
	Action_1_t4118096618 * ___OnSetColor_12;
	// UnityEngine.Vector2 OnlineMapsTile::bottomRight
	Vector2_t2243707579  ___bottomRight_13;
	// System.Boolean OnlineMapsTile::cacheChecked
	bool ___cacheChecked_14;
	// System.Object OnlineMapsTile::customData
	Il2CppObject * ___customData_15;
	// System.Byte[] OnlineMapsTile::data
	ByteU5BU5D_t3397334013* ___data_16;
	// System.Boolean OnlineMapsTile::drawingChanged
	bool ___drawingChanged_17;
	// UnityEngine.Vector2 OnlineMapsTile::globalPosition
	Vector2_t2243707579  ___globalPosition_18;
	// System.Boolean OnlineMapsTile::hasColors
	bool ___hasColors_19;
	// System.Boolean OnlineMapsTile::isMapTile
	bool ___isMapTile_20;
	// System.UInt64 OnlineMapsTile::key
	uint64_t ___key_21;
	// System.Boolean OnlineMapsTile::labels
	bool ___labels_22;
	// System.String OnlineMapsTile::language
	String_t* ___language_23;
	// UnityEngine.Texture2D OnlineMapsTile::overlayBackTexture
	Texture2D_t3542995729 * ___overlayBackTexture_24;
	// System.Single OnlineMapsTile::overlayBackAlpha
	float ___overlayBackAlpha_25;
	// UnityEngine.Texture2D OnlineMapsTile::overlayFrontTexture
	Texture2D_t3542995729 * ___overlayFrontTexture_26;
	// System.Single OnlineMapsTile::overlayFrontAlpha
	float ___overlayFrontAlpha_27;
	// OnlineMapsTile OnlineMapsTile::parent
	OnlineMapsTile_t21329940 * ___parent_28;
	// OnlineMapsProvider/MapType OnlineMapsTile::mapType
	MapType_t2083261044 * ___mapType_29;
	// OnlineMapsTileStatus OnlineMapsTile::status
	int32_t ___status_30;
	// UnityEngine.Texture2D OnlineMapsTile::texture
	Texture2D_t3542995729 * ___texture_31;
	// UnityEngine.Vector2 OnlineMapsTile::topLeft
	Vector2_t2243707579  ___topLeft_32;
	// UnityEngine.Texture2D OnlineMapsTile::trafficTexture
	Texture2D_t3542995729 * ___trafficTexture_33;
	// OnlineMapsWWW OnlineMapsTile::trafficWWW
	OnlineMapsWWW_t3247411593 * ___trafficWWW_34;
	// System.Boolean OnlineMapsTile::used
	bool ___used_35;
	// OnlineMapsWWW OnlineMapsTile::www
	OnlineMapsWWW_t3247411593 * ___www_36;
	// System.Int32 OnlineMapsTile::x
	int32_t ___x_37;
	// System.Int32 OnlineMapsTile::y
	int32_t ___y_38;
	// System.Int32 OnlineMapsTile::zoom
	int32_t ___zoom_39;
	// UnityEngine.Color32[] OnlineMapsTile::_colors
	Color32U5BU5D_t30278651* ____colors_40;
	// System.String OnlineMapsTile::_trafficURL
	String_t* ____trafficURL_41;
	// System.String OnlineMapsTile::_url
	String_t* ____url_42;
	// OnlineMapsTile[] OnlineMapsTile::childs
	OnlineMapsTileU5BU5D_t2146591005* ___childs_43;
	// System.Boolean OnlineMapsTile::hasChilds
	bool ___hasChilds_44;
	// System.Byte[] OnlineMapsTile::labelData
	ByteU5BU5D_t3397334013* ___labelData_45;
	// UnityEngine.Color32[] OnlineMapsTile::labelColors
	Color32U5BU5D_t30278651* ___labelColors_46;
	// OnlineMapsTrafficProvider OnlineMapsTile::_trafficProvider
	OnlineMapsTrafficProvider_t692180616 * ____trafficProvider_47;

public:
	inline static int32_t get_offset_of_OnDisposed_11() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___OnDisposed_11)); }
	inline Action_1_t4118096618 * get_OnDisposed_11() const { return ___OnDisposed_11; }
	inline Action_1_t4118096618 ** get_address_of_OnDisposed_11() { return &___OnDisposed_11; }
	inline void set_OnDisposed_11(Action_1_t4118096618 * value)
	{
		___OnDisposed_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnDisposed_11, value);
	}

	inline static int32_t get_offset_of_OnSetColor_12() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___OnSetColor_12)); }
	inline Action_1_t4118096618 * get_OnSetColor_12() const { return ___OnSetColor_12; }
	inline Action_1_t4118096618 ** get_address_of_OnSetColor_12() { return &___OnSetColor_12; }
	inline void set_OnSetColor_12(Action_1_t4118096618 * value)
	{
		___OnSetColor_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnSetColor_12, value);
	}

	inline static int32_t get_offset_of_bottomRight_13() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___bottomRight_13)); }
	inline Vector2_t2243707579  get_bottomRight_13() const { return ___bottomRight_13; }
	inline Vector2_t2243707579 * get_address_of_bottomRight_13() { return &___bottomRight_13; }
	inline void set_bottomRight_13(Vector2_t2243707579  value)
	{
		___bottomRight_13 = value;
	}

	inline static int32_t get_offset_of_cacheChecked_14() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___cacheChecked_14)); }
	inline bool get_cacheChecked_14() const { return ___cacheChecked_14; }
	inline bool* get_address_of_cacheChecked_14() { return &___cacheChecked_14; }
	inline void set_cacheChecked_14(bool value)
	{
		___cacheChecked_14 = value;
	}

	inline static int32_t get_offset_of_customData_15() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___customData_15)); }
	inline Il2CppObject * get_customData_15() const { return ___customData_15; }
	inline Il2CppObject ** get_address_of_customData_15() { return &___customData_15; }
	inline void set_customData_15(Il2CppObject * value)
	{
		___customData_15 = value;
		Il2CppCodeGenWriteBarrier(&___customData_15, value);
	}

	inline static int32_t get_offset_of_data_16() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___data_16)); }
	inline ByteU5BU5D_t3397334013* get_data_16() const { return ___data_16; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_16() { return &___data_16; }
	inline void set_data_16(ByteU5BU5D_t3397334013* value)
	{
		___data_16 = value;
		Il2CppCodeGenWriteBarrier(&___data_16, value);
	}

	inline static int32_t get_offset_of_drawingChanged_17() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___drawingChanged_17)); }
	inline bool get_drawingChanged_17() const { return ___drawingChanged_17; }
	inline bool* get_address_of_drawingChanged_17() { return &___drawingChanged_17; }
	inline void set_drawingChanged_17(bool value)
	{
		___drawingChanged_17 = value;
	}

	inline static int32_t get_offset_of_globalPosition_18() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___globalPosition_18)); }
	inline Vector2_t2243707579  get_globalPosition_18() const { return ___globalPosition_18; }
	inline Vector2_t2243707579 * get_address_of_globalPosition_18() { return &___globalPosition_18; }
	inline void set_globalPosition_18(Vector2_t2243707579  value)
	{
		___globalPosition_18 = value;
	}

	inline static int32_t get_offset_of_hasColors_19() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___hasColors_19)); }
	inline bool get_hasColors_19() const { return ___hasColors_19; }
	inline bool* get_address_of_hasColors_19() { return &___hasColors_19; }
	inline void set_hasColors_19(bool value)
	{
		___hasColors_19 = value;
	}

	inline static int32_t get_offset_of_isMapTile_20() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___isMapTile_20)); }
	inline bool get_isMapTile_20() const { return ___isMapTile_20; }
	inline bool* get_address_of_isMapTile_20() { return &___isMapTile_20; }
	inline void set_isMapTile_20(bool value)
	{
		___isMapTile_20 = value;
	}

	inline static int32_t get_offset_of_key_21() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___key_21)); }
	inline uint64_t get_key_21() const { return ___key_21; }
	inline uint64_t* get_address_of_key_21() { return &___key_21; }
	inline void set_key_21(uint64_t value)
	{
		___key_21 = value;
	}

	inline static int32_t get_offset_of_labels_22() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___labels_22)); }
	inline bool get_labels_22() const { return ___labels_22; }
	inline bool* get_address_of_labels_22() { return &___labels_22; }
	inline void set_labels_22(bool value)
	{
		___labels_22 = value;
	}

	inline static int32_t get_offset_of_language_23() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___language_23)); }
	inline String_t* get_language_23() const { return ___language_23; }
	inline String_t** get_address_of_language_23() { return &___language_23; }
	inline void set_language_23(String_t* value)
	{
		___language_23 = value;
		Il2CppCodeGenWriteBarrier(&___language_23, value);
	}

	inline static int32_t get_offset_of_overlayBackTexture_24() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___overlayBackTexture_24)); }
	inline Texture2D_t3542995729 * get_overlayBackTexture_24() const { return ___overlayBackTexture_24; }
	inline Texture2D_t3542995729 ** get_address_of_overlayBackTexture_24() { return &___overlayBackTexture_24; }
	inline void set_overlayBackTexture_24(Texture2D_t3542995729 * value)
	{
		___overlayBackTexture_24 = value;
		Il2CppCodeGenWriteBarrier(&___overlayBackTexture_24, value);
	}

	inline static int32_t get_offset_of_overlayBackAlpha_25() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___overlayBackAlpha_25)); }
	inline float get_overlayBackAlpha_25() const { return ___overlayBackAlpha_25; }
	inline float* get_address_of_overlayBackAlpha_25() { return &___overlayBackAlpha_25; }
	inline void set_overlayBackAlpha_25(float value)
	{
		___overlayBackAlpha_25 = value;
	}

	inline static int32_t get_offset_of_overlayFrontTexture_26() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___overlayFrontTexture_26)); }
	inline Texture2D_t3542995729 * get_overlayFrontTexture_26() const { return ___overlayFrontTexture_26; }
	inline Texture2D_t3542995729 ** get_address_of_overlayFrontTexture_26() { return &___overlayFrontTexture_26; }
	inline void set_overlayFrontTexture_26(Texture2D_t3542995729 * value)
	{
		___overlayFrontTexture_26 = value;
		Il2CppCodeGenWriteBarrier(&___overlayFrontTexture_26, value);
	}

	inline static int32_t get_offset_of_overlayFrontAlpha_27() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___overlayFrontAlpha_27)); }
	inline float get_overlayFrontAlpha_27() const { return ___overlayFrontAlpha_27; }
	inline float* get_address_of_overlayFrontAlpha_27() { return &___overlayFrontAlpha_27; }
	inline void set_overlayFrontAlpha_27(float value)
	{
		___overlayFrontAlpha_27 = value;
	}

	inline static int32_t get_offset_of_parent_28() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___parent_28)); }
	inline OnlineMapsTile_t21329940 * get_parent_28() const { return ___parent_28; }
	inline OnlineMapsTile_t21329940 ** get_address_of_parent_28() { return &___parent_28; }
	inline void set_parent_28(OnlineMapsTile_t21329940 * value)
	{
		___parent_28 = value;
		Il2CppCodeGenWriteBarrier(&___parent_28, value);
	}

	inline static int32_t get_offset_of_mapType_29() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___mapType_29)); }
	inline MapType_t2083261044 * get_mapType_29() const { return ___mapType_29; }
	inline MapType_t2083261044 ** get_address_of_mapType_29() { return &___mapType_29; }
	inline void set_mapType_29(MapType_t2083261044 * value)
	{
		___mapType_29 = value;
		Il2CppCodeGenWriteBarrier(&___mapType_29, value);
	}

	inline static int32_t get_offset_of_status_30() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___status_30)); }
	inline int32_t get_status_30() const { return ___status_30; }
	inline int32_t* get_address_of_status_30() { return &___status_30; }
	inline void set_status_30(int32_t value)
	{
		___status_30 = value;
	}

	inline static int32_t get_offset_of_texture_31() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___texture_31)); }
	inline Texture2D_t3542995729 * get_texture_31() const { return ___texture_31; }
	inline Texture2D_t3542995729 ** get_address_of_texture_31() { return &___texture_31; }
	inline void set_texture_31(Texture2D_t3542995729 * value)
	{
		___texture_31 = value;
		Il2CppCodeGenWriteBarrier(&___texture_31, value);
	}

	inline static int32_t get_offset_of_topLeft_32() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___topLeft_32)); }
	inline Vector2_t2243707579  get_topLeft_32() const { return ___topLeft_32; }
	inline Vector2_t2243707579 * get_address_of_topLeft_32() { return &___topLeft_32; }
	inline void set_topLeft_32(Vector2_t2243707579  value)
	{
		___topLeft_32 = value;
	}

	inline static int32_t get_offset_of_trafficTexture_33() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___trafficTexture_33)); }
	inline Texture2D_t3542995729 * get_trafficTexture_33() const { return ___trafficTexture_33; }
	inline Texture2D_t3542995729 ** get_address_of_trafficTexture_33() { return &___trafficTexture_33; }
	inline void set_trafficTexture_33(Texture2D_t3542995729 * value)
	{
		___trafficTexture_33 = value;
		Il2CppCodeGenWriteBarrier(&___trafficTexture_33, value);
	}

	inline static int32_t get_offset_of_trafficWWW_34() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___trafficWWW_34)); }
	inline OnlineMapsWWW_t3247411593 * get_trafficWWW_34() const { return ___trafficWWW_34; }
	inline OnlineMapsWWW_t3247411593 ** get_address_of_trafficWWW_34() { return &___trafficWWW_34; }
	inline void set_trafficWWW_34(OnlineMapsWWW_t3247411593 * value)
	{
		___trafficWWW_34 = value;
		Il2CppCodeGenWriteBarrier(&___trafficWWW_34, value);
	}

	inline static int32_t get_offset_of_used_35() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___used_35)); }
	inline bool get_used_35() const { return ___used_35; }
	inline bool* get_address_of_used_35() { return &___used_35; }
	inline void set_used_35(bool value)
	{
		___used_35 = value;
	}

	inline static int32_t get_offset_of_www_36() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___www_36)); }
	inline OnlineMapsWWW_t3247411593 * get_www_36() const { return ___www_36; }
	inline OnlineMapsWWW_t3247411593 ** get_address_of_www_36() { return &___www_36; }
	inline void set_www_36(OnlineMapsWWW_t3247411593 * value)
	{
		___www_36 = value;
		Il2CppCodeGenWriteBarrier(&___www_36, value);
	}

	inline static int32_t get_offset_of_x_37() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___x_37)); }
	inline int32_t get_x_37() const { return ___x_37; }
	inline int32_t* get_address_of_x_37() { return &___x_37; }
	inline void set_x_37(int32_t value)
	{
		___x_37 = value;
	}

	inline static int32_t get_offset_of_y_38() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___y_38)); }
	inline int32_t get_y_38() const { return ___y_38; }
	inline int32_t* get_address_of_y_38() { return &___y_38; }
	inline void set_y_38(int32_t value)
	{
		___y_38 = value;
	}

	inline static int32_t get_offset_of_zoom_39() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___zoom_39)); }
	inline int32_t get_zoom_39() const { return ___zoom_39; }
	inline int32_t* get_address_of_zoom_39() { return &___zoom_39; }
	inline void set_zoom_39(int32_t value)
	{
		___zoom_39 = value;
	}

	inline static int32_t get_offset_of__colors_40() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ____colors_40)); }
	inline Color32U5BU5D_t30278651* get__colors_40() const { return ____colors_40; }
	inline Color32U5BU5D_t30278651** get_address_of__colors_40() { return &____colors_40; }
	inline void set__colors_40(Color32U5BU5D_t30278651* value)
	{
		____colors_40 = value;
		Il2CppCodeGenWriteBarrier(&____colors_40, value);
	}

	inline static int32_t get_offset_of__trafficURL_41() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ____trafficURL_41)); }
	inline String_t* get__trafficURL_41() const { return ____trafficURL_41; }
	inline String_t** get_address_of__trafficURL_41() { return &____trafficURL_41; }
	inline void set__trafficURL_41(String_t* value)
	{
		____trafficURL_41 = value;
		Il2CppCodeGenWriteBarrier(&____trafficURL_41, value);
	}

	inline static int32_t get_offset_of__url_42() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ____url_42)); }
	inline String_t* get__url_42() const { return ____url_42; }
	inline String_t** get_address_of__url_42() { return &____url_42; }
	inline void set__url_42(String_t* value)
	{
		____url_42 = value;
		Il2CppCodeGenWriteBarrier(&____url_42, value);
	}

	inline static int32_t get_offset_of_childs_43() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___childs_43)); }
	inline OnlineMapsTileU5BU5D_t2146591005* get_childs_43() const { return ___childs_43; }
	inline OnlineMapsTileU5BU5D_t2146591005** get_address_of_childs_43() { return &___childs_43; }
	inline void set_childs_43(OnlineMapsTileU5BU5D_t2146591005* value)
	{
		___childs_43 = value;
		Il2CppCodeGenWriteBarrier(&___childs_43, value);
	}

	inline static int32_t get_offset_of_hasChilds_44() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___hasChilds_44)); }
	inline bool get_hasChilds_44() const { return ___hasChilds_44; }
	inline bool* get_address_of_hasChilds_44() { return &___hasChilds_44; }
	inline void set_hasChilds_44(bool value)
	{
		___hasChilds_44 = value;
	}

	inline static int32_t get_offset_of_labelData_45() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___labelData_45)); }
	inline ByteU5BU5D_t3397334013* get_labelData_45() const { return ___labelData_45; }
	inline ByteU5BU5D_t3397334013** get_address_of_labelData_45() { return &___labelData_45; }
	inline void set_labelData_45(ByteU5BU5D_t3397334013* value)
	{
		___labelData_45 = value;
		Il2CppCodeGenWriteBarrier(&___labelData_45, value);
	}

	inline static int32_t get_offset_of_labelColors_46() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ___labelColors_46)); }
	inline Color32U5BU5D_t30278651* get_labelColors_46() const { return ___labelColors_46; }
	inline Color32U5BU5D_t30278651** get_address_of_labelColors_46() { return &___labelColors_46; }
	inline void set_labelColors_46(Color32U5BU5D_t30278651* value)
	{
		___labelColors_46 = value;
		Il2CppCodeGenWriteBarrier(&___labelColors_46, value);
	}

	inline static int32_t get_offset_of__trafficProvider_47() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940, ____trafficProvider_47)); }
	inline OnlineMapsTrafficProvider_t692180616 * get__trafficProvider_47() const { return ____trafficProvider_47; }
	inline OnlineMapsTrafficProvider_t692180616 ** get_address_of__trafficProvider_47() { return &____trafficProvider_47; }
	inline void set__trafficProvider_47(OnlineMapsTrafficProvider_t692180616 * value)
	{
		____trafficProvider_47 = value;
		Il2CppCodeGenWriteBarrier(&____trafficProvider_47, value);
	}
};

struct OnlineMapsTile_t21329940_StaticFields
{
public:
	// UnityEngine.Color32[] OnlineMapsTile::defaultColors
	Color32U5BU5D_t30278651* ___defaultColors_0;
	// UnityEngine.Texture2D OnlineMapsTile::emptyColorTexture
	Texture2D_t3542995729 * ___emptyColorTexture_1;
	// System.Func`2<OnlineMapsTile,System.String> OnlineMapsTile::OnGetResourcesPath
	Func_2_t697231990 * ___OnGetResourcesPath_2;
	// System.Func`3<OnlineMapsTile,System.String,System.String> OnlineMapsTile::OnReplaceURLToken
	Func_3_t2650565996 * ___OnReplaceURLToken_3;
	// System.Func`3<OnlineMapsTile,System.String,System.String> OnlineMapsTile::OnReplaceTrafficURLToken
	Func_3_t2650565996 * ___OnReplaceTrafficURLToken_4;
	// System.Action`1<OnlineMapsTile> OnlineMapsTile::OnTileDownloaded
	Action_1_t4118096618 * ___OnTileDownloaded_5;
	// System.Action`1<OnlineMapsTile> OnlineMapsTile::OnTrafficDownloaded
	Action_1_t4118096618 * ___OnTrafficDownloaded_6;
	// System.Collections.Generic.Dictionary`2<System.UInt64,OnlineMapsTile> OnlineMapsTile::_dtiles
	Dictionary_2_t1962412005 * ____dtiles_7;
	// System.Collections.Generic.List`1<OnlineMapsTile> OnlineMapsTile::_tiles
	List_1_t3685418368 * ____tiles_8;
	// OnlineMaps OnlineMapsTile::map
	OnlineMaps_t1893290312 * ___map_9;
	// System.Collections.Generic.List`1<OnlineMapsTile> OnlineMapsTile::unusedTiles
	List_1_t3685418368 * ___unusedTiles_10;

public:
	inline static int32_t get_offset_of_defaultColors_0() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940_StaticFields, ___defaultColors_0)); }
	inline Color32U5BU5D_t30278651* get_defaultColors_0() const { return ___defaultColors_0; }
	inline Color32U5BU5D_t30278651** get_address_of_defaultColors_0() { return &___defaultColors_0; }
	inline void set_defaultColors_0(Color32U5BU5D_t30278651* value)
	{
		___defaultColors_0 = value;
		Il2CppCodeGenWriteBarrier(&___defaultColors_0, value);
	}

	inline static int32_t get_offset_of_emptyColorTexture_1() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940_StaticFields, ___emptyColorTexture_1)); }
	inline Texture2D_t3542995729 * get_emptyColorTexture_1() const { return ___emptyColorTexture_1; }
	inline Texture2D_t3542995729 ** get_address_of_emptyColorTexture_1() { return &___emptyColorTexture_1; }
	inline void set_emptyColorTexture_1(Texture2D_t3542995729 * value)
	{
		___emptyColorTexture_1 = value;
		Il2CppCodeGenWriteBarrier(&___emptyColorTexture_1, value);
	}

	inline static int32_t get_offset_of_OnGetResourcesPath_2() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940_StaticFields, ___OnGetResourcesPath_2)); }
	inline Func_2_t697231990 * get_OnGetResourcesPath_2() const { return ___OnGetResourcesPath_2; }
	inline Func_2_t697231990 ** get_address_of_OnGetResourcesPath_2() { return &___OnGetResourcesPath_2; }
	inline void set_OnGetResourcesPath_2(Func_2_t697231990 * value)
	{
		___OnGetResourcesPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnGetResourcesPath_2, value);
	}

	inline static int32_t get_offset_of_OnReplaceURLToken_3() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940_StaticFields, ___OnReplaceURLToken_3)); }
	inline Func_3_t2650565996 * get_OnReplaceURLToken_3() const { return ___OnReplaceURLToken_3; }
	inline Func_3_t2650565996 ** get_address_of_OnReplaceURLToken_3() { return &___OnReplaceURLToken_3; }
	inline void set_OnReplaceURLToken_3(Func_3_t2650565996 * value)
	{
		___OnReplaceURLToken_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnReplaceURLToken_3, value);
	}

	inline static int32_t get_offset_of_OnReplaceTrafficURLToken_4() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940_StaticFields, ___OnReplaceTrafficURLToken_4)); }
	inline Func_3_t2650565996 * get_OnReplaceTrafficURLToken_4() const { return ___OnReplaceTrafficURLToken_4; }
	inline Func_3_t2650565996 ** get_address_of_OnReplaceTrafficURLToken_4() { return &___OnReplaceTrafficURLToken_4; }
	inline void set_OnReplaceTrafficURLToken_4(Func_3_t2650565996 * value)
	{
		___OnReplaceTrafficURLToken_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnReplaceTrafficURLToken_4, value);
	}

	inline static int32_t get_offset_of_OnTileDownloaded_5() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940_StaticFields, ___OnTileDownloaded_5)); }
	inline Action_1_t4118096618 * get_OnTileDownloaded_5() const { return ___OnTileDownloaded_5; }
	inline Action_1_t4118096618 ** get_address_of_OnTileDownloaded_5() { return &___OnTileDownloaded_5; }
	inline void set_OnTileDownloaded_5(Action_1_t4118096618 * value)
	{
		___OnTileDownloaded_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnTileDownloaded_5, value);
	}

	inline static int32_t get_offset_of_OnTrafficDownloaded_6() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940_StaticFields, ___OnTrafficDownloaded_6)); }
	inline Action_1_t4118096618 * get_OnTrafficDownloaded_6() const { return ___OnTrafficDownloaded_6; }
	inline Action_1_t4118096618 ** get_address_of_OnTrafficDownloaded_6() { return &___OnTrafficDownloaded_6; }
	inline void set_OnTrafficDownloaded_6(Action_1_t4118096618 * value)
	{
		___OnTrafficDownloaded_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnTrafficDownloaded_6, value);
	}

	inline static int32_t get_offset_of__dtiles_7() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940_StaticFields, ____dtiles_7)); }
	inline Dictionary_2_t1962412005 * get__dtiles_7() const { return ____dtiles_7; }
	inline Dictionary_2_t1962412005 ** get_address_of__dtiles_7() { return &____dtiles_7; }
	inline void set__dtiles_7(Dictionary_2_t1962412005 * value)
	{
		____dtiles_7 = value;
		Il2CppCodeGenWriteBarrier(&____dtiles_7, value);
	}

	inline static int32_t get_offset_of__tiles_8() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940_StaticFields, ____tiles_8)); }
	inline List_1_t3685418368 * get__tiles_8() const { return ____tiles_8; }
	inline List_1_t3685418368 ** get_address_of__tiles_8() { return &____tiles_8; }
	inline void set__tiles_8(List_1_t3685418368 * value)
	{
		____tiles_8 = value;
		Il2CppCodeGenWriteBarrier(&____tiles_8, value);
	}

	inline static int32_t get_offset_of_map_9() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940_StaticFields, ___map_9)); }
	inline OnlineMaps_t1893290312 * get_map_9() const { return ___map_9; }
	inline OnlineMaps_t1893290312 ** get_address_of_map_9() { return &___map_9; }
	inline void set_map_9(OnlineMaps_t1893290312 * value)
	{
		___map_9 = value;
		Il2CppCodeGenWriteBarrier(&___map_9, value);
	}

	inline static int32_t get_offset_of_unusedTiles_10() { return static_cast<int32_t>(offsetof(OnlineMapsTile_t21329940_StaticFields, ___unusedTiles_10)); }
	inline List_1_t3685418368 * get_unusedTiles_10() const { return ___unusedTiles_10; }
	inline List_1_t3685418368 ** get_address_of_unusedTiles_10() { return &___unusedTiles_10; }
	inline void set_unusedTiles_10(List_1_t3685418368 * value)
	{
		___unusedTiles_10 = value;
		Il2CppCodeGenWriteBarrier(&___unusedTiles_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
