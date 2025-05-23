// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Animation/AnimNotifyState_DS1RotateTo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_DS1RotateTo() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UAnimNotifyState_DS1RotateTo();
DS1_API UClass* Z_Construct_UClass_UAnimNotifyState_DS1RotateTo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UAnimNotifyState_DS1RotateTo
void UAnimNotifyState_DS1RotateTo::StaticRegisterNativesUAnimNotifyState_DS1RotateTo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_DS1RotateTo);
UClass* Z_Construct_UClass_UAnimNotifyState_DS1RotateTo_NoRegister()
{
	return UAnimNotifyState_DS1RotateTo::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_DS1RotateTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "DisplayName", "Rotate To" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotifyState_DS1RotateTo.h" },
		{ "ModuleRelativePath", "Animation/AnimNotifyState_DS1RotateTo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_DS1RotateTo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_DS1RotateTo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DS1RotateTo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_DS1RotateTo_Statics::ClassParams = {
	&UAnimNotifyState_DS1RotateTo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DS1RotateTo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_DS1RotateTo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_DS1RotateTo()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_DS1RotateTo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_DS1RotateTo.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_DS1RotateTo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_DS1RotateTo.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UAnimNotifyState_DS1RotateTo>()
{
	return UAnimNotifyState_DS1RotateTo::StaticClass();
}
UAnimNotifyState_DS1RotateTo::UAnimNotifyState_DS1RotateTo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_DS1RotateTo);
UAnimNotifyState_DS1RotateTo::~UAnimNotifyState_DS1RotateTo() {}
// End Class UAnimNotifyState_DS1RotateTo

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1RotateTo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_DS1RotateTo, UAnimNotifyState_DS1RotateTo::StaticClass, TEXT("UAnimNotifyState_DS1RotateTo"), &Z_Registration_Info_UClass_UAnimNotifyState_DS1RotateTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_DS1RotateTo), 2360044678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1RotateTo_h_3178359563(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1RotateTo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1RotateTo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
