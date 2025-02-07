// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Notifies/CAnimNotifyState_Equip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotifyState_Equip() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotifyState_Equip();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotifyState_Equip_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCAnimNotifyState_Equip::StaticRegisterNativesUCAnimNotifyState_Equip()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCAnimNotifyState_Equip);
	UClass* Z_Construct_UClass_UCAnimNotifyState_Equip_NoRegister()
	{
		return UCAnimNotifyState_Equip::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotifyState_Equip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotifyState_Equip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotifyState_Equip_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotifyState_Equip_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotifyState_Equip.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotifyState_Equip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotifyState_Equip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotifyState_Equip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotifyState_Equip_Statics::ClassParams = {
		&UCAnimNotifyState_Equip::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotifyState_Equip_Statics::Class_MetaDataParams), Z_Construct_UClass_UCAnimNotifyState_Equip_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCAnimNotifyState_Equip()
	{
		if (!Z_Registration_Info_UClass_UCAnimNotifyState_Equip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCAnimNotifyState_Equip.OuterSingleton, Z_Construct_UClass_UCAnimNotifyState_Equip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCAnimNotifyState_Equip.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCAnimNotifyState_Equip>()
	{
		return UCAnimNotifyState_Equip::StaticClass();
	}
	UCAnimNotifyState_Equip::UCAnimNotifyState_Equip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotifyState_Equip);
	UCAnimNotifyState_Equip::~UCAnimNotifyState_Equip() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Equip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Equip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCAnimNotifyState_Equip, UCAnimNotifyState_Equip::StaticClass, TEXT("UCAnimNotifyState_Equip"), &Z_Registration_Info_UClass_UCAnimNotifyState_Equip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCAnimNotifyState_Equip), 4195460052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Equip_h_3326187626(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Equip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Equip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
