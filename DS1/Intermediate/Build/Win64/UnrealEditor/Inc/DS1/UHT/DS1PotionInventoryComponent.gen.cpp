// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Components/DS1PotionInventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1PotionInventoryComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DS1_API UClass* Z_Construct_UClass_ADS1Potion_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1PotionInventoryComponent();
DS1_API UClass* Z_Construct_UClass_UDS1PotionInventoryComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UDS1PotionInventoryComponent
void UDS1PotionInventoryComponent::StaticRegisterNativesUDS1PotionInventoryComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1PotionInventoryComponent);
UClass* Z_Construct_UClass_UDS1PotionInventoryComponent_NoRegister()
{
	return UDS1PotionInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UDS1PotionInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DS1PotionInventoryComponent.h" },
		{ "ModuleRelativePath", "Components/DS1PotionInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotionQuantity_MetaData[] = {
		{ "Category", "DS1PotionInventoryComponent" },
		{ "ModuleRelativePath", "Components/DS1PotionInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotionHealAmount_MetaData[] = {
		{ "Category", "DS1PotionInventoryComponent" },
		{ "ModuleRelativePath", "Components/DS1PotionInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotionSocketName_MetaData[] = {
		{ "Category", "DS1PotionInventoryComponent" },
		{ "ModuleRelativePath", "Components/DS1PotionInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotionClass_MetaData[] = {
		{ "Category", "DS1PotionInventoryComponent" },
		{ "ModuleRelativePath", "Components/DS1PotionInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotionActor_MetaData[] = {
		{ "ModuleRelativePath", "Components/DS1PotionInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PotionQuantity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PotionHealAmount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PotionSocketName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PotionClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PotionActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS1PotionInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::NewProp_PotionQuantity = { "PotionQuantity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1PotionInventoryComponent, PotionQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotionQuantity_MetaData), NewProp_PotionQuantity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::NewProp_PotionHealAmount = { "PotionHealAmount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1PotionInventoryComponent, PotionHealAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotionHealAmount_MetaData), NewProp_PotionHealAmount_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::NewProp_PotionSocketName = { "PotionSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1PotionInventoryComponent, PotionSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotionSocketName_MetaData), NewProp_PotionSocketName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::NewProp_PotionClass = { "PotionClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1PotionInventoryComponent, PotionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADS1Potion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotionClass_MetaData), NewProp_PotionClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::NewProp_PotionActor = { "PotionActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1PotionInventoryComponent, PotionActor), Z_Construct_UClass_ADS1Potion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotionActor_MetaData), NewProp_PotionActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::NewProp_PotionQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::NewProp_PotionHealAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::NewProp_PotionSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::NewProp_PotionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::NewProp_PotionActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::ClassParams = {
	&UDS1PotionInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1PotionInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UDS1PotionInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1PotionInventoryComponent.OuterSingleton, Z_Construct_UClass_UDS1PotionInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1PotionInventoryComponent.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1PotionInventoryComponent>()
{
	return UDS1PotionInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1PotionInventoryComponent);
UDS1PotionInventoryComponent::~UDS1PotionInventoryComponent() {}
// End Class UDS1PotionInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1PotionInventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1PotionInventoryComponent, UDS1PotionInventoryComponent::StaticClass, TEXT("UDS1PotionInventoryComponent"), &Z_Registration_Info_UClass_UDS1PotionInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1PotionInventoryComponent), 2862513485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1PotionInventoryComponent_h_3378296514(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1PotionInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1PotionInventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
