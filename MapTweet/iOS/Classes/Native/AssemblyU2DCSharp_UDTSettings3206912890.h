#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UDTEventHandler
struct UDTEventHandler_t3117429239;

#include "AssemblyU2DCSharp_TrackableSettings4265251850.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UDTSettings
struct  UDTSettings_t3206912890  : public TrackableSettings_t4265251850
{
public:
	// UDTEventHandler UDTSettings::mUDTEventHandler
	UDTEventHandler_t3117429239 * ___mUDTEventHandler_3;

public:
	inline static int32_t get_offset_of_mUDTEventHandler_3() { return static_cast<int32_t>(offsetof(UDTSettings_t3206912890, ___mUDTEventHandler_3)); }
	inline UDTEventHandler_t3117429239 * get_mUDTEventHandler_3() const { return ___mUDTEventHandler_3; }
	inline UDTEventHandler_t3117429239 ** get_address_of_mUDTEventHandler_3() { return &___mUDTEventHandler_3; }
	inline void set_mUDTEventHandler_3(UDTEventHandler_t3117429239 * value)
	{
		___mUDTEventHandler_3 = value;
		Il2CppCodeGenWriteBarrier(&___mUDTEventHandler_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
