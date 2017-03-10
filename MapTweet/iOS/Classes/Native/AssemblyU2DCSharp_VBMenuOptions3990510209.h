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
// Vuforia.ImageTargetBehaviour
struct ImageTargetBehaviour_t2654589389;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector3>
struct Dictionary_2_t4158486842;

#include "AssemblyU2DCSharp_MenuOptions3210604277.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VBMenuOptions
struct  VBMenuOptions_t3990510209  : public MenuOptions_t3210604277
{
public:
	// UnityEngine.Material VBMenuOptions::mVirtualButtonMaterial
	Material_t193706927 * ___mVirtualButtonMaterial_5;
	// Vuforia.ImageTargetBehaviour VBMenuOptions::mImageTargetWood
	ImageTargetBehaviour_t2654589389 * ___mImageTargetWood_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector3> VBMenuOptions::mVBPositionDict
	Dictionary_2_t4158486842 * ___mVBPositionDict_7;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector3> VBMenuOptions::mVBScaleDict
	Dictionary_2_t4158486842 * ___mVBScaleDict_8;

public:
	inline static int32_t get_offset_of_mVirtualButtonMaterial_5() { return static_cast<int32_t>(offsetof(VBMenuOptions_t3990510209, ___mVirtualButtonMaterial_5)); }
	inline Material_t193706927 * get_mVirtualButtonMaterial_5() const { return ___mVirtualButtonMaterial_5; }
	inline Material_t193706927 ** get_address_of_mVirtualButtonMaterial_5() { return &___mVirtualButtonMaterial_5; }
	inline void set_mVirtualButtonMaterial_5(Material_t193706927 * value)
	{
		___mVirtualButtonMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___mVirtualButtonMaterial_5, value);
	}

	inline static int32_t get_offset_of_mImageTargetWood_6() { return static_cast<int32_t>(offsetof(VBMenuOptions_t3990510209, ___mImageTargetWood_6)); }
	inline ImageTargetBehaviour_t2654589389 * get_mImageTargetWood_6() const { return ___mImageTargetWood_6; }
	inline ImageTargetBehaviour_t2654589389 ** get_address_of_mImageTargetWood_6() { return &___mImageTargetWood_6; }
	inline void set_mImageTargetWood_6(ImageTargetBehaviour_t2654589389 * value)
	{
		___mImageTargetWood_6 = value;
		Il2CppCodeGenWriteBarrier(&___mImageTargetWood_6, value);
	}

	inline static int32_t get_offset_of_mVBPositionDict_7() { return static_cast<int32_t>(offsetof(VBMenuOptions_t3990510209, ___mVBPositionDict_7)); }
	inline Dictionary_2_t4158486842 * get_mVBPositionDict_7() const { return ___mVBPositionDict_7; }
	inline Dictionary_2_t4158486842 ** get_address_of_mVBPositionDict_7() { return &___mVBPositionDict_7; }
	inline void set_mVBPositionDict_7(Dictionary_2_t4158486842 * value)
	{
		___mVBPositionDict_7 = value;
		Il2CppCodeGenWriteBarrier(&___mVBPositionDict_7, value);
	}

	inline static int32_t get_offset_of_mVBScaleDict_8() { return static_cast<int32_t>(offsetof(VBMenuOptions_t3990510209, ___mVBScaleDict_8)); }
	inline Dictionary_2_t4158486842 * get_mVBScaleDict_8() const { return ___mVBScaleDict_8; }
	inline Dictionary_2_t4158486842 ** get_address_of_mVBScaleDict_8() { return &___mVBScaleDict_8; }
	inline void set_mVBScaleDict_8(Dictionary_2_t4158486842 * value)
	{
		___mVBScaleDict_8 = value;
		Il2CppCodeGenWriteBarrier(&___mVBScaleDict_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
