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

// OnlineMapsLocationServiceBase/OnGetLocationDelegate
struct OnGetLocationDelegate_t812030577;
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

// System.Void OnlineMapsLocationServiceBase/OnGetLocationDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnGetLocationDelegate__ctor_m678223642 (OnGetLocationDelegate_t812030577 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase/OnGetLocationDelegate::Invoke(System.Single&,System.Single&)
extern "C"  void OnGetLocationDelegate_Invoke_m1671548320 (OnGetLocationDelegate_t812030577 * __this, float* ___longitude0, float* ___latitude1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult OnlineMapsLocationServiceBase/OnGetLocationDelegate::BeginInvoke(System.Single&,System.Single&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnGetLocationDelegate_BeginInvoke_m1309049707 (OnGetLocationDelegate_t812030577 * __this, float* ___longitude0, float* ___latitude1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsLocationServiceBase/OnGetLocationDelegate::EndInvoke(System.Single&,System.Single&,System.IAsyncResult)
extern "C"  void OnGetLocationDelegate_EndInvoke_m381830110 (OnGetLocationDelegate_t812030577 * __this, float* ___longitude0, float* ___latitude1, Il2CppObject * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
