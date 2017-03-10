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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamplesNavigationHandler
struct  SamplesNavigationHandler_t2120161205  : public MonoBehaviour_t1158329972
{
public:
	// System.String SamplesNavigationHandler::currentSceneName
	String_t* ___currentSceneName_2;

public:
	inline static int32_t get_offset_of_currentSceneName_2() { return static_cast<int32_t>(offsetof(SamplesNavigationHandler_t2120161205, ___currentSceneName_2)); }
	inline String_t* get_currentSceneName_2() const { return ___currentSceneName_2; }
	inline String_t** get_address_of_currentSceneName_2() { return &___currentSceneName_2; }
	inline void set_currentSceneName_2(String_t* value)
	{
		___currentSceneName_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentSceneName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
