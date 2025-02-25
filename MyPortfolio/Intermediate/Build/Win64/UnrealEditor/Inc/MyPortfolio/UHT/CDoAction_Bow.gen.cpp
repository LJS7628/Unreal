// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/DoActions/CDoAction_Bow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction_Bow() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACArrow_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction_Bow();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction_Bow_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCDoAction_Bow::StaticRegisterNativesUCDoAction_Bow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCDoAction_Bow);
	UClass* Z_Construct_UClass_UCDoAction_Bow_NoRegister()
	{
		return UCDoAction_Bow::StaticClass();
	}
	struct Z_Construct_UClass_UCDoAction_Bow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ArrowClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDoAction_Bow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCDoAction,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Bow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/DoActions/CDoAction_Bow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Bow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass_MetaData[] = {
		{ "Category", "Arrow" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Bow.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass = { "ArrowClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCDoAction_Bow, ArrowClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACArrow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass_MetaData), Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCDoAction_Bow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDoAction_Bow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDoAction_Bow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCDoAction_Bow_Statics::ClassParams = {
		&UCDoAction_Bow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCDoAction_Bow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::Class_MetaDataParams), Z_Construct_UClass_UCDoAction_Bow_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCDoAction_Bow()
	{
		if (!Z_Registration_Info_UClass_UCDoAction_Bow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCDoAction_Bow.OuterSingleton, Z_Construct_UClass_UCDoAction_Bow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCDoAction_Bow.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCDoAction_Bow>()
	{
		return UCDoAction_Bow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDoAction_Bow);
	UCDoAction_Bow::~UCDoAction_Bow() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Bow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Bow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCDoAction_Bow, UCDoAction_Bow::StaticClass, TEXT("UCDoAction_Bow"), &Z_Registration_Info_UClass_UCDoAction_Bow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCDoAction_Bow), 2967925834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Bow_h_1317739733(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Bow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Bow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
