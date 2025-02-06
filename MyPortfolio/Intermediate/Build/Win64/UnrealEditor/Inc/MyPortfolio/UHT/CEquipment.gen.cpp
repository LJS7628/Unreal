// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/CEquipment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEquipment() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCEquipment();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCEquipment_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCEquipment::StaticRegisterNativesUCEquipment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCEquipment);
	UClass* Z_Construct_UClass_UCEquipment_NoRegister()
	{
		return UCEquipment::StaticClass();
	}
	struct Z_Construct_UClass_UCEquipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCEquipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCEquipment_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCEquipment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/CEquipment.h" },
		{ "ModuleRelativePath", "Weapons/CEquipment.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCEquipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCEquipment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCEquipment_Statics::ClassParams = {
		&UCEquipment::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UCEquipment_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCEquipment()
	{
		if (!Z_Registration_Info_UClass_UCEquipment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCEquipment.OuterSingleton, Z_Construct_UClass_UCEquipment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCEquipment.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCEquipment>()
	{
		return UCEquipment::StaticClass();
	}
	UCEquipment::UCEquipment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCEquipment);
	UCEquipment::~UCEquipment() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCEquipment, UCEquipment::StaticClass, TEXT("UCEquipment"), &Z_Registration_Info_UClass_UCEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCEquipment), 1508965063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_1057210725(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
