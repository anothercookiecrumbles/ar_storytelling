﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ImageTargetBehaviour
struct ImageTargetBehaviour_t2654589389;
// Vuforia.UserDefinedTargetBuildingBehaviour
struct UserDefinedTargetBuildingBehaviour_t4184040062;
// QualityDialog
struct QualityDialog_t1435260315;
// Vuforia.ObjectTracker
struct ObjectTracker_t1568044035;
// Vuforia.DataSet
struct DataSet_t626511550;
// TrackableSettings
struct TrackableSettings_t4265251850;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder2061101710.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UDTEventHandler
struct  UDTEventHandler_t3117429239  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.ImageTargetBehaviour UDTEventHandler::ImageTargetTemplate
	ImageTargetBehaviour_t2654589389 * ___ImageTargetTemplate_2;
	// Vuforia.UserDefinedTargetBuildingBehaviour UDTEventHandler::mTargetBuildingBehaviour
	UserDefinedTargetBuildingBehaviour_t4184040062 * ___mTargetBuildingBehaviour_4;
	// QualityDialog UDTEventHandler::mQualityDialog
	QualityDialog_t1435260315 * ___mQualityDialog_5;
	// Vuforia.ObjectTracker UDTEventHandler::mObjectTracker
	ObjectTracker_t1568044035 * ___mObjectTracker_6;
	// Vuforia.DataSet UDTEventHandler::mBuiltDataSet
	DataSet_t626511550 * ___mBuiltDataSet_7;
	// Vuforia.ImageTargetBuilder/FrameQuality UDTEventHandler::mFrameQuality
	int32_t ___mFrameQuality_8;
	// System.Int32 UDTEventHandler::mTargetCounter
	int32_t ___mTargetCounter_9;
	// TrackableSettings UDTEventHandler::mTrackableSettings
	TrackableSettings_t4265251850 * ___mTrackableSettings_10;

public:
	inline static int32_t get_offset_of_ImageTargetTemplate_2() { return static_cast<int32_t>(offsetof(UDTEventHandler_t3117429239, ___ImageTargetTemplate_2)); }
	inline ImageTargetBehaviour_t2654589389 * get_ImageTargetTemplate_2() const { return ___ImageTargetTemplate_2; }
	inline ImageTargetBehaviour_t2654589389 ** get_address_of_ImageTargetTemplate_2() { return &___ImageTargetTemplate_2; }
	inline void set_ImageTargetTemplate_2(ImageTargetBehaviour_t2654589389 * value)
	{
		___ImageTargetTemplate_2 = value;
		Il2CppCodeGenWriteBarrier(&___ImageTargetTemplate_2, value);
	}

	inline static int32_t get_offset_of_mTargetBuildingBehaviour_4() { return static_cast<int32_t>(offsetof(UDTEventHandler_t3117429239, ___mTargetBuildingBehaviour_4)); }
	inline UserDefinedTargetBuildingBehaviour_t4184040062 * get_mTargetBuildingBehaviour_4() const { return ___mTargetBuildingBehaviour_4; }
	inline UserDefinedTargetBuildingBehaviour_t4184040062 ** get_address_of_mTargetBuildingBehaviour_4() { return &___mTargetBuildingBehaviour_4; }
	inline void set_mTargetBuildingBehaviour_4(UserDefinedTargetBuildingBehaviour_t4184040062 * value)
	{
		___mTargetBuildingBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTargetBuildingBehaviour_4, value);
	}

	inline static int32_t get_offset_of_mQualityDialog_5() { return static_cast<int32_t>(offsetof(UDTEventHandler_t3117429239, ___mQualityDialog_5)); }
	inline QualityDialog_t1435260315 * get_mQualityDialog_5() const { return ___mQualityDialog_5; }
	inline QualityDialog_t1435260315 ** get_address_of_mQualityDialog_5() { return &___mQualityDialog_5; }
	inline void set_mQualityDialog_5(QualityDialog_t1435260315 * value)
	{
		___mQualityDialog_5 = value;
		Il2CppCodeGenWriteBarrier(&___mQualityDialog_5, value);
	}

	inline static int32_t get_offset_of_mObjectTracker_6() { return static_cast<int32_t>(offsetof(UDTEventHandler_t3117429239, ___mObjectTracker_6)); }
	inline ObjectTracker_t1568044035 * get_mObjectTracker_6() const { return ___mObjectTracker_6; }
	inline ObjectTracker_t1568044035 ** get_address_of_mObjectTracker_6() { return &___mObjectTracker_6; }
	inline void set_mObjectTracker_6(ObjectTracker_t1568044035 * value)
	{
		___mObjectTracker_6 = value;
		Il2CppCodeGenWriteBarrier(&___mObjectTracker_6, value);
	}

	inline static int32_t get_offset_of_mBuiltDataSet_7() { return static_cast<int32_t>(offsetof(UDTEventHandler_t3117429239, ___mBuiltDataSet_7)); }
	inline DataSet_t626511550 * get_mBuiltDataSet_7() const { return ___mBuiltDataSet_7; }
	inline DataSet_t626511550 ** get_address_of_mBuiltDataSet_7() { return &___mBuiltDataSet_7; }
	inline void set_mBuiltDataSet_7(DataSet_t626511550 * value)
	{
		___mBuiltDataSet_7 = value;
		Il2CppCodeGenWriteBarrier(&___mBuiltDataSet_7, value);
	}

	inline static int32_t get_offset_of_mFrameQuality_8() { return static_cast<int32_t>(offsetof(UDTEventHandler_t3117429239, ___mFrameQuality_8)); }
	inline int32_t get_mFrameQuality_8() const { return ___mFrameQuality_8; }
	inline int32_t* get_address_of_mFrameQuality_8() { return &___mFrameQuality_8; }
	inline void set_mFrameQuality_8(int32_t value)
	{
		___mFrameQuality_8 = value;
	}

	inline static int32_t get_offset_of_mTargetCounter_9() { return static_cast<int32_t>(offsetof(UDTEventHandler_t3117429239, ___mTargetCounter_9)); }
	inline int32_t get_mTargetCounter_9() const { return ___mTargetCounter_9; }
	inline int32_t* get_address_of_mTargetCounter_9() { return &___mTargetCounter_9; }
	inline void set_mTargetCounter_9(int32_t value)
	{
		___mTargetCounter_9 = value;
	}

	inline static int32_t get_offset_of_mTrackableSettings_10() { return static_cast<int32_t>(offsetof(UDTEventHandler_t3117429239, ___mTrackableSettings_10)); }
	inline TrackableSettings_t4265251850 * get_mTrackableSettings_10() const { return ___mTrackableSettings_10; }
	inline TrackableSettings_t4265251850 ** get_address_of_mTrackableSettings_10() { return &___mTrackableSettings_10; }
	inline void set_mTrackableSettings_10(TrackableSettings_t4265251850 * value)
	{
		___mTrackableSettings_10 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableSettings_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
