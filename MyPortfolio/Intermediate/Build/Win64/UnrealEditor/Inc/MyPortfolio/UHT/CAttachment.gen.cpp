// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/CAttachment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAttachment() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACAttachment();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACAttachment_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	DEFINE_FUNCTION(ACAttachment::execAttachTo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachTo(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	void ACAttachment::StaticRegisterNativesACAttachment()
	{
		UClass* Class = ACAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachTo", &ACAttachment::execAttachTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACAttachment_AttachTo_Statics
	{
		struct CAttachment_eventAttachTo_Parms
		{
			FName InSocketName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACAttachment_AttachTo_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CAttachment_eventAttachTo_Parms, InSocketName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACAttachment_AttachTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_AttachTo_Statics::NewProp_InSocketName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_AttachTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_AttachTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "AttachTo", nullptr, nullptr, Z_Construct_UFunction_ACAttachment_AttachTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_AttachTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACAttachment_AttachTo_Statics::CAttachment_eventAttachTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_AttachTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACAttachment_AttachTo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_AttachTo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACAttachment_AttachTo_Statics::CAttachment_eventAttachTo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACAttachment_AttachTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACAttachment_AttachTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACAttachment);
	UClass* Z_Construct_UClass_ACAttachment_NoRegister()
	{
		return ACAttachment::StaticClass();
	}
	struct Z_Construct_UClass_ACAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ownerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ownerCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACAttachment_AttachTo, "AttachTo" }, // 1835352562
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/CAttachment.h" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "CAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACAttachment, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::NewProp_Root_MetaData), Z_Construct_UClass_ACAttachment_Statics::NewProp_Root_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Statics::NewProp_ownerCharacter_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Statics::NewProp_ownerCharacter = { "ownerCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACAttachment, ownerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::NewProp_ownerCharacter_MetaData), Z_Construct_UClass_ACAttachment_Statics::NewProp_ownerCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Statics::NewProp_ownerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACAttachment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACAttachment_Statics::ClassParams = {
		&ACAttachment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::Class_MetaDataParams), Z_Construct_UClass_ACAttachment_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACAttachment()
	{
		if (!Z_Registration_Info_UClass_ACAttachment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACAttachment.OuterSingleton, Z_Construct_UClass_ACAttachment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACAttachment.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<ACAttachment>()
	{
		return ACAttachment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACAttachment);
	ACAttachment::~ACAttachment() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACAttachment, ACAttachment::StaticClass, TEXT("ACAttachment"), &Z_Registration_Info_UClass_ACAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACAttachment), 2939983387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_499769081(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
