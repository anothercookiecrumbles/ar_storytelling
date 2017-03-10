#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<OnlineMapsOSMRelationMember>
struct List_1_t409441013;

#include "AssemblyU2DCSharp_OnlineMapsOSMBase540795536.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsOSMRelation
struct  OnlineMapsOSMRelation_t1871982797  : public OnlineMapsOSMBase_t540795536
{
public:
	// System.Collections.Generic.List`1<OnlineMapsOSMRelationMember> OnlineMapsOSMRelation::_members
	List_1_t409441013 * ____members_2;

public:
	inline static int32_t get_offset_of__members_2() { return static_cast<int32_t>(offsetof(OnlineMapsOSMRelation_t1871982797, ____members_2)); }
	inline List_1_t409441013 * get__members_2() const { return ____members_2; }
	inline List_1_t409441013 ** get_address_of__members_2() { return &____members_2; }
	inline void set__members_2(List_1_t409441013 * value)
	{
		____members_2 = value;
		Il2CppCodeGenWriteBarrier(&____members_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
