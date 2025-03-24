// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/CWeaponData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeaponData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACAttachment_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCEquipment_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCSubAction_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCWeaponData();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCWeaponData_NoRegister();
	MYPORTFOLIO_API UEnum* Z_Construct_UEnum_MyPortfolio_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCWeaponData::StaticRegisterNativesUCWeaponData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCWeaponData);
	UClass* Z_Construct_UClass_UCWeaponData_NoRegister()
	{
		return UCWeaponData::StaticClass();
	}
	struct Z_Construct_UClass_UCWeaponData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCWeaponData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/CWeaponData.h" },
		{ "ModuleRelativePath", "Weapons/CWeaponData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCWeaponData_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponData_Statics::NewProp_WeaponType_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCWeaponData_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponData, WeaponType), Z_Construct_UEnum_MyPortfolio_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::NewProp_WeaponType_MetaData), Z_Construct_UClass_UCWeaponData_Statics::NewProp_WeaponType_MetaData) }; // 1952477368
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponData_Statics::NewProp_Attachment_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponData_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponData, Attachment), Z_Construct_UClass_ACAttachment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::NewProp_Attachment_MetaData), Z_Construct_UClass_UCWeaponData_Statics::NewProp_Attachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponData_Statics::NewProp_Equipment_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponData_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponData, Equipment), Z_Construct_UClass_UCEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::NewProp_Equipment_MetaData), Z_Construct_UClass_UCWeaponData_Statics::NewProp_Equipment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponData_Statics::NewProp_DoAction_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponData_Statics::NewProp_DoAction = { "DoAction", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponData, DoAction), Z_Construct_UClass_UCDoAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::NewProp_DoAction_MetaData), Z_Construct_UClass_UCWeaponData_Statics::NewProp_DoAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponData_Statics::NewProp_SubAction_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponData_Statics::NewProp_SubAction = { "SubAction", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponData, SubAction), Z_Construct_UClass_UCSubAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::NewProp_SubAction_MetaData), Z_Construct_UClass_UCWeaponData_Statics::NewProp_SubAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCWeaponData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponData_Statics::NewProp_WeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponData_Statics::NewProp_WeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponData_Statics::NewProp_Attachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponData_Statics::NewProp_Equipment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponData_Statics::NewProp_DoAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponData_Statics::NewProp_SubAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCWeaponData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCWeaponData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCWeaponData_Statics::ClassParams = {
		&UCWeaponData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCWeaponData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCWeaponData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCWeaponData()
	{
		if (!Z_Registration_Info_UClass_UCWeaponData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCWeaponData.OuterSingleton, Z_Construct_UClass_UCWeaponData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCWeaponData.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCWeaponData>()
	{
		return UCWeaponData::StaticClass();
	}
	UCWeaponData::UCWeaponData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCWeaponData);
	UCWeaponData::~UCWeaponData() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCWeaponData, UCWeaponData::StaticClass, TEXT("UCWeaponData"), &Z_Registration_Info_UClass_UCWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCWeaponData), 2055282965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponData_h_3776367954(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
