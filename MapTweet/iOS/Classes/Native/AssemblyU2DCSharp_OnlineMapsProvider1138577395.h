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
// OnlineMapsProvider[]
struct OnlineMapsProviderU5BU5D_t3258526434;
// OnlineMapsProjection
struct OnlineMapsProjection_t2624364075;
// OnlineMapsProvider/IExtraField[]
struct IExtraFieldU5BU5D_t3169866680;
// OnlineMapsProvider/MapType[]
struct MapTypeU5BU5D_t4254226749;
// System.Func`2<OnlineMapsProvider,System.String>
struct Func_2_t1809167419;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsProvider
struct  OnlineMapsProvider_t1138577395  : public Il2CppObject
{
public:
	// System.String OnlineMapsProvider::id
	String_t* ___id_5;
	// System.String OnlineMapsProvider::title
	String_t* ___title_6;
	// System.Nullable`1<System.Boolean> OnlineMapsProvider::hasLanguage
	Nullable_1_t2088641033  ___hasLanguage_7;
	// System.Nullable`1<System.Boolean> OnlineMapsProvider::hasLabels
	Nullable_1_t2088641033  ___hasLabels_8;
	// System.Nullable`1<System.Boolean> OnlineMapsProvider::labelsEnabled
	Nullable_1_t2088641033  ___labelsEnabled_9;
	// OnlineMapsProjection OnlineMapsProvider::projection
	OnlineMapsProjection_t2624364075 * ___projection_10;
	// System.Nullable`1<System.Boolean> OnlineMapsProvider::useHTTP
	Nullable_1_t2088641033  ___useHTTP_11;
	// System.Int32 OnlineMapsProvider::index
	int32_t ___index_12;
	// System.String OnlineMapsProvider::ext
	String_t* ___ext_13;
	// System.String OnlineMapsProvider::prop
	String_t* ___prop_14;
	// System.Boolean OnlineMapsProvider::twoLetterLanguage
	bool ___twoLetterLanguage_15;
	// System.Boolean OnlineMapsProvider::logUrl
	bool ___logUrl_16;
	// OnlineMapsProvider/IExtraField[] OnlineMapsProvider::extraFields
	IExtraFieldU5BU5D_t3169866680* ___extraFields_17;
	// System.String OnlineMapsProvider::_url
	String_t* ____url_18;
	// OnlineMapsProvider/MapType[] OnlineMapsProvider::_types
	MapTypeU5BU5D_t4254226749* ____types_19;

public:
	inline static int32_t get_offset_of_id_5() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___id_5)); }
	inline String_t* get_id_5() const { return ___id_5; }
	inline String_t** get_address_of_id_5() { return &___id_5; }
	inline void set_id_5(String_t* value)
	{
		___id_5 = value;
		Il2CppCodeGenWriteBarrier(&___id_5, value);
	}

	inline static int32_t get_offset_of_title_6() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___title_6)); }
	inline String_t* get_title_6() const { return ___title_6; }
	inline String_t** get_address_of_title_6() { return &___title_6; }
	inline void set_title_6(String_t* value)
	{
		___title_6 = value;
		Il2CppCodeGenWriteBarrier(&___title_6, value);
	}

	inline static int32_t get_offset_of_hasLanguage_7() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___hasLanguage_7)); }
	inline Nullable_1_t2088641033  get_hasLanguage_7() const { return ___hasLanguage_7; }
	inline Nullable_1_t2088641033 * get_address_of_hasLanguage_7() { return &___hasLanguage_7; }
	inline void set_hasLanguage_7(Nullable_1_t2088641033  value)
	{
		___hasLanguage_7 = value;
	}

	inline static int32_t get_offset_of_hasLabels_8() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___hasLabels_8)); }
	inline Nullable_1_t2088641033  get_hasLabels_8() const { return ___hasLabels_8; }
	inline Nullable_1_t2088641033 * get_address_of_hasLabels_8() { return &___hasLabels_8; }
	inline void set_hasLabels_8(Nullable_1_t2088641033  value)
	{
		___hasLabels_8 = value;
	}

	inline static int32_t get_offset_of_labelsEnabled_9() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___labelsEnabled_9)); }
	inline Nullable_1_t2088641033  get_labelsEnabled_9() const { return ___labelsEnabled_9; }
	inline Nullable_1_t2088641033 * get_address_of_labelsEnabled_9() { return &___labelsEnabled_9; }
	inline void set_labelsEnabled_9(Nullable_1_t2088641033  value)
	{
		___labelsEnabled_9 = value;
	}

	inline static int32_t get_offset_of_projection_10() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___projection_10)); }
	inline OnlineMapsProjection_t2624364075 * get_projection_10() const { return ___projection_10; }
	inline OnlineMapsProjection_t2624364075 ** get_address_of_projection_10() { return &___projection_10; }
	inline void set_projection_10(OnlineMapsProjection_t2624364075 * value)
	{
		___projection_10 = value;
		Il2CppCodeGenWriteBarrier(&___projection_10, value);
	}

	inline static int32_t get_offset_of_useHTTP_11() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___useHTTP_11)); }
	inline Nullable_1_t2088641033  get_useHTTP_11() const { return ___useHTTP_11; }
	inline Nullable_1_t2088641033 * get_address_of_useHTTP_11() { return &___useHTTP_11; }
	inline void set_useHTTP_11(Nullable_1_t2088641033  value)
	{
		___useHTTP_11 = value;
	}

	inline static int32_t get_offset_of_index_12() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___index_12)); }
	inline int32_t get_index_12() const { return ___index_12; }
	inline int32_t* get_address_of_index_12() { return &___index_12; }
	inline void set_index_12(int32_t value)
	{
		___index_12 = value;
	}

	inline static int32_t get_offset_of_ext_13() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___ext_13)); }
	inline String_t* get_ext_13() const { return ___ext_13; }
	inline String_t** get_address_of_ext_13() { return &___ext_13; }
	inline void set_ext_13(String_t* value)
	{
		___ext_13 = value;
		Il2CppCodeGenWriteBarrier(&___ext_13, value);
	}

	inline static int32_t get_offset_of_prop_14() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___prop_14)); }
	inline String_t* get_prop_14() const { return ___prop_14; }
	inline String_t** get_address_of_prop_14() { return &___prop_14; }
	inline void set_prop_14(String_t* value)
	{
		___prop_14 = value;
		Il2CppCodeGenWriteBarrier(&___prop_14, value);
	}

	inline static int32_t get_offset_of_twoLetterLanguage_15() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___twoLetterLanguage_15)); }
	inline bool get_twoLetterLanguage_15() const { return ___twoLetterLanguage_15; }
	inline bool* get_address_of_twoLetterLanguage_15() { return &___twoLetterLanguage_15; }
	inline void set_twoLetterLanguage_15(bool value)
	{
		___twoLetterLanguage_15 = value;
	}

	inline static int32_t get_offset_of_logUrl_16() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___logUrl_16)); }
	inline bool get_logUrl_16() const { return ___logUrl_16; }
	inline bool* get_address_of_logUrl_16() { return &___logUrl_16; }
	inline void set_logUrl_16(bool value)
	{
		___logUrl_16 = value;
	}

	inline static int32_t get_offset_of_extraFields_17() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ___extraFields_17)); }
	inline IExtraFieldU5BU5D_t3169866680* get_extraFields_17() const { return ___extraFields_17; }
	inline IExtraFieldU5BU5D_t3169866680** get_address_of_extraFields_17() { return &___extraFields_17; }
	inline void set_extraFields_17(IExtraFieldU5BU5D_t3169866680* value)
	{
		___extraFields_17 = value;
		Il2CppCodeGenWriteBarrier(&___extraFields_17, value);
	}

	inline static int32_t get_offset_of__url_18() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ____url_18)); }
	inline String_t* get__url_18() const { return ____url_18; }
	inline String_t** get_address_of__url_18() { return &____url_18; }
	inline void set__url_18(String_t* value)
	{
		____url_18 = value;
		Il2CppCodeGenWriteBarrier(&____url_18, value);
	}

	inline static int32_t get_offset_of__types_19() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395, ____types_19)); }
	inline MapTypeU5BU5D_t4254226749* get__types_19() const { return ____types_19; }
	inline MapTypeU5BU5D_t4254226749** get_address_of__types_19() { return &____types_19; }
	inline void set__types_19(MapTypeU5BU5D_t4254226749* value)
	{
		____types_19 = value;
		Il2CppCodeGenWriteBarrier(&____types_19, value);
	}
};

