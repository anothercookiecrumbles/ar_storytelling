#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTracker
struct ObjectTracker_t1568044035;
// ContentManager
struct ContentManager_t1140144612;
// TrackableSettings
struct TrackableSettings_t4265251850;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Vuforia.ImageTargetBehaviour
struct ImageTargetBehaviour_t2654589389;
// ScanLine
struct ScanLine_t1592915667;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CloudRecoEventHandler
struct  CloudRecoEventHandler_t404399182  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.ObjectTracker CloudRecoEventHandler::mObjectTracker
	ObjectTracker_t1568044035 * ___mObjectTracker_2;
	// ContentManager CloudRecoEventHandler::mContentManager
	ContentManager_t1140144612 * ___mContentManager_3;
	// TrackableSettings CloudRecoEventHandler::mTrackableSettings
	TrackableSettings_t4265251850 * ___mTrackableSettings_4;
	// System.Boolean CloudRecoEventHandler::mMustRestartApp
	bool ___mMustRestartApp_5;
	// UnityEngine.GameObject CloudRecoEventHandler::mParentOfImageTargetTemplate
	GameObject_t1756533147 * ___mParentOfImageTargetTemplate_6;
	// Vuforia.ImageTargetBehaviour CloudRecoEventHandler::ImageTargetTemplate
	ImageTargetBehaviour_t2654589389 * ___ImageTargetTemplate_7;
	// ScanLine CloudRecoEventHandler::scanLine
	ScanLine_t1592915667 * ___scanLine_8;
	// UnityEngine.Canvas CloudRecoEventHandler::cloudErrorCanvas
	Canvas_t209405766 * ___cloudErrorCanvas_9;
	// UnityEngine.UI.Text CloudRecoEventHandler::cloudErrorTitle
	Text_t356221433 * ___cloudErrorTitle_10;
	// UnityEngine.UI.Text CloudRecoEventHandler::cloudErrorText
	Text_t356221433 * ___cloudErrorText_11;

public:
	inline static int32_t get_offset_of_mObjectTracker_2() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t404399182, ___mObjectTracker_2)); }
	inline ObjectTracker_t1568044035 * get_mObjectTracker_2() const { return ___mObjectTracker_2; }
	inline ObjectTracker_t1568044035 ** get_address_of_mObjectTracker_2() { return &___mObjectTracker_2; }
	inline void set_mObjectTracker_2(ObjectTracker_t1568044035 * value)
	{
		___mObjectTracker_2 = value;
		Il2CppCodeGenWriteBarrier(&___mObjectTracker_2, value);
	}

	inline static int32_t get_offset_of_mContentManager_3() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t404399182, ___mContentManager_3)); }
	inline ContentManager_t1140144612 * get_mContentManager_3() const { return ___mContentManager_3; }
	inline ContentManager_t1140144612 ** get_address_of_mContentManager_3() { return &___mContentManager_3; }
	inline void set_mContentManager_3(ContentManager_t1140144612 * value)
	{
		___mContentManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___mContentManager_3, value);
	}

	inline static int32_t get_offset_of_mTrackableSettings_4() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t404399182, ___mTrackableSettings_4)); }
	inline TrackableSettings_t4265251850 * get_mTrackableSettings_4() const { return ___mTrackableSettings_4; }
	inline TrackableSettings_t4265251850 ** get_address_of_mTrackableSettings_4() { return &___mTrackableSettings_4; }
	inline void set_mTrackableSettings_4(TrackableSettings_t4265251850 * value)
	{
		___mTrackableSettings_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableSettings_4, value);
	}

	inline static int32_t get_offset_of_mMustRestartApp_5() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t404399182, ___mMustRestartApp_5)); }
	inline bool get_mMustRestartApp_5() const { return ___mMustRestartApp_5; }
	inline bool* get_address_of_mMustRestartApp_5() { return &___mMustRestartApp_5; }
	inline void set_mMustRestartApp_5(bool value)
	{
		___mMustRestartApp_5 = value;
	}

	inline static int32_t get_offset_of_mParentOfImageTargetTemplate_6() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t404399182, ___mParentOfImageTargetTemplate_6)); }
	inline GameObject_t1756533147 * get_mParentOfImageTargetTemplate_6() const { return ___mParentOfImageTargetTemplate_6; }
	inline GameObject_t1756533147 ** get_address_of_mParentOfImageTargetTemplate_6() { return &___mParentOfImageTargetTemplate_6; }
	inline void set_mParentOfImageTargetTemplate_6(GameObject_t1756533147 * value)
	{
		___mParentOfImageTargetTemplate_6 = value;
		Il2CppCodeGenWriteBarrier(&___mParentOfImageTargetTemplate_6, value);
	}

	inline static int32_t get_offset_of_ImageTargetTemplate_7() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t404399182, ___ImageTargetTemplate_7)); }
	inline ImageTargetBehaviour_t2654589389 * get_ImageTargetTemplate_7() const { return ___ImageTargetTemplate_7; }
	inline ImageTargetBehaviour_t2654589389 ** get_address_of_ImageTargetTemplate_7() { return &___ImageTargetTemplate_7; }
	inline void set_ImageTargetTemplate_7(ImageTargetBehaviour_t2654589389 * value)
	{
		___ImageTargetTemplate_7 = value;
		Il2CppCodeGenWriteBarrier(&___ImageTargetTemplate_7, value);
	}

	inline static int32_t get_offset_of_scanLine_8() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t404399182, ___scanLine_8)); }
	inline ScanLine_t1592915667 * get_scanLine_8() const { return ___scanLine_8; }
	inline ScanLine_t1592915667 ** get_address_of_scanLine_8() { return &___scanLine_8; }
	inline void set_scanLine_8(ScanLine_t1592915667 * value)
	{
		___scanLine_8 = value;
		Il2CppCodeGenWriteBarrier(&___scanLine_8, value);
	}

	inline static int32_t get_offset_of_cloudErrorCanvas_9() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t404399182, ___cloudErrorCanvas_9)); }
	inline Canvas_t209405766 * get_cloudErrorCanvas_9() const { return ___cloudErrorCanvas_9; }
	inline Canvas_t209405766 ** get_address_of_cloudErrorCanvas_9() { return &___cloudErrorCanvas_9; }
	inline void set_cloudErrorCanvas_9(Canvas_t209405766 * value)
	{
		___cloudErrorCanvas_9 = value;
		Il2CppCodeGenWriteBarrier(&___cloudErrorCanvas_9, value);
	}

	inline static int32_t get_offset_of_cloudErrorTitle_10() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t404399182, ___cloudErrorTitle_10)); }
	inline Text_t356221433 * get_cloudErrorTitle_10() const { return ___cloudErrorTitle_10; }
	inline Text_t356221433 ** get_address_of_cloudErrorTitle_10() { return &___cloudErrorTitle_10; }
	inline void set_cloudErrorTitle_10(Text_t356221433 * value)
	{
		___cloudErrorTitle_10 = value;
		Il2CppCodeGenWriteBarrier(&___cloudErrorTitle_10, value);
	}

	inline static int32_t get_offset_of_cloudErrorText_11() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t404399182, ___cloudErrorText_11)); }
	inline Text_t356221433 * get_cloudErrorText_11() const { return ___cloudErrorText_11; }
	inline Text_t356221433 ** get_address_of_cloudErrorText_11() { return &___cloudErrorText_11; }
	inline void set_cloudErrorText_11(Text_t356221433 * value)
	{
		___cloudErrorText_11 = value;
		Il2CppCodeGenWriteBarrier(&___cloudErrorText_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
