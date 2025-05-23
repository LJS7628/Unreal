// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Components/DS1AttributeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1AttributeComponent() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UDS1AttributeComponent();
DS1_API UClass* Z_Construct_UClass_UDS1AttributeComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UDS1AttributeComponent
void UDS1AttributeComponent::StaticRegisterNativesUDS1AttributeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1AttributeComponent);
UClass* Z_Construct_UClass_UDS1AttributeComponent_NoRegister()
{
	return UDS1AttributeComponent::StaticClass();
}
struct Z_Construct_UClass_UDS1AttributeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DS1AttributeComponent.h" },
		{ "ModuleRelativePath", "Components/DS1AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Components/DS1AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Components/DS1AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Components/DS1AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/DS1AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/DS1AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseStat_MetaData[] = {
		{ "ModuleRelativePath", "Components/DS1AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefenseStat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS1AttributeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS1AttributeComponent_Statics::NewProp_BaseStamina = { "BaseStamina", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1AttributeComponent, BaseStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseStamina_MetaData), NewProp_BaseStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS1AttributeComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1AttributeComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS1AttributeComponent_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1AttributeComponent, StaminaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenRate_MetaData), NewProp_StaminaRegenRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS1AttributeComponent_Statics::NewProp_BaseHealth = { "BaseHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1AttributeComponent, BaseHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseHealth_MetaData), NewProp_BaseHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS1AttributeComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1AttributeComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS1AttributeComponent_Statics::NewProp_DefenseStat = { "DefenseStat", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1AttributeComponent, DefenseStat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseStat_MetaData), NewProp_DefenseStat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS1AttributeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AttributeComponent_Statics::NewProp_BaseStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AttributeComponent_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AttributeComponent_Statics::NewProp_StaminaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AttributeComponent_Statics::NewProp_BaseHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AttributeComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AttributeComponent_Statics::NewProp_DefenseStat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1AttributeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS1AttributeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1AttributeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1AttributeComponent_Statics::ClassParams = {
	&UDS1AttributeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDS1AttributeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS1AttributeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1AttributeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1AttributeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1AttributeComponent()
{
	if (!Z_Registration_Info_UClass_UDS1AttributeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1AttributeComponent.OuterSingleton, Z_Construct_UClass_UDS1AttributeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1AttributeComponent.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1AttributeComponent>()
{
	return UDS1AttributeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1AttributeComponent);
UDS1AttributeComponent::~UDS1AttributeComponent() {}
// End Class UDS1AttributeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1AttributeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1AttributeComponent, UDS1AttributeComponent::StaticClass, TEXT("UDS1AttributeComponent"), &Z_Registration_Info_UClass_UDS1AttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1AttributeComponent), 1864628702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1AttributeComponent_h_2494791854(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1AttributeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1AttributeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
