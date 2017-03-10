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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route/Incident
struct  Incident_t2826783910  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/Route/Incident::validityPeriod
	String_t* ___validityPeriod_0;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Incident::text
	String_t* ___text_1;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Incident::type
	String_t* ___type_2;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Incident::criticality
	String_t* ___criticality_3;

public:
	inline static int32_t get_offset_of_validityPeriod_0() { return static_cast<int32_t>(offsetof(Incident_t2826783910, ___validityPeriod_0)); }
	inline String_t* get_validityPeriod_0() const { return ___validityPeriod_0; }
	inline String_t** get_address_of_validityPeriod_0() { return &___validityPeriod_0; }
	inline void set_validityPeriod_0(String_t* value)
	{
		___validityPeriod_0 = value;
		Il2CppCodeGenWriteBarrier(&___validityPeriod_0, value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Incident_t2826783910, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier(&___text_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(Incident_t2826783910, ___type_2)); }
	inline String_t* get_type_2() const { return ___type_2; }
	inline String_t** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(String_t* value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier(&___type_2, value);
	}

	inline static int32_t get_offset_of_criticality_3() { return static_cast<int32_t>(offsetof(Incident_t2826783910, ___criticality_3)); }
	inline String_t* get_criticality_3() const { return ___criticality_3; }
	inline String_t** get_address_of_criticality_3() { return &___criticality_3; }
	inline void set_criticality_3(String_t* value)
	{
		___criticality_3 = value;
		Il2CppCodeGenWriteBarrier(&___criticality_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
