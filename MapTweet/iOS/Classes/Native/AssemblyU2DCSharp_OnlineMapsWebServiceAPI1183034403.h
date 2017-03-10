#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<OnlineMapsWebServiceAPI>
struct Action_1_t984833785;
// System.Object
struct Il2CppObject;
// OnlineMapsWWW
struct OnlineMapsWWW_t3247411593;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OnlineMapsQueryStatus3400398814.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsWebServiceAPI
struct  OnlineMapsWebServiceAPI_t1183034403  : public Il2CppObject
{
public:
	// System.Action`1<OnlineMapsWebServiceAPI> OnlineMapsWebServiceAPI::OnDispose
	Action_1_t984833785 * ___OnDispose_0;
	// System.Action`1<OnlineMapsWebServiceAPI> OnlineMapsWebServiceAPI::OnFinish
	Action_1_t984833785 * ___OnFinish_1;
	// System.Object OnlineMapsWebServiceAPI::customData
	Il2CppObject * ___customData_2;
	// OnlineMapsQueryStatus OnlineMapsWebServiceAPI::_status
	int32_t ____status_3;
	// OnlineMapsWWW OnlineMapsWebServiceAPI::www
	OnlineMapsWWW_t3247411593 * ___www_4;

public:
	inline static int32_t get_offset_of_OnDispose_0() { return static_cast<int32_t>(offsetof(OnlineMapsWebServiceAPI_t1183034403, ___OnDispose_0)); }
	inline Action_1_t984833785 * get_OnDispose_0() const { return ___OnDispose_0; }
	inline Action_1_t984833785 ** get_address_of_OnDispose_0() { return &___OnDispose_0; }
	inline void set_OnDispose_0(Action_1_t984833785 * value)
	{
		___OnDispose_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnDispose_0, value);
	}

	inline static int32_t get_offset_of_OnFinish_1() { return static_cast<int32_t>(offsetof(OnlineMapsWebServiceAPI_t1183034403, ___OnFinish_1)); }
	inline Action_1_t984833785 * get_OnFinish_1() const { return ___OnFinish_1; }
	inline Action_1_t984833785 ** get_address_of_OnFinish_1() { return &___OnFinish_1; }
	inline void set_OnFinish_1(Action_1_t984833785 * value)
	{
		___OnFinish_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnFinish_1, value);
	}

	inline static int32_t get_offset_of_customData_2() { return static_cast<int32_t>(offsetof(OnlineMapsWebServiceAPI_t1183034403, ___customData_2)); }
	inline Il2CppObject * get_customData_2() const { return ___customData_2; }
	inline Il2CppObject ** get_address_of_customData_2() { return &___customData_2; }
	inline void set_customData_2(Il2CppObject * value)
	{
		___customData_2 = value;
		Il2CppCodeGenWriteBarrier(&___customData_2, value);
	}

	inline static int32_t get_offset_of__status_3() { return static_cast<int32_t>(offsetof(OnlineMapsWebServiceAPI_t1183034403, ____status_3)); }
	inline int32_t get__status_3() const { return ____status_3; }
	inline int32_t* get_address_of__status_3() { return &____status_3; }
	inline void set__status_3(int32_t value)
	{
		____status_3 = value;
	}

	inline static int32_t get_offset_of_www_4() { return static_cast<int32_t>(offsetof(OnlineMapsWebServiceAPI_t1183034403, ___www_4)); }
	inline OnlineMapsWWW_t3247411593 * get_www_4() const { return ___www_4; }
	inline OnlineMapsWWW_t3247411593 ** get_address_of_www_4() { return &___www_4; }
	inline void set_www_4(OnlineMapsWWW_t3247411593 * value)
	{
		___www_4 = value;
		Il2CppCodeGenWriteBarrier(&___www_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
