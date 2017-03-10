#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// OnlineMapsHereRoutingAPI/GeoRect[]
struct GeoRectU5BU5D_t476569381;
// System.String[]
struct StringU5BU5D_t1642385972;
// OnlineMapsHereRoutingAPI/GeoRect
struct GeoRect_t3839859884;
// System.Double[]
struct DoubleU5BU5D_t1889952540;
// OnlineMapsHereRoutingAPI/VehicleType
struct VehicleType_t2660067619;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen3168720147.h"
#include "mscorlib_System_Nullable_1_gen198071527.h"
#include "mscorlib_System_Nullable_1_gen1642398531.h"
#include "mscorlib_System_Nullable_1_gen1412704528.h"
#include "mscorlib_System_Nullable_1_gen1324344773.h"
#include "mscorlib_System_Nullable_1_gen580827874.h"
#include "mscorlib_System_Nullable_1_gen3859846603.h"
#include "mscorlib_System_Nullable_1_gen3464028169.h"
#include "mscorlib_System_Nullable_1_gen3741288200.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen1412504567.h"
#include "mscorlib_System_Nullable_1_gen3894803976.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPI/Params
struct  Params_t2276111447  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPI/Params::requestId
	String_t* ___requestId_0;
	// OnlineMapsHereRoutingAPI/GeoRect[] OnlineMapsHereRoutingAPI/Params::avoidAreas
	GeoRectU5BU5D_t476569381* ___avoidAreas_1;
	// System.String[] OnlineMapsHereRoutingAPI/Params::avoidLinks
	StringU5BU5D_t1642385972* ___avoidLinks_2;
	// System.Boolean OnlineMapsHereRoutingAPI/Params::avoidSeasonalClosures
	bool ___avoidSeasonalClosures_3;
	// System.String OnlineMapsHereRoutingAPI/Params::departure
	String_t* ___departure_4;
	// System.String OnlineMapsHereRoutingAPI/Params::arrival
	String_t* ___arrival_5;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPI/Params::alternatives
	Nullable_1_t334943763  ___alternatives_6;
	// System.Nullable`1<OnlineMapsHereRoutingAPI/MetricSystem> OnlineMapsHereRoutingAPI/Params::metricSystem
	Nullable_1_t3168720147  ___metricSystem_7;
	// OnlineMapsHereRoutingAPI/GeoRect OnlineMapsHereRoutingAPI/Params::viewBounds
	GeoRect_t3839859884 * ___viewBounds_8;
	// System.String OnlineMapsHereRoutingAPI/Params::resolution
	String_t* ___resolution_9;
	// System.Nullable`1<OnlineMapsHereRoutingAPI/InstructionFormat> OnlineMapsHereRoutingAPI/Params::instructionFormat
	Nullable_1_t198071527  ___instructionFormat_10;
	// System.String OnlineMapsHereRoutingAPI/Params::language
	String_t* ___language_11;
	// System.Nullable`1<OnlineMapsHereRoutingAPI/Representation> OnlineMapsHereRoutingAPI/Params::representation
	Nullable_1_t1642398531  ___representation_12;
	// System.Nullable`1<OnlineMapsHereRoutingAPI/RouteAttributes> OnlineMapsHereRoutingAPI/Params::routeAttributes
	Nullable_1_t1412704528  ___routeAttributes_13;
	// System.Nullable`1<OnlineMapsHereRoutingAPI/LegAttributes> OnlineMapsHereRoutingAPI/Params::legAttributes
	Nullable_1_t1324344773  ___legAttributes_14;
	// System.Nullable`1<OnlineMapsHereRoutingAPI/ManeuverAttributes> OnlineMapsHereRoutingAPI/Params::maneuverAttributes
	Nullable_1_t580827874  ___maneuverAttributes_15;
	// System.Nullable`1<OnlineMapsHereRoutingAPI/LinkAttributes> OnlineMapsHereRoutingAPI/Params::linkAttributes
	Nullable_1_t3859846603  ___linkAttributes_16;
	// System.Nullable`1<OnlineMapsHereRoutingAPI/LineAttributes> OnlineMapsHereRoutingAPI/Params::lineAttributes
	Nullable_1_t3464028169  ___lineAttributes_17;
	// System.Double[] OnlineMapsHereRoutingAPI/Params::generalizationtolerances
	DoubleU5BU5D_t1889952540* ___generalizationtolerances_18;
	// OnlineMapsHereRoutingAPI/VehicleType OnlineMapsHereRoutingAPI/Params::vehicleType
	VehicleType_t2660067619 * ___vehicleType_19;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPI/Params::maxNumberOfChanges
	Nullable_1_t334943763  ___maxNumberOfChanges_20;
	// System.Nullable`1<OnlineMapsHereRoutingAPI/PublicTransportType> OnlineMapsHereRoutingAPI/Params::avoidTransportTypes
	Nullable_1_t3741288200  ___avoidTransportTypes_21;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPI/Params::walkTimeMultiplier
	Nullable_1_t2341081996  ___walkTimeMultiplier_22;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPI/Params::walkSpeed
	Nullable_1_t2341081996  ___walkSpeed_23;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPI/Params::walkRadius
	Nullable_1_t334943763  ___walkRadius_24;
	// System.Boolean OnlineMapsHereRoutingAPI/Params::combineChange
	bool ___combineChange_25;
	// System.Nullable`1<OnlineMapsHereRoutingAPI/TruckType> OnlineMapsHereRoutingAPI/Params::truckType
	Nullable_1_t1412504567  ___truckType_26;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPI/Params::trailersCount
	Nullable_1_t334943763  ___trailersCount_27;
	// System.Nullable`1<OnlineMapsHereRoutingAPI/HazardousGoodType> OnlineMapsHereRoutingAPI/Params::shippedHazardousGoods
	Nullable_1_t3894803976  ___shippedHazardousGoods_28;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPI/Params::limitedWeight
	Nullable_1_t334943763  ___limitedWeight_29;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPI/Params::weightPerAxle
	Nullable_1_t334943763  ___weightPerAxle_30;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPI/Params::height
	Nullable_1_t334943763  ___height_31;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPI/Params::width
	Nullable_1_t334943763  ___width_32;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPI/Params::length
	Nullable_1_t334943763  ___length_33;
	// System.String OnlineMapsHereRoutingAPI/Params::tunnelCategory
	String_t* ___tunnelCategory_34;
	// System.Boolean OnlineMapsHereRoutingAPI/Params::returnelevation
	bool ___returnelevation_35;

