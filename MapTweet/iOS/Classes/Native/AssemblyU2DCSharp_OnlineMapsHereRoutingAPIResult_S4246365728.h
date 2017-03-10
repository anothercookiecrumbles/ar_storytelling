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
// OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier
struct Supplier_t2528843629;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/SourceAttribution
struct  SourceAttribution_t4246365728  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/SourceAttribution::attribution
	String_t* ___attribution_0;
	// OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier OnlineMapsHereRoutingAPIResult/SourceAttribution::supplier
	Supplier_t2528843629 * ___supplier_1;

public:
	inline static int32_t get_offset_of_attribution_0() { return static_cast<int32_t>(offsetof(SourceAttribution_t4246365728, ___attribution_0)); }
	inline String_t* get_attribution_0() const { return ___attribution_0; }
	inline String_t** get_address_of_attribution_0() { return &___attribution_0; }
	inline void set_attribution_0(String_t* value)
	{
		___attribution_0 = value;
		Il2CppCodeGenWriteBarrier(&___attribution_0, value);
	}

	inline static int32_t get_offset_of_supplier_1() { return static_cast<int32_t>(offsetof(SourceAttribution_t4246365728, ___supplier_1)); }
	inline Supplier_t2528843629 * get_supplier_1() const { return ___supplier_1; }
	inline Supplier_t2528843629 ** get_address_of_supplier_1() { return &___supplier_1; }
	inline void set_supplier_1(Supplier_t2528843629 * value)
	{
		___supplier_1 = value;
		Il2CppCodeGenWriteBarrier(&___supplier_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
