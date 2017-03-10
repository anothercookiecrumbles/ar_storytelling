#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<OnlineMapsBuildingBase>
struct Action_1_t452526403;
// System.String
struct String_t;
// OnlineMapsBuildingBase/MetaInfo[]
struct MetaInfoU5BU5D_t4290224628;
// OnlineMapsOSMWay
struct OnlineMapsOSMWay_t3319895272;
// System.Collections.Generic.List`1<OnlineMapsOSMNode>
struct List_1_t2753111535;
// UnityEngine.Collider
struct Collider_t3497673348;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsBuildingBase
struct  OnlineMapsBuildingBase_t650727021  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<OnlineMapsBuildingBase> OnlineMapsBuildingBase::OnClick
	Action_1_t452526403 * ___OnClick_2;
	// System.Action`1<OnlineMapsBuildingBase> OnlineMapsBuildingBase::OnDispose
	Action_1_t452526403 * ___OnDispose_3;
	// System.Action`1<OnlineMapsBuildingBase> OnlineMapsBuildingBase::OnPress
	Action_1_t452526403 * ___OnPress_4;
	// System.Action`1<OnlineMapsBuildingBase> OnlineMapsBuildingBase::OnRelease
	Action_1_t452526403 * ___OnRelease_5;
	// UnityEngine.Bounds OnlineMapsBuildingBase::boundsCoords
	Bounds_t3033363703  ___boundsCoords_6;
	// UnityEngine.Vector2 OnlineMapsBuildingBase::centerCoordinates
	Vector2_t2243707579  ___centerCoordinates_7;
	// System.String OnlineMapsBuildingBase::id
	String_t* ___id_8;
	// System.Int32 OnlineMapsBuildingBase::initialZoom
	int32_t ___initialZoom_9;
	// OnlineMapsBuildingBase/MetaInfo[] OnlineMapsBuildingBase::metaInfo
	MetaInfoU5BU5D_t4290224628* ___metaInfo_10;
	// System.Single OnlineMapsBuildingBase::perimeter
	float ___perimeter_11;
	// OnlineMapsOSMWay OnlineMapsBuildingBase::way
	OnlineMapsOSMWay_t3319895272 * ___way_12;
	// System.Collections.Generic.List`1<OnlineMapsOSMNode> OnlineMapsBuildingBase::nodes
	List_1_t2753111535 * ___nodes_13;
	// System.Int32 OnlineMapsBuildingBase::lastTouchCount
	int32_t ___lastTouchCount_14;
	// UnityEngine.Collider OnlineMapsBuildingBase::buildingCollider
	Collider_t3497673348 * ___buildingCollider_15;
	// System.Boolean OnlineMapsBuildingBase::hasErrors
	bool ___hasErrors_16;
	// System.Boolean OnlineMapsBuildingBase::isPressed
	bool ___isPressed_17;
	// UnityEngine.Vector2 OnlineMapsBuildingBase::pressPoint
	Vector2_t2243707579  ___pressPoint_18;

