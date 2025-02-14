// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Characters/CEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEnemy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACEnemy();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACEnemy_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCHealthPointComponent_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCMovementComponent_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	MYPORTFOLIO_API UEnum* Z_Construct_UEnum_MyPortfolio_EStateType();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	DEFINE_FUNCTION(ACEnemy::execOnStateTypeChanged)
	{
		P_GET_ENUM(EStateType,Z_Param_InPrevType);
		P_GET_ENUM(EStateType,Z_Param_InNewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateTypeChanged(EStateType(Z_Param_InPrevType),EStateType(Z_Param_InNewType));
		P_NATIVE_END;
	}
	void ACEnemy::StaticRegisterNativesACEnemy()
	{
		UClass* Class = ACEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStateTypeChanged", &ACEnemy::execOnStateTypeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics
	{
		struct CEnemy_eventOnStateTypeChanged_Parms
		{
			EStateType InPrevType;
			EStateType InNewType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPrevType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPrevType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InNewType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CEnemy_eventOnStateTypeChanged_Parms, InPrevType), Z_Construct_UEnum_MyPortfolio_EStateType, METADATA_PARAMS(0, nullptr) }; // 3742531876
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CEnemy_eventOnStateTypeChanged_Parms, InNewType), Z_Construct_UEnum_MyPortfolio_EStateType, METADATA_PARAMS(0, nullptr) }; // 3742531876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InPrevType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InPrevType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InNewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACEnemy, nullptr, "OnStateTypeChanged", nullptr, nullptr, Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::CEnemy_eventOnStateTypeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::CEnemy_eventOnStateTypeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACEnemy_OnStateTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACEnemy);
	UClass* Z_Construct_UClass_ACEnemy_NoRegister()
	{
		return ACEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ACEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACEnemy_OnStateTypeChanged, "OnStateTypeChanged" }, // 2759212783
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CEnemy.h" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACEnemy, Movement), Z_Construct_UClass_UCMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_Movement_MetaData), Z_Construct_UClass_ACEnemy_Statics::NewProp_Movement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_State_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACEnemy, State), Z_Construct_UClass_UCStateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_State_MetaData), Z_Construct_UClass_ACEnemy_Statics::NewProp_State_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthPoint_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthPoint = { "HealthPoint", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACEnemy, HealthPoint), Z_Construct_UClass_UCHealthPointComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthPoint_MetaData), Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACEnemy_Statics::ClassParams = {
		&ACEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACEnemy()
	{
		if (!Z_Registration_Info_UClass_ACEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACEnemy.OuterSingleton, Z_Construct_UClass_ACEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACEnemy.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<ACEnemy>()
	{
		return ACEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACEnemy);
	ACEnemy::~ACEnemy() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACEnemy, ACEnemy::StaticClass, TEXT("ACEnemy"), &Z_Registration_Info_UClass_ACEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACEnemy), 3814825015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_118684409(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
