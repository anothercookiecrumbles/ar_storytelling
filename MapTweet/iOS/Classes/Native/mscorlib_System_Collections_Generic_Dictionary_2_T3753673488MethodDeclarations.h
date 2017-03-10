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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>
struct Transform_1_t3753673488;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4119223700_gshared (Transform_1_t3753673488 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4119223700(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3753673488 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4119223700_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m588307748_gshared (Transform_1_t3753673488 * __this, Il2CppObject * ___key0, Vector3_t2243707580  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m588307748(__this, ___key0, ___value1, method) ((  Il2CppObject * (*) (Transform_1_t3753673488 *, Il2CppObject *, Vector3_t2243707580 , const MethodInfo*))Transform_1_Invoke_m588307748_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1402666263_gshared (Transform_1_t3753673488 * __this, Il2CppObject * ___key0, Vector3_t2243707580  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1402666263(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3753673488 *, Il2CppObject *, Vector3_t2243707580 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1402666263_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m1239076774_gshared (Transform_1_t3753673488 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1239076774(__this, ___result0, method) ((  Il2CppObject * (*) (Transform_1_t3753673488 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1239076774_gshared)(__this, ___result0, method)
