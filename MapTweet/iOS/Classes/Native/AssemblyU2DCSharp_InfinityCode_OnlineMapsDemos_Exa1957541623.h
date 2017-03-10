#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMaps
struct OnlineMaps_t1893290312;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// System.String
struct String_t;
// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsDemos.ExampleGUI
struct  ExampleGUI_t1957541623  : public MonoBehaviour_t1158329972
{
public:
	// OnlineMaps InfinityCode.OnlineMapsDemos.ExampleGUI::map
	OnlineMaps_t1893290312 * ___map_2;
	// UnityEngine.GUIStyle InfinityCode.OnlineMapsDemos.ExampleGUI::rowStyle
	GUIStyle_t1799908754 * ___rowStyle_3;
	// System.String InfinityCode.OnlineMapsDemos.ExampleGUI::search
	String_t* ___search_4;

public:
	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(ExampleGUI_t1957541623, ___map_2)); }
	inline OnlineMaps_t1893290312 * get_map_2() const { return ___map_2; }
	inline OnlineMaps_t1893290312 ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(OnlineMaps_t1893290312 * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier(&___map_2, value);
	}

	inline static int32_t get_offset_of_rowStyle_3() { return static_cast<int32_t>(offsetof(ExampleGUI_t1957541623, ___rowStyle_3)); }
	inline GUIStyle_t1799908754 * get_rowStyle_3() const { return ___rowStyle_3; }
	inline GUIStyle_t1799908754 ** get_address_of_rowStyle_3() { return &___rowStyle_3; }
	inline void set_rowStyle_3(GUIStyle_t1799908754 * value)
	{
		___rowStyle_3 = value;
		Il2CppCodeGenWriteBarrier(&___rowStyle_3, value);
	}

	inline static int32_t get_offset_of_search_4() { return static_cast<int32_t>(offsetof(ExampleGUI_t1957541623, ___search_4)); }
	inline String_t* get_search_4() const { return ___search_4; }
	inline String_t** get_address_of_search_4() { return &___search_4; }
	inline void set_search_4(String_t* value)
	{
		___search_4 = value;
		Il2CppCodeGenWriteBarrier(&___search_4, value);
	}
};

struct ExampleGUI_t1957541623_StaticFields
{
public:
	// System.Action`1<System.String> InfinityCode.OnlineMapsDemos.ExampleGUI::<>f__am$cache0
	Action_1_t1831019615 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(ExampleGUI_t1957541623_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
