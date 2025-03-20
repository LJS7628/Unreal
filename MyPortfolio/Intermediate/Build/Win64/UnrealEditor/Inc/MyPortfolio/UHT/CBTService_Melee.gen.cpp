// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/BehaviorTree/CBTService_Melee.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTService_Melee() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCBTService_Melee();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCBTService_Melee_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCBTService_Melee::StaticRegisterNativesUCBTService_Melee()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCBTService_Melee);
	UClass* Z_Construct_UClass_UCBTService_Melee_NoRegister()
	{
		return UCBTService_Melee::StaticClass();
	}
	struct Z_Construct_UClass_UCBTService_Melee_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTService_Melee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTService_Melee_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTService_Melee_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CBTService_Melee.h" },
		{ "ModuleRelativePath", "BehaviorTree/CBTService_Melee.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTService_Melee_Statics::NewProp_ActionRange_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "BehaviorTree/CBTService_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCBTService_Melee_Statics::NewProp_ActionRange = { "ActionRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCBTService_Melee, ActionRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTService_Melee_Statics::NewProp_ActionRange_MetaData), Z_Construct_UClass_UCBTService_Melee_Statics::NewProp_ActionRange_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCBTService_Melee_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTService_Melee_Statics::NewProp_ActionRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTService_Melee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTService_Melee>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCBTService_Melee_Statics::ClassParams = {
		&UCBTService_Melee::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCBTService_Melee_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCBTService_Melee_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTService_Melee_Statics::Class_MetaDataParams), Z_Construct_UClass_UCBTService_Melee_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTService_Melee_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCBTService_Melee()
	{
		if (!Z_Registration_Info_UClass_UCBTService_Melee.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCBTService_Melee.OuterSingleton, Z_Construct_UClass_UCBTService_Melee_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCBTService_Melee.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCBTService_Melee>()
	{
		return UCBTService_Melee::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTService_Melee);
	UCBTService_Melee::~UCBTService_Melee() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTService_Melee_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTService_Melee_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCBTService_Melee, UCBTService_Melee::StaticClass, TEXT("UCBTService_Melee"), &Z_Registration_Info_UClass_UCBTService_Melee, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCBTService_Melee), 1783259169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTService_Melee_h_3366500600(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTService_Melee_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTService_Melee_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
