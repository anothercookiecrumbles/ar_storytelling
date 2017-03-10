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

// System.Func`4<System.Double,System.Double,System.Object,System.Object>
struct Func_4_t1388282975;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Func`4<System.Double,System.Double,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_4__ctor_m2164421468_gshared (Func_4_t1388282975 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_4__ctor_m2164421468(__this, ___object0, ___method1, method) ((  void (*) (Func_4_t1388282975 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_4__ctor_m2164421468_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`4<System.Double,System.Double,System.Object,System.Object>::Invoke(T1,T2,T3)
extern "C"  Il2CppObject * Func_4_Invoke_m2573311584_gshared (Func_4_t1388282975 * __this, double ___arg10, double ___arg21, Il2CppObject * ___arg32, const MethodInfo* method);
#define Func_4_Invoke_m2573311584(__this, ___arg10, ___arg21, ___arg32, method) ((  Il2CppObject * (*) (Func_4_t1388282975 *, double, double, Il2CppObject *, const MethodInfo*))Func_4_Invoke_m2573311584_gshared)(__this, ___arg10, ___arg21, ___arg32, method)
// System.IAsyncResult System.Func`4<System.Double,System.Double,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_4_BeginInvoke_m3704364643_gshared (Func_4_t1388282975 * __this, double ___arg10, double ___arg21, Il2CppObject * ___arg32, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method);
#define Func_4_BeginInvoke_m3704364643(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method) ((  Il2CppObject * (*) (Func_4_t1388282975 *, double, double, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_4_BeginInvoke_m3704364643_gshared)(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method)
// TResult System.Func`4<System.Double,System.Double,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_4_EndInvoke_m2543384736_gshared (Func_4_t1388282975 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_4_EndInvoke_m2543384736(__this, ___result0, method) ((  Il2CppObject * (*) (Func_4_t1388282975 *, Il2CppObject *, const MethodInfo*))Func_4_EndInvoke_m2543384736_gshared)(__this, ___result0, method)
