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

// OnlineMapsBuildingBase
struct OnlineMapsBuildingBase_t650727021;
// OnlineMapsOSMWay
struct OnlineMapsOSMWay_t3319895272;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// OnlineMapsOSMBase
struct OnlineMapsOSMBase_t540795536;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<OnlineMapsOSMNode>
struct List_1_t2753111535;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsOSMWay3319895272.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsOSMBase540795536.h"

// System.Void OnlineMapsBuildingBase::.ctor()
extern "C"  void OnlineMapsBuildingBase__ctor_m2959756464 (OnlineMapsBuildingBase_t650727021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsBuildingBase::CheckIgnoredBuildings(OnlineMapsOSMWay)
extern "C"  bool OnlineMapsBuildingBase_CheckIgnoredBuildings_m3894933377 (Il2CppObject * __this /* static, unused */, OnlineMapsOSMWay_t3319895272 * ___way0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject OnlineMapsBuildingBase::CreateGameObject(System.String)
extern "C"  GameObject_t1756533147 * OnlineMapsBuildingBase_CreateGameObject_m1852612288 (Il2CppObject * __this /* static, unused */, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBase::Dispose()
extern "C"  void OnlineMapsBuildingBase_Dispose_m1487881223 (OnlineMapsBuildingBase_t650727021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBase::LoadMeta(OnlineMapsOSMBase)
extern "C"  void OnlineMapsBuildingBase_LoadMeta_m146248235 (OnlineMapsBuildingBase_t650727021 * __this, OnlineMapsOSMBase_t540795536 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsBuildingBase::GetHeightFromString(System.String,System.Single&)
extern "C"  bool OnlineMapsBuildingBase_GetHeightFromString_m3622153343 (Il2CppObject * __this /* static, unused */, String_t* ___str0, float* ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> OnlineMapsBuildingBase::GetLocalPoints(System.Collections.Generic.List`1<OnlineMapsOSMNode>)
extern "C"  List_1_t1612828712 * OnlineMapsBuildingBase_GetLocalPoints_m633236175 (Il2CppObject * __this /* static, unused */, List_1_t2753111535 * ___nodes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsBuildingBase::HitTest()
extern "C"  bool OnlineMapsBuildingBase_HitTest_m1787420587 (OnlineMapsBuildingBase_t650727021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBase::OnBasePress()
extern "C"  void OnlineMapsBuildingBase_OnBasePress_m1388160455 (OnlineMapsBuildingBase_t650727021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBase::OnBaseRelease()
extern "C"  void OnlineMapsBuildingBase_OnBaseRelease_m2199100749 (OnlineMapsBuildingBase_t650727021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBase::OnMouseDown()
extern "C"  void OnlineMapsBuildingBase_OnMouseDown_m2661258624 (OnlineMapsBuildingBase_t650727021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBase::OnMouseUp()
extern "C"  void OnlineMapsBuildingBase_OnMouseUp_m116498201 (OnlineMapsBuildingBase_t650727021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsBuildingBase::TryGetFloat(System.String,System.Int32,System.Int32,System.Single&)
extern "C"  bool OnlineMapsBuildingBase_TryGetFloat_m2429637740 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___index1, int32_t ___count2, float* ___result3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBase::Update()
extern "C"  void OnlineMapsBuildingBase_Update_m702485721 (OnlineMapsBuildingBase_t650727021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
