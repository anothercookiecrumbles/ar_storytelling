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

// System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Func_5_t1039268469;
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

// System.Void System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_5__ctor_m2146809111_gshared (Func_5_t1039268469 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_5__ctor_m2146809111(__this, ___object0, ___method1, method) ((  void (*) (Func_5_t1039268469 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_5__ctor_m2146809111_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
extern "C"  Il2CppObject * Func_5_Invoke_m1871873149_gshared (Func_5_t1039268469 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, Il2CppObject * ___arg43, const MethodInfo* method);
#define Func_5_Invoke_m1871873149(__this, ___arg10, ___arg21, ___arg32, ___arg43, method) ((  Il2CppObject * (*) (Func_5_t1039268469 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Func_5_Invoke_m1871873149_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, method)
// System.IAsyncResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_5_BeginInvoke_m324825616_gshared (Func_5_t1039268469 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, Il2CppObject * ___arg43, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method);
#define Func_5_BeginInvoke_m324825616(__this, ___arg10, ___arg21, ___arg32, ___arg43, ___callback4, ___object5, method) ((  Il2CppObject * (*) (Func_5_t1039268469 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_5_BeginInvoke_m324825616_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, ___callback4, ___object5, method)
// TResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_5_EndInvoke_m3406628119_gshared (Func_5_t1039268469 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_5_EndInvoke_m3406628119(__this, ___result0, method) ((  Il2CppObject * (*) (Func_5_t1039268469 *, Il2CppObject *, const MethodInfo*))Func_5_EndInvoke_m3406628119_gshared)(__this, ___result0, method)
