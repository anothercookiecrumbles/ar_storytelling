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

// VuMarkHandler
struct VuMarkHandler_t583794080;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t222984753;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"

// System.Void VuMarkHandler::.ctor()
extern "C"  void VuMarkHandler__ctor_m296874417 (VuMarkHandler_t583794080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VuMarkHandler::Start()
extern "C"  void VuMarkHandler_Start_m2704101265 (VuMarkHandler_t583794080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VuMarkHandler::Update()
extern "C"  void VuMarkHandler_Update_m498336142 (VuMarkHandler_t583794080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VuMarkHandler::OnDestroy()
extern "C"  void VuMarkHandler_OnDestroy_m3979816830 (VuMarkHandler_t583794080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VuMarkHandler::OnVuMarkDetected(Vuforia.VuMarkTarget)
extern "C"  void VuMarkHandler_OnVuMarkDetected_m1182417521 (VuMarkHandler_t583794080 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VuMarkHandler::OnVuMarkLost(Vuforia.VuMarkTarget)
extern "C"  void VuMarkHandler_OnVuMarkLost_m2126394563 (VuMarkHandler_t583794080 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VuMarkHandler::UpdateClosestTarget()
extern "C"  void VuMarkHandler_UpdateClosestTarget_m578840658 (VuMarkHandler_t583794080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VuMarkHandler::ShowPanelAfter(System.Single,System.String,System.String,UnityEngine.Sprite)
extern "C"  Il2CppObject * VuMarkHandler_ShowPanelAfter_m2879824669 (VuMarkHandler_t583794080 * __this, float ___seconds0, String_t* ___vuMarkTitle1, String_t* ___vuMarkId2, Sprite_t309593783 * ___vuMarkImage3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String VuMarkHandler::GetVuMarkDataType(Vuforia.VuMarkTarget)
extern "C"  String_t* VuMarkHandler_GetVuMarkDataType_m3559465785 (VuMarkHandler_t583794080 * __this, Il2CppObject * ___vumark0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String VuMarkHandler::GetVuMarkString(Vuforia.VuMarkTarget)
extern "C"  String_t* VuMarkHandler_GetVuMarkString_m589384032 (VuMarkHandler_t583794080 * __this, Il2CppObject * ___vumark0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite VuMarkHandler::GetVuMarkImage(Vuforia.VuMarkTarget)
extern "C"  Sprite_t309593783 * VuMarkHandler_GetVuMarkImage_m2423536162 (VuMarkHandler_t583794080 * __this, Il2CppObject * ___vumark0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
