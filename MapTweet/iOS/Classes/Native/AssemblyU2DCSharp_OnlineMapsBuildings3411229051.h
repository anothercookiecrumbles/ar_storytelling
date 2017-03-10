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
// System.Predicate`1<OnlineMapsBuildingsNodeData>
struct Predicate_1_t4209801842;
// System.Action
struct Action_t3226471752;
// System.Func`2<OnlineMapsOSMWay,System.Single>
struct Func_2_t2134069557;
// System.Func`4<System.String,UnityEngine.Vector2,UnityEngine.Vector2,System.String>
struct Func_4_t1326976319;
// System.Predicate`1<OnlineMapsBuildingBase>
struct Predicate_1_t3388664432;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// OnlineMapsBuildings
struct OnlineMapsBuildings_t3411229051;
// System.Collections.Generic.Dictionary`2<System.String,OnlineMapsBuildingBase>
struct Dictionary_2_t2565506283;
// OnlineMapsRange
struct OnlineMapsRange_t3791609909;
// OnlineMapsBuildingMaterial[]
struct OnlineMapsBuildingMaterialU5BU5D_t1202819502;
// OnlineMapsVector2i
struct OnlineMapsVector2i_t2180897250;
// System.Collections.Generic.Queue`1<OnlineMapsBuildingsNodeData>
struct Queue_1_t1291521266;
// System.String
struct String_t;
// OnlineMapsOSMAPIQuery
struct OnlineMapsOSMAPIQuery_t1899738209;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,OnlineMapsBuildingBase>,OnlineMapsBuildingBase>
struct Func_2_t1525753257;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsBuildings
struct  OnlineMapsBuildings_t3411229051  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<OnlineMapsBuildingBase> OnlineMapsBuildings::OnBuildingCreated
	Action_1_t452526403 * ___OnBuildingCreated_2;
	// System.Action`1<OnlineMapsBuildingBase> OnlineMapsBuildings::OnBuildingDispose
	Action_1_t452526403 * ___OnBuildingDispose_3;
	// System.Predicate`1<OnlineMapsBuildingsNodeData> OnlineMapsBuildings::OnCreateBuilding
	Predicate_1_t4209801842 * ___OnCreateBuilding_4;
	// System.Action OnlineMapsBuildings::OnNewBuildingsReceived
	Action_t3226471752 * ___OnNewBuildingsReceived_5;
	// System.Func`2<OnlineMapsOSMWay,System.Single> OnlineMapsBuildings::OnGenerateBuildingHeight
	Func_2_t2134069557 * ___OnGenerateBuildingHeight_6;
	// System.Func`4<System.String,UnityEngine.Vector2,UnityEngine.Vector2,System.String> OnlineMapsBuildings::OnPrepareRequest
	Func_4_t1326976319 * ___OnPrepareRequest_7;
	// System.Action OnlineMapsBuildings::OnRequestSent
	Action_t3226471752 * ___OnRequestSent_8;
	// System.Action OnlineMapsBuildings::OnRequestComplete
	Action_t3226471752 * ___OnRequestComplete_9;
	// System.Predicate`1<OnlineMapsBuildingBase> OnlineMapsBuildings::OnShowBuilding
	Predicate_1_t3388664432 * ___OnShowBuilding_10;
	// System.Collections.Generic.Dictionary`2<System.String,OnlineMapsBuildingBase> OnlineMapsBuildings::buildings
	Dictionary_2_t2565506283 * ___buildings_14;
	// OnlineMapsRange OnlineMapsBuildings::zoomRange
	OnlineMapsRange_t3791609909 * ___zoomRange_15;
	// OnlineMapsRange OnlineMapsBuildings::levelsRange
	OnlineMapsRange_t3791609909 * ___levelsRange_16;
	// System.Single OnlineMapsBuildings::levelHeight
	float ___levelHeight_17;
	// System.Single OnlineMapsBuildings::minHeight
	float ___minHeight_18;
	// System.Single OnlineMapsBuildings::heightScale
	float ___heightScale_19;
	// OnlineMapsBuildingMaterial[] OnlineMapsBuildings::materials
	OnlineMapsBuildingMaterialU5BU5D_t1202819502* ___materials_20;
	// System.Int32 OnlineMapsBuildings::maxActiveBuildings
	int32_t ___maxActiveBuildings_21;
	// System.Int32 OnlineMapsBuildings::maxBuilding
	int32_t ___maxBuilding_22;
	// OnlineMapsVector2i OnlineMapsBuildings::topLeft
	OnlineMapsVector2i_t2180897250 * ___topLeft_23;
	// OnlineMapsVector2i OnlineMapsBuildings::bottomRight
	OnlineMapsVector2i_t2180897250 * ___bottomRight_24;
	// System.Collections.Generic.Dictionary`2<System.String,OnlineMapsBuildingBase> OnlineMapsBuildings::unusedBuildings
	Dictionary_2_t2565506283 * ___unusedBuildings_25;
	// System.Collections.Generic.Queue`1<OnlineMapsBuildingsNodeData> OnlineMapsBuildings::newBuildingsData
	Queue_1_t1291521266 * ___newBuildingsData_26;
	// System.Boolean OnlineMapsBuildings::sendBuildingsReceived
	bool ___sendBuildingsReceived_27;
	// System.String OnlineMapsBuildings::requestData
	String_t* ___requestData_28;
	// System.Single OnlineMapsBuildings::lastRequestTime
	float ___lastRequestTime_29;
	// OnlineMapsOSMAPIQuery OnlineMapsBuildings::osmRequest
	OnlineMapsOSMAPIQuery_t1899738209 * ___osmRequest_30;

