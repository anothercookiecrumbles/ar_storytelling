#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelShowHide
struct  PanelShowHide_t775446595  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator PanelShowHide::_animator
	Animator_t69676727 * ____animator_2;
	// UnityEngine.UI.Text PanelShowHide::_title
	Text_t356221433 * ____title_3;
	// UnityEngine.UI.Text PanelShowHide::_id
	Text_t356221433 * ____id_4;
	// UnityEngine.UI.Image PanelShowHide::_image
	Image_t2042527209 * ____image_5;

public:
	inline static int32_t get_offset_of__animator_2() { return static_cast<int32_t>(offsetof(PanelShowHide_t775446595, ____animator_2)); }
	inline Animator_t69676727 * get__animator_2() const { return ____animator_2; }
	inline Animator_t69676727 ** get_address_of__animator_2() { return &____animator_2; }
	inline void set__animator_2(Animator_t69676727 * value)
	{
		____animator_2 = value;
		Il2CppCodeGenWriteBarrier(&____animator_2, value);
	}

	inline static int32_t get_offset_of__title_3() { return static_cast<int32_t>(offsetof(PanelShowHide_t775446595, ____title_3)); }
	inline Text_t356221433 * get__title_3() const { return ____title_3; }
	inline Text_t356221433 ** get_address_of__title_3() { return &____title_3; }
	inline void set__title_3(Text_t356221433 * value)
	{
		____title_3 = value;
		Il2CppCodeGenWriteBarrier(&____title_3, value);
	}

	inline static int32_t get_offset_of__id_4() { return static_cast<int32_t>(offsetof(PanelShowHide_t775446595, ____id_4)); }
	inline Text_t356221433 * get__id_4() const { return ____id_4; }
	inline Text_t356221433 ** get_address_of__id_4() { return &____id_4; }
	inline void set__id_4(Text_t356221433 * value)
	{
		____id_4 = value;
		Il2CppCodeGenWriteBarrier(&____id_4, value);
	}

	inline static int32_t get_offset_of__image_5() { return static_cast<int32_t>(offsetof(PanelShowHide_t775446595, ____image_5)); }
	inline Image_t2042527209 * get__image_5() const { return ____image_5; }
	inline Image_t2042527209 ** get_address_of__image_5() { return &____image_5; }
	inline void set__image_5(Image_t2042527209 * value)
	{
		____image_5 = value;
		Il2CppCodeGenWriteBarrier(&____image_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