public:
	inline static int32_t get_offset_of_OnClick_2() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___OnClick_2)); }
	inline Action_1_t452526403 * get_OnClick_2() const { return ___OnClick_2; }
	inline Action_1_t452526403 ** get_address_of_OnClick_2() { return &___OnClick_2; }
	inline void set_OnClick_2(Action_1_t452526403 * value)
	{
		___OnClick_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnClick_2, value);
	}

	inline static int32_t get_offset_of_OnDispose_3() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___OnDispose_3)); }
	inline Action_1_t452526403 * get_OnDispose_3() const { return ___OnDispose_3; }
	inline Action_1_t452526403 ** get_address_of_OnDispose_3() { return &___OnDispose_3; }
	inline void set_OnDispose_3(Action_1_t452526403 * value)
	{
		___OnDispose_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnDispose_3, value);
	}

	inline static int32_t get_offset_of_OnPress_4() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___OnPress_4)); }
	inline Action_1_t452526403 * get_OnPress_4() const { return ___OnPress_4; }
	inline Action_1_t452526403 ** get_address_of_OnPress_4() { return &___OnPress_4; }
	inline void set_OnPress_4(Action_1_t452526403 * value)
	{
		___OnPress_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnPress_4, value);
	}

	inline static int32_t get_offset_of_OnRelease_5() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___OnRelease_5)); }
	inline Action_1_t452526403 * get_OnRelease_5() const { return ___OnRelease_5; }
	inline Action_1_t452526403 ** get_address_of_OnRelease_5() { return &___OnRelease_5; }
	inline void set_OnRelease_5(Action_1_t452526403 * value)
	{
		___OnRelease_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnRelease_5, value);
	}

	inline static int32_t get_offset_of_boundsCoords_6() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___boundsCoords_6)); }
	inline Bounds_t3033363703  get_boundsCoords_6() const { return ___boundsCoords_6; }
	inline Bounds_t3033363703 * get_address_of_boundsCoords_6() { return &___boundsCoords_6; }
	inline void set_boundsCoords_6(Bounds_t3033363703  value)
	{
		___boundsCoords_6 = value;
	}

	inline static int32_t get_offset_of_centerCoordinates_7() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___centerCoordinates_7)); }
	inline Vector2_t2243707579  get_centerCoordinates_7() const { return ___centerCoordinates_7; }
	inline Vector2_t2243707579 * get_address_of_centerCoordinates_7() { return &___centerCoordinates_7; }
	inline void set_centerCoordinates_7(Vector2_t2243707579  value)
	{
		___centerCoordinates_7 = value;
	}

	inline static int32_t get_offset_of_id_8() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___id_8)); }
	inline String_t* get_id_8() const { return ___id_8; }
	inline String_t** get_address_of_id_8() { return &___id_8; }
	inline void set_id_8(String_t* value)
	{
		___id_8 = value;
		Il2CppCodeGenWriteBarrier(&___id_8, value);
	}

	inline static int32_t get_offset_of_initialZoom_9() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___initialZoom_9)); }
	inline int32_t get_initialZoom_9() const { return ___initialZoom_9; }
	inline int32_t* get_address_of_initialZoom_9() { return &___initialZoom_9; }
	inline void set_initialZoom_9(int32_t value)
	{
		___initialZoom_9 = value;
	}

	inline static int32_t get_offset_of_metaInfo_10() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___metaInfo_10)); }
	inline MetaInfoU5BU5D_t4290224628* get_metaInfo_10() const { return ___metaInfo_10; }
	inline MetaInfoU5BU5D_t4290224628** get_address_of_metaInfo_10() { return &___metaInfo_10; }
	inline void set_metaInfo_10(MetaInfoU5BU5D_t4290224628* value)
	{
		___metaInfo_10 = value;
		Il2CppCodeGenWriteBarrier(&___metaInfo_10, value);
	}

	inline static int32_t get_offset_of_perimeter_11() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___perimeter_11)); }
	inline float get_perimeter_11() const { return ___perimeter_11; }
	inline float* get_address_of_perimeter_11() { return &___perimeter_11; }
	inline void set_perimeter_11(float value)
	{
		___perimeter_11 = value;
	}

	inline static int32_t get_offset_of_way_12() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___way_12)); }
	inline OnlineMapsOSMWay_t3319895272 * get_way_12() const { return ___way_12; }
	inline OnlineMapsOSMWay_t3319895272 ** get_address_of_way_12() { return &___way_12; }
	inline void set_way_12(OnlineMapsOSMWay_t3319895272 * value)
	{
		___way_12 = value;
		Il2CppCodeGenWriteBarrier(&___way_12, value);
	}

	inline static int32_t get_offset_of_nodes_13() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___nodes_13)); }
	inline List_1_t2753111535 * get_nodes_13() const { return ___nodes_13; }
	inline List_1_t2753111535 ** get_address_of_nodes_13() { return &___nodes_13; }
	inline void set_nodes_13(List_1_t2753111535 * value)
	{
		___nodes_13 = value;
		Il2CppCodeGenWriteBarrier(&___nodes_13, value);
	}

	inline static int32_t get_offset_of_lastTouchCount_14() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___lastTouchCount_14)); }
	inline int32_t get_lastTouchCount_14() const { return ___lastTouchCount_14; }
	inline int32_t* get_address_of_lastTouchCount_14() { return &___lastTouchCount_14; }
	inline void set_lastTouchCount_14(int32_t value)
	{
		___lastTouchCount_14 = value;
	}

	inline static int32_t get_offset_of_buildingCollider_15() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___buildingCollider_15)); }
	inline Collider_t3497673348 * get_buildingCollider_15() const { return ___buildingCollider_15; }
	inline Collider_t3497673348 ** get_address_of_buildingCollider_15() { return &___buildingCollider_15; }
	inline void set_buildingCollider_15(Collider_t3497673348 * value)
	{
		___buildingCollider_15 = value;
		Il2CppCodeGenWriteBarrier(&___buildingCollider_15, value);
	}

	inline static int32_t get_offset_of_hasErrors_16() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___hasErrors_16)); }
	inline bool get_hasErrors_16() const { return ___hasErrors_16; }
	inline bool* get_address_of_hasErrors_16() { return &___hasErrors_16; }
	inline void set_hasErrors_16(bool value)
	{
		___hasErrors_16 = value;
	}

	inline static int32_t get_offset_of_isPressed_17() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___isPressed_17)); }
	inline bool get_isPressed_17() const { return ___isPressed_17; }
	inline bool* get_address_of_isPressed_17() { return &___isPressed_17; }
	inline void set_isPressed_17(bool value)
	{
		___isPressed_17 = value;
	}

	inline static int32_t get_offset_of_pressPoint_18() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingBase_t650727021, ___pressPoint_18)); }
	inline Vector2_t2243707579  get_pressPoint_18() const { return ___pressPoint_18; }
	inline Vector2_t2243707579 * get_address_of_pressPoint_18() { return &___pressPoint_18; }
	inline void set_pressPoint_18(Vector2_t2243707579  value)
	{
		___pressPoint_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
