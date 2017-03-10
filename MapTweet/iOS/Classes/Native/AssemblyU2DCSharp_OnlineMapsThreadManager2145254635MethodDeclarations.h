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

// OnlineMapsThreadManager
struct OnlineMapsThreadManager_t2145254635;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"

// System.Void OnlineMapsThreadManager::.ctor(System.Action)
extern "C"  void OnlineMapsThreadManager__ctor_m3453082103 (OnlineMapsThreadManager_t2145254635 * __this, Action_t3226471752 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsThreadManager::AddThreadAction(System.Action)
extern "C"  void OnlineMapsThreadManager_AddThreadAction_m2082950498 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsThreadManager::Add(System.Action)
extern "C"  void OnlineMapsThreadManager_Add_m1165711600 (OnlineMapsThreadManager_t2145254635 * __this, Action_t3226471752 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsThreadManager::Dispose()
extern "C"  void OnlineMapsThreadManager_Dispose_m3351265965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsThreadManager::StartNextAction()
extern "C"  void OnlineMapsThreadManager_StartNextAction_m99742803 (OnlineMapsThreadManager_t2145254635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
