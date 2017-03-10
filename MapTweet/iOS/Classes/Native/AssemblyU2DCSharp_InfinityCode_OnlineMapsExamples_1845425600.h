#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Collider
struct Collider_t3497673348;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.TilesetOverlayExample
struct  TilesetOverlayExample_t1845425600  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture InfinityCode.OnlineMapsExamples.TilesetOverlayExample::texture
	Texture_t2243626319 * ___texture_2;
	// System.Single InfinityCode.OnlineMapsExamples.TilesetOverlayExample::alpha
	float ___alpha_3;
	// UnityEngine.Mesh InfinityCode.OnlineMapsExamples.TilesetOverlayExample::overlayMesh
	Mesh_t1356156583 * ___overlayMesh_4;
	// UnityEngine.Material InfinityCode.OnlineMapsExamples.TilesetOverlayExample::material
	Material_t193706927 * ___material_5;
	// UnityEngine.Collider InfinityCode.OnlineMapsExamples.TilesetOverlayExample::tilesetCollider
	Collider_t3497673348 * ___tilesetCollider_6;

public:
	inline static int32_t get_offset_of_texture_2() { return static_cast<int32_t>(offsetof(TilesetOverlayExample_t1845425600, ___texture_2)); }
	inline Texture_t2243626319 * get_texture_2() const { return ___texture_2; }
	inline Texture_t2243626319 ** get_address_of_texture_2() { return &___texture_2; }
	inline void set_texture_2(Texture_t2243626319 * value)
	{
		___texture_2 = value;
		Il2CppCodeGenWriteBarrier(&___texture_2, value);
	}

	inline static int32_t get_offset_of_alpha_3() { return static_cast<int32_t>(offsetof(TilesetOverlayExample_t1845425600, ___alpha_3)); }
	inline float get_alpha_3() const { return ___alpha_3; }
	inline float* get_address_of_alpha_3() { return &___alpha_3; }
	inline void set_alpha_3(float value)
	{
		___alpha_3 = value;
	}

	inline static int32_t get_offset_of_overlayMesh_4() { return static_cast<int32_t>(offsetof(TilesetOverlayExample_t1845425600, ___overlayMesh_4)); }
	inline Mesh_t1356156583 * get_overlayMesh_4() const { return ___overlayMesh_4; }
	inline Mesh_t1356156583 ** get_address_of_overlayMesh_4() { return &___overlayMesh_4; }
	inline void set_overlayMesh_4(Mesh_t1356156583 * value)
	{
		___overlayMesh_4 = value;
		Il2CppCodeGenWriteBarrier(&___overlayMesh_4, value);
	}

	inline static int32_t get_offset_of_material_5() { return static_cast<int32_t>(offsetof(TilesetOverlayExample_t1845425600, ___material_5)); }
	inline Material_t193706927 * get_material_5() const { return ___material_5; }
	inline Material_t193706927 ** get_address_of_material_5() { return &___material_5; }
	inline void set_material_5(Material_t193706927 * value)
	{
		___material_5 = value;
		Il2CppCodeGenWriteBarrier(&___material_5, value);
	}

	inline static int32_t get_offset_of_tilesetCollider_6() { return static_cast<int32_t>(offsetof(TilesetOverlayExample_t1845425600, ___tilesetCollider_6)); }
	inline Collider_t3497673348 * get_tilesetCollider_6() const { return ___tilesetCollider_6; }
	inline Collider_t3497673348 ** get_address_of_tilesetCollider_6() { return &___tilesetCollider_6; }
	inline void set_tilesetCollider_6(Collider_t3497673348 * value)
	{
		___tilesetCollider_6 = value;
		Il2CppCodeGenWriteBarrier(&___tilesetCollider_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
