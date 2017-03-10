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
// OnlineMapsHereRoutingAPI/RoutingMode
struct RoutingMode_t3690293030;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route/ManueverGroup
struct  ManueverGroup_t3752972938  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/Route/ManueverGroup::firstmaneuver
	String_t* ___firstmaneuver_0;
	// System.String OnlineMapsHereRoutingAPIResult/Route/ManueverGroup::lastmaneuver
	String_t* ___lastmaneuver_1;
	// OnlineMapsHereRoutingAPI/RoutingMode OnlineMapsHereRoutingAPIResult/Route/ManueverGroup::mode
	RoutingMode_t3690293030 * ___mode_2;
	// System.String OnlineMapsHereRoutingAPIResult/Route/ManueverGroup::summaryDescription
	String_t* ___summaryDescription_3;
	// System.String OnlineMapsHereRoutingAPIResult/Route/ManueverGroup::arrivalDescription
	String_t* ___arrivalDescription_4;
	// System.String OnlineMapsHereRoutingAPIResult/Route/ManueverGroup::waitDescription
	String_t* ___waitDescription_5;
	// System.String OnlineMapsHereRoutingAPIResult/Route/ManueverGroup::publicTransportType
	String_t* ___publicTransportType_6;

public:
	inline static int32_t get_offset_of_firstmaneuver_0() { return static_cast<int32_t>(offsetof(ManueverGroup_t3752972938, ___firstmaneuver_0)); }
	inline String_t* get_firstmaneuver_0() const { return ___firstmaneuver_0; }
	inline String_t** get_address_of_firstmaneuver_0() { return &___firstmaneuver_0; }
	inline void set_firstmaneuver_0(String_t* value)
	{
		___firstmaneuver_0 = value;
		Il2CppCodeGenWriteBarrier(&___firstmaneuver_0, value);
	}

	inline static int32_t get_offset_of_lastmaneuver_1() { return static_cast<int32_t>(offsetof(ManueverGroup_t3752972938, ___lastmaneuver_1)); }
	inline String_t* get_lastmaneuver_1() const { return ___lastmaneuver_1; }
	inline String_t** get_address_of_lastmaneuver_1() { return &___lastmaneuver_1; }
	inline void set_lastmaneuver_1(String_t* value)
	{
		___lastmaneuver_1 = value;
		Il2CppCodeGenWriteBarrier(&___lastmaneuver_1, value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(ManueverGroup_t3752972938, ___mode_2)); }
	inline RoutingMode_t3690293030 * get_mode_2() const { return ___mode_2; }
	inline RoutingMode_t3690293030 ** get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(RoutingMode_t3690293030 * value)
	{
		___mode_2 = value;
		Il2CppCodeGenWriteBarrier(&___mode_2, value);
	}

	inline static int32_t get_offset_of_summaryDescription_3() { return static_cast<int32_t>(offsetof(ManueverGroup_t3752972938, ___summaryDescription_3)); }
	inline String_t* get_summaryDescription_3() const { return ___summaryDescription_3; }
	inline String_t** get_address_of_summaryDescription_3() { return &___summaryDescription_3; }
	inline void set_summaryDescription_3(String_t* value)
	{
		___summaryDescription_3 = value;
		Il2CppCodeGenWriteBarrier(&___summaryDescription_3, value);
	}

	inline static int32_t get_offset_of_arrivalDescription_4() { return static_cast<int32_t>(offsetof(ManueverGroup_t3752972938, ___arrivalDescription_4)); }
	inline String_t* get_arrivalDescription_4() const { return ___arrivalDescription_4; }
	inline String_t** get_address_of_arrivalDescription_4() { return &___arrivalDescription_4; }
	inline void set_arrivalDescription_4(String_t* value)
	{
		___arrivalDescription_4 = value;
		Il2CppCodeGenWriteBarrier(&___arrivalDescription_4, value);
	}

	inline static int32_t get_offset_of_waitDescription_5() { return static_cast<int32_t>(offsetof(ManueverGroup_t3752972938, ___waitDescription_5)); }
	inline String_t* get_waitDescription_5() const { return ___waitDescription_5; }
	inline String_t** get_address_of_waitDescription_5() { return &___waitDescription_5; }
	inline void set_waitDescription_5(String_t* value)
	{
		___waitDescription_5 = value;
		Il2CppCodeGenWriteBarrier(&___waitDescription_5, value);
	}

	inline static int32_t get_offset_of_publicTransportType_6() { return static_cast<int32_t>(offsetof(ManueverGroup_t3752972938, ___publicTransportType_6)); }
	inline String_t* get_publicTransportType_6() const { return ___publicTransportType_6; }
	inline String_t** get_address_of_publicTransportType_6() { return &___publicTransportType_6; }
	inline void set_publicTransportType_6(String_t* value)
	{
		___publicTransportType_6 = value;
		Il2CppCodeGenWriteBarrier(&___publicTransportType_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
