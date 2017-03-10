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

// STEventHandler
struct STEventHandler_t125466593;
// Vuforia.Surface
struct Surface_t2221641095;
// Vuforia.Prop
struct Prop_t444071959;

#include "codegen/il2cpp-codegen.h"

// System.Void STEventHandler::.ctor()
extern "C"  void STEventHandler__ctor_m1927401290 (STEventHandler_t125466593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void STEventHandler::Start()
extern "C"  void STEventHandler_Start_m898471682 (STEventHandler_t125466593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void STEventHandler::OnDestroy()
extern "C"  void STEventHandler_OnDestroy_m497685743 (STEventHandler_t125466593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void STEventHandler::OnSurfaceCreated(Vuforia.Surface)
extern "C"  void STEventHandler_OnSurfaceCreated_m3595442587 (STEventHandler_t125466593 * __this, Il2CppObject * ___surface0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void STEventHandler::OnPropCreated(Vuforia.Prop)
extern "C"  void STEventHandler_OnPropCreated_m80035663 (STEventHandler_t125466593 * __this, Il2CppObject * ___prop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
