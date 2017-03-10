#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;

#include "AssemblyU2DCSharp_OnlineMapsControlBase2D1235229338.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsUIImageControl
struct  OnlineMapsUIImageControl_t605851132  : public OnlineMapsControlBase2D_t1235229338
{
public:
	// UnityEngine.UI.Image OnlineMapsUIImageControl::image
	Image_t2042527209 * ___image_41;

public:
	inline static int32_t get_offset_of_image_41() { return static_cast<int32_t>(offsetof(OnlineMapsUIImageControl_t605851132, ___image_41)); }
	inline Image_t2042527209 * get_image_41() const { return ___image_41; }
	inline Image_t2042527209 ** get_address_of_image_41() { return &___image_41; }
	inline void set_image_41(Image_t2042527209 * value)
	{
		___image_41 = value;
		Il2CppCodeGenWriteBarrier(&___image_41, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
