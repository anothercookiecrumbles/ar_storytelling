#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextBackground
struct  TextBackground_t1355146313  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject TextBackground::go
	GameObject_t1756533147 * ___go_2;
	// UnityEngine.Color TextBackground::colour
	Color_t2020392075  ___colour_3;

public:
	inline static int32_t get_offset_of_go_2() { return static_cast<int32_t>(offsetof(TextBackground_t1355146313, ___go_2)); }
	inline GameObject_t1756533147 * get_go_2() const { return ___go_2; }
	inline GameObject_t1756533147 ** get_address_of_go_2() { return &___go_2; }
	inline void set_go_2(GameObject_t1756533147 * value)
	{
		___go_2 = value;
		Il2CppCodeGenWriteBarrier(&___go_2, value);
	}

	inline static int32_t get_offset_of_colour_3() { return static_cast<int32_t>(offsetof(TextBackground_t1355146313, ___colour_3)); }
	inline Color_t2020392075  get_colour_3() const { return ___colour_3; }
	inline Color_t2020392075 * get_address_of_colour_3() { return &___colour_3; }
	inline void set_colour_3(Color_t2020392075  value)
	{
		___colour_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
