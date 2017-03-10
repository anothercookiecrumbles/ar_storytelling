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

// OnlineMapsGooglePlacePhoto
struct OnlineMapsGooglePlacePhoto_t3871514534;
// System.String
struct String_t;
// OnlineMapsWWW
struct OnlineMapsWWW_t3247411593;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "AssemblyU2DCSharp_OnlineMapsWWW3247411593.h"

// System.Void OnlineMapsGooglePlacePhoto::.ctor(System.String,System.String,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>)
extern "C"  void OnlineMapsGooglePlacePhoto__ctor_m3715116977 (OnlineMapsGooglePlacePhoto_t3871514534 * __this, String_t* ___key0, String_t* ___photo_reference1, Nullable_1_t334943763  ___maxWidth2, Nullable_1_t334943763  ___maxHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlacePhoto::OnRequestComplete(OnlineMapsWWW)
extern "C"  void OnlineMapsGooglePlacePhoto_OnRequestComplete_m724335219 (OnlineMapsGooglePlacePhoto_t3871514534 * __this, OnlineMapsWWW_t3247411593 * ___www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlacePhoto OnlineMapsGooglePlacePhoto::Download(System.String,System.String,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>)
extern "C"  OnlineMapsGooglePlacePhoto_t3871514534 * OnlineMapsGooglePlacePhoto_Download_m322701478 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___photo_reference1, Nullable_1_t334943763  ___maxWidth2, Nullable_1_t334943763  ___maxHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlacePhoto::Destroy()
extern "C"  void OnlineMapsGooglePlacePhoto_Destroy_m1254951059 (OnlineMapsGooglePlacePhoto_t3871514534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
