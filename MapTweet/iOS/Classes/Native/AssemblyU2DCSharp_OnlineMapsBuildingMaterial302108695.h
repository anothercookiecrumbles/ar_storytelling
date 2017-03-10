#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsBuildingMaterial
struct  OnlineMapsBuildingMaterial_t302108695  : public Il2CppObject
{
public:
	// UnityEngine.Material OnlineMapsBuildingMaterial::wall
	Material_t193706927 * ___wall_0;
	// UnityEngine.Material OnlineMapsBuildingMaterial::roof
	Material_t193706927 * ___roof_1;
	// UnityEngine.Vector2 OnlineMapsBuildingMaterial::scale
	Vector2_t2243707579  ___scale_2;

public:
	inline static int32_t get_offset_of_wall_0() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingMaterial_t302108695, ___wall_0)); }
	inline Material_t193706927 * get_wall_0() const { return ___wall_0; }
	inline Material_t193706927 ** get_address_of_wall_0() { return &___wall_0; }
	inline void set_wall_0(Material_t193706927 * value)
	{
		___wall_0 = value;
		Il2CppCodeGenWriteBarrier(&___wall_0, value);
	}

	inline static int32_t get_offset_of_roof_1() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingMaterial_t302108695, ___roof_1)); }
	inline Material_t193706927 * get_roof_1() const { return ___roof_1; }
	inline Material_t193706927 ** get_address_of_roof_1() { return &___roof_1; }
	inline void set_roof_1(Material_t193706927 * value)
	{
		___roof_1 = value;
		Il2CppCodeGenWriteBarrier(&___roof_1, value);
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingMaterial_t302108695, ___scale_2)); }
	inline Vector2_t2243707579  get_scale_2() const { return ___scale_2; }
	inline Vector2_t2243707579 * get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(Vector2_t2243707579  value)
	{
		___scale_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
