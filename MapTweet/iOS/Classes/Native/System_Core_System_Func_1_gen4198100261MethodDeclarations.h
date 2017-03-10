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

// System.Func`1<UnityEngine.Vector2>
struct Func_1_t4198100261;
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

// System.Void System.Func`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m2429890413_gshared (Func_1_t4198100261 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_1__ctor_m2429890413(__this, ___object0, ___method1, method) ((  void (*) (Func_1_t4198100261 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_1__ctor_m2429890413_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`1<UnityEngine.Vector2>::Invoke()
extern "C"  Vector2_t2243707579  Func_1_Invoke_m87231763_gshared (Func_1_t4198100261 * __this, const MethodInfo* method);
#define Func_1_Invoke_m87231763(__this, method) ((  Vector2_t2243707579  (*) (Func_1_t4198100261 *, const MethodInfo*))Func_1_Invoke_m87231763_gshared)(__this, method)
// System.IAsyncResult System.Func`1<UnityEngine.Vector2>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_1_BeginInvoke_m4293296736_gshared (Func_1_t4198100261 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method);
#define Func_1_BeginInvoke_m4293296736(__this, ___callback0, ___object1, method) ((  Il2CppObject * (*) (Func_1_t4198100261 *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_1_BeginInvoke_m4293296736_gshared)(__this, ___callback0, ___object1, method)
// TResult System.Func`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  Vector2_t2243707579  Func_1_EndInvoke_m731034517_gshared (Func_1_t4198100261 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_1_EndInvoke_m731034517(__this, ___result0, method) ((  Vector2_t2243707579  (*) (Func_1_t4198100261 *, Il2CppObject *, const MethodInfo*))Func_1_EndInvoke_m731034517_gshared)(__this, ___result0, method)
