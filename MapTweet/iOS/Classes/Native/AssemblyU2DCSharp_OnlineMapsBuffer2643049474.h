#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.Collections.Generic.IEnumerable`1<OnlineMapsMarker>,System.Collections.Generic.IEnumerable`1<OnlineMapsMarker>>
struct Func_2_t1355543413;
// OnlineMaps
struct OnlineMaps_t1893290312;
// OnlineMapsVector2i
struct OnlineMapsVector2i_t2180897250;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// System.Collections.Generic.List`1<OnlineMapsTile>
struct List_1_t3685418368;
// System.Func`2<OnlineMapsMarker,OnlineMapsMarkerBase>
struct Func_2_t3847147620;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OnlineMapsRedrawType1698729245.h"
#include "AssemblyU2DCSharp_OnlineMapsBufferStatus201731616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsBuffer
struct  OnlineMapsBuffer_t2643049474  : public Il2CppObject
{
public:
	// System.Boolean OnlineMapsBuffer::allowUnloadTiles
	bool ___allowUnloadTiles_1;
	// OnlineMaps OnlineMapsBuffer::api
	OnlineMaps_t1893290312 * ___api_2;
	// System.Int32 OnlineMapsBuffer::apiZoom
	int32_t ___apiZoom_3;
	// OnlineMapsVector2i OnlineMapsBuffer::bufferPosition
	OnlineMapsVector2i_t2180897250 * ___bufferPosition_4;
	// UnityEngine.Color32[] OnlineMapsBuffer::frontBuffer
	Color32U5BU5D_t30278651* ___frontBuffer_5;
	// System.Boolean OnlineMapsBuffer::generateSmartBuffer
	bool ___generateSmartBuffer_6;
	// System.Int32 OnlineMapsBuffer::height
	int32_t ___height_7;
	// System.Collections.Generic.List`1<OnlineMapsTile> OnlineMapsBuffer::newTiles
	List_1_t3685418368 * ___newTiles_8;
	// OnlineMapsRedrawType OnlineMapsBuffer::redrawType
	int32_t ___redrawType_9;
	// OnlineMapsBufferStatus OnlineMapsBuffer::status
	int32_t ___status_10;
	// UnityEngine.Color32[] OnlineMapsBuffer::smartBuffer
	Color32U5BU5D_t30278651* ___smartBuffer_11;
	// System.Boolean OnlineMapsBuffer::updateBackBuffer
	bool ___updateBackBuffer_12;
	// System.Int32 OnlineMapsBuffer::width
	int32_t ___width_13;
	// UnityEngine.Color32[] OnlineMapsBuffer::backBuffer
	Color32U5BU5D_t30278651* ___backBuffer_14;
	// System.Int32 OnlineMapsBuffer::bufferZoom
	int32_t ___bufferZoom_15;
	// System.Boolean OnlineMapsBuffer::disposed
	bool ___disposed_16;
	// OnlineMapsVector2i OnlineMapsBuffer::frontBufferPosition
	OnlineMapsVector2i_t2180897250 * ___frontBufferPosition_17;
	// System.Boolean OnlineMapsBuffer::needUnloadTiles
	bool ___needUnloadTiles_18;
	// System.Double OnlineMapsBuffer::apiLongitude
	double ___apiLongitude_19;
	// System.Double OnlineMapsBuffer::apiLatitude
	double ___apiLatitude_20;

public:
	inline static int32_t get_offset_of_allowUnloadTiles_1() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___allowUnloadTiles_1)); }
	inline bool get_allowUnloadTiles_1() const { return ___allowUnloadTiles_1; }
	inline bool* get_address_of_allowUnloadTiles_1() { return &___allowUnloadTiles_1; }
	inline void set_allowUnloadTiles_1(bool value)
	{
		___allowUnloadTiles_1 = value;
	}

	inline static int32_t get_offset_of_api_2() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___api_2)); }
	inline OnlineMaps_t1893290312 * get_api_2() const { return ___api_2; }
	inline OnlineMaps_t1893290312 ** get_address_of_api_2() { return &___api_2; }
	inline void set_api_2(OnlineMaps_t1893290312 * value)
	{
		___api_2 = value;
		Il2CppCodeGenWriteBarrier(&___api_2, value);
	}

	inline static int32_t get_offset_of_apiZoom_3() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___apiZoom_3)); }
	inline int32_t get_apiZoom_3() const { return ___apiZoom_3; }
	inline int32_t* get_address_of_apiZoom_3() { return &___apiZoom_3; }
	inline void set_apiZoom_3(int32_t value)
	{
		___apiZoom_3 = value;
	}

	inline static int32_t get_offset_of_bufferPosition_4() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___bufferPosition_4)); }
	inline OnlineMapsVector2i_t2180897250 * get_bufferPosition_4() const { return ___bufferPosition_4; }
	inline OnlineMapsVector2i_t2180897250 ** get_address_of_bufferPosition_4() { return &___bufferPosition_4; }
	inline void set_bufferPosition_4(OnlineMapsVector2i_t2180897250 * value)
	{
		___bufferPosition_4 = value;
		Il2CppCodeGenWriteBarrier(&___bufferPosition_4, value);
	}

	inline static int32_t get_offset_of_frontBuffer_5() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___frontBuffer_5)); }
	inline Color32U5BU5D_t30278651* get_frontBuffer_5() const { return ___frontBuffer_5; }
	inline Color32U5BU5D_t30278651** get_address_of_frontBuffer_5() { return &___frontBuffer_5; }
	inline void set_frontBuffer_5(Color32U5BU5D_t30278651* value)
	{
		___frontBuffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___frontBuffer_5, value);
	}

	inline static int32_t get_offset_of_generateSmartBuffer_6() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___generateSmartBuffer_6)); }
	inline bool get_generateSmartBuffer_6() const { return ___generateSmartBuffer_6; }
	inline bool* get_address_of_generateSmartBuffer_6() { return &___generateSmartBuffer_6; }
	inline void set_generateSmartBuffer_6(bool value)
	{
		___generateSmartBuffer_6 = value;
	}

	inline static int32_t get_offset_of_height_7() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___height_7)); }
	inline int32_t get_height_7() const { return ___height_7; }
	inline int32_t* get_address_of_height_7() { return &___height_7; }
	inline void set_height_7(int32_t value)
	{
		___height_7 = value;
	}

	inline static int32_t get_offset_of_newTiles_8() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___newTiles_8)); }
	inline List_1_t3685418368 * get_newTiles_8() const { return ___newTiles_8; }
	inline List_1_t3685418368 ** get_address_of_newTiles_8() { return &___newTiles_8; }
	inline void set_newTiles_8(List_1_t3685418368 * value)
	{
		___newTiles_8 = value;
		Il2CppCodeGenWriteBarrier(&___newTiles_8, value);
	}

	inline static int32_t get_offset_of_redrawType_9() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___redrawType_9)); }
	inline int32_t get_redrawType_9() const { return ___redrawType_9; }
	inline int32_t* get_address_of_redrawType_9() { return &___redrawType_9; }
	inline void set_redrawType_9(int32_t value)
	{
		___redrawType_9 = value;
	}

	inline static int32_t get_offset_of_status_10() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___status_10)); }
	inline int32_t get_status_10() const { return ___status_10; }
	inline int32_t* get_address_of_status_10() { return &___status_10; }
	inline void set_status_10(int32_t value)
	{
		___status_10 = value;
	}

	inline static int32_t get_offset_of_smartBuffer_11() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___smartBuffer_11)); }
	inline Color32U5BU5D_t30278651* get_smartBuffer_11() const { return ___smartBuffer_11; }
	inline Color32U5BU5D_t30278651** get_address_of_smartBuffer_11() { return &___smartBuffer_11; }
	inline void set_smartBuffer_11(Color32U5BU5D_t30278651* value)
	{
		___smartBuffer_11 = value;
		Il2CppCodeGenWriteBarrier(&___smartBuffer_11, value);
	}

	inline static int32_t get_offset_of_updateBackBuffer_12() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___updateBackBuffer_12)); }
	inline bool get_updateBackBuffer_12() const { return ___updateBackBuffer_12; }
	inline bool* get_address_of_updateBackBuffer_12() { return &___updateBackBuffer_12; }
	inline void set_updateBackBuffer_12(bool value)
	{
		___updateBackBuffer_12 = value;
	}

	inline static int32_t get_offset_of_width_13() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___width_13)); }
	inline int32_t get_width_13() const { return ___width_13; }
	inline int32_t* get_address_of_width_13() { return &___width_13; }
	inline void set_width_13(int32_t value)
	{
		___width_13 = value;
	}

	inline static int32_t get_offset_of_backBuffer_14() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___backBuffer_14)); }
	inline Color32U5BU5D_t30278651* get_backBuffer_14() const { return ___backBuffer_14; }
	inline Color32U5BU5D_t30278651** get_address_of_backBuffer_14() { return &___backBuffer_14; }
	inline void set_backBuffer_14(Color32U5BU5D_t30278651* value)
	{
		___backBuffer_14 = value;
		Il2CppCodeGenWriteBarrier(&___backBuffer_14, value);
	}

	inline static int32_t get_offset_of_bufferZoom_15() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___bufferZoom_15)); }
	inline int32_t get_bufferZoom_15() const { return ___bufferZoom_15; }
	inline int32_t* get_address_of_bufferZoom_15() { return &___bufferZoom_15; }
	inline void set_bufferZoom_15(int32_t value)
	{
		___bufferZoom_15 = value;
	}

	inline static int32_t get_offset_of_disposed_16() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___disposed_16)); }
	inline bool get_disposed_16() const { return ___disposed_16; }
	inline bool* get_address_of_disposed_16() { return &___disposed_16; }
	inline void set_disposed_16(bool value)
	{
		___disposed_16 = value;
	}

	inline static int32_t get_offset_of_frontBufferPosition_17() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___frontBufferPosition_17)); }
	inline OnlineMapsVector2i_t2180897250 * get_frontBufferPosition_17() const { return ___frontBufferPosition_17; }
	inline OnlineMapsVector2i_t2180897250 ** get_address_of_frontBufferPosition_17() { return &___frontBufferPosition_17; }
	inline void set_frontBufferPosition_17(OnlineMapsVector2i_t2180897250 * value)
	{
		___frontBufferPosition_17 = value;
		Il2CppCodeGenWriteBarrier(&___frontBufferPosition_17, value);
	}

	inline static int32_t get_offset_of_needUnloadTiles_18() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___needUnloadTiles_18)); }
	inline bool get_needUnloadTiles_18() const { return ___needUnloadTiles_18; }
	inline bool* get_address_of_needUnloadTiles_18() { return &___needUnloadTiles_18; }
	inline void set_needUnloadTiles_18(bool value)
	{
		___needUnloadTiles_18 = value;
	}

	inline static int32_t get_offset_of_apiLongitude_19() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___apiLongitude_19)); }
	inline double get_apiLongitude_19() const { return ___apiLongitude_19; }
	inline double* get_address_of_apiLongitude_19() { return &___apiLongitude_19; }
	inline void set_apiLongitude_19(double value)
	{
		___apiLongitude_19 = value;
	}

	inline static int32_t get_offset_of_apiLatitude_20() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474, ___apiLatitude_20)); }
	inline double get_apiLatitude_20() const { return ___apiLatitude_20; }
	inline double* get_address_of_apiLatitude_20() { return &___apiLatitude_20; }
	inline void set_apiLatitude_20(double value)
	{
		___apiLatitude_20 = value;
	}
};

