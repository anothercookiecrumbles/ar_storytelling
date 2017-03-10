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

// OnlineMapsGPXObject
struct OnlineMapsGPXObject_t3539854610;
// System.String
struct String_t;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OnlineMapsGPXObject::.ctor()
extern "C"  void OnlineMapsGPXObject__ctor_m4289424505 (OnlineMapsGPXObject_t3539854610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGPXObject::.ctor(System.String,System.String)
extern "C"  void OnlineMapsGPXObject__ctor_m3370838969 (OnlineMapsGPXObject_t3539854610 * __this, String_t* ___creator0, String_t* ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGPXObject OnlineMapsGPXObject::Load(System.String)
extern "C"  OnlineMapsGPXObject_t3539854610 * OnlineMapsGPXObject_Load_m1249042842 (Il2CppObject * __this /* static, unused */, String_t* ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsXML OnlineMapsGPXObject::ToXML()
extern "C"  OnlineMapsXML_t3341520387 * OnlineMapsGPXObject_ToXML_m3231120205 (OnlineMapsGPXObject_t3539854610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsGPXObject::ToString()
extern "C"  String_t* OnlineMapsGPXObject_ToString_m1295851862 (OnlineMapsGPXObject_t3539854610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
