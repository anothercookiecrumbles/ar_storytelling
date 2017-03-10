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

// OnlineMapsBuildingBuiltIn
struct OnlineMapsBuildingBuiltIn_t544190665;
// OnlineMapsOSMWay
struct OnlineMapsOSMWay_t3319895272;
// UnityEngine.Material
struct Material_t193706927;
// OnlineMapsBuildingBase
struct OnlineMapsBuildingBase_t650727021;
// OnlineMapsBuildings
struct OnlineMapsBuildings_t3411229051;
// System.Collections.Generic.Dictionary`2<System.String,OnlineMapsOSMNode>
struct Dictionary_2_t1003802369;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// OnlineMapsBuildingMaterial
struct OnlineMapsBuildingMaterial_t302108695;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsOSMWay3319895272.h"
#include "AssemblyU2DCSharp_OnlineMapsBuildingBase_RoofType26146916.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "AssemblyU2DCSharp_OnlineMapsBuildings3411229051.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void OnlineMapsBuildingBuiltIn::.ctor()
extern "C"  void OnlineMapsBuildingBuiltIn__ctor_m2176530282 (OnlineMapsBuildingBuiltIn_t544190665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBuiltIn::AnalizeHouseRoofType(OnlineMapsOSMWay,System.Single&,OnlineMapsBuildingBase/RoofType&,System.Single&)
extern "C"  void OnlineMapsBuildingBuiltIn_AnalizeHouseRoofType_m601052366 (Il2CppObject * __this /* static, unused */, OnlineMapsOSMWay_t3319895272 * ___way0, float* ___baseHeight1, int32_t* ___roofType2, float* ___roofHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBuiltIn::AnalizeHouseTags(OnlineMapsOSMWay,UnityEngine.Material&,UnityEngine.Material&,System.Single&)
extern "C"  void OnlineMapsBuildingBuiltIn_AnalizeHouseTags_m3889634566 (Il2CppObject * __this /* static, unused */, OnlineMapsOSMWay_t3319895272 * ___way0, Material_t193706927 ** ___wallMaterial1, Material_t193706927 ** ___roofMaterial2, float* ___baseHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBuildingBase OnlineMapsBuildingBuiltIn::Create(OnlineMapsBuildings,OnlineMapsOSMWay,System.Collections.Generic.Dictionary`2<System.String,OnlineMapsOSMNode>)
extern "C"  OnlineMapsBuildingBase_t650727021 * OnlineMapsBuildingBuiltIn_Create_m1034639155 (Il2CppObject * __this /* static, unused */, OnlineMapsBuildings_t3411229051 * ___container0, OnlineMapsOSMWay_t3319895272 * ___way1, Dictionary_2_t1003802369 * ___nodes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBuiltIn::CreateHouseRoof(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single,System.Single,OnlineMapsBuildingBase/RoofType)
extern "C"  void OnlineMapsBuildingBuiltIn_CreateHouseRoof_m738110347 (OnlineMapsBuildingBuiltIn_t544190665 * __this, List_1_t1612828712 * ___baseVerticles0, float ___baseHeight1, float ___roofHeight2, int32_t ___roofType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBuiltIn::CreateHouseRoofDome(System.Single,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void OnlineMapsBuildingBuiltIn_CreateHouseRoofDome_m804215084 (Il2CppObject * __this /* static, unused */, float ___height0, List_1_t1612828712 * ___vertices1, List_1_t1440998580 * ___triangles2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBuiltIn::CreateHouseRoofTriangles(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>,OnlineMapsBuildingBase/RoofType,System.Single[],System.Single,System.Single,System.Collections.Generic.List`1<System.Int32>&)
extern "C"  void OnlineMapsBuildingBuiltIn_CreateHouseRoofTriangles_m2150410745 (Il2CppObject * __this /* static, unused */, int32_t ___countVertices0, List_1_t1612828712 * ___vertices1, int32_t ___roofType2, SingleU5BU5D_t577127397* ___roofPoints3, float ___baseHeight4, float ___roofHeight5, List_1_t1440998580 ** ___triangles6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsBuildingBuiltIn::CreateHouseRoofVerticles(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single[],System.Single)
extern "C"  int32_t OnlineMapsBuildingBuiltIn_CreateHouseRoofVerticles_m1748125293 (Il2CppObject * __this /* static, unused */, List_1_t1612828712 * ___baseVerticles0, List_1_t1612828712 * ___verticles1, SingleU5BU5D_t577127397* ___roofPoints2, float ___baseHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBuiltIn::CreateHouseWall(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single,UnityEngine.Material,UnityEngine.Vector2)
extern "C"  void OnlineMapsBuildingBuiltIn_CreateHouseWall_m2316927802 (OnlineMapsBuildingBuiltIn_t544190665 * __this, List_1_t1612828712 * ___baseVerticles0, float ___baseHeight1, Material_t193706927 * ___material2, Vector2_t2243707579  ___materialScale3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBuiltIn::CreateHouseWallMesh(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single,System.Boolean)
extern "C"  void OnlineMapsBuildingBuiltIn_CreateHouseWallMesh_m3118456516 (OnlineMapsBuildingBuiltIn_t544190665 * __this, List_1_t1612828712 * ___baseVerticles0, float ___baseHeight1, bool ___inverted2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBuiltIn::CreateHouseWallTriangles(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Boolean)
extern "C"  void OnlineMapsBuildingBuiltIn_CreateHouseWallTriangles_m1208577927 (Il2CppObject * __this /* static, unused */, List_1_t1612828712 * ___vertices0, bool ___reversed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsBuildingBuiltIn::CreateHouseWallVerticles(System.Single,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  bool OnlineMapsBuildingBuiltIn_CreateHouseWallVerticles_m1799995026 (OnlineMapsBuildingBuiltIn_t544190665 * __this, float ___baseHeight0, List_1_t1612828712 * ___baseVerticles1, List_1_t1612828712 * ___vertices2, List_1_t1612828711 * ___uvs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuildingBuiltIn::Dispose()
extern "C"  void OnlineMapsBuildingBuiltIn_Dispose_m3571860283 (OnlineMapsBuildingBuiltIn_t544190665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBuildingMaterial OnlineMapsBuildingBuiltIn::GetRandomMaterial(OnlineMapsBuildings)
extern "C"  OnlineMapsBuildingMaterial_t302108695 * OnlineMapsBuildingBuiltIn_GetRandomMaterial_m2662270705 (Il2CppObject * __this /* static, unused */, OnlineMapsBuildings_t3411229051 * ___container0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color OnlineMapsBuildingBuiltIn::StringToColor(System.String)
extern "C"  Color_t2020392075  OnlineMapsBuildingBuiltIn_StringToColor_m3760972016 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OnlineMapsBuildingBuiltIn::<CreateHouseRoofDome>m__0(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  OnlineMapsBuildingBuiltIn_U3CCreateHouseRoofDomeU3Em__0_m330362688 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___current0, Vector3_t2243707580  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
