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

// System.Func`4<System.Object,UnityEngine.Vector2,UnityEngine.Vector2,System.Object>
struct Func_4_t2395952919;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Func`4<System.Object,UnityEngine.Vector2,UnityEngine.Vector2,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_4__ctor_m4122157212_gshared (Func_4_t2395952919 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_4__ctor_m4122157212(__this, ___object0, ___method1, method) ((  void (*) (Func_4_t2395952919 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_4__ctor_m4122157212_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`4<System.Object,UnityEngine.Vector2,UnityEngine.Vector2,System.Object>::Invoke(T1,T2,T3)
extern "C"  Il2CppObject * Func_4_Invoke_m4065903584_gshared (Func_4_t2395952919 * __this, Il2CppObject * ___arg10, Vector2_t2243707579  ___arg21, Vector2_t2243707579  ___arg32, const MethodInfo* method);
#define Func_4_Invoke_m4065903584(__this, ___arg10, ___arg21, ___arg32, method) ((  Il2CppObject * (*) (Func_4_t2395952919 *, Il2CppObject *, Vector2_t2243707579 , Vector2_t2243707579 , const MethodInfo*))Func_4_Invoke_m4065903584_gshared)(__this, ___arg10, ___arg21, ___arg32, method)
// System.IAsyncResult System.Func`4<System.Object,UnityEngine.Vector2,UnityEngine.Vector2,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_4_BeginInvoke_m2172838627_gshared (Func_4_t2395952919 * __this, Il2CppObject * ___arg10, Vector2_t2243707579  ___arg21, Vector2_t2243707579  ___arg32, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method);
#define Func_4_BeginInvoke_m2172838627(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method) ((  Il2CppObject * (*) (Func_4_t2395952919 *, Il2CppObject *, Vector2_t2243707579 , Vector2_t2243707579 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_4_BeginInvoke_m2172838627_gshared)(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method)
// TResult System.Func`4<System.Object,UnityEngine.Vector2,UnityEngine.Vector2,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_4_EndInvoke_m1248477472_gshared (Func_4_t2395952919 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_4_EndInvoke_m1248477472(__this, ___result0, method) ((  Il2CppObject * (*) (Func_4_t2395952919 *, Il2CppObject *, const MethodInfo*))Func_4_EndInvoke_m1248477472_gshared)(__this, ___result0, method)
