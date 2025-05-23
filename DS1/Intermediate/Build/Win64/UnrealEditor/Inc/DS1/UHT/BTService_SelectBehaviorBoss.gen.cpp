// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/AI/Service/BTService_SelectBehaviorBoss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_SelectBehaviorBoss() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UBTService_SelectBehavior();
DS1_API UClass* Z_Construct_UClass_UBTService_SelectBehaviorBoss();
DS1_API UClass* Z_Construct_UClass_UBTService_SelectBehaviorBoss_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UBTService_SelectBehaviorBoss
void UBTService_SelectBehaviorBoss::StaticRegisterNativesUBTService_SelectBehaviorBoss()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_SelectBehaviorBoss);
UClass* Z_Construct_UClass_UBTService_SelectBehaviorBoss_NoRegister()
{
	return UBTService_SelectBehaviorBoss::StaticClass();
}
struct Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AI/Service/BTService_SelectBehaviorBoss.h" },
		{ "ModuleRelativePath", "AI/Service/BTService_SelectBehaviorBoss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaCheckValue_MetaData[] = {
		{ "Category", "BTService_SelectBehaviorBoss" },
		{ "ModuleRelativePath", "AI/Service/BTService_SelectBehaviorBoss.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaCheckValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_SelectBehaviorBoss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics::NewProp_StaminaCheckValue = { "StaminaCheckValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectBehaviorBoss, StaminaCheckValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaCheckValue_MetaData), NewProp_StaminaCheckValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics::NewProp_StaminaCheckValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_SelectBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics::ClassParams = {
	&UBTService_SelectBehaviorBoss::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_SelectBehaviorBoss()
{
	if (!Z_Registration_Info_UClass_UBTService_SelectBehaviorBoss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_SelectBehaviorBoss.OuterSingleton, Z_Construct_UClass_UBTService_SelectBehaviorBoss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_SelectBehaviorBoss.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UBTService_SelectBehaviorBoss>()
{
	return UBTService_SelectBehaviorBoss::StaticClass();
}
UBTService_SelectBehaviorBoss::UBTService_SelectBehaviorBoss() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_SelectBehaviorBoss);
UBTService_SelectBehaviorBoss::~UBTService_SelectBehaviorBoss() {}
// End Class UBTService_SelectBehaviorBoss

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Service_BTService_SelectBehaviorBoss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_SelectBehaviorBoss, UBTService_SelectBehaviorBoss::StaticClass, TEXT("UBTService_SelectBehaviorBoss"), &Z_Registration_Info_UClass_UBTService_SelectBehaviorBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_SelectBehaviorBoss), 1405811698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Service_BTService_SelectBehaviorBoss_h_2759491637(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Service_BTService_SelectBehaviorBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Service_BTService_SelectBehaviorBoss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
