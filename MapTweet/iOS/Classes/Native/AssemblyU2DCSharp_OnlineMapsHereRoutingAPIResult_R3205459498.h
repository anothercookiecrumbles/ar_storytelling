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

// OnlineMapsHereRoutingAPIResult/Route/PublicTransportLine/ExternalResource
struct  ExternalResource_t3205459498  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/Route/PublicTransportLine/ExternalResource::resourceType
	String_t* ___resourceType_0;
	// System.String OnlineMapsHereRoutingAPIResult/Route/PublicTransportLine/ExternalResource::filename
	String_t* ___filename_1;

public:
	inline static int32_t get_offset_of_resourceType_0() { return static_cast<int32_t>(offsetof(ExternalResource_t3205459498, ___resourceType_0)); }
	inline String_t* get_resourceType_0() const { return ___resourceType_0; }
	inline String_t** get_address_of_resourceType_0() { return &___resourceType_0; }
	inline void set_resourceType_0(String_t* value)
	{
		___resourceType_0 = value;
		Il2CppCodeGenWriteBarrier(&___resourceType_0, value);
	}

	inline static int32_t get_offset_of_filename_1() { return static_cast<int32_t>(offsetof(ExternalResource_t3205459498, ___filename_1)); }
	inline String_t* get_filename_1() const { return ___filename_1; }
	inline String_t** get_address_of_filename_1() { return &___filename_1; }
	inline void set_filename_1(String_t* value)
	{
		___filename_1 = value;
		Il2CppCodeGenWriteBarrier(&___filename_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
