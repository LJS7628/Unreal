// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Notifies/CAnimNotify_BowString.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotify_BowString() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotify_BowString();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotify_BowString_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCAnimNotify_BowString::StaticRegisterNativesUCAnimNotify_BowString()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCAnimNotify_BowString);
	UClass* Z_Construct_UClass_UCAnimNotify_BowString_NoRegister()
	{
		return UCAnimNotify_BowString::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotify_BowString_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotify_BowString_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_BowString_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_BowString_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotify_BowString.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_BowString.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotify_BowString_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotify_BowString>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotify_BowString_Statics::ClassParams = {
		&UCAnimNotify_BowString::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_BowString_Statics::Class_MetaDataParams), Z_Construct_UClass_UCAnimNotify_BowString_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCAnimNotify_BowString()
	{
		if (!Z_Registration_Info_UClass_UCAnimNotify_BowString.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCAnimNotify_BowString.OuterSingleton, Z_Construct_UClass_UCAnimNotify_BowString_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCAnimNotify_BowString.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCAnimNotify_BowString>()
	{
		return UCAnimNotify_BowString::StaticClass();
	}
	UCAnimNotify_BowString::UCAnimNotify_BowString(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotify_BowString);
	UCAnimNotify_BowString::~UCAnimNotify_BowString() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_BowString_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_BowString_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCAnimNotify_BowString, UCAnimNotify_BowString::StaticClass, TEXT("UCAnimNotify_BowString"), &Z_Registration_Info_UClass_UCAnimNotify_BowString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCAnimNotify_BowString), 720857137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_BowString_h_3294987341(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_BowString_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_BowString_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
