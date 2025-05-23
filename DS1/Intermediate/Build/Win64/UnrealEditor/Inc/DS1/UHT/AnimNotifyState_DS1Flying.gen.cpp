// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Animation/AnimNotifyState_DS1Flying.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_DS1Flying() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UAnimNotifyState_DS1Flying();
DS1_API UClass* Z_Construct_UClass_UAnimNotifyState_DS1Flying_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UAnimNotifyState_DS1Flying
void UAnimNotifyState_DS1Flying::StaticRegisterNativesUAnimNotifyState_DS1Flying()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_DS1Flying);
UClass* Z_Construct_UClass_UAnimNotifyState_DS1Flying_NoRegister()
{
	return UAnimNotifyState_DS1Flying::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_DS1Flying_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "DisplayName", "Flying" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotifyState_DS1Flying.h" },
		{ "ModuleRelativePath", "Animation/AnimNotifyState_DS1Flying.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_DS1Flying>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_DS1Flying_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DS1Flying_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_DS1Flying_Statics::ClassParams = {
	&UAnimNotifyState_DS1Flying::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DS1Flying_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_DS1Flying_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_DS1Flying()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_DS1Flying.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_DS1Flying.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_DS1Flying_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_DS1Flying.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UAnimNotifyState_DS1Flying>()
{
	return UAnimNotifyState_DS1Flying::StaticClass();
}
UAnimNotifyState_DS1Flying::UAnimNotifyState_DS1Flying(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_DS1Flying);
UAnimNotifyState_DS1Flying::~UAnimNotifyState_DS1Flying() {}
// End Class UAnimNotifyState_DS1Flying

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1Flying_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_DS1Flying, UAnimNotifyState_DS1Flying::StaticClass, TEXT("UAnimNotifyState_DS1Flying"), &Z_Registration_Info_UClass_UAnimNotifyState_DS1Flying, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_DS1Flying), 149777443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1Flying_h_1890135092(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1Flying_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1Flying_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