public:
	inline static int32_t get_offset_of_OnBuildingCreated_2() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___OnBuildingCreated_2)); }
	inline Action_1_t452526403 * get_OnBuildingCreated_2() const { return ___OnBuildingCreated_2; }
	inline Action_1_t452526403 ** get_address_of_OnBuildingCreated_2() { return &___OnBuildingCreated_2; }
	inline void set_OnBuildingCreated_2(Action_1_t452526403 * value)
	{
		___OnBuildingCreated_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnBuildingCreated_2, value);
	}

	inline static int32_t get_offset_of_OnBuildingDispose_3() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___OnBuildingDispose_3)); }
	inline Action_1_t452526403 * get_OnBuildingDispose_3() const { return ___OnBuildingDispose_3; }
	inline Action_1_t452526403 ** get_address_of_OnBuildingDispose_3() { return &___OnBuildingDispose_3; }
	inline void set_OnBuildingDispose_3(Action_1_t452526403 * value)
	{
		___OnBuildingDispose_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnBuildingDispose_3, value);
	}

	inline static int32_t get_offset_of_OnCreateBuilding_4() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___OnCreateBuilding_4)); }
	inline Predicate_1_t4209801842 * get_OnCreateBuilding_4() const { return ___OnCreateBuilding_4; }
	inline Predicate_1_t4209801842 ** get_address_of_OnCreateBuilding_4() { return &___OnCreateBuilding_4; }
	inline void set_OnCreateBuilding_4(Predicate_1_t4209801842 * value)
	{
		___OnCreateBuilding_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnCreateBuilding_4, value);
	}

	inline static int32_t get_offset_of_OnNewBuildingsReceived_5() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___OnNewBuildingsReceived_5)); }
	inline Action_t3226471752 * get_OnNewBuildingsReceived_5() const { return ___OnNewBuildingsReceived_5; }
	inline Action_t3226471752 ** get_address_of_OnNewBuildingsReceived_5() { return &___OnNewBuildingsReceived_5; }
	inline void set_OnNewBuildingsReceived_5(Action_t3226471752 * value)
	{
		___OnNewBuildingsReceived_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnNewBuildingsReceived_5, value);
	}

	inline static int32_t get_offset_of_OnGenerateBuildingHeight_6() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___OnGenerateBuildingHeight_6)); }
	inline Func_2_t2134069557 * get_OnGenerateBuildingHeight_6() const { return ___OnGenerateBuildingHeight_6; }
	inline Func_2_t2134069557 ** get_address_of_OnGenerateBuildingHeight_6() { return &___OnGenerateBuildingHeight_6; }
	inline void set_OnGenerateBuildingHeight_6(Func_2_t2134069557 * value)
	{
		___OnGenerateBuildingHeight_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnGenerateBuildingHeight_6, value);
	}

	inline static int32_t get_offset_of_OnPrepareRequest_7() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___OnPrepareRequest_7)); }
	inline Func_4_t1326976319 * get_OnPrepareRequest_7() const { return ___OnPrepareRequest_7; }
	inline Func_4_t1326976319 ** get_address_of_OnPrepareRequest_7() { return &___OnPrepareRequest_7; }
	inline void set_OnPrepareRequest_7(Func_4_t1326976319 * value)
	{
		___OnPrepareRequest_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnPrepareRequest_7, value);
	}

	inline static int32_t get_offset_of_OnRequestSent_8() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___OnRequestSent_8)); }
	inline Action_t3226471752 * get_OnRequestSent_8() const { return ___OnRequestSent_8; }
	inline Action_t3226471752 ** get_address_of_OnRequestSent_8() { return &___OnRequestSent_8; }
	inline void set_OnRequestSent_8(Action_t3226471752 * value)
	{
		___OnRequestSent_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnRequestSent_8, value);
	}

	inline static int32_t get_offset_of_OnRequestComplete_9() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___OnRequestComplete_9)); }
	inline Action_t3226471752 * get_OnRequestComplete_9() const { return ___OnRequestComplete_9; }
	inline Action_t3226471752 ** get_address_of_OnRequestComplete_9() { return &___OnRequestComplete_9; }
	inline void set_OnRequestComplete_9(Action_t3226471752 * value)
	{
		___OnRequestComplete_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnRequestComplete_9, value);
	}

	inline static int32_t get_offset_of_OnShowBuilding_10() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___OnShowBuilding_10)); }
	inline Predicate_1_t3388664432 * get_OnShowBuilding_10() const { return ___OnShowBuilding_10; }
	inline Predicate_1_t3388664432 ** get_address_of_OnShowBuilding_10() { return &___OnShowBuilding_10; }
	inline void set_OnShowBuilding_10(Predicate_1_t3388664432 * value)
	{
		___OnShowBuilding_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnShowBuilding_10, value);
	}

	inline static int32_t get_offset_of_buildings_14() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___buildings_14)); }
	inline Dictionary_2_t2565506283 * get_buildings_14() const { return ___buildings_14; }
	inline Dictionary_2_t2565506283 ** get_address_of_buildings_14() { return &___buildings_14; }
	inline void set_buildings_14(Dictionary_2_t2565506283 * value)
	{
		___buildings_14 = value;
		Il2CppCodeGenWriteBarrier(&___buildings_14, value);
	}

	inline static int32_t get_offset_of_zoomRange_15() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___zoomRange_15)); }
	inline OnlineMapsRange_t3791609909 * get_zoomRange_15() const { return ___zoomRange_15; }
	inline OnlineMapsRange_t3791609909 ** get_address_of_zoomRange_15() { return &___zoomRange_15; }
	inline void set_zoomRange_15(OnlineMapsRange_t3791609909 * value)
	{
		___zoomRange_15 = value;
		Il2CppCodeGenWriteBarrier(&___zoomRange_15, value);
	}

	inline static int32_t get_offset_of_levelsRange_16() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___levelsRange_16)); }
	inline OnlineMapsRange_t3791609909 * get_levelsRange_16() const { return ___levelsRange_16; }
	inline OnlineMapsRange_t3791609909 ** get_address_of_levelsRange_16() { return &___levelsRange_16; }
	inline void set_levelsRange_16(OnlineMapsRange_t3791609909 * value)
	{
		___levelsRange_16 = value;
		Il2CppCodeGenWriteBarrier(&___levelsRange_16, value);
	}

	inline static int32_t get_offset_of_levelHeight_17() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___levelHeight_17)); }
	inline float get_levelHeight_17() const { return ___levelHeight_17; }
	inline float* get_address_of_levelHeight_17() { return &___levelHeight_17; }
	inline void set_levelHeight_17(float value)
	{
		___levelHeight_17 = value;
	}

	inline static int32_t get_offset_of_minHeight_18() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___minHeight_18)); }
	inline float get_minHeight_18() const { return ___minHeight_18; }
	inline float* get_address_of_minHeight_18() { return &___minHeight_18; }
	inline void set_minHeight_18(float value)
	{
		___minHeight_18 = value;
	}

	inline static int32_t get_offset_of_heightScale_19() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___heightScale_19)); }
	inline float get_heightScale_19() const { return ___heightScale_19; }
	inline float* get_address_of_heightScale_19() { return &___heightScale_19; }
	inline void set_heightScale_19(float value)
	{
		___heightScale_19 = value;
	}

	inline static int32_t get_offset_of_materials_20() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___materials_20)); }
	inline OnlineMapsBuildingMaterialU5BU5D_t1202819502* get_materials_20() const { return ___materials_20; }
	inline OnlineMapsBuildingMaterialU5BU5D_t1202819502** get_address_of_materials_20() { return &___materials_20; }
	inline void set_materials_20(OnlineMapsBuildingMaterialU5BU5D_t1202819502* value)
	{
		___materials_20 = value;
		Il2CppCodeGenWriteBarrier(&___materials_20, value);
	}

	inline static int32_t get_offset_of_maxActiveBuildings_21() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___maxActiveBuildings_21)); }
	inline int32_t get_maxActiveBuildings_21() const { return ___maxActiveBuildings_21; }
	inline int32_t* get_address_of_maxActiveBuildings_21() { return &___maxActiveBuildings_21; }
	inline void set_maxActiveBuildings_21(int32_t value)
	{
		___maxActiveBuildings_21 = value;
	}

	inline static int32_t get_offset_of_maxBuilding_22() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___maxBuilding_22)); }
	inline int32_t get_maxBuilding_22() const { return ___maxBuilding_22; }
	inline int32_t* get_address_of_maxBuilding_22() { return &___maxBuilding_22; }
	inline void set_maxBuilding_22(int32_t value)
	{
		___maxBuilding_22 = value;
	}

	inline static int32_t get_offset_of_topLeft_23() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___topLeft_23)); }
	inline OnlineMapsVector2i_t2180897250 * get_topLeft_23() const { return ___topLeft_23; }
	inline OnlineMapsVector2i_t2180897250 ** get_address_of_topLeft_23() { return &___topLeft_23; }
	inline void set_topLeft_23(OnlineMapsVector2i_t2180897250 * value)
	{
		___topLeft_23 = value;
		Il2CppCodeGenWriteBarrier(&___topLeft_23, value);
	}

	inline static int32_t get_offset_of_bottomRight_24() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___bottomRight_24)); }
	inline OnlineMapsVector2i_t2180897250 * get_bottomRight_24() const { return ___bottomRight_24; }
	inline OnlineMapsVector2i_t2180897250 ** get_address_of_bottomRight_24() { return &___bottomRight_24; }
	inline void set_bottomRight_24(OnlineMapsVector2i_t2180897250 * value)
	{
		___bottomRight_24 = value;
		Il2CppCodeGenWriteBarrier(&___bottomRight_24, value);
	}

	inline static int32_t get_offset_of_unusedBuildings_25() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___unusedBuildings_25)); }
	inline Dictionary_2_t2565506283 * get_unusedBuildings_25() const { return ___unusedBuildings_25; }
	inline Dictionary_2_t2565506283 ** get_address_of_unusedBuildings_25() { return &___unusedBuildings_25; }
	inline void set_unusedBuildings_25(Dictionary_2_t2565506283 * value)
	{
		___unusedBuildings_25 = value;
		Il2CppCodeGenWriteBarrier(&___unusedBuildings_25, value);
	}

	inline static int32_t get_offset_of_newBuildingsData_26() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___newBuildingsData_26)); }
	inline Queue_1_t1291521266 * get_newBuildingsData_26() const { return ___newBuildingsData_26; }
	inline Queue_1_t1291521266 ** get_address_of_newBuildingsData_26() { return &___newBuildingsData_26; }
	inline void set_newBuildingsData_26(Queue_1_t1291521266 * value)
	{
		___newBuildingsData_26 = value;
		Il2CppCodeGenWriteBarrier(&___newBuildingsData_26, value);
	}

	inline static int32_t get_offset_of_sendBuildingsReceived_27() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___sendBuildingsReceived_27)); }
	inline bool get_sendBuildingsReceived_27() const { return ___sendBuildingsReceived_27; }
	inline bool* get_address_of_sendBuildingsReceived_27() { return &___sendBuildingsReceived_27; }
	inline void set_sendBuildingsReceived_27(bool value)
	{
		___sendBuildingsReceived_27 = value;
	}

	inline static int32_t get_offset_of_requestData_28() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___requestData_28)); }
	inline String_t* get_requestData_28() const { return ___requestData_28; }
	inline String_t** get_address_of_requestData_28() { return &___requestData_28; }
	inline void set_requestData_28(String_t* value)
	{
		___requestData_28 = value;
		Il2CppCodeGenWriteBarrier(&___requestData_28, value);
	}

	inline static int32_t get_offset_of_lastRequestTime_29() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___lastRequestTime_29)); }
	inline float get_lastRequestTime_29() const { return ___lastRequestTime_29; }
	inline float* get_address_of_lastRequestTime_29() { return &___lastRequestTime_29; }
	inline void set_lastRequestTime_29(float value)
	{
		___lastRequestTime_29 = value;
	}

	inline static int32_t get_offset_of_osmRequest_30() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051, ___osmRequest_30)); }
	inline OnlineMapsOSMAPIQuery_t1899738209 * get_osmRequest_30() const { return ___osmRequest_30; }
	inline OnlineMapsOSMAPIQuery_t1899738209 ** get_address_of_osmRequest_30() { return &___osmRequest_30; }
	inline void set_osmRequest_30(OnlineMapsOSMAPIQuery_t1899738209 * value)
	{
		___osmRequest_30 = value;
		Il2CppCodeGenWriteBarrier(&___osmRequest_30, value);
	}
};

