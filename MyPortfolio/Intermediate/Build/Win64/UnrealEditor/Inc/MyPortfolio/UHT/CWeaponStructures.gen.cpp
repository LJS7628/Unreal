// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/CWeaponStructures.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeaponStructures() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCWeaponStructures();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCWeaponStructures_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCWeaponStructures::StaticRegisterNativesUCWeaponStructures()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCWeaponStructures);
	UClass* Z_Construct_UClass_UCWeaponStructures_NoRegister()
	{
		return UCWeaponStructures::StaticClass();
	}
	struct Z_Construct_UClass_UCWeaponStructures_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCWeaponStructures_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponStructures_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponStructures_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/CWeaponStructures.h" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCWeaponStructures_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCWeaponStructures>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCWeaponStructures_Statics::ClassParams = {
		&UCWeaponStructures::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponStructures_Statics::Class_MetaDataParams), Z_Construct_UClass_UCWeaponStructures_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCWeaponStructures()
	{
		if (!Z_Registration_Info_UClass_UCWeaponStructures.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCWeaponStructures.OuterSingleton, Z_Construct_UClass_UCWeaponStructures_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCWeaponStructures.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCWeaponStructures>()
	{
		return UCWeaponStructures::StaticClass();
	}
	UCWeaponStructures::UCWeaponStructures(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCWeaponStructures);
	UCWeaponStructures::~UCWeaponStructures() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCWeaponStructures, UCWeaponStructures::StaticClass, TEXT("UCWeaponStructures"), &Z_Registration_Info_UClass_UCWeaponStructures, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCWeaponStructures), 4214432673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_3412790100(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
