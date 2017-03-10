#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "AssemblyU2DCSharp_OnlineMapsControlBase2D1235229338.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsSpriteRendererControl
struct  OnlineMapsSpriteRendererControl_t1477560197  : public OnlineMapsControlBase2D_t1235229338
{
public:
	// UnityEngine.Collider OnlineMapsSpriteRendererControl::_cl
	Collider_t3497673348 * ____cl_41;
	// UnityEngine.Collider2D OnlineMapsSpriteRendererControl::_cl2D
	Collider2D_t646061738 * ____cl2D_42;
	// UnityEngine.SpriteRenderer OnlineMapsSpriteRendererControl::spriteRenderer
	SpriteRenderer_t1209076198 * ___spriteRenderer_43;

public:
	inline static int32_t get_offset_of__cl_41() { return static_cast<int32_t>(offsetof(OnlineMapsSpriteRendererControl_t1477560197, ____cl_41)); }
	inline Collider_t3497673348 * get__cl_41() const { return ____cl_41; }
	inline Collider_t3497673348 ** get_address_of__cl_41() { return &____cl_41; }
	inline void set__cl_41(Collider_t3497673348 * value)
	{
		____cl_41 = value;
		Il2CppCodeGenWriteBarrier(&____cl_41, value);
	}

	inline static int32_t get_offset_of__cl2D_42() { return static_cast<int32_t>(offsetof(OnlineMapsSpriteRendererControl_t1477560197, ____cl2D_42)); }
	inline Collider2D_t646061738 * get__cl2D_42() const { return ____cl2D_42; }
	inline Collider2D_t646061738 ** get_address_of__cl2D_42() { return &____cl2D_42; }
	inline void set__cl2D_42(Collider2D_t646061738 * value)
	{
		____cl2D_42 = value;
		Il2CppCodeGenWriteBarrier(&____cl2D_42, value);
	}

	inline static int32_t get_offset_of_spriteRenderer_43() { return static_cast<int32_t>(offsetof(OnlineMapsSpriteRendererControl_t1477560197, ___spriteRenderer_43)); }
	inline SpriteRenderer_t1209076198 * get_spriteRenderer_43() const { return ___spriteRenderer_43; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriteRenderer_43() { return &___spriteRenderer_43; }
	inline void set_spriteRenderer_43(SpriteRenderer_t1209076198 * value)
	{
		___spriteRenderer_43 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_43, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
