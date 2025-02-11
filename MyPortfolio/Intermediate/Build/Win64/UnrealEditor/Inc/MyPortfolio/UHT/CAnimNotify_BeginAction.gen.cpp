// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Notifies/CAnimNotify_BeginAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotify_BeginAction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotify_BeginAction();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotify_BeginAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCAnimNotify_BeginAction::StaticRegisterNativesUCAnimNotify_BeginAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCAnimNotify_BeginAction);
	UClass* Z_Construct_UClass_UCAnimNotify_BeginAction_NoRegister()
	{
		return UCAnimNotify_BeginAction::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotify_BeginAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotify_BeginAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_BeginAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_BeginAction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotify_BeginAction.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_BeginAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotify_BeginAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotify_BeginAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotify_BeginAction_Statics::ClassParams = {
		&UCAnimNotify_BeginAction::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_BeginAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UCAnimNotify_BeginAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCAnimNotify_BeginAction()
	{
		if (!Z_Registration_Info_UClass_UCAnimNotify_BeginAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCAnimNotify_BeginAction.OuterSingleton, Z_Construct_UClass_UCAnimNotify_BeginAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCAnimNotify_BeginAction.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCAnimNotify_BeginAction>()
	{
		return UCAnimNotify_BeginAction::StaticClass();
	}
	UCAnimNotify_BeginAction::UCAnimNotify_BeginAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotify_BeginAction);
	UCAnimNotify_BeginAction::~UCAnimNotify_BeginAction() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_BeginAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_BeginAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCAnimNotify_BeginAction, UCAnimNotify_BeginAction::StaticClass, TEXT("UCAnimNotify_BeginAction"), &Z_Registration_Info_UClass_UCAnimNotify_BeginAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCAnimNotify_BeginAction), 2380589844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_BeginAction_h_1889992556(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_BeginAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_BeginAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
