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

// OnlineMapsGoogleDirectionsResult/Vehicle
struct  Vehicle_t3724188267  : public Il2CppObject
{
public:
	// System.String OnlineMapsGoogleDirectionsResult/Vehicle::name
	String_t* ___name_0;
	// System.String OnlineMapsGoogleDirectionsResult/Vehicle::type
	String_t* ___type_1;
	// System.String OnlineMapsGoogleDirectionsResult/Vehicle::icon
	String_t* ___icon_2;
	// System.String OnlineMapsGoogleDirectionsResult/Vehicle::local_icon
	String_t* ___local_icon_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Vehicle_t3724188267, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Vehicle_t3724188267, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_icon_2() { return static_cast<int32_t>(offsetof(Vehicle_t3724188267, ___icon_2)); }
	inline String_t* get_icon_2() const { return ___icon_2; }
	inline String_t** get_address_of_icon_2() { return &___icon_2; }
	inline void set_icon_2(String_t* value)
	{
		___icon_2 = value;
		Il2CppCodeGenWriteBarrier(&___icon_2, value);
	}

	inline static int32_t get_offset_of_local_icon_3() { return static_cast<int32_t>(offsetof(Vehicle_t3724188267, ___local_icon_3)); }
	inline String_t* get_local_icon_3() const { return ___local_icon_3; }
	inline String_t** get_address_of_local_icon_3() { return &___local_icon_3; }
	inline void set_local_icon_3(String_t* value)
	{
		___local_icon_3 = value;
		Il2CppCodeGenWriteBarrier(&___local_icon_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
