// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/CSubAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSubAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCSubAction();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCSubAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCSubAction::StaticRegisterNativesUCSubAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSubAction);
	UClass* Z_Construct_UClass_UCSubAction_NoRegister()
	{
		return UCSubAction::StaticClass();
	}
	struct Z_Construct_UClass_UCSubAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSubAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/CSubAction.h" },
		{ "ModuleRelativePath", "Weapons/CSubAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSubAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSubAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSubAction_Statics::ClassParams = {
		&UCSubAction::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UCSubAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCSubAction()
	{
		if (!Z_Registration_Info_UClass_UCSubAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSubAction.OuterSingleton, Z_Construct_UClass_UCSubAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSubAction.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCSubAction>()
	{
		return UCSubAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSubAction);
	UCSubAction::~UCSubAction() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CSubAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CSubAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSubAction, UCSubAction::StaticClass, TEXT("UCSubAction"), &Z_Registration_Info_UClass_UCSubAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSubAction), 2315981503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CSubAction_h_3050311612(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CSubAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CSubAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
