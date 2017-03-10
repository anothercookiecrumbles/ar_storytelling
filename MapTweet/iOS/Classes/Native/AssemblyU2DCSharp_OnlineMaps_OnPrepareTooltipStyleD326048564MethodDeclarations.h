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

// OnlineMaps/OnPrepareTooltipStyleDelegate
struct OnPrepareTooltipStyleDelegate_t326048564;
// System.Object
struct Il2CppObject;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void OnlineMaps/OnPrepareTooltipStyleDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnPrepareTooltipStyleDelegate__ctor_m2425157065 (OnPrepareTooltipStyleDelegate_t326048564 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps/OnPrepareTooltipStyleDelegate::Invoke(UnityEngine.GUIStyle&)
extern "C"  void OnPrepareTooltipStyleDelegate_Invoke_m546445130 (OnPrepareTooltipStyleDelegate_t326048564 * __this, GUIStyle_t1799908754 ** ___style0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult OnlineMaps/OnPrepareTooltipStyleDelegate::BeginInvoke(UnityEngine.GUIStyle&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnPrepareTooltipStyleDelegate_BeginInvoke_m791834979 (OnPrepareTooltipStyleDelegate_t326048564 * __this, GUIStyle_t1799908754 ** ___style0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMaps/OnPrepareTooltipStyleDelegate::EndInvoke(UnityEngine.GUIStyle&,System.IAsyncResult)
extern "C"  void OnPrepareTooltipStyleDelegate_EndInvoke_m1485459298 (OnPrepareTooltipStyleDelegate_t326048564 * __this, GUIStyle_t1799908754 ** ___style0, Il2CppObject * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
