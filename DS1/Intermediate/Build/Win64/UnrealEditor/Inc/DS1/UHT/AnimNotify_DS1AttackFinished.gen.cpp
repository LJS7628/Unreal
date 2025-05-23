// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Animation/AnimNotify_DS1AttackFinished.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_DS1AttackFinished() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UAnimNotify_DS1AttackFinished();
DS1_API UClass* Z_Construct_UClass_UAnimNotify_DS1AttackFinished_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UAnimNotify_DS1AttackFinished
void UAnimNotify_DS1AttackFinished::StaticRegisterNativesUAnimNotify_DS1AttackFinished()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_DS1AttackFinished);
UClass* Z_Construct_UClass_UAnimNotify_DS1AttackFinished_NoRegister()
{
	return UAnimNotify_DS1AttackFinished::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Attack Finished" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotify_DS1AttackFinished.h" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DS1AttackFinished.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboResetDelay_MetaData[] = {
		{ "Category", "AnimNotify_DS1AttackFinished" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DS1AttackFinished.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComboResetDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_DS1AttackFinished>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics::NewProp_ComboResetDelay = { "ComboResetDelay", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_DS1AttackFinished, ComboResetDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboResetDelay_MetaData), NewProp_ComboResetDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics::NewProp_ComboResetDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics::ClassParams = {
	&UAnimNotify_DS1AttackFinished::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_DS1AttackFinished()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_DS1AttackFinished.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_DS1AttackFinished.OuterSingleton, Z_Construct_UClass_UAnimNotify_DS1AttackFinished_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_DS1AttackFinished.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UAnimNotify_DS1AttackFinished>()
{
	return UAnimNotify_DS1AttackFinished::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_DS1AttackFinished);
UAnimNotify_DS1AttackFinished::~UAnimNotify_DS1AttackFinished() {}
// End Class UAnimNotify_DS1AttackFinished

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1AttackFinished_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_DS1AttackFinished, UAnimNotify_DS1AttackFinished::StaticClass, TEXT("UAnimNotify_DS1AttackFinished"), &Z_Registration_Info_UClass_UAnimNotify_DS1AttackFinished, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_DS1AttackFinished), 3520253315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1AttackFinished_h_2953942740(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1AttackFinished_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1AttackFinished_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
