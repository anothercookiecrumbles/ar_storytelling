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

// OnlineMapsLocationServiceBase
struct OnlineMapsLocationServiceBase_t653486915;
// OnlineMapsMarkerBase
struct OnlineMapsMarkerBase_t3900955221;
// OnlineMapsWWW
struct OnlineMapsWWW_t3247411593;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsMarkerBase3900955221.h"
#include "AssemblyU2DCSharp_OnlineMapsWWW3247411593.h"

// System.Void OnlineMapsLocationServiceBase::.ctor()
extern "C"  void OnlineMapsLocationServiceBase__ctor_m1311092466 (OnlineMapsLocationServiceBase_t653486915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsLocationServiceBase OnlineMapsLocationServiceBase::get_baseInstance()
extern "C"  OnlineMapsLocationServiceBase_t653486915 * OnlineMapsLocationServiceBase_get_baseInstance_m2851108577 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarkerBase OnlineMapsLocationServiceBase::get_marker()
extern "C"  OnlineMapsMarkerBase_t3900955221 * OnlineMapsLocationServiceBase_get_marker_m3760657685 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::set_marker(OnlineMapsMarkerBase)
extern "C"  void OnlineMapsLocationServiceBase_set_marker_m509594974 (Il2CppObject * __this /* static, unused */, OnlineMapsMarkerBase_t3900955221 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsLocationServiceBase::get_allowUpdatePosition()
extern "C"  bool OnlineMapsLocationServiceBase_get_allowUpdatePosition_m384583364 (OnlineMapsLocationServiceBase_t653486915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::set_allowUpdatePosition(System.Boolean)
extern "C"  void OnlineMapsLocationServiceBase_set_allowUpdatePosition_m1742695657 (OnlineMapsLocationServiceBase_t653486915 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsLocationServiceBase::get_speed()
extern "C"  float OnlineMapsLocationServiceBase_get_speed_m1436943348 (OnlineMapsLocationServiceBase_t653486915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::OnEnable()
extern "C"  void OnlineMapsLocationServiceBase_OnEnable_m110854046 (OnlineMapsLocationServiceBase_t653486915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::OnChangePosition()
extern "C"  void OnlineMapsLocationServiceBase_OnChangePosition_m2888426490 (OnlineMapsLocationServiceBase_t653486915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::Start()
extern "C"  void OnlineMapsLocationServiceBase_Start_m3252906334 (OnlineMapsLocationServiceBase_t653486915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::OnFindLocationByIPComplete(OnlineMapsWWW)
extern "C"  void OnlineMapsLocationServiceBase_OnFindLocationByIPComplete_m2710059591 (OnlineMapsLocationServiceBase_t653486915 * __this, OnlineMapsWWW_t3247411593 * ___www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::Update()
extern "C"  void OnlineMapsLocationServiceBase_Update_m1730924903 (OnlineMapsLocationServiceBase_t653486915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::UpdateCompassFromEmulator(System.Boolean&)
extern "C"  void OnlineMapsLocationServiceBase_UpdateCompassFromEmulator_m135033097 (OnlineMapsLocationServiceBase_t653486915 * __this, bool* ___compassChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::UpdateCompassFromInput(System.Boolean&)
extern "C"  void OnlineMapsLocationServiceBase_UpdateCompassFromInput_m397911276 (OnlineMapsLocationServiceBase_t653486915 * __this, bool* ___compassChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::UpdateMarker()
extern "C"  void OnlineMapsLocationServiceBase_UpdateMarker_m518737569 (OnlineMapsLocationServiceBase_t653486915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::UpdatePosition()
extern "C"  void OnlineMapsLocationServiceBase_UpdatePosition_m4091984622 (OnlineMapsLocationServiceBase_t653486915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::UpdatePositionFromEmulator(System.Boolean&)
extern "C"  void OnlineMapsLocationServiceBase_UpdatePositionFromEmulator_m2330025840 (OnlineMapsLocationServiceBase_t653486915 * __this, bool* ___positionChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase::UpdatePositionFromInput(System.Boolean&)
extern "C"  void OnlineMapsLocationServiceBase_UpdatePositionFromInput_m1812240083 (OnlineMapsLocationServiceBase_t653486915 * __this, bool* ___positionChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
