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
// OnlineMapsAMapSearchResult/IndoorData
struct IndoorData_t1925978660;
// OnlineMapsAMapSearchResult/BizExt
struct BizExt_t3322936807;
// OnlineMapsAMapSearchResult/Children[]
struct ChildrenU5BU5D_t15061217;
// OnlineMapsAMapSearchResult/Photo[]
struct PhotoU5BU5D_t285501314;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsAMapSearchResult/POI
struct  POI_t2165136709  : public Il2CppObject
{
public:
	// System.String OnlineMapsAMapSearchResult/POI::id
	String_t* ___id_0;
	// System.String OnlineMapsAMapSearchResult/POI::name
	String_t* ___name_1;
	// System.String OnlineMapsAMapSearchResult/POI::tag
	String_t* ___tag_2;
	// System.String OnlineMapsAMapSearchResult/POI::type
	String_t* ___type_3;
	// System.String OnlineMapsAMapSearchResult/POI::typecode
	String_t* ___typecode_4;
	// System.String OnlineMapsAMapSearchResult/POI::biz_type
	String_t* ___biz_type_5;
	// System.String OnlineMapsAMapSearchResult/POI::address
	String_t* ___address_6;
	// System.String OnlineMapsAMapSearchResult/POI::location
	String_t* ___location_7;
	// System.String OnlineMapsAMapSearchResult/POI::tel
	String_t* ___tel_8;
	// System.String OnlineMapsAMapSearchResult/POI::postcode
	String_t* ___postcode_9;
	// System.String OnlineMapsAMapSearchResult/POI::website
	String_t* ___website_10;
	// System.String OnlineMapsAMapSearchResult/POI::pcode
	String_t* ___pcode_11;
	// System.String OnlineMapsAMapSearchResult/POI::pname
	String_t* ___pname_12;
	// System.String OnlineMapsAMapSearchResult/POI::citycode
	String_t* ___citycode_13;
	// System.String OnlineMapsAMapSearchResult/POI::cityname
	String_t* ___cityname_14;
	// System.String OnlineMapsAMapSearchResult/POI::adcode
	String_t* ___adcode_15;
	// System.String OnlineMapsAMapSearchResult/POI::adname
	String_t* ___adname_16;
	// System.String OnlineMapsAMapSearchResult/POI::importance
	String_t* ___importance_17;
	// System.String OnlineMapsAMapSearchResult/POI::shopid
	String_t* ___shopid_18;
	// System.String OnlineMapsAMapSearchResult/POI::poiweight
	String_t* ___poiweight_19;
	// System.String OnlineMapsAMapSearchResult/POI::gridcode
	String_t* ___gridcode_20;
	// System.String OnlineMapsAMapSearchResult/POI::distance
	String_t* ___distance_21;
	// System.String OnlineMapsAMapSearchResult/POI::navi_poiid
	String_t* ___navi_poiid_22;
	// System.String OnlineMapsAMapSearchResult/POI::entr_location
	String_t* ___entr_location_23;
	// System.String OnlineMapsAMapSearchResult/POI::business_area
	String_t* ___business_area_24;
	// System.String OnlineMapsAMapSearchResult/POI::exit_location
	String_t* ___exit_location_25;
	// System.String OnlineMapsAMapSearchResult/POI::match
	String_t* ___match_26;
	// System.String OnlineMapsAMapSearchResult/POI::recommend
	String_t* ___recommend_27;
	// System.String OnlineMapsAMapSearchResult/POI::timestamp
	String_t* ___timestamp_28;
	// System.String OnlineMapsAMapSearchResult/POI::parking_type
	String_t* ___parking_type_29;
	// System.String OnlineMapsAMapSearchResult/POI::alias
	String_t* ___alias_30;
	// System.String OnlineMapsAMapSearchResult/POI::indoor_map
	String_t* ___indoor_map_31;
	// OnlineMapsAMapSearchResult/IndoorData OnlineMapsAMapSearchResult/POI::indoor_data
	IndoorData_t1925978660 * ___indoor_data_32;
	// System.String OnlineMapsAMapSearchResult/POI::groupbuy_num
	String_t* ___groupbuy_num_33;
	// System.String OnlineMapsAMapSearchResult/POI::discount_num
	String_t* ___discount_num_34;
	// OnlineMapsAMapSearchResult/BizExt OnlineMapsAMapSearchResult/POI::biz_ext
	BizExt_t3322936807 * ___biz_ext_35;
	// System.String OnlineMapsAMapSearchResult/POI::event
	String_t* ___event_36;
	// OnlineMapsAMapSearchResult/Children[] OnlineMapsAMapSearchResult/POI::children
	ChildrenU5BU5D_t15061217* ___children_37;
	// OnlineMapsAMapSearchResult/Photo[] OnlineMapsAMapSearchResult/POI::photos
	PhotoU5BU5D_t285501314* ___photos_38;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_tag_2() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___tag_2)); }
	inline String_t* get_tag_2() const { return ___tag_2; }
	inline String_t** get_address_of_tag_2() { return &___tag_2; }
	inline void set_tag_2(String_t* value)
	{
		___tag_2 = value;
		Il2CppCodeGenWriteBarrier(&___tag_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___type_3)); }
	inline String_t* get_type_3() const { return ___type_3; }
	inline String_t** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(String_t* value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_3, value);
	}

	inline static int32_t get_offset_of_typecode_4() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___typecode_4)); }
	inline String_t* get_typecode_4() const { return ___typecode_4; }
	inline String_t** get_address_of_typecode_4() { return &___typecode_4; }
	inline void set_typecode_4(String_t* value)
	{
		___typecode_4 = value;
		Il2CppCodeGenWriteBarrier(&___typecode_4, value);
	}

	inline static int32_t get_offset_of_biz_type_5() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___biz_type_5)); }
	inline String_t* get_biz_type_5() const { return ___biz_type_5; }
	inline String_t** get_address_of_biz_type_5() { return &___biz_type_5; }
	inline void set_biz_type_5(String_t* value)
	{
		___biz_type_5 = value;
		Il2CppCodeGenWriteBarrier(&___biz_type_5, value);
	}

	inline static int32_t get_offset_of_address_6() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___address_6)); }
	inline String_t* get_address_6() const { return ___address_6; }
	inline String_t** get_address_of_address_6() { return &___address_6; }
	inline void set_address_6(String_t* value)
	{
		___address_6 = value;
		Il2CppCodeGenWriteBarrier(&___address_6, value);
	}

	inline static int32_t get_offset_of_location_7() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___location_7)); }
	inline String_t* get_location_7() const { return ___location_7; }
	inline String_t** get_address_of_location_7() { return &___location_7; }
	inline void set_location_7(String_t* value)
	{
		___location_7 = value;
		Il2CppCodeGenWriteBarrier(&___location_7, value);
	}

	inline static int32_t get_offset_of_tel_8() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___tel_8)); }
	inline String_t* get_tel_8() const { return ___tel_8; }
	inline String_t** get_address_of_tel_8() { return &___tel_8; }
	inline void set_tel_8(String_t* value)
	{
		___tel_8 = value;
		Il2CppCodeGenWriteBarrier(&___tel_8, value);
	}

	inline static int32_t get_offset_of_postcode_9() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___postcode_9)); }
	inline String_t* get_postcode_9() const { return ___postcode_9; }
	inline String_t** get_address_of_postcode_9() { return &___postcode_9; }
	inline void set_postcode_9(String_t* value)
	{
		___postcode_9 = value;
		Il2CppCodeGenWriteBarrier(&___postcode_9, value);
	}

	inline static int32_t get_offset_of_website_10() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___website_10)); }
	inline String_t* get_website_10() const { return ___website_10; }
	inline String_t** get_address_of_website_10() { return &___website_10; }
	inline void set_website_10(String_t* value)
	{
		___website_10 = value;
		Il2CppCodeGenWriteBarrier(&___website_10, value);
	}

	inline static int32_t get_offset_of_pcode_11() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___pcode_11)); }
	inline String_t* get_pcode_11() const { return ___pcode_11; }
	inline String_t** get_address_of_pcode_11() { return &___pcode_11; }
	inline void set_pcode_11(String_t* value)
	{
		___pcode_11 = value;
		Il2CppCodeGenWriteBarrier(&___pcode_11, value);
	}

	inline static int32_t get_offset_of_pname_12() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___pname_12)); }
	inline String_t* get_pname_12() const { return ___pname_12; }
	inline String_t** get_address_of_pname_12() { return &___pname_12; }
	inline void set_pname_12(String_t* value)
	{
		___pname_12 = value;
		Il2CppCodeGenWriteBarrier(&___pname_12, value);
	}

	inline static int32_t get_offset_of_citycode_13() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___citycode_13)); }
	inline String_t* get_citycode_13() const { return ___citycode_13; }
	inline String_t** get_address_of_citycode_13() { return &___citycode_13; }
	inline void set_citycode_13(String_t* value)
	{
		___citycode_13 = value;
		Il2CppCodeGenWriteBarrier(&___citycode_13, value);
	}

	inline static int32_t get_offset_of_cityname_14() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___cityname_14)); }
	inline String_t* get_cityname_14() const { return ___cityname_14; }
	inline String_t** get_address_of_cityname_14() { return &___cityname_14; }
	inline void set_cityname_14(String_t* value)
	{
		___cityname_14 = value;
		Il2CppCodeGenWriteBarrier(&___cityname_14, value);
	}

	inline static int32_t get_offset_of_adcode_15() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___adcode_15)); }
	inline String_t* get_adcode_15() const { return ___adcode_15; }
	inline String_t** get_address_of_adcode_15() { return &___adcode_15; }
	inline void set_adcode_15(String_t* value)
	{
		___adcode_15 = value;
		Il2CppCodeGenWriteBarrier(&___adcode_15, value);
	}

	inline static int32_t get_offset_of_adname_16() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___adname_16)); }
	inline String_t* get_adname_16() const { return ___adname_16; }
	inline String_t** get_address_of_adname_16() { return &___adname_16; }
	inline void set_adname_16(String_t* value)
	{
		___adname_16 = value;
		Il2CppCodeGenWriteBarrier(&___adname_16, value);
	}

	inline static int32_t get_offset_of_importance_17() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___importance_17)); }
	inline String_t* get_importance_17() const { return ___importance_17; }
	inline String_t** get_address_of_importance_17() { return &___importance_17; }
	inline void set_importance_17(String_t* value)
	{
		___importance_17 = value;
		Il2CppCodeGenWriteBarrier(&___importance_17, value);
	}

	inline static int32_t get_offset_of_shopid_18() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___shopid_18)); }
	inline String_t* get_shopid_18() const { return ___shopid_18; }
	inline String_t** get_address_of_shopid_18() { return &___shopid_18; }
	inline void set_shopid_18(String_t* value)
	{
		___shopid_18 = value;
		Il2CppCodeGenWriteBarrier(&___shopid_18, value);
	}

	inline static int32_t get_offset_of_poiweight_19() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___poiweight_19)); }
	inline String_t* get_poiweight_19() const { return ___poiweight_19; }
	inline String_t** get_address_of_poiweight_19() { return &___poiweight_19; }
	inline void set_poiweight_19(String_t* value)
	{
		___poiweight_19 = value;
		Il2CppCodeGenWriteBarrier(&___poiweight_19, value);
	}

	inline static int32_t get_offset_of_gridcode_20() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___gridcode_20)); }
	inline String_t* get_gridcode_20() const { return ___gridcode_20; }
	inline String_t** get_address_of_gridcode_20() { return &___gridcode_20; }
	inline void set_gridcode_20(String_t* value)
	{
		___gridcode_20 = value;
		Il2CppCodeGenWriteBarrier(&___gridcode_20, value);
	}

	inline static int32_t get_offset_of_distance_21() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___distance_21)); }
	inline String_t* get_distance_21() const { return ___distance_21; }
	inline String_t** get_address_of_distance_21() { return &___distance_21; }
	inline void set_distance_21(String_t* value)
	{
		___distance_21 = value;
		Il2CppCodeGenWriteBarrier(&___distance_21, value);
	}

	inline static int32_t get_offset_of_navi_poiid_22() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___navi_poiid_22)); }
	inline String_t* get_navi_poiid_22() const { return ___navi_poiid_22; }
	inline String_t** get_address_of_navi_poiid_22() { return &___navi_poiid_22; }
	inline void set_navi_poiid_22(String_t* value)
	{
		___navi_poiid_22 = value;
		Il2CppCodeGenWriteBarrier(&___navi_poiid_22, value);
	}

	inline static int32_t get_offset_of_entr_location_23() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___entr_location_23)); }
	inline String_t* get_entr_location_23() const { return ___entr_location_23; }
	inline String_t** get_address_of_entr_location_23() { return &___entr_location_23; }
	inline void set_entr_location_23(String_t* value)
	{
		___entr_location_23 = value;
		Il2CppCodeGenWriteBarrier(&___entr_location_23, value);
	}

	inline static int32_t get_offset_of_business_area_24() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___business_area_24)); }
	inline String_t* get_business_area_24() const { return ___business_area_24; }
	inline String_t** get_address_of_business_area_24() { return &___business_area_24; }
	inline void set_business_area_24(String_t* value)
	{
		___business_area_24 = value;
		Il2CppCodeGenWriteBarrier(&___business_area_24, value);
	}

	inline static int32_t get_offset_of_exit_location_25() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___exit_location_25)); }
	inline String_t* get_exit_location_25() const { return ___exit_location_25; }
	inline String_t** get_address_of_exit_location_25() { return &___exit_location_25; }
	inline void set_exit_location_25(String_t* value)
	{
		___exit_location_25 = value;
		Il2CppCodeGenWriteBarrier(&___exit_location_25, value);
	}

	inline static int32_t get_offset_of_match_26() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___match_26)); }
	inline String_t* get_match_26() const { return ___match_26; }
	inline String_t** get_address_of_match_26() { return &___match_26; }
	inline void set_match_26(String_t* value)
	{
		___match_26 = value;
		Il2CppCodeGenWriteBarrier(&___match_26, value);
	}

	inline static int32_t get_offset_of_recommend_27() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___recommend_27)); }
	inline String_t* get_recommend_27() const { return ___recommend_27; }
	inline String_t** get_address_of_recommend_27() { return &___recommend_27; }
	inline void set_recommend_27(String_t* value)
	{
		___recommend_27 = value;
		Il2CppCodeGenWriteBarrier(&___recommend_27, value);
	}

	inline static int32_t get_offset_of_timestamp_28() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___timestamp_28)); }
	inline String_t* get_timestamp_28() const { return ___timestamp_28; }
	inline String_t** get_address_of_timestamp_28() { return &___timestamp_28; }
	inline void set_timestamp_28(String_t* value)
	{
		___timestamp_28 = value;
		Il2CppCodeGenWriteBarrier(&___timestamp_28, value);
	}

	inline static int32_t get_offset_of_parking_type_29() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___parking_type_29)); }
	inline String_t* get_parking_type_29() const { return ___parking_type_29; }
	inline String_t** get_address_of_parking_type_29() { return &___parking_type_29; }
	inline void set_parking_type_29(String_t* value)
	{
		___parking_type_29 = value;
		Il2CppCodeGenWriteBarrier(&___parking_type_29, value);
	}

	inline static int32_t get_offset_of_alias_30() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___alias_30)); }
	inline String_t* get_alias_30() const { return ___alias_30; }
	inline String_t** get_address_of_alias_30() { return &___alias_30; }
	inline void set_alias_30(String_t* value)
	{
		___alias_30 = value;
		Il2CppCodeGenWriteBarrier(&___alias_30, value);
	}

	inline static int32_t get_offset_of_indoor_map_31() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___indoor_map_31)); }
	inline String_t* get_indoor_map_31() const { return ___indoor_map_31; }
	inline String_t** get_address_of_indoor_map_31() { return &___indoor_map_31; }
	inline void set_indoor_map_31(String_t* value)
	{
		___indoor_map_31 = value;
		Il2CppCodeGenWriteBarrier(&___indoor_map_31, value);
	}

	inline static int32_t get_offset_of_indoor_data_32() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___indoor_data_32)); }
	inline IndoorData_t1925978660 * get_indoor_data_32() const { return ___indoor_data_32; }
	inline IndoorData_t1925978660 ** get_address_of_indoor_data_32() { return &___indoor_data_32; }
	inline void set_indoor_data_32(IndoorData_t1925978660 * value)
	{
		___indoor_data_32 = value;
		Il2CppCodeGenWriteBarrier(&___indoor_data_32, value);
	}

	inline static int32_t get_offset_of_groupbuy_num_33() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___groupbuy_num_33)); }
	inline String_t* get_groupbuy_num_33() const { return ___groupbuy_num_33; }
	inline String_t** get_address_of_groupbuy_num_33() { return &___groupbuy_num_33; }
	inline void set_groupbuy_num_33(String_t* value)
	{
		___groupbuy_num_33 = value;
		Il2CppCodeGenWriteBarrier(&___groupbuy_num_33, value);
	}

	inline static int32_t get_offset_of_discount_num_34() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___discount_num_34)); }
	inline String_t* get_discount_num_34() const { return ___discount_num_34; }
	inline String_t** get_address_of_discount_num_34() { return &___discount_num_34; }
	inline void set_discount_num_34(String_t* value)
	{
		___discount_num_34 = value;
		Il2CppCodeGenWriteBarrier(&___discount_num_34, value);
	}

	inline static int32_t get_offset_of_biz_ext_35() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___biz_ext_35)); }
	inline BizExt_t3322936807 * get_biz_ext_35() const { return ___biz_ext_35; }
	inline BizExt_t3322936807 ** get_address_of_biz_ext_35() { return &___biz_ext_35; }
	inline void set_biz_ext_35(BizExt_t3322936807 * value)
	{
		___biz_ext_35 = value;
		Il2CppCodeGenWriteBarrier(&___biz_ext_35, value);
	}

	inline static int32_t get_offset_of_event_36() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___event_36)); }
	inline String_t* get_event_36() const { return ___event_36; }
	inline String_t** get_address_of_event_36() { return &___event_36; }
	inline void set_event_36(String_t* value)
	{
		___event_36 = value;
		Il2CppCodeGenWriteBarrier(&___event_36, value);
	}

	inline static int32_t get_offset_of_children_37() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___children_37)); }
	inline ChildrenU5BU5D_t15061217* get_children_37() const { return ___children_37; }
	inline ChildrenU5BU5D_t15061217** get_address_of_children_37() { return &___children_37; }
	inline void set_children_37(ChildrenU5BU5D_t15061217* value)
	{
		___children_37 = value;
		Il2CppCodeGenWriteBarrier(&___children_37, value);
	}

	inline static int32_t get_offset_of_photos_38() { return static_cast<int32_t>(offsetof(POI_t2165136709, ___photos_38)); }
	inline PhotoU5BU5D_t285501314* get_photos_38() const { return ___photos_38; }
	inline PhotoU5BU5D_t285501314** get_address_of_photos_38() { return &___photos_38; }
	inline void set_photos_38(PhotoU5BU5D_t285501314* value)
	{
		___photos_38 = value;
		Il2CppCodeGenWriteBarrier(&___photos_38, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
