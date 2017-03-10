#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUITexture
struct GUITexture_t1909122990;

#include "AssemblyU2DCSharp_OnlineMapsControlBase2D1235229338.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGUITextureControl
struct  OnlineMapsGUITextureControl_t39450173  : public OnlineMapsControlBase2D_t1235229338
{
public:
	// UnityEngine.GUITexture OnlineMapsGUITextureControl::_gTexture
	GUITexture_t1909122990 * ____gTexture_41;

public:
	inline static int32_t get_offset_of__gTexture_41() { return static_cast<int32_t>(offsetof(OnlineMapsGUITextureControl_t39450173, ____gTexture_41)); }
	inline GUITexture_t1909122990 * get__gTexture_41() const { return ____gTexture_41; }
	inline GUITexture_t1909122990 ** get_address_of__gTexture_41() { return &____gTexture_41; }
	inline void set__gTexture_41(GUITexture_t1909122990 * value)
	{
		____gTexture_41 = value;
		Il2CppCodeGenWriteBarrier(&____gTexture_41, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
