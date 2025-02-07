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
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_EquipmentBeginEquip__DelegateSignature();
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_EquipmentUnequip__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MyPortfolio_EquipmentBeginEquip__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyPortfolio_EquipmentBeginEquip__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CEquipment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyPortfolio_EquipmentBeginEquip__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio, nullptr, "EquipmentBeginEquip__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_EquipmentBeginEquip__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyPortfolio_EquipmentBeginEquip__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_MyPortfolio_EquipmentBeginEquip__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyPortfolio_EquipmentBeginEquip__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FEquipmentBeginEquip_DelegateWrapper(const FMulticastScriptDelegate& EquipmentBeginEquip)
{
	EquipmentBeginEquip.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_MyPortfolio_EquipmentUnequip__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyPortfolio_EquipmentUnequip__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CEquipment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyPortfolio_EquipmentUnequip__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio, nullptr, "EquipmentUnequip__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_EquipmentUnequip__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyPortfolio_EquipmentUnequip__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_MyPortfolio_EquipmentUnequip__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyPortfolio_EquipmentUnequip__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FEquipmentUnequip_DelegateWrapper(const FMulticastScriptDelegate& EquipmentUnequip)
{
	EquipmentUnequip.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UCEquipment::execUnequip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unequip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCEquipment::execEnd_Equip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->End_Equip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCEquipment::execBegin_Equip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Begin_Equip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCEquipment::execEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Equip_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCEquipment_Begin_Equip = FName(TEXT("Begin_Equip"));
	void UCEquipment::Begin_Equip()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCEquipment_Begin_Equip),NULL);
	}
	static FName NAME_UCEquipment_End_Equip = FName(TEXT("End_Equip"));
	void UCEquipment::End_Equip()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCEquipment_End_Equip),NULL);
	}
	static FName NAME_UCEquipment_Equip = FName(TEXT("Equip"));
	void UCEquipment::Equip()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCEquipment_Equip),NULL);
	}
	static FName NAME_UCEquipment_Unequip = FName(TEXT("Unequip"));
	void UCEquipment::Unequip()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCEquipment_Unequip),NULL);
	}
	void UCEquipment::StaticRegisterNativesUCEquipment()
	{
		UClass* Class = UCEquipment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Begin_Equip", &UCEquipment::execBegin_Equip },
			{ "End_Equip", &UCEquipment::execEnd_Equip },
			{ "Equip", &UCEquipment::execEquip },
			{ "Unequip", &UCEquipment::execUnequip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCEquipment_Begin_Equip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCEquipment_Begin_Equip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CEquipment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCEquipment_Begin_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCEquipment, nullptr, "Begin_Equip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCEquipment_Begin_Equip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCEquipment_Begin_Equip_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCEquipment_Begin_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCEquipment_Begin_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCEquipment_End_Equip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCEquipment_End_Equip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CEquipment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCEquipment_End_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCEquipment, nullptr, "End_Equip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCEquipment_End_Equip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCEquipment_End_Equip_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCEquipment_End_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCEquipment_End_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCEquipment_Equip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCEquipment_Equip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CEquipment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCEquipment_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCEquipment, nullptr, "Equip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCEquipment_Equip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCEquipment_Equip_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCEquipment_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCEquipment_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCEquipment_Unequip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCEquipment_Unequip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CEquipment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCEquipment_Unequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCEquipment, nullptr, "Unequip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCEquipment_Unequip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCEquipment_Unequip_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCEquipment_Unequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCEquipment_Unequip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCEquipment);
	UClass* Z_Construct_UClass_UCEquipment_NoRegister()
	{
		return UCEquipment::StaticClass();
	}
	struct Z_Construct_UClass_UCEquipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UCEquipment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCEquipment_Begin_Equip, "Begin_Equip" }, // 2132165117
		{ &Z_Construct_UFunction_UCEquipment_End_Equip, "End_Equip" }, // 1822146084
		{ &Z_Construct_UFunction_UCEquipment_Equip, "Equip" }, // 2231914195
		{ &Z_Construct_UFunction_UCEquipment_Unequip, "Unequip" }, // 3845465032
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCEquipment_Statics::FuncInfo) < 2048);
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UCEquipment, UCEquipment::StaticClass, TEXT("UCEquipment"), &Z_Registration_Info_UClass_UCEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCEquipment), 3091499887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_1118194047(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
