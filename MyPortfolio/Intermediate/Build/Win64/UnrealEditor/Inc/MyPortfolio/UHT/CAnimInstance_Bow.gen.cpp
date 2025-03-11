// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/CAnimInstance_Bow.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimInstance_Bow() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimInstance_Bow();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimInstance_Bow_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCAnimInstance_Bow::StaticRegisterNativesUCAnimInstance_Bow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCAnimInstance_Bow);
	UClass* Z_Construct_UClass_UCAnimInstance_Bow_NoRegister()
	{
		return UCAnimInstance_Bow::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimInstance_Bow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bending_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bending;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimInstance_Bow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Bow_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Bow_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Weapons/CAnimInstance_Bow.h" },
		{ "ModuleRelativePath", "Weapons/CAnimInstance_Bow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Bow_Statics::NewProp_Bending_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/CAnimInstance_Bow.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCAnimInstance_Bow_Statics::NewProp_Bending = { "Bending", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCAnimInstance_Bow, Bending), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Bow_Statics::NewProp_Bending_MetaData), Z_Construct_UClass_UCAnimInstance_Bow_Statics::NewProp_Bending_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCAnimInstance_Bow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Bow_Statics::NewProp_Bending,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimInstance_Bow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimInstance_Bow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCAnimInstance_Bow_Statics::ClassParams = {
		&UCAnimInstance_Bow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCAnimInstance_Bow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Bow_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Bow_Statics::Class_MetaDataParams), Z_Construct_UClass_UCAnimInstance_Bow_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Bow_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCAnimInstance_Bow()
	{
		if (!Z_Registration_Info_UClass_UCAnimInstance_Bow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCAnimInstance_Bow.OuterSingleton, Z_Construct_UClass_UCAnimInstance_Bow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCAnimInstance_Bow.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCAnimInstance_Bow>()
	{
		return UCAnimInstance_Bow::StaticClass();
	}
	UCAnimInstance_Bow::UCAnimInstance_Bow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimInstance_Bow);
	UCAnimInstance_Bow::~UCAnimInstance_Bow() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAnimInstance_Bow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAnimInstance_Bow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCAnimInstance_Bow, UCAnimInstance_Bow::StaticClass, TEXT("UCAnimInstance_Bow"), &Z_Registration_Info_UClass_UCAnimInstance_Bow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCAnimInstance_Bow), 2526103069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAnimInstance_Bow_h_3187795571(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAnimInstance_Bow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAnimInstance_Bow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
