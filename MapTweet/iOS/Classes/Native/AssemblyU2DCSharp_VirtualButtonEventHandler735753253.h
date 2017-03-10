#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t3857795355;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualButtonEventHandler
struct  VirtualButtonEventHandler_t735753253  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material[] VirtualButtonEventHandler::m_TeapotMaterials
	MaterialU5BU5D_t3123989686* ___m_TeapotMaterials_2;
	// UnityEngine.Material VirtualButtonEventHandler::m_VirtualButtonMaterial
	Material_t193706927 * ___m_VirtualButtonMaterial_3;
	// UnityEngine.GameObject VirtualButtonEventHandler::mTeapot
	GameObject_t1756533147 * ___mTeapot_4;
	// System.Collections.Generic.List`1<UnityEngine.Material> VirtualButtonEventHandler::mActiveMaterials
	List_1_t3857795355 * ___mActiveMaterials_5;

public:
	inline static int32_t get_offset_of_m_TeapotMaterials_2() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t735753253, ___m_TeapotMaterials_2)); }
	inline MaterialU5BU5D_t3123989686* get_m_TeapotMaterials_2() const { return ___m_TeapotMaterials_2; }
	inline MaterialU5BU5D_t3123989686** get_address_of_m_TeapotMaterials_2() { return &___m_TeapotMaterials_2; }
	inline void set_m_TeapotMaterials_2(MaterialU5BU5D_t3123989686* value)
	{
		___m_TeapotMaterials_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TeapotMaterials_2, value);
	}

	inline static int32_t get_offset_of_m_VirtualButtonMaterial_3() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t735753253, ___m_VirtualButtonMaterial_3)); }
	inline Material_t193706927 * get_m_VirtualButtonMaterial_3() const { return ___m_VirtualButtonMaterial_3; }
	inline Material_t193706927 ** get_address_of_m_VirtualButtonMaterial_3() { return &___m_VirtualButtonMaterial_3; }
	inline void set_m_VirtualButtonMaterial_3(Material_t193706927 * value)
	{
		___m_VirtualButtonMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_VirtualButtonMaterial_3, value);
	}

	inline static int32_t get_offset_of_mTeapot_4() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t735753253, ___mTeapot_4)); }
	inline GameObject_t1756533147 * get_mTeapot_4() const { return ___mTeapot_4; }
	inline GameObject_t1756533147 ** get_address_of_mTeapot_4() { return &___mTeapot_4; }
	inline void set_mTeapot_4(GameObject_t1756533147 * value)
	{
		___mTeapot_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTeapot_4, value);
	}

	inline static int32_t get_offset_of_mActiveMaterials_5() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t735753253, ___mActiveMaterials_5)); }
	inline List_1_t3857795355 * get_mActiveMaterials_5() const { return ___mActiveMaterials_5; }
	inline List_1_t3857795355 ** get_address_of_mActiveMaterials_5() { return &___mActiveMaterials_5; }
	inline void set_mActiveMaterials_5(List_1_t3857795355 * value)
	{
		___mActiveMaterials_5 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveMaterials_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
