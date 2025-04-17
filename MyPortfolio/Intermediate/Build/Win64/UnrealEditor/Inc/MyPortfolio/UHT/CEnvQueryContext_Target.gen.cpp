// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/BehaviorTree/CEnvQueryContext_Target.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEnvQueryContext_Target() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCEnvQueryContext_Target();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCEnvQueryContext_Target_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCEnvQueryContext_Target::StaticRegisterNativesUCEnvQueryContext_Target()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCEnvQueryContext_Target);
	UClass* Z_Construct_UClass_UCEnvQueryContext_Target_NoRegister()
	{
		return UCEnvQueryContext_Target::StaticClass();
	}
	struct Z_Construct_UClass_UCEnvQueryContext_Target_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCEnvQueryContext_Target_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCEnvQueryContext_Target_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCEnvQueryContext_Target_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CEnvQueryContext_Target.h" },
		{ "ModuleRelativePath", "BehaviorTree/CEnvQueryContext_Target.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCEnvQueryContext_Target_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCEnvQueryContext_Target>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCEnvQueryContext_Target_Statics::ClassParams = {
		&UCEnvQueryContext_Target::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCEnvQueryContext_Target_Statics::Class_MetaDataParams), Z_Construct_UClass_UCEnvQueryContext_Target_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCEnvQueryContext_Target()
	{
		if (!Z_Registration_Info_UClass_UCEnvQueryContext_Target.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCEnvQueryContext_Target.OuterSingleton, Z_Construct_UClass_UCEnvQueryContext_Target_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCEnvQueryContext_Target.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCEnvQueryContext_Target>()
	{
		return UCEnvQueryContext_Target::StaticClass();
	}
	UCEnvQueryContext_Target::UCEnvQueryContext_Target(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCEnvQueryContext_Target);
	UCEnvQueryContext_Target::~UCEnvQueryContext_Target() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CEnvQueryContext_Target_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CEnvQueryContext_Target_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCEnvQueryContext_Target, UCEnvQueryContext_Target::StaticClass, TEXT("UCEnvQueryContext_Target"), &Z_Registration_Info_UClass_UCEnvQueryContext_Target, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCEnvQueryContext_Target), 965539014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CEnvQueryContext_Target_h_4181382967(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CEnvQueryContext_Target_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CEnvQueryContext_Target_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
