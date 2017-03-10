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

// OnlineMapsGooglePlaceDetails
struct OnlineMapsGooglePlaceDetails_t1418327016;
// System.String
struct String_t;
// OnlineMapsGooglePlaceDetailsResult
struct OnlineMapsGooglePlaceDetailsResult_t1031674087;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OnlineMapsGooglePlaceDetails::.ctor()
extern "C"  void OnlineMapsGooglePlaceDetails__ctor_m3554679691 (OnlineMapsGooglePlaceDetails_t1418327016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlaceDetails::.ctor(System.String,System.String,System.String,System.String)
extern "C"  void OnlineMapsGooglePlaceDetails__ctor_m2859003099 (OnlineMapsGooglePlaceDetails_t1418327016 * __this, String_t* ___key0, String_t* ___place_id1, String_t* ___reference2, String_t* ___language3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlaceDetails OnlineMapsGooglePlaceDetails::FindByPlaceID(System.String,System.String,System.String)
extern "C"  OnlineMapsGooglePlaceDetails_t1418327016 * OnlineMapsGooglePlaceDetails_FindByPlaceID_m3235128200 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___place_id1, String_t* ___language2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlaceDetails OnlineMapsGooglePlaceDetails::FindByReference(System.String,System.String,System.String)
extern "C"  OnlineMapsGooglePlaceDetails_t1418327016 * OnlineMapsGooglePlaceDetails_FindByReference_m2841894583 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___reference1, String_t* ___language2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlaceDetailsResult OnlineMapsGooglePlaceDetails::GetResult(System.String)
extern "C"  OnlineMapsGooglePlaceDetailsResult_t1031674087 * OnlineMapsGooglePlaceDetails_GetResult_m2304531876 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