public:
	inline static int32_t get_offset_of_requestId_0() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___requestId_0)); }
	inline String_t* get_requestId_0() const { return ___requestId_0; }
	inline String_t** get_address_of_requestId_0() { return &___requestId_0; }
	inline void set_requestId_0(String_t* value)
	{
		___requestId_0 = value;
		Il2CppCodeGenWriteBarrier(&___requestId_0, value);
	}

	inline static int32_t get_offset_of_avoidAreas_1() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___avoidAreas_1)); }
	inline GeoRectU5BU5D_t476569381* get_avoidAreas_1() const { return ___avoidAreas_1; }
	inline GeoRectU5BU5D_t476569381** get_address_of_avoidAreas_1() { return &___avoidAreas_1; }
	inline void set_avoidAreas_1(GeoRectU5BU5D_t476569381* value)
	{
		___avoidAreas_1 = value;
		Il2CppCodeGenWriteBarrier(&___avoidAreas_1, value);
	}

	inline static int32_t get_offset_of_avoidLinks_2() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___avoidLinks_2)); }
	inline StringU5BU5D_t1642385972* get_avoidLinks_2() const { return ___avoidLinks_2; }
	inline StringU5BU5D_t1642385972** get_address_of_avoidLinks_2() { return &___avoidLinks_2; }
	inline void set_avoidLinks_2(StringU5BU5D_t1642385972* value)
	{
		___avoidLinks_2 = value;
		Il2CppCodeGenWriteBarrier(&___avoidLinks_2, value);
	}

	inline static int32_t get_offset_of_avoidSeasonalClosures_3() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___avoidSeasonalClosures_3)); }
	inline bool get_avoidSeasonalClosures_3() const { return ___avoidSeasonalClosures_3; }
	inline bool* get_address_of_avoidSeasonalClosures_3() { return &___avoidSeasonalClosures_3; }
	inline void set_avoidSeasonalClosures_3(bool value)
	{
		___avoidSeasonalClosures_3 = value;
	}

	inline static int32_t get_offset_of_departure_4() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___departure_4)); }
	inline String_t* get_departure_4() const { return ___departure_4; }
	inline String_t** get_address_of_departure_4() { return &___departure_4; }
	inline void set_departure_4(String_t* value)
	{
		___departure_4 = value;
		Il2CppCodeGenWriteBarrier(&___departure_4, value);
	}

	inline static int32_t get_offset_of_arrival_5() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___arrival_5)); }
	inline String_t* get_arrival_5() const { return ___arrival_5; }
	inline String_t** get_address_of_arrival_5() { return &___arrival_5; }
	inline void set_arrival_5(String_t* value)
	{
		___arrival_5 = value;
		Il2CppCodeGenWriteBarrier(&___arrival_5, value);
	}

	inline static int32_t get_offset_of_alternatives_6() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___alternatives_6)); }
	inline Nullable_1_t334943763  get_alternatives_6() const { return ___alternatives_6; }
	inline Nullable_1_t334943763 * get_address_of_alternatives_6() { return &___alternatives_6; }
	inline void set_alternatives_6(Nullable_1_t334943763  value)
	{
		___alternatives_6 = value;
	}

	inline static int32_t get_offset_of_metricSystem_7() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___metricSystem_7)); }
	inline Nullable_1_t3168720147  get_metricSystem_7() const { return ___metricSystem_7; }
	inline Nullable_1_t3168720147 * get_address_of_metricSystem_7() { return &___metricSystem_7; }
	inline void set_metricSystem_7(Nullable_1_t3168720147  value)
	{
		___metricSystem_7 = value;
	}

	inline static int32_t get_offset_of_viewBounds_8() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___viewBounds_8)); }
	inline GeoRect_t3839859884 * get_viewBounds_8() const { return ___viewBounds_8; }
	inline GeoRect_t3839859884 ** get_address_of_viewBounds_8() { return &___viewBounds_8; }
	inline void set_viewBounds_8(GeoRect_t3839859884 * value)
	{
		___viewBounds_8 = value;
		Il2CppCodeGenWriteBarrier(&___viewBounds_8, value);
	}

	inline static int32_t get_offset_of_resolution_9() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___resolution_9)); }
	inline String_t* get_resolution_9() const { return ___resolution_9; }
	inline String_t** get_address_of_resolution_9() { return &___resolution_9; }
	inline void set_resolution_9(String_t* value)
	{
		___resolution_9 = value;
		Il2CppCodeGenWriteBarrier(&___resolution_9, value);
	}

	inline static int32_t get_offset_of_instructionFormat_10() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___instructionFormat_10)); }
	inline Nullable_1_t198071527  get_instructionFormat_10() const { return ___instructionFormat_10; }
	inline Nullable_1_t198071527 * get_address_of_instructionFormat_10() { return &___instructionFormat_10; }
	inline void set_instructionFormat_10(Nullable_1_t198071527  value)
	{
		___instructionFormat_10 = value;
	}

	inline static int32_t get_offset_of_language_11() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___language_11)); }
	inline String_t* get_language_11() const { return ___language_11; }
	inline String_t** get_address_of_language_11() { return &___language_11; }
	inline void set_language_11(String_t* value)
	{
		___language_11 = value;
		Il2CppCodeGenWriteBarrier(&___language_11, value);
	}

	inline static int32_t get_offset_of_representation_12() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___representation_12)); }
	inline Nullable_1_t1642398531  get_representation_12() const { return ___representation_12; }
	inline Nullable_1_t1642398531 * get_address_of_representation_12() { return &___representation_12; }
	inline void set_representation_12(Nullable_1_t1642398531  value)
	{
		___representation_12 = value;
	}

	inline static int32_t get_offset_of_routeAttributes_13() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___routeAttributes_13)); }
	inline Nullable_1_t1412704528  get_routeAttributes_13() const { return ___routeAttributes_13; }
	inline Nullable_1_t1412704528 * get_address_of_routeAttributes_13() { return &___routeAttributes_13; }
	inline void set_routeAttributes_13(Nullable_1_t1412704528  value)
	{
		___routeAttributes_13 = value;
	}

	inline static int32_t get_offset_of_legAttributes_14() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___legAttributes_14)); }
	inline Nullable_1_t1324344773  get_legAttributes_14() const { return ___legAttributes_14; }
	inline Nullable_1_t1324344773 * get_address_of_legAttributes_14() { return &___legAttributes_14; }
	inline void set_legAttributes_14(Nullable_1_t1324344773  value)
	{
		___legAttributes_14 = value;
	}

	inline static int32_t get_offset_of_maneuverAttributes_15() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___maneuverAttributes_15)); }
	inline Nullable_1_t580827874  get_maneuverAttributes_15() const { return ___maneuverAttributes_15; }
	inline Nullable_1_t580827874 * get_address_of_maneuverAttributes_15() { return &___maneuverAttributes_15; }
	inline void set_maneuverAttributes_15(Nullable_1_t580827874  value)
	{
		___maneuverAttributes_15 = value;
	}

	inline static int32_t get_offset_of_linkAttributes_16() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___linkAttributes_16)); }
	inline Nullable_1_t3859846603  get_linkAttributes_16() const { return ___linkAttributes_16; }
	inline Nullable_1_t3859846603 * get_address_of_linkAttributes_16() { return &___linkAttributes_16; }
	inline void set_linkAttributes_16(Nullable_1_t3859846603  value)
	{
		___linkAttributes_16 = value;
	}

	inline static int32_t get_offset_of_lineAttributes_17() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___lineAttributes_17)); }
	inline Nullable_1_t3464028169  get_lineAttributes_17() const { return ___lineAttributes_17; }
	inline Nullable_1_t3464028169 * get_address_of_lineAttributes_17() { return &___lineAttributes_17; }
	inline void set_lineAttributes_17(Nullable_1_t3464028169  value)
	{
		___lineAttributes_17 = value;
	}

	inline static int32_t get_offset_of_generalizationtolerances_18() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___generalizationtolerances_18)); }
	inline DoubleU5BU5D_t1889952540* get_generalizationtolerances_18() const { return ___generalizationtolerances_18; }
	inline DoubleU5BU5D_t1889952540** get_address_of_generalizationtolerances_18() { return &___generalizationtolerances_18; }
	inline void set_generalizationtolerances_18(DoubleU5BU5D_t1889952540* value)
	{
		___generalizationtolerances_18 = value;
		Il2CppCodeGenWriteBarrier(&___generalizationtolerances_18, value);
	}

	inline static int32_t get_offset_of_vehicleType_19() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___vehicleType_19)); }
	inline VehicleType_t2660067619 * get_vehicleType_19() const { return ___vehicleType_19; }
	inline VehicleType_t2660067619 ** get_address_of_vehicleType_19() { return &___vehicleType_19; }
	inline void set_vehicleType_19(VehicleType_t2660067619 * value)
	{
		___vehicleType_19 = value;
		Il2CppCodeGenWriteBarrier(&___vehicleType_19, value);
	}

	inline static int32_t get_offset_of_maxNumberOfChanges_20() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___maxNumberOfChanges_20)); }
	inline Nullable_1_t334943763  get_maxNumberOfChanges_20() const { return ___maxNumberOfChanges_20; }
	inline Nullable_1_t334943763 * get_address_of_maxNumberOfChanges_20() { return &___maxNumberOfChanges_20; }
	inline void set_maxNumberOfChanges_20(Nullable_1_t334943763  value)
	{
		___maxNumberOfChanges_20 = value;
	}

	inline static int32_t get_offset_of_avoidTransportTypes_21() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___avoidTransportTypes_21)); }
	inline Nullable_1_t3741288200  get_avoidTransportTypes_21() const { return ___avoidTransportTypes_21; }
	inline Nullable_1_t3741288200 * get_address_of_avoidTransportTypes_21() { return &___avoidTransportTypes_21; }
	inline void set_avoidTransportTypes_21(Nullable_1_t3741288200  value)
	{
		___avoidTransportTypes_21 = value;
	}

	inline static int32_t get_offset_of_walkTimeMultiplier_22() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___walkTimeMultiplier_22)); }
	inline Nullable_1_t2341081996  get_walkTimeMultiplier_22() const { return ___walkTimeMultiplier_22; }
	inline Nullable_1_t2341081996 * get_address_of_walkTimeMultiplier_22() { return &___walkTimeMultiplier_22; }
	inline void set_walkTimeMultiplier_22(Nullable_1_t2341081996  value)
	{
		___walkTimeMultiplier_22 = value;
	}

	inline static int32_t get_offset_of_walkSpeed_23() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___walkSpeed_23)); }
	inline Nullable_1_t2341081996  get_walkSpeed_23() const { return ___walkSpeed_23; }
	inline Nullable_1_t2341081996 * get_address_of_walkSpeed_23() { return &___walkSpeed_23; }
	inline void set_walkSpeed_23(Nullable_1_t2341081996  value)
	{
		___walkSpeed_23 = value;
	}

	inline static int32_t get_offset_of_walkRadius_24() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___walkRadius_24)); }
	inline Nullable_1_t334943763  get_walkRadius_24() const { return ___walkRadius_24; }
	inline Nullable_1_t334943763 * get_address_of_walkRadius_24() { return &___walkRadius_24; }
	inline void set_walkRadius_24(Nullable_1_t334943763  value)
	{
		___walkRadius_24 = value;
	}

	inline static int32_t get_offset_of_combineChange_25() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___combineChange_25)); }
	inline bool get_combineChange_25() const { return ___combineChange_25; }
	inline bool* get_address_of_combineChange_25() { return &___combineChange_25; }
	inline void set_combineChange_25(bool value)
	{
		___combineChange_25 = value;
	}

	inline static int32_t get_offset_of_truckType_26() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___truckType_26)); }
	inline Nullable_1_t1412504567  get_truckType_26() const { return ___truckType_26; }
	inline Nullable_1_t1412504567 * get_address_of_truckType_26() { return &___truckType_26; }
	inline void set_truckType_26(Nullable_1_t1412504567  value)
	{
		___truckType_26 = value;
	}

	inline static int32_t get_offset_of_trailersCount_27() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___trailersCount_27)); }
	inline Nullable_1_t334943763  get_trailersCount_27() const { return ___trailersCount_27; }
	inline Nullable_1_t334943763 * get_address_of_trailersCount_27() { return &___trailersCount_27; }
	inline void set_trailersCount_27(Nullable_1_t334943763  value)
	{
		___trailersCount_27 = value;
	}

	inline static int32_t get_offset_of_shippedHazardousGoods_28() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___shippedHazardousGoods_28)); }
	inline Nullable_1_t3894803976  get_shippedHazardousGoods_28() const { return ___shippedHazardousGoods_28; }
	inline Nullable_1_t3894803976 * get_address_of_shippedHazardousGoods_28() { return &___shippedHazardousGoods_28; }
	inline void set_shippedHazardousGoods_28(Nullable_1_t3894803976  value)
	{
		___shippedHazardousGoods_28 = value;
	}

	inline static int32_t get_offset_of_limitedWeight_29() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___limitedWeight_29)); }
	inline Nullable_1_t334943763  get_limitedWeight_29() const { return ___limitedWeight_29; }
	inline Nullable_1_t334943763 * get_address_of_limitedWeight_29() { return &___limitedWeight_29; }
	inline void set_limitedWeight_29(Nullable_1_t334943763  value)
	{
		___limitedWeight_29 = value;
	}

	inline static int32_t get_offset_of_weightPerAxle_30() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___weightPerAxle_30)); }
	inline Nullable_1_t334943763  get_weightPerAxle_30() const { return ___weightPerAxle_30; }
	inline Nullable_1_t334943763 * get_address_of_weightPerAxle_30() { return &___weightPerAxle_30; }
	inline void set_weightPerAxle_30(Nullable_1_t334943763  value)
	{
		___weightPerAxle_30 = value;
	}

	inline static int32_t get_offset_of_height_31() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___height_31)); }
	inline Nullable_1_t334943763  get_height_31() const { return ___height_31; }
	inline Nullable_1_t334943763 * get_address_of_height_31() { return &___height_31; }
	inline void set_height_31(Nullable_1_t334943763  value)
	{
		___height_31 = value;
	}

	inline static int32_t get_offset_of_width_32() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___width_32)); }
	inline Nullable_1_t334943763  get_width_32() const { return ___width_32; }
	inline Nullable_1_t334943763 * get_address_of_width_32() { return &___width_32; }
	inline void set_width_32(Nullable_1_t334943763  value)
	{
		___width_32 = value;
	}

	inline static int32_t get_offset_of_length_33() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___length_33)); }
	inline Nullable_1_t334943763  get_length_33() const { return ___length_33; }
	inline Nullable_1_t334943763 * get_address_of_length_33() { return &___length_33; }
	inline void set_length_33(Nullable_1_t334943763  value)
	{
		___length_33 = value;
	}

	inline static int32_t get_offset_of_tunnelCategory_34() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___tunnelCategory_34)); }
	inline String_t* get_tunnelCategory_34() const { return ___tunnelCategory_34; }
	inline String_t** get_address_of_tunnelCategory_34() { return &___tunnelCategory_34; }
	inline void set_tunnelCategory_34(String_t* value)
	{
		___tunnelCategory_34 = value;
		Il2CppCodeGenWriteBarrier(&___tunnelCategory_34, value);
	}

	inline static int32_t get_offset_of_returnelevation_35() { return static_cast<int32_t>(offsetof(Params_t2276111447, ___returnelevation_35)); }
	inline bool get_returnelevation_35() const { return ___returnelevation_35; }
	inline bool* get_address_of_returnelevation_35() { return &___returnelevation_35; }
	inline void set_returnelevation_35(bool value)
	{
		___returnelevation_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
