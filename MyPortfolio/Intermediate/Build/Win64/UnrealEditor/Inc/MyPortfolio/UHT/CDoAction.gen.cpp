// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/CDoAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCDoAction::StaticRegisterNativesUCDoAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCDoAction);
	UClass* Z_Construct_UClass_UCDoAction_NoRegister()
	{
		return UCDoAction::StaticClass();
	}
	struct Z_Construct_UClass_UCDoAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDoAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/CDoAction.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDoAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDoAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCDoAction_Statics::ClassParams = {
		&UCDoAction::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UCDoAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCDoAction()
	{
		if (!Z_Registration_Info_UClass_UCDoAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCDoAction.OuterSingleton, Z_Construct_UClass_UCDoAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCDoAction.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCDoAction>()
	{
		return UCDoAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDoAction);
	UCDoAction::~UCDoAction() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCDoAction, UCDoAction::StaticClass, TEXT("UCDoAction"), &Z_Registration_Info_UClass_UCDoAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCDoAction), 1374400752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_3025500786(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
