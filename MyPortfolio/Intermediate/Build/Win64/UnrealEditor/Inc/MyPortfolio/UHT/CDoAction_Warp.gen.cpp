// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/DoActions/CDoAction_Warp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction_Warp() {}
// Cross Module References
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction_Warp();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction_Warp_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCDoAction_Warp::StaticRegisterNativesUCDoAction_Warp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCDoAction_Warp);
	UClass* Z_Construct_UClass_UCDoAction_Warp_NoRegister()
	{
		return UCDoAction_Warp::StaticClass();
	}
	struct Z_Construct_UClass_UCDoAction_Warp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDoAction_Warp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCDoAction,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Warp_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Warp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/DoActions/CDoAction_Warp.h" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Warp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDoAction_Warp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDoAction_Warp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCDoAction_Warp_Statics::ClassParams = {
		&UCDoAction_Warp::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Warp_Statics::Class_MetaDataParams), Z_Construct_UClass_UCDoAction_Warp_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCDoAction_Warp()
	{
		if (!Z_Registration_Info_UClass_UCDoAction_Warp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCDoAction_Warp.OuterSingleton, Z_Construct_UClass_UCDoAction_Warp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCDoAction_Warp.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCDoAction_Warp>()
	{
		return UCDoAction_Warp::StaticClass();
	}
	UCDoAction_Warp::UCDoAction_Warp() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDoAction_Warp);
	UCDoAction_Warp::~UCDoAction_Warp() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Warp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Warp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCDoAction_Warp, UCDoAction_Warp::StaticClass, TEXT("UCDoAction_Warp"), &Z_Registration_Info_UClass_UCDoAction_Warp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCDoAction_Warp), 68336345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Warp_h_2036129386(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Warp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Warp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
