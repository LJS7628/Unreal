// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/DoActions/CDoAction_Bow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction_Bow() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACArrow_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction_Bow();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction_Bow_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	DEFINE_FUNCTION(UCDoAction_Bow::execOnArrowHit)
	{
		P_GET_OBJECT(AActor,Z_Param_InCauser);
		P_GET_OBJECT(ACharacter,Z_Param_InOtherCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnArrowHit(Z_Param_InCauser,Z_Param_InOtherCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDoAction_Bow::execOnArrowEndPlay)
	{
		P_GET_OBJECT(ACArrow,Z_Param_InDestroyer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnArrowEndPlay(Z_Param_InDestroyer);
		P_NATIVE_END;
	}
	void UCDoAction_Bow::StaticRegisterNativesUCDoAction_Bow()
	{
		UClass* Class = UCDoAction_Bow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnArrowEndPlay", &UCDoAction_Bow::execOnArrowEndPlay },
			{ "OnArrowHit", &UCDoAction_Bow::execOnArrowHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics
	{
		struct CDoAction_Bow_eventOnArrowEndPlay_Parms
		{
			ACArrow* InDestroyer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDestroyer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::NewProp_InDestroyer = { "InDestroyer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CDoAction_Bow_eventOnArrowEndPlay_Parms, InDestroyer), Z_Construct_UClass_ACArrow_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::NewProp_InDestroyer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Bow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction_Bow, nullptr, "OnArrowEndPlay", nullptr, nullptr, Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::CDoAction_Bow_eventOnArrowEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::CDoAction_Bow_eventOnArrowEndPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics
	{
		struct CDoAction_Bow_eventOnArrowHit_Parms
		{
			AActor* InCauser;
			ACharacter* InOtherCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCauser;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOtherCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::NewProp_InCauser = { "InCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CDoAction_Bow_eventOnArrowHit_Parms, InCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::NewProp_InOtherCharacter = { "InOtherCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CDoAction_Bow_eventOnArrowHit_Parms, InOtherCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::NewProp_InCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::NewProp_InOtherCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Bow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction_Bow, nullptr, "OnArrowHit", nullptr, nullptr, Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::CDoAction_Bow_eventOnArrowHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::CDoAction_Bow_eventOnArrowHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCDoAction_Bow);
	UClass* Z_Construct_UClass_UCDoAction_Bow_NoRegister()
	{
		return UCDoAction_Bow::StaticClass();
	}
	struct Z_Construct_UClass_UCDoAction_Bow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ArrowClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDoAction_Bow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCDoAction,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCDoAction_Bow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay, "OnArrowEndPlay" }, // 2529041237
		{ &Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit, "OnArrowHit" }, // 3348472250
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Bow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/DoActions/CDoAction_Bow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Bow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass_MetaData[] = {
		{ "Category", "Arrow" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Bow.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass = { "ArrowClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCDoAction_Bow, ArrowClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACArrow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass_MetaData), Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCDoAction_Bow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDoAction_Bow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDoAction_Bow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCDoAction_Bow_Statics::ClassParams = {
		&UCDoAction_Bow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCDoAction_Bow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::Class_MetaDataParams), Z_Construct_UClass_UCDoAction_Bow_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCDoAction_Bow()
	{
		if (!Z_Registration_Info_UClass_UCDoAction_Bow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCDoAction_Bow.OuterSingleton, Z_Construct_UClass_UCDoAction_Bow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCDoAction_Bow.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCDoAction_Bow>()
	{
		return UCDoAction_Bow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDoAction_Bow);
	UCDoAction_Bow::~UCDoAction_Bow() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Bow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Bow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCDoAction_Bow, UCDoAction_Bow::StaticClass, TEXT("UCDoAction_Bow"), &Z_Registration_Info_UClass_UCDoAction_Bow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCDoAction_Bow), 1699139749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Bow_h_2429459667(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Bow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Bow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
