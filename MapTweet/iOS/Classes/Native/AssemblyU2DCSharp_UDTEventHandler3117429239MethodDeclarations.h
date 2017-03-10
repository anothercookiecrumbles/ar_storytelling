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

// UDTEventHandler
struct UDTEventHandler_t3117429239;
// Vuforia.TrackableSource
struct TrackableSource_t2832298792;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder2061101710.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableSource2832298792.h"

// System.Void UDTEventHandler::.ctor()
extern "C"  void UDTEventHandler__ctor_m2746739334 (UDTEventHandler_t3117429239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UDTEventHandler::get_LastTargetIndex()
extern "C"  int32_t UDTEventHandler_get_LastTargetIndex_m730969020 (UDTEventHandler_t3117429239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::Start()
extern "C"  void UDTEventHandler_Start_m1884959570 (UDTEventHandler_t3117429239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::OnInitialized()
extern "C"  void UDTEventHandler_OnInitialized_m478469647 (UDTEventHandler_t3117429239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::OnFrameQualityChanged(Vuforia.ImageTargetBuilder/FrameQuality)
extern "C"  void UDTEventHandler_OnFrameQualityChanged_m1046057831 (UDTEventHandler_t3117429239 * __this, int32_t ___frameQuality0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::OnNewTrackableSource(Vuforia.TrackableSource)
extern "C"  void UDTEventHandler_OnNewTrackableSource_m1598888161 (UDTEventHandler_t3117429239 * __this, TrackableSource_t2832298792 * ___trackableSource0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::BuildNewTarget()
extern "C"  void UDTEventHandler_BuildNewTarget_m1429810889 (UDTEventHandler_t3117429239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::CloseQualityDialog()
extern "C"  void UDTEventHandler_CloseQualityDialog_m3110258329 (UDTEventHandler_t3117429239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::StopExtendedTracking()
extern "C"  void UDTEventHandler_StopExtendedTracking_m1259032648 (UDTEventHandler_t3117429239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
