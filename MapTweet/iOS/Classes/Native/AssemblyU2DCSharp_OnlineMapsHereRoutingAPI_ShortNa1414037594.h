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

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPI/ShortNameAttribute
struct  ShortNameAttribute_t1414037594  : public Attribute_t542643598
{
public:
	// System.String OnlineMapsHereRoutingAPI/ShortNameAttribute::shortName
	String_t* ___shortName_0;

public:
	inline static int32_t get_offset_of_shortName_0() { return static_cast<int32_t>(offsetof(ShortNameAttribute_t1414037594, ___shortName_0)); }
	inline String_t* get_shortName_0() const { return ___shortName_0; }
	inline String_t** get_address_of_shortName_0() { return &___shortName_0; }
	inline void set_shortName_0(String_t* value)
	{
		___shortName_0 = value;
		Il2CppCodeGenWriteBarrier(&___shortName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
