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

// System.Func`3<UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>
struct Func_3_t246581160;
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

// System.Void System.Func`3<UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m2138977002_gshared (Func_3_t246581160 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_3__ctor_m2138977002(__this, ___object0, ___method1, method) ((  void (*) (Func_3_t246581160 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_3__ctor_m2138977002_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`3<UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>::Invoke(T1,T2)
extern "C"  Vector3_t2243707580  Func_3_Invoke_m619382651_gshared (Func_3_t246581160 * __this, Vector3_t2243707580  ___arg10, Vector3_t2243707580  ___arg21, const MethodInfo* method);
#define Func_3_Invoke_m619382651(__this, ___arg10, ___arg21, method) ((  Vector3_t2243707580  (*) (Func_3_t246581160 *, Vector3_t2243707580 , Vector3_t2243707580 , const MethodInfo*))Func_3_Invoke_m619382651_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Func`3<UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_3_BeginInvoke_m3999450714_gshared (Func_3_t246581160 * __this, Vector3_t2243707580  ___arg10, Vector3_t2243707580  ___arg21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Func_3_BeginInvoke_m3999450714(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Func_3_t246581160 *, Vector3_t2243707580 , Vector3_t2243707580 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_3_BeginInvoke_m3999450714_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// TResult System.Func`3<UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C"  Vector3_t2243707580  Func_3_EndInvoke_m1961744344_gshared (Func_3_t246581160 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_3_EndInvoke_m1961744344(__this, ___result0, method) ((  Vector3_t2243707580  (*) (Func_3_t246581160 *, Il2CppObject *, const MethodInfo*))Func_3_EndInvoke_m1961744344_gshared)(__this, ___result0, method)
