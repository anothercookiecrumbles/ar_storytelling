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

// OnlineMapsOSMRelationMember
struct  OnlineMapsOSMRelationMember_t1040319881  : public Il2CppObject
{
public:
	// System.String OnlineMapsOSMRelationMember::reference
	String_t* ___reference_0;
	// System.String OnlineMapsOSMRelationMember::role
	String_t* ___role_1;
	// System.String OnlineMapsOSMRelationMember::type
	String_t* ___type_2;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(OnlineMapsOSMRelationMember_t1040319881, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier(&___reference_0, value);
	}

	inline static int32_t get_offset_of_role_1() { return static_cast<int32_t>(offsetof(OnlineMapsOSMRelationMember_t1040319881, ___role_1)); }
	inline String_t* get_role_1() const { return ___role_1; }
	inline String_t** get_address_of_role_1() { return &___role_1; }
	inline void set_role_1(String_t* value)
	{
		___role_1 = value;
		Il2CppCodeGenWriteBarrier(&___role_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(OnlineMapsOSMRelationMember_t1040319881, ___type_2)); }
	inline String_t* get_type_2() const { return ___type_2; }
	inline String_t** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(String_t* value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier(&___type_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
