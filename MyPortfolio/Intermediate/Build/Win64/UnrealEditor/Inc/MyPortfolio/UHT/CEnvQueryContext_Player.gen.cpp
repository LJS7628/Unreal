// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/BehaviorTree/CEnvQueryContext_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEnvQueryContext_Player() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCEnvQueryContext_Player();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCEnvQueryContext_Player_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCEnvQueryContext_Player::StaticRegisterNativesUCEnvQueryContext_Player()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCEnvQueryContext_Player);
	UClass* Z_Construct_UClass_UCEnvQueryContext_Player_NoRegister()
	{
		return UCEnvQueryContext_Player::StaticClass();
	}
	struct Z_Construct_UClass_UCEnvQueryContext_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCEnvQueryContext_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCEnvQueryContext_Player_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCEnvQueryContext_Player_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CEnvQueryContext_Player.h" },
		{ "ModuleRelativePath", "BehaviorTree/CEnvQueryContext_Player.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCEnvQueryContext_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCEnvQueryContext_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCEnvQueryContext_Player_Statics::ClassParams = {
		&UCEnvQueryContext_Player::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCEnvQueryContext_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_UCEnvQueryContext_Player_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCEnvQueryContext_Player()
	{
		if (!Z_Registration_Info_UClass_UCEnvQueryContext_Player.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCEnvQueryContext_Player.OuterSingleton, Z_Construct_UClass_UCEnvQueryContext_Player_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCEnvQueryContext_Player.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCEnvQueryContext_Player>()
	{
		return UCEnvQueryContext_Player::StaticClass();
	}
	UCEnvQueryContext_Player::UCEnvQueryContext_Player(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCEnvQueryContext_Player);
	UCEnvQueryContext_Player::~UCEnvQueryContext_Player() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CEnvQueryContext_Player_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CEnvQueryContext_Player_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCEnvQueryContext_Player, UCEnvQueryContext_Player::StaticClass, TEXT("UCEnvQueryContext_Player"), &Z_Registration_Info_UClass_UCEnvQueryContext_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCEnvQueryContext_Player), 1790384930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CEnvQueryContext_Player_h_1103750502(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CEnvQueryContext_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CEnvQueryContext_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