struct OnlineMapsBuffer_t2643049474_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.IEnumerable`1<OnlineMapsMarker>,System.Collections.Generic.IEnumerable`1<OnlineMapsMarker>> OnlineMapsBuffer::OnSortMarker
	Func_2_t1355543413 * ___OnSortMarker_0;
	// System.Func`2<OnlineMapsMarker,OnlineMapsMarkerBase> OnlineMapsBuffer::<>f__am$cache0
	Func_2_t3847147620 * ___U3CU3Ef__amU24cache0_21;

public:
	inline static int32_t get_offset_of_OnSortMarker_0() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474_StaticFields, ___OnSortMarker_0)); }
	inline Func_2_t1355543413 * get_OnSortMarker_0() const { return ___OnSortMarker_0; }
	inline Func_2_t1355543413 ** get_address_of_OnSortMarker_0() { return &___OnSortMarker_0; }
	inline void set_OnSortMarker_0(Func_2_t1355543413 * value)
	{
		___OnSortMarker_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnSortMarker_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_21() { return static_cast<int32_t>(offsetof(OnlineMapsBuffer_t2643049474_StaticFields, ___U3CU3Ef__amU24cache0_21)); }
	inline Func_2_t3847147620 * get_U3CU3Ef__amU24cache0_21() const { return ___U3CU3Ef__amU24cache0_21; }
	inline Func_2_t3847147620 ** get_address_of_U3CU3Ef__amU24cache0_21() { return &___U3CU3Ef__amU24cache0_21; }
	inline void set_U3CU3Ef__amU24cache0_21(Func_2_t3847147620 * value)
	{
		___U3CU3Ef__amU24cache0_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
