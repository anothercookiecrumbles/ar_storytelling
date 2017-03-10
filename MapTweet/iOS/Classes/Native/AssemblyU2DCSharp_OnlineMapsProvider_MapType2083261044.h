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
// OnlineMapsProvider
struct OnlineMapsProvider_t1138577395;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t710107290;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsProvider/MapType
struct  MapType_t2083261044  : public Il2CppObject
{
public:
	// System.String OnlineMapsProvider/MapType::id
	String_t* ___id_0;
	// System.String OnlineMapsProvider/MapType::fullID
	String_t* ___fullID_1;
	// System.String OnlineMapsProvider/MapType::title
	String_t* ___title_2;
	// OnlineMapsProvider OnlineMapsProvider/MapType::provider
	OnlineMapsProvider_t1138577395 * ___provider_3;
	// System.Int32 OnlineMapsProvider/MapType::index
	int32_t ___index_4;
	// System.Boolean OnlineMapsProvider/MapType::isCustom
	bool ___isCustom_5;
	// System.Boolean OnlineMapsProvider/MapType::hasWithoutLabels
	bool ___hasWithoutLabels_6;
	// System.Boolean OnlineMapsProvider/MapType::hasWithLabels
	bool ___hasWithLabels_7;
	// System.String OnlineMapsProvider/MapType::_ext
	String_t* ____ext_8;
	// System.Nullable`1<System.Boolean> OnlineMapsProvider/MapType::_hasLanguage
	Nullable_1_t2088641033  ____hasLanguage_9;
	// System.Nullable`1<System.Boolean> OnlineMapsProvider/MapType::_hasLabels
	Nullable_1_t2088641033  ____hasLabels_10;
	// System.Nullable`1<System.Boolean> OnlineMapsProvider/MapType::_labelsEnabled
	Nullable_1_t2088641033  ____labelsEnabled_11;
	// System.String OnlineMapsProvider/MapType::_urlWithLabels
	String_t* ____urlWithLabels_12;
	// System.String OnlineMapsProvider/MapType::_urlWithoutLabels
	String_t* ____urlWithoutLabels_13;
	// System.Nullable`1<System.Boolean> OnlineMapsProvider/MapType::_useHTTP
	Nullable_1_t2088641033  ____useHTTP_14;
	// System.String OnlineMapsProvider/MapType::_variantWithLabels
	String_t* ____variantWithLabels_15;
	// System.String OnlineMapsProvider/MapType::_variantWithoutLabels
	String_t* ____variantWithoutLabels_16;
	// System.String OnlineMapsProvider/MapType::_propWithLabels
	String_t* ____propWithLabels_17;
	// System.String OnlineMapsProvider/MapType::_propWithoutLabels
	String_t* ____propWithoutLabels_18;
	// System.Nullable`1<System.Boolean> OnlineMapsProvider/MapType::_logUrl
	Nullable_1_t2088641033  ____logUrl_19;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_fullID_1() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ___fullID_1)); }
	inline String_t* get_fullID_1() const { return ___fullID_1; }
	inline String_t** get_address_of_fullID_1() { return &___fullID_1; }
	inline void set_fullID_1(String_t* value)
	{
		___fullID_1 = value;
		Il2CppCodeGenWriteBarrier(&___fullID_1, value);
	}

	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_provider_3() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ___provider_3)); }
	inline OnlineMapsProvider_t1138577395 * get_provider_3() const { return ___provider_3; }
	inline OnlineMapsProvider_t1138577395 ** get_address_of_provider_3() { return &___provider_3; }
	inline void set_provider_3(OnlineMapsProvider_t1138577395 * value)
	{
		___provider_3 = value;
		Il2CppCodeGenWriteBarrier(&___provider_3, value);
	}

	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_isCustom_5() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ___isCustom_5)); }
	inline bool get_isCustom_5() const { return ___isCustom_5; }
	inline bool* get_address_of_isCustom_5() { return &___isCustom_5; }
	inline void set_isCustom_5(bool value)
	{
		___isCustom_5 = value;
	}

	inline static int32_t get_offset_of_hasWithoutLabels_6() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ___hasWithoutLabels_6)); }
	inline bool get_hasWithoutLabels_6() const { return ___hasWithoutLabels_6; }
	inline bool* get_address_of_hasWithoutLabels_6() { return &___hasWithoutLabels_6; }
	inline void set_hasWithoutLabels_6(bool value)
	{
		___hasWithoutLabels_6 = value;
	}

	inline static int32_t get_offset_of_hasWithLabels_7() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ___hasWithLabels_7)); }
	inline bool get_hasWithLabels_7() const { return ___hasWithLabels_7; }
	inline bool* get_address_of_hasWithLabels_7() { return &___hasWithLabels_7; }
	inline void set_hasWithLabels_7(bool value)
	{
		___hasWithLabels_7 = value;
	}

	inline static int32_t get_offset_of__ext_8() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ____ext_8)); }
	inline String_t* get__ext_8() const { return ____ext_8; }
	inline String_t** get_address_of__ext_8() { return &____ext_8; }
	inline void set__ext_8(String_t* value)
	{
		____ext_8 = value;
		Il2CppCodeGenWriteBarrier(&____ext_8, value);
	}

	inline static int32_t get_offset_of__hasLanguage_9() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ____hasLanguage_9)); }
	inline Nullable_1_t2088641033  get__hasLanguage_9() const { return ____hasLanguage_9; }
	inline Nullable_1_t2088641033 * get_address_of__hasLanguage_9() { return &____hasLanguage_9; }
	inline void set__hasLanguage_9(Nullable_1_t2088641033  value)
	{
		____hasLanguage_9 = value;
	}

	inline static int32_t get_offset_of__hasLabels_10() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ____hasLabels_10)); }
	inline Nullable_1_t2088641033  get__hasLabels_10() const { return ____hasLabels_10; }
	inline Nullable_1_t2088641033 * get_address_of__hasLabels_10() { return &____hasLabels_10; }
	inline void set__hasLabels_10(Nullable_1_t2088641033  value)
	{
		____hasLabels_10 = value;
	}

	inline static int32_t get_offset_of__labelsEnabled_11() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ____labelsEnabled_11)); }
	inline Nullable_1_t2088641033  get__labelsEnabled_11() const { return ____labelsEnabled_11; }
	inline Nullable_1_t2088641033 * get_address_of__labelsEnabled_11() { return &____labelsEnabled_11; }
	inline void set__labelsEnabled_11(Nullable_1_t2088641033  value)
	{
		____labelsEnabled_11 = value;
	}

	inline static int32_t get_offset_of__urlWithLabels_12() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ____urlWithLabels_12)); }
	inline String_t* get__urlWithLabels_12() const { return ____urlWithLabels_12; }
	inline String_t** get_address_of__urlWithLabels_12() { return &____urlWithLabels_12; }
	inline void set__urlWithLabels_12(String_t* value)
	{
		____urlWithLabels_12 = value;
		Il2CppCodeGenWriteBarrier(&____urlWithLabels_12, value);
	}

	inline static int32_t get_offset_of__urlWithoutLabels_13() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ____urlWithoutLabels_13)); }
	inline String_t* get__urlWithoutLabels_13() const { return ____urlWithoutLabels_13; }
	inline String_t** get_address_of__urlWithoutLabels_13() { return &____urlWithoutLabels_13; }
	inline void set__urlWithoutLabels_13(String_t* value)
	{
		____urlWithoutLabels_13 = value;
		Il2CppCodeGenWriteBarrier(&____urlWithoutLabels_13, value);
	}

	inline static int32_t get_offset_of__useHTTP_14() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ____useHTTP_14)); }
	inline Nullable_1_t2088641033  get__useHTTP_14() const { return ____useHTTP_14; }
	inline Nullable_1_t2088641033 * get_address_of__useHTTP_14() { return &____useHTTP_14; }
	inline void set__useHTTP_14(Nullable_1_t2088641033  value)
	{
		____useHTTP_14 = value;
	}

	inline static int32_t get_offset_of__variantWithLabels_15() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ____variantWithLabels_15)); }
	inline String_t* get__variantWithLabels_15() const { return ____variantWithLabels_15; }
	inline String_t** get_address_of__variantWithLabels_15() { return &____variantWithLabels_15; }
	inline void set__variantWithLabels_15(String_t* value)
	{
		____variantWithLabels_15 = value;
		Il2CppCodeGenWriteBarrier(&____variantWithLabels_15, value);
	}

	inline static int32_t get_offset_of__variantWithoutLabels_16() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ____variantWithoutLabels_16)); }
	inline String_t* get__variantWithoutLabels_16() const { return ____variantWithoutLabels_16; }
	inline String_t** get_address_of__variantWithoutLabels_16() { return &____variantWithoutLabels_16; }
	inline void set__variantWithoutLabels_16(String_t* value)
	{
		____variantWithoutLabels_16 = value;
		Il2CppCodeGenWriteBarrier(&____variantWithoutLabels_16, value);
	}

	inline static int32_t get_offset_of__propWithLabels_17() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ____propWithLabels_17)); }
	inline String_t* get__propWithLabels_17() const { return ____propWithLabels_17; }
	inline String_t** get_address_of__propWithLabels_17() { return &____propWithLabels_17; }
	inline void set__propWithLabels_17(String_t* value)
	{
		____propWithLabels_17 = value;
		Il2CppCodeGenWriteBarrier(&____propWithLabels_17, value);
	}

	inline static int32_t get_offset_of__propWithoutLabels_18() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ____propWithoutLabels_18)); }
	inline String_t* get__propWithoutLabels_18() const { return ____propWithoutLabels_18; }
	inline String_t** get_address_of__propWithoutLabels_18() { return &____propWithoutLabels_18; }
	inline void set__propWithoutLabels_18(String_t* value)
	{
		____propWithoutLabels_18 = value;
		Il2CppCodeGenWriteBarrier(&____propWithoutLabels_18, value);
	}

	inline static int32_t get_offset_of__logUrl_19() { return static_cast<int32_t>(offsetof(MapType_t2083261044, ____logUrl_19)); }
	inline Nullable_1_t2088641033  get__logUrl_19() const { return ____logUrl_19; }
	inline Nullable_1_t2088641033 * get_address_of__logUrl_19() { return &____logUrl_19; }
	inline void set__logUrl_19(Nullable_1_t2088641033  value)
	{
		____logUrl_19 = value;
	}
};

struct MapType_t2083261044_StaticFields
{
public:
	// System.Text.RegularExpressions.MatchEvaluator OnlineMapsProvider/MapType::<>f__am$cache0
	MatchEvaluator_t710107290 * ___U3CU3Ef__amU24cache0_20;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_20() { return static_cast<int32_t>(offsetof(MapType_t2083261044_StaticFields, ___U3CU3Ef__amU24cache0_20)); }
	inline MatchEvaluator_t710107290 * get_U3CU3Ef__amU24cache0_20() const { return ___U3CU3Ef__amU24cache0_20; }
	inline MatchEvaluator_t710107290 ** get_address_of_U3CU3Ef__amU24cache0_20() { return &___U3CU3Ef__amU24cache0_20; }
	inline void set_U3CU3Ef__amU24cache0_20(MatchEvaluator_t710107290 * value)
	{
		___U3CU3Ef__amU24cache0_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
