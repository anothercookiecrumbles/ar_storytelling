#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;
// SamplesAboutScreenInfo
struct SamplesAboutScreenInfo_t1023079980;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_SamplesMainMenu_MenuItem3182038446.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamplesMainMenu
struct  SamplesMainMenu_t2014309523  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Canvas SamplesMainMenu::AboutCanvas
	Canvas_t209405766 * ___AboutCanvas_2;
	// UnityEngine.UI.Text SamplesMainMenu::AboutTitle
	Text_t356221433 * ___AboutTitle_3;
	// UnityEngine.UI.Text SamplesMainMenu::AboutDescription
	Text_t356221433 * ___AboutDescription_4;
	// SamplesAboutScreenInfo SamplesMainMenu::aboutScreenInfo
	SamplesAboutScreenInfo_t1023079980 * ___aboutScreenInfo_9;

public:
	inline static int32_t get_offset_of_AboutCanvas_2() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t2014309523, ___AboutCanvas_2)); }
	inline Canvas_t209405766 * get_AboutCanvas_2() const { return ___AboutCanvas_2; }
	inline Canvas_t209405766 ** get_address_of_AboutCanvas_2() { return &___AboutCanvas_2; }
	inline void set_AboutCanvas_2(Canvas_t209405766 * value)
	{
		___AboutCanvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___AboutCanvas_2, value);
	}

	inline static int32_t get_offset_of_AboutTitle_3() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t2014309523, ___AboutTitle_3)); }
	inline Text_t356221433 * get_AboutTitle_3() const { return ___AboutTitle_3; }
	inline Text_t356221433 ** get_address_of_AboutTitle_3() { return &___AboutTitle_3; }
	inline void set_AboutTitle_3(Text_t356221433 * value)
	{
		___AboutTitle_3 = value;
		Il2CppCodeGenWriteBarrier(&___AboutTitle_3, value);
	}

	inline static int32_t get_offset_of_AboutDescription_4() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t2014309523, ___AboutDescription_4)); }
	inline Text_t356221433 * get_AboutDescription_4() const { return ___AboutDescription_4; }
	inline Text_t356221433 ** get_address_of_AboutDescription_4() { return &___AboutDescription_4; }
	inline void set_AboutDescription_4(Text_t356221433 * value)
	{
		___AboutDescription_4 = value;
		Il2CppCodeGenWriteBarrier(&___AboutDescription_4, value);
	}

	inline static int32_t get_offset_of_aboutScreenInfo_9() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t2014309523, ___aboutScreenInfo_9)); }
	inline SamplesAboutScreenInfo_t1023079980 * get_aboutScreenInfo_9() const { return ___aboutScreenInfo_9; }
	inline SamplesAboutScreenInfo_t1023079980 ** get_address_of_aboutScreenInfo_9() { return &___aboutScreenInfo_9; }
	inline void set_aboutScreenInfo_9(SamplesAboutScreenInfo_t1023079980 * value)
	{
		___aboutScreenInfo_9 = value;
		Il2CppCodeGenWriteBarrier(&___aboutScreenInfo_9, value);
	}
};

struct SamplesMainMenu_t2014309523_StaticFields
{
public:
	// System.Boolean SamplesMainMenu::isAboutScreenVisible
	bool ___isAboutScreenVisible_5;
	// SamplesMainMenu/MenuItem SamplesMainMenu::menuItem
	int32_t ___menuItem_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SamplesMainMenu::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_10;

public:
	inline static int32_t get_offset_of_isAboutScreenVisible_5() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t2014309523_StaticFields, ___isAboutScreenVisible_5)); }
	inline bool get_isAboutScreenVisible_5() const { return ___isAboutScreenVisible_5; }
	inline bool* get_address_of_isAboutScreenVisible_5() { return &___isAboutScreenVisible_5; }
	inline void set_isAboutScreenVisible_5(bool value)
	{
		___isAboutScreenVisible_5 = value;
	}

	inline static int32_t get_offset_of_menuItem_6() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t2014309523_StaticFields, ___menuItem_6)); }
	inline int32_t get_menuItem_6() const { return ___menuItem_6; }
	inline int32_t* get_address_of_menuItem_6() { return &___menuItem_6; }
	inline void set_menuItem_6(int32_t value)
	{
		___menuItem_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_10() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t2014309523_StaticFields, ___U3CU3Ef__switchU24map0_10)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_10() const { return ___U3CU3Ef__switchU24map0_10; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_10() { return &___U3CU3Ef__switchU24map0_10; }
	inline void set_U3CU3Ef__switchU24map0_10(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
