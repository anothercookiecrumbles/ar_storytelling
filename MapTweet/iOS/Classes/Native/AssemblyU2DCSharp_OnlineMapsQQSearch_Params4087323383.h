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

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "AssemblyU2DCSharp_OnlineMapsQQSearch_SearchType991381033.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsQQSearch/Params
struct  Params_t4087323383  : public Il2CppObject
{
public:
	// System.String OnlineMapsQQSearch/Params::filter
	String_t* ___filter_0;
	// System.String OnlineMapsQQSearch/Params::orderby
	String_t* ___orderby_1;
	// System.Nullable`1<System.Int32> OnlineMapsQQSearch/Params::page_size
	Nullable_1_t334943763  ___page_size_2;
	// System.Nullable`1<System.Int32> OnlineMapsQQSearch/Params::page_index
	Nullable_1_t334943763  ___page_index_3;
	// OnlineMapsQQSearch/SearchType OnlineMapsQQSearch/Params::type
	int32_t ___type_4;
	// System.String OnlineMapsQQSearch/Params::region
	String_t* ___region_5;
	// System.Boolean OnlineMapsQQSearch/Params::auto_extend
	bool ___auto_extend_6;
	// System.Nullable`1<System.Double> OnlineMapsQQSearch/Params::lng1
	Nullable_1_t2341081996  ___lng1_7;
	// System.Nullable`1<System.Double> OnlineMapsQQSearch/Params::lat1
	Nullable_1_t2341081996  ___lat1_8;
	// System.Nullable`1<System.Double> OnlineMapsQQSearch/Params::lng2
	Nullable_1_t2341081996  ___lng2_9;
	// System.Nullable`1<System.Double> OnlineMapsQQSearch/Params::lat2
	Nullable_1_t2341081996  ___lat2_10;
	// System.Int32 OnlineMapsQQSearch/Params::radius
	int32_t ___radius_11;

public:
	inline static int32_t get_offset_of_filter_0() { return static_cast<int32_t>(offsetof(Params_t4087323383, ___filter_0)); }
	inline String_t* get_filter_0() const { return ___filter_0; }
	inline String_t** get_address_of_filter_0() { return &___filter_0; }
	inline void set_filter_0(String_t* value)
	{
		___filter_0 = value;
		Il2CppCodeGenWriteBarrier(&___filter_0, value);
	}

	inline static int32_t get_offset_of_orderby_1() { return static_cast<int32_t>(offsetof(Params_t4087323383, ___orderby_1)); }
	inline String_t* get_orderby_1() const { return ___orderby_1; }
	inline String_t** get_address_of_orderby_1() { return &___orderby_1; }
	inline void set_orderby_1(String_t* value)
	{
		___orderby_1 = value;
		Il2CppCodeGenWriteBarrier(&___orderby_1, value);
	}

	inline static int32_t get_offset_of_page_size_2() { return static_cast<int32_t>(offsetof(Params_t4087323383, ___page_size_2)); }
	inline Nullable_1_t334943763  get_page_size_2() const { return ___page_size_2; }
	inline Nullable_1_t334943763 * get_address_of_page_size_2() { return &___page_size_2; }
	inline void set_page_size_2(Nullable_1_t334943763  value)
	{
		___page_size_2 = value;
	}

	inline static int32_t get_offset_of_page_index_3() { return static_cast<int32_t>(offsetof(Params_t4087323383, ___page_index_3)); }
	inline Nullable_1_t334943763  get_page_index_3() const { return ___page_index_3; }
	inline Nullable_1_t334943763 * get_address_of_page_index_3() { return &___page_index_3; }
	inline void set_page_index_3(Nullable_1_t334943763  value)
	{
		___page_index_3 = value;
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(Params_t4087323383, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}

	inline static int32_t get_offset_of_region_5() { return static_cast<int32_t>(offsetof(Params_t4087323383, ___region_5)); }
	inline String_t* get_region_5() const { return ___region_5; }
	inline String_t** get_address_of_region_5() { return &___region_5; }
	inline void set_region_5(String_t* value)
	{
		___region_5 = value;
		Il2CppCodeGenWriteBarrier(&___region_5, value);
	}

	inline static int32_t get_offset_of_auto_extend_6() { return static_cast<int32_t>(offsetof(Params_t4087323383, ___auto_extend_6)); }
	inline bool get_auto_extend_6() const { return ___auto_extend_6; }
	inline bool* get_address_of_auto_extend_6() { return &___auto_extend_6; }
	inline void set_auto_extend_6(bool value)
	{
		___auto_extend_6 = value;
	}

	inline static int32_t get_offset_of_lng1_7() { return static_cast<int32_t>(offsetof(Params_t4087323383, ___lng1_7)); }
	inline Nullable_1_t2341081996  get_lng1_7() const { return ___lng1_7; }
	inline Nullable_1_t2341081996 * get_address_of_lng1_7() { return &___lng1_7; }
	inline void set_lng1_7(Nullable_1_t2341081996  value)
	{
		___lng1_7 = value;
	}

	inline static int32_t get_offset_of_lat1_8() { return static_cast<int32_t>(offsetof(Params_t4087323383, ___lat1_8)); }
	inline Nullable_1_t2341081996  get_lat1_8() const { return ___lat1_8; }
	inline Nullable_1_t2341081996 * get_address_of_lat1_8() { return &___lat1_8; }
	inline void set_lat1_8(Nullable_1_t2341081996  value)
	{
		___lat1_8 = value;
	}

	inline static int32_t get_offset_of_lng2_9() { return static_cast<int32_t>(offsetof(Params_t4087323383, ___lng2_9)); }
	inline Nullable_1_t2341081996  get_lng2_9() const { return ___lng2_9; }
	inline Nullable_1_t2341081996 * get_address_of_lng2_9() { return &___lng2_9; }
	inline void set_lng2_9(Nullable_1_t2341081996  value)
	{
		___lng2_9 = value;
	}

	inline static int32_t get_offset_of_lat2_10() { return static_cast<int32_t>(offsetof(Params_t4087323383, ___lat2_10)); }
	inline Nullable_1_t2341081996  get_lat2_10() const { return ___lat2_10; }
	inline Nullable_1_t2341081996 * get_address_of_lat2_10() { return &___lat2_10; }
	inline void set_lat2_10(Nullable_1_t2341081996  value)
	{
		___lat2_10 = value;
	}

	inline static int32_t get_offset_of_radius_11() { return static_cast<int32_t>(offsetof(Params_t4087323383, ___radius_11)); }
	inline int32_t get_radius_11() const { return ___radius_11; }
	inline int32_t* get_address_of_radius_11() { return &___radius_11; }
	inline void set_radius_11(int32_t value)
	{
		___radius_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
