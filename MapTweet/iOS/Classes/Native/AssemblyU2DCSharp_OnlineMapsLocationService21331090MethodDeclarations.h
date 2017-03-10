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

// OnlineMapsLocationService
struct OnlineMapsLocationService_t21331090;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"

// System.Void OnlineMapsLocationService::.ctor()
extern "C"  void OnlineMapsLocationService__ctor_m3410741099 (OnlineMapsLocationService_t21331090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsXML OnlineMapsLocationService::Save(OnlineMapsXML)
extern "C"  OnlineMapsXML_t3341520387 * OnlineMapsLocationService_Save_m1502813901 (OnlineMapsLocationService_t21331090 * __this, OnlineMapsXML_t3341520387 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationService::UpdateSpeed()
extern "C"  void OnlineMapsLocationService_UpdateSpeed_m121960097 (OnlineMapsLocationService_t21331090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationService::StartLocationService(System.Nullable`1<System.Single>,System.Nullable`1<System.Single>)
extern "C"  void OnlineMapsLocationService_StartLocationService_m1292798535 (OnlineMapsLocationService_t21331090 * __this, Nullable_1_t339576247  ___desiredAccuracyInMeters0, Nullable_1_t339576247  ___updateDistanceInMeters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsLocationService::TryStartLocationService()
extern "C"  bool OnlineMapsLocationService_TryStartLocationService_m564198364 (OnlineMapsLocationService_t21331090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsLocationService::IsLocationServiceRunning()
extern "C"  bool OnlineMapsLocationService_IsLocationServiceRunning_m1823776590 (OnlineMapsLocationService_t21331090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationService::GetLocation(System.Single&,System.Single&)
extern "C"  void OnlineMapsLocationService_GetLocation_m2874731530 (OnlineMapsLocationService_t21331090 * __this, float* ___longitude0, float* ___latitude1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationService::StopLocationService()
extern "C"  void OnlineMapsLocationService_StopLocationService_m3353678355 (OnlineMapsLocationService_t21331090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
