#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t3344795111;

#include "AssemblyU2DCSharp_OnlineMapsWebServiceAPI1183034403.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGooglePlacePhoto
struct  OnlineMapsGooglePlacePhoto_t3871514534  : public OnlineMapsWebServiceAPI_t1183034403
{
public:
	// System.Action`1<UnityEngine.Texture2D> OnlineMapsGooglePlacePhoto::OnComplete
	Action_1_t3344795111 * ___OnComplete_5;

public:
	inline static int32_t get_offset_of_OnComplete_5() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacePhoto_t3871514534, ___OnComplete_5)); }
	inline Action_1_t3344795111 * get_OnComplete_5() const { return ___OnComplete_5; }
	inline Action_1_t3344795111 ** get_address_of_OnComplete_5() { return &___OnComplete_5; }
	inline void set_OnComplete_5(Action_1_t3344795111 * value)
	{
		___OnComplete_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
