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

// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m3489100454 (Collider_t3497673348 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C"  Rigidbody_t4233889191 * Collider_get_attachedRigidbody_m3279305420 (Collider_t3497673348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
extern "C"  void Collider_set_isTrigger_m1298573031 (Collider_t3497673348 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C"  Bounds_t3033363703  Collider_get_bounds_m3534458178 (Collider_t3497673348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Collider_INTERNAL_get_bounds_m4035290675 (Collider_t3497673348 * __this, Bounds_t3033363703 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_Internal_Raycast_m1155465004 (Il2CppObject * __this /* static, unused */, Collider_t3497673348 * ___col0, Ray_t2469606224  ___ray1, RaycastHit_t87180320 * ___hitInfo2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_INTERNAL_CALL_Internal_Raycast_m1149196481 (Il2CppObject * __this /* static, unused */, Collider_t3497673348 * ___col0, Ray_t2469606224 * ___ray1, RaycastHit_t87180320 * ___hitInfo2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_Raycast_m765524243 (Collider_t3497673348 * __this, Ray_t2469606224  ___ray0, RaycastHit_t87180320 * ___hitInfo1, float ___maxDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
