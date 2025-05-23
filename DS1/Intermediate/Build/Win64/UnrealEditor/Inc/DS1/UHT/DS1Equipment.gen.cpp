// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Equipments/DS1Equipment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1Equipment() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_ADS1Equipment();
DS1_API UClass* Z_Construct_UClass_ADS1Equipment_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1Equipment
void ADS1Equipment::StaticRegisterNativesADS1Equipment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1Equipment);
UClass* Z_Construct_UClass_ADS1Equipment_NoRegister()
{
	return ADS1Equipment::StaticClass();
}
struct Z_Construct_UClass_ADS1Equipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Equipments/DS1Equipment.h" },
		{ "ModuleRelativePath", "Equipments/DS1Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshAsset_MetaData[] = {
		{ "Category", "Equipment | Mesh" },
		{ "ModuleRelativePath", "Equipments/DS1Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Equipment | Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipments/DS1Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentIcon_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipments/DS1Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1Equipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Equipment_Statics::NewProp_MeshAsset = { "MeshAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Equipment, MeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshAsset_MetaData), NewProp_MeshAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Equipment_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Equipment, Mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Equipment_Statics::NewProp_EquipmentIcon = { "EquipmentIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Equipment, EquipmentIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentIcon_MetaData), NewProp_EquipmentIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADS1Equipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Equipment_Statics::NewProp_MeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Equipment_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Equipment_Statics::NewProp_EquipmentIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Equipment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADS1Equipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Equipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1Equipment_Statics::ClassParams = {
	&ADS1Equipment::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADS1Equipment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Equipment_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Equipment_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1Equipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1Equipment()
{
	if (!Z_Registration_Info_UClass_ADS1Equipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1Equipment.OuterSingleton, Z_Construct_UClass_ADS1Equipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1Equipment.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1Equipment>()
{
	return ADS1Equipment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1Equipment);
ADS1Equipment::~ADS1Equipment() {}
// End Class ADS1Equipment

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Equipment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1Equipment, ADS1Equipment::StaticClass, TEXT("ADS1Equipment"), &Z_Registration_Info_UClass_ADS1Equipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1Equipment), 303146277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Equipment_h_1864675192(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Equipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Equipment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
