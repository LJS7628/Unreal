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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCWeaponStructures();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCWeaponStructures_NoRegister();
	MYPORTFOLIO_API UEnum* Z_Construct_UEnum_MyPortfolio_EWeaponType();
	MYPORTFOLIO_API UScriptStruct* Z_Construct_UScriptStruct_FActionDamageEvent();
	MYPORTFOLIO_API UScriptStruct* Z_Construct_UScriptStruct_FDoActionData();
	MYPORTFOLIO_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentData();
	MYPORTFOLIO_API UScriptStruct* Z_Construct_UScriptStruct_FHitData();
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentData;
class UScriptStruct* FEquipmentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentData, (UObject*)Z_Construct_UPackage__Script_MyPortfolio(), TEXT("EquipmentData"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentData.OuterSingleton;
}
template<> MYPORTFOLIO_API UScriptStruct* StaticStruct<FEquipmentData>()
{
	return FEquipmentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseControlRotation_MetaData[];
#endif
		static void NewProp_bUseControlRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControlRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentData, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_Montage_MetaData), Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_Montage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentData, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_SetBit(void* Obj)
	{
		((FEquipmentData*)Obj)->bCanMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEquipmentData), &Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_MetaData), Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation_SetBit(void* Obj)
	{
		((FEquipmentData*)Obj)->bUseControlRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation = { "bUseControlRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEquipmentData), &Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation_MetaData), Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
		nullptr,
		&NewStructOps,
		"EquipmentData",
		Z_Construct_UScriptStruct_FEquipmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::PropPointers),
		sizeof(FEquipmentData),
		alignof(FEquipmentData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentData()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentData.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoActionData;
class UScriptStruct* FDoActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoActionData, (UObject*)Z_Construct_UPackage__Script_MyPortfolio(), TEXT("DoActionData"));
	}
	return Z_Registration_Info_UScriptStruct_DoActionData.OuterSingleton;
}
template<> MYPORTFOLIO_API UScriptStruct* StaticStruct<FDoActionData>()
{
	return FDoActionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDoActionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixedCamera_MetaData[];
#endif
		static void NewProp_bFixedCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoActionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoActionData, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Montage_MetaData), Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Montage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoActionData, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove_SetBit(void* Obj)
	{
		((FDoActionData*)Obj)->bCanMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDoActionData), &Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove_MetaData), Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera_SetBit(void* Obj)
	{
		((FDoActionData*)Obj)->bFixedCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera = { "bFixedCamera", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDoActionData), &Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera_MetaData), Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoActionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
		nullptr,
		&NewStructOps,
		"DoActionData",
		Z_Construct_UScriptStruct_FDoActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::PropPointers),
		sizeof(FDoActionData),
		alignof(FDoActionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoActionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDoActionData()
	{
		if (!Z_Registration_Info_UScriptStruct_DoActionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoActionData.InnerSingleton, Z_Construct_UScriptStruct_FDoActionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DoActionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HitData;
class UScriptStruct* FHitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitData, (UObject*)Z_Construct_UPackage__Script_MyPortfolio(), TEXT("HitData"));
	}
	return Z_Registration_Info_UScriptStruct_HitData.OuterSingleton;
}
template<> MYPORTFOLIO_API UScriptStruct* StaticStruct<FHitData>()
{
	return FHitData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHitData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Power_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Power;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Launch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Launch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitData, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Montage_MetaData), Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Montage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitData, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FHitData_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Power_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitData, Power), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Power_MetaData), Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Power_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Launch_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Launch = { "Launch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitData, Launch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Launch_MetaData), Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Launch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_StopTime_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_StopTime = { "StopTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitData, StopTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_StopTime_MetaData), Z_Construct_UScriptStruct_FHitData_Statics::NewProp_StopTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitData, Sound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Sound_MetaData), Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Sound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitData, Effect), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Effect_MetaData), Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Effect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectLocation_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectLocation = { "EffectLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitData, EffectLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectLocation_MetaData), Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectScale_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectScale = { "EffectScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitData, EffectScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectScale_MetaData), Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Power,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Launch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_StopTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
		nullptr,
		&NewStructOps,
		"HitData",
		Z_Construct_UScriptStruct_FHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::PropPointers),
		sizeof(FHitData),
		alignof(FHitData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHitData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHitData()
	{
		if (!Z_Registration_Info_UScriptStruct_HitData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HitData.InnerSingleton, Z_Construct_UScriptStruct_FHitData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HitData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FActionDamageEvent>() == std::is_polymorphic<FDamageEvent>(), "USTRUCT FActionDamageEvent cannot be polymorphic unless super FDamageEvent is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionDamageEvent;
class UScriptStruct* FActionDamageEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionDamageEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionDamageEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionDamageEvent, (UObject*)Z_Construct_UPackage__Script_MyPortfolio(), TEXT("ActionDamageEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ActionDamageEvent.OuterSingleton;
}
template<> MYPORTFOLIO_API UScriptStruct* StaticStruct<FActionDamageEvent>()
{
	return FActionDamageEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActionDamageEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionDamageEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionDamageEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionDamageEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionDamageEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
		Z_Construct_UScriptStruct_FDamageEvent,
		&NewStructOps,
		"ActionDamageEvent",
		nullptr,
		0,
		sizeof(FActionDamageEvent),
		alignof(FActionDamageEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionDamageEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionDamageEvent_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActionDamageEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ActionDamageEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionDamageEvent.InnerSingleton, Z_Construct_UScriptStruct_FActionDamageEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActionDamageEvent.InnerSingleton;
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
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3427506738U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::ScriptStructInfo[] = {
		{ FEquipmentData::StaticStruct, Z_Construct_UScriptStruct_FEquipmentData_Statics::NewStructOps, TEXT("EquipmentData"), &Z_Registration_Info_UScriptStruct_EquipmentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentData), 314561670U) },
		{ FDoActionData::StaticStruct, Z_Construct_UScriptStruct_FDoActionData_Statics::NewStructOps, TEXT("DoActionData"), &Z_Registration_Info_UScriptStruct_DoActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoActionData), 2981462078U) },
		{ FHitData::StaticStruct, Z_Construct_UScriptStruct_FHitData_Statics::NewStructOps, TEXT("HitData"), &Z_Registration_Info_UScriptStruct_HitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHitData), 1773975387U) },
		{ FActionDamageEvent::StaticStruct, Z_Construct_UScriptStruct_FActionDamageEvent_Statics::NewStructOps, TEXT("ActionDamageEvent"), &Z_Registration_Info_UScriptStruct_ActionDamageEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionDamageEvent), 1741520637U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCWeaponStructures, UCWeaponStructures::StaticClass, TEXT("UCWeaponStructures"), &Z_Registration_Info_UClass_UCWeaponStructures, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCWeaponStructures), 4214432673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_1822778983(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
