#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_OnlineMapsWebServiceAPI1183034403.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsTextWebService
struct  OnlineMapsTextWebService_t1027474722  : public OnlineMapsWebServiceAPI_t1183034403
{
public:
	// System.Action`1<System.String> OnlineMapsTextWebService::OnComplete
	Action_1_t1831019615 * ___OnComplete_5;
	// System.String OnlineMapsTextWebService::_response
	String_t* ____response_6;

public:
	inline static int32_t get_offset_of_OnComplete_5() { return static_cast<int32_t>(offsetof(OnlineMapsTextWebService_t1027474722, ___OnComplete_5)); }
	inline Action_1_t1831019615 * get_OnComplete_5() const { return ___OnComplete_5; }
	inline Action_1_t1831019615 ** get_address_of_OnComplete_5() { return &___OnComplete_5; }
	inline void set_OnComplete_5(Action_1_t1831019615 * value)
	{
		___OnComplete_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_5, value);
	}

	inline static int32_t get_offset_of__response_6() { return static_cast<int32_t>(offsetof(OnlineMapsTextWebService_t1027474722, ____response_6)); }
	inline String_t* get__response_6() const { return ____response_6; }
	inline String_t** get_address_of__response_6() { return &____response_6; }
	inline void set__response_6(String_t* value)
	{
		____response_6 = value;
		Il2CppCodeGenWriteBarrier(&____response_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
