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
	MYPORTFOLIO_API UEnum* Z_Construct_UEnum_MyPortfolio_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
	static UEnum* EWeaponType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyPortfolio_EWeaponType, (UObject*)Z_Construct_UPackage__Script_MyPortfolio(), TEXT("EWeaponType"));
		}
		return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	struct Z_Construct_UEnum_MyPortfolio_EWeaponType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyPortfolio_EWeaponType_Statics::Enumerators[] = {
		{ "EWeaponType::Sword", (int64)EWeaponType::Sword },
		{ "EWeaponType::Axe", (int64)EWeaponType::Axe },
		{ "EWeaponType::Max", (int64)EWeaponType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyPortfolio_EWeaponType_Statics::Enum_MetaDataParams[] = {
		{ "Axe.Name", "EWeaponType::Axe" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Enum\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "Max.Name", "EWeaponType::Max" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
		{ "Sword.Name", "EWeaponType::Sword" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyPortfolio_EWeaponType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio,
		nullptr,
		"EWeaponType",
		"EWeaponType",
		Z_Construct_UEnum_MyPortfolio_EWeaponType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyPortfolio_EWeaponType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MyPortfolio_EWeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MyPortfolio_EWeaponType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MyPortfolio_EWeaponType()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_MyPortfolio_EWeaponType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
	}
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3427506738U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCWeaponStructures, UCWeaponStructures::StaticClass, TEXT("UCWeaponStructures"), &Z_Registration_Info_UClass_UCWeaponStructures, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCWeaponStructures), 4214432673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_2033766528(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
