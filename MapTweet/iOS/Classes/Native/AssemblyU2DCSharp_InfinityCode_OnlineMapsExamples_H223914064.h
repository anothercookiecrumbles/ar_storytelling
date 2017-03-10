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
// System.Func`2<OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate,UnityEngine.Vector2>
struct Func_2_t2283349921;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.HereRoutingAPIExample
struct  HereRoutingAPIExample_t223914064  : public MonoBehaviour_t1158329972
{
public:
	// System.String InfinityCode.OnlineMapsExamples.HereRoutingAPIExample::appId
	String_t* ___appId_2;
	// System.String InfinityCode.OnlineMapsExamples.HereRoutingAPIExample::appCode
	String_t* ___appCode_3;

public:
	inline static int32_t get_offset_of_appId_2() { return static_cast<int32_t>(offsetof(HereRoutingAPIExample_t223914064, ___appId_2)); }
	inline String_t* get_appId_2() const { return ___appId_2; }
	inline String_t** get_address_of_appId_2() { return &___appId_2; }
	inline void set_appId_2(String_t* value)
	{
		___appId_2 = value;
		Il2CppCodeGenWriteBarrier(&___appId_2, value);
	}

	inline static int32_t get_offset_of_appCode_3() { return static_cast<int32_t>(offsetof(HereRoutingAPIExample_t223914064, ___appCode_3)); }
	inline String_t* get_appCode_3() const { return ___appCode_3; }
	inline String_t** get_address_of_appCode_3() { return &___appCode_3; }
	inline void set_appCode_3(String_t* value)
	{
		___appCode_3 = value;
		Il2CppCodeGenWriteBarrier(&___appCode_3, value);
	}
};

struct HereRoutingAPIExample_t223914064_StaticFields
{
public:
	// System.Func`2<OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate,UnityEngine.Vector2> InfinityCode.OnlineMapsExamples.HereRoutingAPIExample::<>f__am$cache0
	Func_2_t2283349921 * ___U3CU3Ef__amU24cache0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(HereRoutingAPIExample_t223914064_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Func_2_t2283349921 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Func_2_t2283349921 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Func_2_t2283349921 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