struct OnlineMapsBuildings_t3411229051_StaticFields
{
public:
	// UnityEngine.GameObject OnlineMapsBuildings::buildingContainer
	GameObject_t1756533147 * ___buildingContainer_11;
	// System.Single OnlineMapsBuildings::requestRate
	float ___requestRate_12;
	// OnlineMapsBuildings OnlineMapsBuildings::_instance
	OnlineMapsBuildings_t3411229051 * ____instance_13;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,OnlineMapsBuildingBase>,OnlineMapsBuildingBase> OnlineMapsBuildings::<>f__am$cache0
	Func_2_t1525753257 * ___U3CU3Ef__amU24cache0_31;

public:
	inline static int32_t get_offset_of_buildingContainer_11() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051_StaticFields, ___buildingContainer_11)); }
	inline GameObject_t1756533147 * get_buildingContainer_11() const { return ___buildingContainer_11; }
	inline GameObject_t1756533147 ** get_address_of_buildingContainer_11() { return &___buildingContainer_11; }
	inline void set_buildingContainer_11(GameObject_t1756533147 * value)
	{
		___buildingContainer_11 = value;
		Il2CppCodeGenWriteBarrier(&___buildingContainer_11, value);
	}

	inline static int32_t get_offset_of_requestRate_12() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051_StaticFields, ___requestRate_12)); }
	inline float get_requestRate_12() const { return ___requestRate_12; }
	inline float* get_address_of_requestRate_12() { return &___requestRate_12; }
	inline void set_requestRate_12(float value)
	{
		___requestRate_12 = value;
	}

	inline static int32_t get_offset_of__instance_13() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051_StaticFields, ____instance_13)); }
	inline OnlineMapsBuildings_t3411229051 * get__instance_13() const { return ____instance_13; }
	inline OnlineMapsBuildings_t3411229051 ** get_address_of__instance_13() { return &____instance_13; }
	inline void set__instance_13(OnlineMapsBuildings_t3411229051 * value)
	{
		____instance_13 = value;
		Il2CppCodeGenWriteBarrier(&____instance_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_31() { return static_cast<int32_t>(offsetof(OnlineMapsBuildings_t3411229051_StaticFields, ___U3CU3Ef__amU24cache0_31)); }
	inline Func_2_t1525753257 * get_U3CU3Ef__amU24cache0_31() const { return ___U3CU3Ef__amU24cache0_31; }
	inline Func_2_t1525753257 ** get_address_of_U3CU3Ef__amU24cache0_31() { return &___U3CU3Ef__amU24cache0_31; }
	inline void set_U3CU3Ef__amU24cache0_31(Func_2_t1525753257 * value)
	{
		___U3CU3Ef__amU24cache0_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
