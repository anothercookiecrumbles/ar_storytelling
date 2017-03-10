#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsJSON/AliasAttribute
struct  AliasAttribute_t2629305719  : public Attribute_t542643598
{
public:
	// System.String[] OnlineMapsJSON/AliasAttribute::aliases
	StringU5BU5D_t1642385972* ___aliases_0;
	// System.Boolean OnlineMapsJSON/AliasAttribute::ignoreFieldName
	bool ___ignoreFieldName_1;

public:
	inline static int32_t get_offset_of_aliases_0() { return static_cast<int32_t>(offsetof(AliasAttribute_t2629305719, ___aliases_0)); }
	inline StringU5BU5D_t1642385972* get_aliases_0() const { return ___aliases_0; }
	inline StringU5BU5D_t1642385972** get_address_of_aliases_0() { return &___aliases_0; }
	inline void set_aliases_0(StringU5BU5D_t1642385972* value)
	{
		___aliases_0 = value;
		Il2CppCodeGenWriteBarrier(&___aliases_0, value);
	}

	inline static int32_t get_offset_of_ignoreFieldName_1() { return static_cast<int32_t>(offsetof(AliasAttribute_t2629305719, ___ignoreFieldName_1)); }
	inline bool get_ignoreFieldName_1() const { return ___ignoreFieldName_1; }
	inline bool* get_address_of_ignoreFieldName_1() { return &___ignoreFieldName_1; }
	inline void set_ignoreFieldName_1(bool value)
	{
		___ignoreFieldName_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