struct OnlineMapsProvider_t1138577395_StaticFields
{
public:
	// OnlineMapsProvider[] OnlineMapsProvider::providers
	OnlineMapsProviderU5BU5D_t3258526434* ___providers_4;
	// System.Func`2<OnlineMapsProvider,System.String> OnlineMapsProvider::<>f__am$cache0
	Func_2_t1809167419 * ___U3CU3Ef__amU24cache0_20;

public:
	inline static int32_t get_offset_of_providers_4() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395_StaticFields, ___providers_4)); }
	inline OnlineMapsProviderU5BU5D_t3258526434* get_providers_4() const { return ___providers_4; }
	inline OnlineMapsProviderU5BU5D_t3258526434** get_address_of_providers_4() { return &___providers_4; }
	inline void set_providers_4(OnlineMapsProviderU5BU5D_t3258526434* value)
	{
		___providers_4 = value;
		Il2CppCodeGenWriteBarrier(&___providers_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_20() { return static_cast<int32_t>(offsetof(OnlineMapsProvider_t1138577395_StaticFields, ___U3CU3Ef__amU24cache0_20)); }
	inline Func_2_t1809167419 * get_U3CU3Ef__amU24cache0_20() const { return ___U3CU3Ef__amU24cache0_20; }
	inline Func_2_t1809167419 ** get_address_of_U3CU3Ef__amU24cache0_20() { return &___U3CU3Ef__amU24cache0_20; }
	inline void set_U3CU3Ef__amU24cache0_20(Func_2_t1809167419 * value)
	{
		___U3CU3Ef__amU24cache0_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
