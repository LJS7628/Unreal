// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Items/DS1PickupItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1PickupItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DS1_API UClass* Z_Construct_UClass_ADS1Equipment_NoRegister();
DS1_API UClass* Z_Construct_UClass_ADS1PickupItem();
DS1_API UClass* Z_Construct_UClass_ADS1PickupItem_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1Interact_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1PickupItem
void ADS1PickupItem::StaticRegisterNativesADS1PickupItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1PickupItem);
UClass* Z_Construct_UClass_ADS1PickupItem_NoRegister()
{
	return ADS1PickupItem::StaticClass();
}
struct Z_Construct_UClass_ADS1PickupItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/DS1PickupItem.h" },
		{ "ModuleRelativePath", "Items/DS1PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Items/DS1PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentClass_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/DS1PickupItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1PickupItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1PickupItem_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1PickupItem, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADS1PickupItem_Statics::NewProp_EquipmentClass = { "EquipmentClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1PickupItem, EquipmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADS1Equipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentClass_MetaData), NewProp_EquipmentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADS1PickupItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1PickupItem_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1PickupItem_Statics::NewProp_EquipmentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1PickupItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADS1PickupItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1PickupItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADS1PickupItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDS1Interact_NoRegister, (int32)VTABLE_OFFSET(ADS1PickupItem, IDS1Interact), false },  // 2828264608
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1PickupItem_Statics::ClassParams = {
	&ADS1PickupItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADS1PickupItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADS1PickupItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1PickupItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1PickupItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1PickupItem()
{
	if (!Z_Registration_Info_UClass_ADS1PickupItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1PickupItem.OuterSingleton, Z_Construct_UClass_ADS1PickupItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1PickupItem.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1PickupItem>()
{
	return ADS1PickupItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1PickupItem);
ADS1PickupItem::~ADS1PickupItem() {}
// End Class ADS1PickupItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Items_DS1PickupItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1PickupItem, ADS1PickupItem::StaticClass, TEXT("ADS1PickupItem"), &Z_Registration_Info_UClass_ADS1PickupItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1PickupItem), 3929881860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Items_DS1PickupItem_h_1551896972(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Items_DS1PickupItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Items_DS1PickupItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
