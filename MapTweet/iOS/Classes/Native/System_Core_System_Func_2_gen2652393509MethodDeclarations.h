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

// System.Func`2<UnityEngine.Touch,UnityEngine.Vector2>
struct Func_2_t2652393509;
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
#include "UnityEngine_UnityEngine_Touch407273883.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Func`2<UnityEngine.Touch,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2957553432_gshared (Func_2_t2652393509 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m2957553432(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t2652393509 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2957553432_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<UnityEngine.Touch,UnityEngine.Vector2>::Invoke(T)
extern "C"  Vector2_t2243707579  Func_2_Invoke_m1064582496_gshared (Func_2_t2652393509 * __this, Touch_t407273883  ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m1064582496(__this, ___arg10, method) ((  Vector2_t2243707579  (*) (Func_2_t2652393509 *, Touch_t407273883 , const MethodInfo*))Func_2_Invoke_m1064582496_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<UnityEngine.Touch,UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m4107591283_gshared (Func_2_t2652393509 * __this, Touch_t407273883  ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m4107591283(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t2652393509 *, Touch_t407273883 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m4107591283_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<UnityEngine.Touch,UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  Vector2_t2243707579  Func_2_EndInvoke_m1029117922_gshared (Func_2_t2652393509 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m1029117922(__this, ___result0, method) ((  Vector2_t2243707579  (*) (Func_2_t2652393509 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m1029117922_gshared)(__this, ___result0, method)
