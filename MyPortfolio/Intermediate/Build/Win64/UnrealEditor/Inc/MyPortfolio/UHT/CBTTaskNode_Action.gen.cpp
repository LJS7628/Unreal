// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/BehaviorTree/CBTTaskNode_Action.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTTaskNode_Action() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCBTTaskNode_Action();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCBTTaskNode_Action_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCBTTaskNode_Action::StaticRegisterNativesUCBTTaskNode_Action()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCBTTaskNode_Action);
	UClass* Z_Construct_UClass_UCBTTaskNode_Action_NoRegister()
	{
		return UCBTTaskNode_Action::StaticClass();
	}
	struct Z_Construct_UClass_UCBTTaskNode_Action_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTTaskNode_Action_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Action_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_Action_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CBTTaskNode_Action.h" },
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_Action.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTTaskNode_Action_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTTaskNode_Action>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCBTTaskNode_Action_Statics::ClassParams = {
		&UCBTTaskNode_Action::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Action_Statics::Class_MetaDataParams), Z_Construct_UClass_UCBTTaskNode_Action_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCBTTaskNode_Action()
	{
		if (!Z_Registration_Info_UClass_UCBTTaskNode_Action.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCBTTaskNode_Action.OuterSingleton, Z_Construct_UClass_UCBTTaskNode_Action_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCBTTaskNode_Action.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCBTTaskNode_Action>()
	{
		return UCBTTaskNode_Action::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTTaskNode_Action);
	UCBTTaskNode_Action::~UCBTTaskNode_Action() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Action_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Action_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCBTTaskNode_Action, UCBTTaskNode_Action::StaticClass, TEXT("UCBTTaskNode_Action"), &Z_Registration_Info_UClass_UCBTTaskNode_Action, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCBTTaskNode_Action), 1547790131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Action_h_3815159764(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Action_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Action_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
