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
// OnlineMapsAMapSearchResult/POI[]
struct POIU5BU5D_t2094429192;
// OnlineMapsAMapSearchResult/Suggestion
struct Suggestion_t4260241351;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsAMapSearchResult
struct  OnlineMapsAMapSearchResult_t2367453330  : public Il2CppObject
{
public:
	// System.Int32 OnlineMapsAMapSearchResult::status
	int32_t ___status_0;
	// System.String OnlineMapsAMapSearchResult::info
	String_t* ___info_1;
	// System.String OnlineMapsAMapSearchResult::infocode
	String_t* ___infocode_2;
	// System.Int32 OnlineMapsAMapSearchResult::count
	int32_t ___count_3;
	// OnlineMapsAMapSearchResult/POI[] OnlineMapsAMapSearchResult::pois
	POIU5BU5D_t2094429192* ___pois_4;
	// OnlineMapsAMapSearchResult/Suggestion OnlineMapsAMapSearchResult::suggestion
	Suggestion_t4260241351 * ___suggestion_5;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(OnlineMapsAMapSearchResult_t2367453330, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(OnlineMapsAMapSearchResult_t2367453330, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier(&___info_1, value);
	}

	inline static int32_t get_offset_of_infocode_2() { return static_cast<int32_t>(offsetof(OnlineMapsAMapSearchResult_t2367453330, ___infocode_2)); }
	inline String_t* get_infocode_2() const { return ___infocode_2; }
	inline String_t** get_address_of_infocode_2() { return &___infocode_2; }
	inline void set_infocode_2(String_t* value)
	{
		___infocode_2 = value;
		Il2CppCodeGenWriteBarrier(&___infocode_2, value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(OnlineMapsAMapSearchResult_t2367453330, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_pois_4() { return static_cast<int32_t>(offsetof(OnlineMapsAMapSearchResult_t2367453330, ___pois_4)); }
	inline POIU5BU5D_t2094429192* get_pois_4() const { return ___pois_4; }
	inline POIU5BU5D_t2094429192** get_address_of_pois_4() { return &___pois_4; }
	inline void set_pois_4(POIU5BU5D_t2094429192* value)
	{
		___pois_4 = value;
		Il2CppCodeGenWriteBarrier(&___pois_4, value);
	}

	inline static int32_t get_offset_of_suggestion_5() { return static_cast<int32_t>(offsetof(OnlineMapsAMapSearchResult_t2367453330, ___suggestion_5)); }
	inline Suggestion_t4260241351 * get_suggestion_5() const { return ___suggestion_5; }
	inline Suggestion_t4260241351 ** get_address_of_suggestion_5() { return &___suggestion_5; }
	inline void set_suggestion_5(Suggestion_t4260241351 * value)
	{
		___suggestion_5 = value;
		Il2CppCodeGenWriteBarrier(&___suggestion_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
