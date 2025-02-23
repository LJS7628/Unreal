// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/CDoAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	DEFINE_FUNCTION(UCDoAction::execOnAttachmentEndOverlap)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InAttacker);
		P_GET_OBJECT(ACharacter,Z_Param_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentEndOverlap(Z_Param_InAttacker,Z_Param_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDoAction::execOnAttachmentBeginOverlap)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InAttacker);
		P_GET_OBJECT(AActor,Z_Param_InAttackCauser);
		P_GET_OBJECT(ACharacter,Z_Param_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentBeginOverlap(Z_Param_InAttacker,Z_Param_InAttackCauser,Z_Param_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDoAction::execOnAttachmentEndCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentEndCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDoAction::execOnAttachmentBeginCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentBeginCollision();
		P_NATIVE_END;
	}
	void UCDoAction::StaticRegisterNativesUCDoAction()
	{
		UClass* Class = UCDoAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttachmentBeginCollision", &UCDoAction::execOnAttachmentBeginCollision },
			{ "OnAttachmentBeginOverlap", &UCDoAction::execOnAttachmentBeginOverlap },
			{ "OnAttachmentEndCollision", &UCDoAction::execOnAttachmentEndCollision },
			{ "OnAttachmentEndOverlap", &UCDoAction::execOnAttachmentEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction, nullptr, "OnAttachmentBeginCollision", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics
	{
		struct CDoAction_eventOnAttachmentBeginOverlap_Parms
		{
			ACharacter* InAttacker;
			AActor* InAttackCauser;
			ACharacter* InOther;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttackCauser;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentBeginOverlap_Parms, InAttacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InAttackCauser = { "InAttackCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentBeginOverlap_Parms, InAttackCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentBeginOverlap_Parms, InOther), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InAttacker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InAttackCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction, nullptr, "OnAttachmentBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::CDoAction_eventOnAttachmentBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::CDoAction_eventOnAttachmentBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction, nullptr, "OnAttachmentEndCollision", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics
	{
		struct CDoAction_eventOnAttachmentEndOverlap_Parms
		{
			ACharacter* InAttacker;
			ACharacter* InOther;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentEndOverlap_Parms, InAttacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentEndOverlap_Parms, InOther), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::NewProp_InAttacker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction, nullptr, "OnAttachmentEndOverlap", nullptr, nullptr, Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::CDoAction_eventOnAttachmentEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::CDoAction_eventOnAttachmentEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCDoAction);
	UClass* Z_Construct_UClass_UCDoAction_NoRegister()
	{
		return UCDoAction::StaticClass();
	}
	struct Z_Construct_UClass_UCDoAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDoAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCDoAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision, "OnAttachmentBeginCollision" }, // 90780140
		{ &Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap, "OnAttachmentBeginOverlap" }, // 1077065723
		{ &Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision, "OnAttachmentEndCollision" }, // 1472429685
		{ &Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap, "OnAttachmentEndOverlap" }, // 2089155958
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/CDoAction.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDoAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDoAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCDoAction_Statics::ClassParams = {
		&UCDoAction::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UCDoAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCDoAction()
	{
		if (!Z_Registration_Info_UClass_UCDoAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCDoAction.OuterSingleton, Z_Construct_UClass_UCDoAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCDoAction.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCDoAction>()
	{
		return UCDoAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDoAction);
	UCDoAction::~UCDoAction() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCDoAction, UCDoAction::StaticClass, TEXT("UCDoAction"), &Z_Registration_Info_UClass_UCDoAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCDoAction), 112817882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_2738749992(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
