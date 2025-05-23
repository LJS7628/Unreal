// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Animation/AnimNotifyState_DS1Parry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_DS1Parry() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UAnimNotifyState_DS1Parry();
DS1_API UClass* Z_Construct_UClass_UAnimNotifyState_DS1Parry_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UAnimNotifyState_DS1Parry
void UAnimNotifyState_DS1Parry::StaticRegisterNativesUAnimNotifyState_DS1Parry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_DS1Parry);
UClass* Z_Construct_UClass_UAnimNotifyState_DS1Parry_NoRegister()
{
	return UAnimNotifyState_DS1Parry::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_DS1Parry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "DisplayName", "Parry State" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotifyState_DS1Parry.h" },
		{ "ModuleRelativePath", "Animation/AnimNotifyState_DS1Parry.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_DS1Parry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_DS1Parry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DS1Parry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_DS1Parry_Statics::ClassParams = {
	&UAnimNotifyState_DS1Parry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DS1Parry_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_DS1Parry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_DS1Parry()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_DS1Parry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_DS1Parry.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_DS1Parry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_DS1Parry.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UAnimNotifyState_DS1Parry>()
{
	return UAnimNotifyState_DS1Parry::StaticClass();
}
UAnimNotifyState_DS1Parry::UAnimNotifyState_DS1Parry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_DS1Parry);
UAnimNotifyState_DS1Parry::~UAnimNotifyState_DS1Parry() {}
// End Class UAnimNotifyState_DS1Parry

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1Parry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_DS1Parry, UAnimNotifyState_DS1Parry::StaticClass, TEXT("UAnimNotifyState_DS1Parry"), &Z_Registration_Info_UClass_UAnimNotifyState_DS1Parry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_DS1Parry), 3901878629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1Parry_h_1275426964(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1Parry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1Parry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
