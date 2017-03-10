#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<OnlineMapsMarker>
struct List_1_t2861287814;
// OnlineMapsMarker
struct OnlineMapsMarker_t3492166682;
// System.Func`3<UnityEngine.Vector2,OnlineMapsMarker,UnityEngine.Vector2>
struct Func_3_t832466872;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.GroupMarkersExample/MarkerGroup
struct  MarkerGroup_t4035947818  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<OnlineMapsMarker> InfinityCode.OnlineMapsExamples.GroupMarkersExample/MarkerGroup::markers
	List_1_t2861287814 * ___markers_0;
	// OnlineMapsMarker InfinityCode.OnlineMapsExamples.GroupMarkersExample/MarkerGroup::instance
	OnlineMapsMarker_t3492166682 * ___instance_1;
	// UnityEngine.Vector2 InfinityCode.OnlineMapsExamples.GroupMarkersExample/MarkerGroup::center
	Vector2_t2243707579  ___center_2;
	// System.Double InfinityCode.OnlineMapsExamples.GroupMarkersExample/MarkerGroup::tilePositionX
	double ___tilePositionX_3;
	// System.Double InfinityCode.OnlineMapsExamples.GroupMarkersExample/MarkerGroup::tilePositionY
	double ___tilePositionY_4;
	// System.Int32 InfinityCode.OnlineMapsExamples.GroupMarkersExample/MarkerGroup::zoom
	int32_t ___zoom_5;

public:
	inline static int32_t get_offset_of_markers_0() { return static_cast<int32_t>(offsetof(MarkerGroup_t4035947818, ___markers_0)); }
	inline List_1_t2861287814 * get_markers_0() const { return ___markers_0; }
	inline List_1_t2861287814 ** get_address_of_markers_0() { return &___markers_0; }
	inline void set_markers_0(List_1_t2861287814 * value)
	{
		___markers_0 = value;
		Il2CppCodeGenWriteBarrier(&___markers_0, value);
	}

	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(MarkerGroup_t4035947818, ___instance_1)); }
	inline OnlineMapsMarker_t3492166682 * get_instance_1() const { return ___instance_1; }
	inline OnlineMapsMarker_t3492166682 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(OnlineMapsMarker_t3492166682 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier(&___instance_1, value);
	}

	inline static int32_t get_offset_of_center_2() { return static_cast<int32_t>(offsetof(MarkerGroup_t4035947818, ___center_2)); }
	inline Vector2_t2243707579  get_center_2() const { return ___center_2; }
	inline Vector2_t2243707579 * get_address_of_center_2() { return &___center_2; }
	inline void set_center_2(Vector2_t2243707579  value)
	{
		___center_2 = value;
	}

	inline static int32_t get_offset_of_tilePositionX_3() { return static_cast<int32_t>(offsetof(MarkerGroup_t4035947818, ___tilePositionX_3)); }
	inline double get_tilePositionX_3() const { return ___tilePositionX_3; }
	inline double* get_address_of_tilePositionX_3() { return &___tilePositionX_3; }
	inline void set_tilePositionX_3(double value)
	{
		___tilePositionX_3 = value;
	}

	inline static int32_t get_offset_of_tilePositionY_4() { return static_cast<int32_t>(offsetof(MarkerGroup_t4035947818, ___tilePositionY_4)); }
	inline double get_tilePositionY_4() const { return ___tilePositionY_4; }
	inline double* get_address_of_tilePositionY_4() { return &___tilePositionY_4; }
	inline void set_tilePositionY_4(double value)
	{
		___tilePositionY_4 = value;
	}

	inline static int32_t get_offset_of_zoom_5() { return static_cast<int32_t>(offsetof(MarkerGroup_t4035947818, ___zoom_5)); }
	inline int32_t get_zoom_5() const { return ___zoom_5; }
	inline int32_t* get_address_of_zoom_5() { return &___zoom_5; }
	inline void set_zoom_5(int32_t value)
	{
		___zoom_5 = value;
	}
};

struct MarkerGroup_t4035947818_StaticFields
{
public:
	// System.Func`3<UnityEngine.Vector2,OnlineMapsMarker,UnityEngine.Vector2> InfinityCode.OnlineMapsExamples.GroupMarkersExample/MarkerGroup::<>f__am$cache0
	Func_3_t832466872 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(MarkerGroup_t4035947818_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Func_3_t832466872 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Func_3_t832466872 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Func_3_t832466872 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
