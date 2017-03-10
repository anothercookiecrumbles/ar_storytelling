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

// CameraSettings
struct CameraSettings_t3536359094;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer1654543970.h"

// System.Void CameraSettings::.ctor()
extern "C"  void CameraSettings__ctor_m1859904211 (CameraSettings_t3536359094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::Start()
extern "C"  void CameraSettings_Start_m2189753879 (CameraSettings_t3536359094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::IsFlashTorchEnabled()
extern "C"  bool CameraSettings_IsFlashTorchEnabled_m592350650 (CameraSettings_t3536359094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::SwitchFlashTorch(System.Boolean)
extern "C"  void CameraSettings_SwitchFlashTorch_m1328172396 (CameraSettings_t3536359094 * __this, bool ___ON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::IsAutofocusEnabled()
extern "C"  bool CameraSettings_IsAutofocusEnabled_m2252356995 (CameraSettings_t3536359094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::SwitchAutofocus(System.Boolean)
extern "C"  void CameraSettings_SwitchAutofocus_m3868097853 (CameraSettings_t3536359094 * __this, bool ___ON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::TriggerAutofocusEvent()
extern "C"  void CameraSettings_TriggerAutofocusEvent_m2934478778 (CameraSettings_t3536359094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::SelectCamera(Vuforia.CameraDevice/CameraDirection)
extern "C"  void CameraSettings_SelectCamera_m3610865504 (CameraSettings_t3536359094 * __this, int32_t ___camDir0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::IsFrontCameraActive()
extern "C"  bool CameraSettings_IsFrontCameraActive_m105774605 (CameraSettings_t3536359094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::OnVuforiaStarted()
extern "C"  void CameraSettings_OnVuforiaStarted_m3889164871 (CameraSettings_t3536359094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::OnPaused(System.Boolean)
extern "C"  void CameraSettings_OnPaused_m3395793463 (CameraSettings_t3536359094 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CameraSettings::RestoreOriginalFocusMode()
extern "C"  Il2CppObject * CameraSettings_RestoreOriginalFocusMode_m471704763 (CameraSettings_t3536359094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::RestartCamera(Vuforia.CameraDevice/CameraDirection)
extern "C"  bool CameraSettings_RestartCamera_m3364300361 (CameraSettings_t3536359094 * __this, int32_t ___direction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
