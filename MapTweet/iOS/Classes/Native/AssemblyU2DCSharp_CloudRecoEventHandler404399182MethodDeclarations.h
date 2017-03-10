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

// CloudRecoEventHandler
struct CloudRecoEventHandler_t404399182;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_InitStat4409649.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Updat1473252352.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Targe1958726506.h"
#include "mscorlib_System_String2029220233.h"

// System.Void CloudRecoEventHandler::.ctor()
extern "C"  void CloudRecoEventHandler__ctor_m3879971889 (CloudRecoEventHandler_t404399182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::Start()
extern "C"  void CloudRecoEventHandler_Start_m2082864233 (CloudRecoEventHandler_t404399182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::OnInitialized()
extern "C"  void CloudRecoEventHandler_OnInitialized_m2703231136 (CloudRecoEventHandler_t404399182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::OnInitError(Vuforia.TargetFinder/InitState)
extern "C"  void CloudRecoEventHandler_OnInitError_m1449609749 (CloudRecoEventHandler_t404399182 * __this, int32_t ___initError0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::OnUpdateError(Vuforia.TargetFinder/UpdateState)
extern "C"  void CloudRecoEventHandler_OnUpdateError_m2350942173 (CloudRecoEventHandler_t404399182 * __this, int32_t ___updateError0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::OnStateChanged(System.Boolean)
extern "C"  void CloudRecoEventHandler_OnStateChanged_m339865190 (CloudRecoEventHandler_t404399182 * __this, bool ___scanning0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::OnNewSearchResult(Vuforia.TargetFinder/TargetSearchResult)
extern "C"  void CloudRecoEventHandler_OnNewSearchResult_m3228078767 (CloudRecoEventHandler_t404399182 * __this, TargetSearchResult_t1958726506  ___targetSearchResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::CloseErrorDialog()
extern "C"  void CloudRecoEventHandler_CloseErrorDialog_m2773445607 (CloudRecoEventHandler_t404399182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::ShowScanLine(System.Boolean)
extern "C"  void CloudRecoEventHandler_ShowScanLine_m4283924362 (CloudRecoEventHandler_t404399182 * __this, bool ___show0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::ShowError(System.String,System.String)
extern "C"  void CloudRecoEventHandler_ShowError_m3307080002 (CloudRecoEventHandler_t404399182 * __this, String_t* ___title0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::RestartApplication()
extern "C"  void CloudRecoEventHandler_RestartApplication_m1409927294 (CloudRecoEventHandler_t404399182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
