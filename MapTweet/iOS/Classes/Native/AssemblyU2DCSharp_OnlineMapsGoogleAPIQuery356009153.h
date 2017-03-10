#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<OnlineMapsGoogleAPIQuery>
struct Action_1_t157808535;

#include "AssemblyU2DCSharp_OnlineMapsTextWebService1027474722.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleAPIQuery
struct  OnlineMapsGoogleAPIQuery_t356009153  : public OnlineMapsTextWebService_t1027474722
{
public:
	// System.Action`1<OnlineMapsGoogleAPIQuery> OnlineMapsGoogleAPIQuery::OnDispose
	Action_1_t157808535 * ___OnDispose_7;
	// System.Action`1<OnlineMapsGoogleAPIQuery> OnlineMapsGoogleAPIQuery::OnFinish
	Action_1_t157808535 * ___OnFinish_8;

public:
	inline static int32_t get_offset_of_OnDispose_7() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleAPIQuery_t356009153, ___OnDispose_7)); }
	inline Action_1_t157808535 * get_OnDispose_7() const { return ___OnDispose_7; }
	inline Action_1_t157808535 ** get_address_of_OnDispose_7() { return &___OnDispose_7; }
	inline void set_OnDispose_7(Action_1_t157808535 * value)
	{
		___OnDispose_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnDispose_7, value);
	}

	inline static int32_t get_offset_of_OnFinish_8() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleAPIQuery_t356009153, ___OnFinish_8)); }
	inline Action_1_t157808535 * get_OnFinish_8() const { return ___OnFinish_8; }
	inline Action_1_t157808535 ** get_address_of_OnFinish_8() { return &___OnFinish_8; }
	inline void set_OnFinish_8(Action_1_t157808535 * value)
	{
		___OnFinish_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnFinish_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
