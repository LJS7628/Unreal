// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/SubActions/CSubAction_Aiming.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSubAction_Aiming() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCSubAction();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCSubAction_Aiming();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCSubAction_Aiming_NoRegister();
	MYPORTFOLIO_API UScriptStruct* Z_Construct_UScriptStruct_FAimData();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AimData;
class UScriptStruct* FAimData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AimData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AimData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAimData, (UObject*)Z_Construct_UPackage__Script_MyPortfolio(), TEXT("AimData"));
	}
	return Z_Registration_Info_UScriptStruct_AimData.OuterSingleton;
}
template<> MYPORTFOLIO_API UScriptStruct* StaticStruct<FAimData>()
{
	return FAimData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAimData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetArmLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetArmLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraLag_MetaData[];
#endif
		static void NewProp_bEnableCameraLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Aiming.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAimData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimData_Statics::NewProp_TargetArmLength_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Aiming.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_TargetArmLength = { "TargetArmLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimData, TargetArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::NewProp_TargetArmLength_MetaData), Z_Construct_UScriptStruct_FAimData_Statics::NewProp_TargetArmLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimData_Statics::NewProp_SocketOffset_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Aiming.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_SocketOffset = { "SocketOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimData, SocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::NewProp_SocketOffset_MetaData), Z_Construct_UScriptStruct_FAimData_Statics::NewProp_SocketOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Aiming.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag_SetBit(void* Obj)
	{
		((FAimData*)Obj)->bEnableCameraLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag = { "bEnableCameraLag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAimData), &Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag_MetaData), Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimData_Statics::NewProp_CameraLocation_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Aiming.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimData, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::NewProp_CameraLocation_MetaData), Z_Construct_UScriptStruct_FAimData_Statics::NewProp_CameraLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAimData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_TargetArmLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_SocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_CameraLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
		nullptr,
		&NewStructOps,
		"AimData",
		Z_Construct_UScriptStruct_FAimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::PropPointers),
		sizeof(FAimData),
		alignof(FAimData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAimData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAimData()
	{
		if (!Z_Registration_Info_UScriptStruct_AimData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AimData.InnerSingleton, Z_Construct_UScriptStruct_FAimData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AimData.InnerSingleton;
	}
	DEFINE_FUNCTION(UCSubAction_Aiming::execOnAiming)
	{
		P_GET_STRUCT(FVector,Z_Param_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAiming(Z_Param_Output);
		P_NATIVE_END;
	}
	void UCSubAction_Aiming::StaticRegisterNativesUCSubAction_Aiming()
	{
		UClass* Class = UCSubAction_Aiming::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAiming", &UCSubAction_Aiming::execOnAiming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics
	{
		struct CSubAction_Aiming_eventOnAiming_Parms
		{
			FVector Output;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CSubAction_Aiming_eventOnAiming_Parms, Output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Aiming.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSubAction_Aiming, nullptr, "OnAiming", nullptr, nullptr, Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::CSubAction_Aiming_eventOnAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::CSubAction_Aiming_eventOnAiming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCSubAction_Aiming_OnAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCSubAction_Aiming_OnAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSubAction_Aiming);
	UClass* Z_Construct_UClass_UCSubAction_Aiming_NoRegister()
	{
		return UCSubAction_Aiming::StaticClass();
	}
	struct Z_Construct_UClass_UCSubAction_Aiming_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSubAction_Aiming_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSubAction,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Aiming_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCSubAction_Aiming_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCSubAction_Aiming_OnAiming, "OnAiming" }, // 2445554288
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Aiming_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Aiming_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/SubActions/CSubAction_Aiming.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Aiming.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Aiming.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCSubAction_Aiming, Curve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_Curve_MetaData), Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_Curve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_AimData_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Aiming.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_AimData = { "AimData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCSubAction_Aiming, AimData), Z_Construct_UScriptStruct_FAimData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_AimData_MetaData), Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_AimData_MetaData) }; // 2296855853
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_AimingSpeed_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Aiming.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_AimingSpeed = { "AimingSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCSubAction_Aiming, AimingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_AimingSpeed_MetaData), Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_AimingSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSubAction_Aiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_AimData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Aiming_Statics::NewProp_AimingSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSubAction_Aiming_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSubAction_Aiming>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSubAction_Aiming_Statics::ClassParams = {
		&UCSubAction_Aiming::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCSubAction_Aiming_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Aiming_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Aiming_Statics::Class_MetaDataParams), Z_Construct_UClass_UCSubAction_Aiming_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Aiming_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCSubAction_Aiming()
	{
		if (!Z_Registration_Info_UClass_UCSubAction_Aiming.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSubAction_Aiming.OuterSingleton, Z_Construct_UClass_UCSubAction_Aiming_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSubAction_Aiming.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCSubAction_Aiming>()
	{
		return UCSubAction_Aiming::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSubAction_Aiming);
	UCSubAction_Aiming::~UCSubAction_Aiming() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_SubActions_CSubAction_Aiming_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_SubActions_CSubAction_Aiming_h_Statics::ScriptStructInfo[] = {
		{ FAimData::StaticStruct, Z_Construct_UScriptStruct_FAimData_Statics::NewStructOps, TEXT("AimData"), &Z_Registration_Info_UScriptStruct_AimData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAimData), 2296855853U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_SubActions_CSubAction_Aiming_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSubAction_Aiming, UCSubAction_Aiming::StaticClass, TEXT("UCSubAction_Aiming"), &Z_Registration_Info_UClass_UCSubAction_Aiming, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSubAction_Aiming), 1670260065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_SubActions_CSubAction_Aiming_h_3877299052(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_SubActions_CSubAction_Aiming_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_SubActions_CSubAction_Aiming_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_SubActions_CSubAction_Aiming_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_SubActions_CSubAction_Aiming_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
