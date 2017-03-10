#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// OnlineMapsBuildings
struct OnlineMapsBuildings_t3411229051;
// OnlineMaps
struct OnlineMaps_t1893290312;
// System.Collections.Generic.IEnumerable`1<OnlineMapsBuildingBase>
struct IEnumerable_1_t942854066;
// OnlineMapsBuildingsNodeData
struct OnlineMapsBuildingsNodeData_t1471864431;
// System.String
struct String_t;
// OnlineMapsBuildingBase
struct OnlineMapsBuildingBase_t650727021;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsBuildingsNodeData1471864431.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_322851505.h"

// System.Void OnlineMapsBuildings::.ctor()
extern "C"  void OnlineMapsBuildings__ctor_m4069128024 (OnlineMapsBuildings_t3411229051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMaps OnlineMapsBuildings::get_map()
extern "C"  OnlineMaps_t1893290312 * OnlineMapsBuildings_get_map_m1857535694 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBuildings OnlineMapsBuildings::get_instance()
extern "C"  OnlineMapsBuildings_t3411229051 * OnlineMapsBuildings_get_instance_m2560643410 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<OnlineMapsBuildingBase> OnlineMapsBuildings::get_activeBuildings()
extern "C"  Il2CppObject* OnlineMapsBuildings_get_activeBuildings_m1054515337 (OnlineMapsBuildings_t3411229051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::CreateBuilding(OnlineMapsBuildingsNodeData)
extern "C"  void OnlineMapsBuildings_CreateBuilding_m982766149 (OnlineMapsBuildings_t3411229051 * __this, OnlineMapsBuildingsNodeData_t1471864431 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::GenerateBuildings()
extern "C"  void OnlineMapsBuildings_GenerateBuildings_m3240860212 (OnlineMapsBuildings_t3411229051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::LoadNewBuildings()
extern "C"  void OnlineMapsBuildings_LoadNewBuildings_m3757033237 (OnlineMapsBuildings_t3411229051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::OnBuildingRequestComplete(System.String)
extern "C"  void OnlineMapsBuildings_OnBuildingRequestComplete_m1617308439 (OnlineMapsBuildings_t3411229051 * __this, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::OnEnable()
extern "C"  void OnlineMapsBuildings_OnEnable_m1220414604 (OnlineMapsBuildings_t3411229051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::SendRequest()
extern "C"  void OnlineMapsBuildings_SendRequest_m3265141259 (OnlineMapsBuildings_t3411229051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::Start()
extern "C"  void OnlineMapsBuildings_Start_m3276880812 (OnlineMapsBuildings_t3411229051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::RemoveAllBuildings()
extern "C"  void OnlineMapsBuildings_RemoveAllBuildings_m3673068346 (OnlineMapsBuildings_t3411229051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::Update()
extern "C"  void OnlineMapsBuildings_Update_m1509680611 (OnlineMapsBuildings_t3411229051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::UpdateBuildings()
extern "C"  void OnlineMapsBuildings_UpdateBuildings_m1584545554 (OnlineMapsBuildings_t3411229051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::UpdateBuildingsPosition()
extern "C"  void OnlineMapsBuildings_UpdateBuildingsPosition_m2594667407 (OnlineMapsBuildings_t3411229051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::UpdateBuildingsScale()
extern "C"  void OnlineMapsBuildings_UpdateBuildingsScale_m3596022698 (OnlineMapsBuildings_t3411229051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildings::.cctor()
extern "C"  void OnlineMapsBuildings__cctor_m948978713 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBuildingBase OnlineMapsBuildings::<get_activeBuildings>m__0(System.Collections.Generic.KeyValuePair`2<System.String,OnlineMapsBuildingBase>)
extern "C"  OnlineMapsBuildingBase_t650727021 * OnlineMapsBuildings_U3Cget_activeBuildingsU3Em__0_m1987647757 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t322851505  ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
