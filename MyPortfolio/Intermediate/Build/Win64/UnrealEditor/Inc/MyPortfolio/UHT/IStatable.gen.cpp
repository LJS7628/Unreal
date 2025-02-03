// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Interfaces/IStatable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIStatable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UIStatable();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UIStatable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UIStatable::StaticRegisterNativesUIStatable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIStatable);
	UClass* Z_Construct_UClass_UIStatable_NoRegister()
	{
		return UIStatable::StaticClass();
	}
	struct Z_Construct_UClass_UIStatable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIStatable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIStatable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIStatable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/IStatable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIStatable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIStatable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIStatable_Statics::ClassParams = {
		&UIStatable::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIStatable_Statics::Class_MetaDataParams), Z_Construct_UClass_UIStatable_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIStatable()
	{
		if (!Z_Registration_Info_UClass_UIStatable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIStatable.OuterSingleton, Z_Construct_UClass_UIStatable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIStatable.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UIStatable>()
	{
		return UIStatable::StaticClass();
	}
	UIStatable::UIStatable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIStatable);
	UIStatable::~UIStatable() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIStatable, UIStatable::StaticClass, TEXT("UIStatable"), &Z_Registration_Info_UClass_UIStatable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIStatable), 3651956757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_2604766143(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
