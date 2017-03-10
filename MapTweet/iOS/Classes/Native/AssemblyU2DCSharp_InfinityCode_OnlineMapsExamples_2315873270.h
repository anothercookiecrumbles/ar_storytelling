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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.DottedLineExample
struct  DottedLineExample_t2315873270  : public MonoBehaviour_t1158329972
{
public:
	// System.Single InfinityCode.OnlineMapsExamples.DottedLineExample::size
	float ___size_2;
	// UnityEngine.Vector2 InfinityCode.OnlineMapsExamples.DottedLineExample::uvScale
	Vector2_t2243707579  ___uvScale_3;
	// UnityEngine.Material InfinityCode.OnlineMapsExamples.DottedLineExample::material
	Material_t193706927 * ___material_4;
	// UnityEngine.Vector2[] InfinityCode.OnlineMapsExamples.DottedLineExample::coords
	Vector2U5BU5D_t686124026* ___coords_5;
	// UnityEngine.MeshFilter InfinityCode.OnlineMapsExamples.DottedLineExample::meshFilter
	MeshFilter_t3026937449 * ___meshFilter_6;
	// UnityEngine.MeshRenderer InfinityCode.OnlineMapsExamples.DottedLineExample::meshRenderer
	MeshRenderer_t1268241104 * ___meshRenderer_7;
	// UnityEngine.Mesh InfinityCode.OnlineMapsExamples.DottedLineExample::mesh
	Mesh_t1356156583 * ___mesh_8;
	// System.Single InfinityCode.OnlineMapsExamples.DottedLineExample::_size
	float ____size_9;

public:
	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(DottedLineExample_t2315873270, ___size_2)); }
	inline float get_size_2() const { return ___size_2; }
	inline float* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(float value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_uvScale_3() { return static_cast<int32_t>(offsetof(DottedLineExample_t2315873270, ___uvScale_3)); }
	inline Vector2_t2243707579  get_uvScale_3() const { return ___uvScale_3; }
	inline Vector2_t2243707579 * get_address_of_uvScale_3() { return &___uvScale_3; }
	inline void set_uvScale_3(Vector2_t2243707579  value)
	{
		___uvScale_3 = value;
	}

	inline static int32_t get_offset_of_material_4() { return static_cast<int32_t>(offsetof(DottedLineExample_t2315873270, ___material_4)); }
	inline Material_t193706927 * get_material_4() const { return ___material_4; }
	inline Material_t193706927 ** get_address_of_material_4() { return &___material_4; }
	inline void set_material_4(Material_t193706927 * value)
	{
		___material_4 = value;
		Il2CppCodeGenWriteBarrier(&___material_4, value);
	}

	inline static int32_t get_offset_of_coords_5() { return static_cast<int32_t>(offsetof(DottedLineExample_t2315873270, ___coords_5)); }
	inline Vector2U5BU5D_t686124026* get_coords_5() const { return ___coords_5; }
	inline Vector2U5BU5D_t686124026** get_address_of_coords_5() { return &___coords_5; }
	inline void set_coords_5(Vector2U5BU5D_t686124026* value)
	{
		___coords_5 = value;
		Il2CppCodeGenWriteBarrier(&___coords_5, value);
	}

	inline static int32_t get_offset_of_meshFilter_6() { return static_cast<int32_t>(offsetof(DottedLineExample_t2315873270, ___meshFilter_6)); }
	inline MeshFilter_t3026937449 * get_meshFilter_6() const { return ___meshFilter_6; }
	inline MeshFilter_t3026937449 ** get_address_of_meshFilter_6() { return &___meshFilter_6; }
	inline void set_meshFilter_6(MeshFilter_t3026937449 * value)
	{
		___meshFilter_6 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter_6, value);
	}

	inline static int32_t get_offset_of_meshRenderer_7() { return static_cast<int32_t>(offsetof(DottedLineExample_t2315873270, ___meshRenderer_7)); }
	inline MeshRenderer_t1268241104 * get_meshRenderer_7() const { return ___meshRenderer_7; }
	inline MeshRenderer_t1268241104 ** get_address_of_meshRenderer_7() { return &___meshRenderer_7; }
	inline void set_meshRenderer_7(MeshRenderer_t1268241104 * value)
	{
		___meshRenderer_7 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_7, value);
	}

	inline static int32_t get_offset_of_mesh_8() { return static_cast<int32_t>(offsetof(DottedLineExample_t2315873270, ___mesh_8)); }
	inline Mesh_t1356156583 * get_mesh_8() const { return ___mesh_8; }
	inline Mesh_t1356156583 ** get_address_of_mesh_8() { return &___mesh_8; }
	inline void set_mesh_8(Mesh_t1356156583 * value)
	{
		___mesh_8 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_8, value);
	}

	inline static int32_t get_offset_of__size_9() { return static_cast<int32_t>(offsetof(DottedLineExample_t2315873270, ____size_9)); }
	inline float get__size_9() const { return ____size_9; }
	inline float* get_address_of__size_9() { return &____size_9; }
	inline void set__size_9(float value)
	{
		____size_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
