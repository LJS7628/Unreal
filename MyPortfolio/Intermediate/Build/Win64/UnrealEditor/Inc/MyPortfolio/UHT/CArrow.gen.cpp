// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/AddOns/CArrow.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCArrow() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACArrow();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACArrow_NoRegister();
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature();
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics
	{
		struct _Script_MyPortfolio_eventProjectileEndPlay_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::NewProp_InDestroyer = { "InDestroyer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventProjectileEndPlay_Parms, InDestroyer), Z_Construct_UClass_ACArrow_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::NewProp_InDestroyer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio, nullptr, "ProjectileEndPlay__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::_Script_MyPortfolio_eventProjectileEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::_Script_MyPortfolio_eventProjectileEndPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyPortfolio_ProjectileEndPlay__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FProjectileEndPlay_DelegateWrapper(const FMulticastScriptDelegate& ProjectileEndPlay, ACArrow* InDestroyer)
{
	struct _Script_MyPortfolio_eventProjectileEndPlay_Parms
	{
		ACArrow* InDestroyer;
	};
	_Script_MyPortfolio_eventProjectileEndPlay_Parms Parms;
	Parms.InDestroyer=InDestroyer;
	ProjectileEndPlay.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics
	{
		struct _Script_MyPortfolio_eventProjectileHit_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::NewProp_InCauser = { "InCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventProjectileHit_Parms, InCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::NewProp_InOtherCharacter = { "InOtherCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventProjectileHit_Parms, InOtherCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::NewProp_InCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::NewProp_InOtherCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio, nullptr, "ProjectileHit__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::_Script_MyPortfolio_eventProjectileHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::_Script_MyPortfolio_eventProjectileHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyPortfolio_ProjectileHit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FProjectileHit_DelegateWrapper(const FMulticastScriptDelegate& ProjectileHit, AActor* InCauser, ACharacter* InOtherCharacter)
{
	struct _Script_MyPortfolio_eventProjectileHit_Parms
	{
		AActor* InCauser;
		ACharacter* InOtherCharacter;
	};
	_Script_MyPortfolio_eventProjectileHit_Parms Parms;
	Parms.InCauser=InCauser;
	Parms.InOtherCharacter=InOtherCharacter;
	ProjectileHit.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ACArrow::execOnComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ACArrow::StaticRegisterNativesACArrow()
	{
		UClass* Class = ACArrow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentHit", &ACArrow::execOnComponentHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACArrow_OnComponentHit_Statics
	{
		struct CArrow_eventOnComponentHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CArrow_eventOnComponentHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CArrow_eventOnComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CArrow_eventOnComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CArrow_eventOnComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CArrow_eventOnComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACArrow, nullptr, "OnComponentHit", nullptr, nullptr, Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::CArrow_eventOnComponentHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::CArrow_eventOnComponentHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACArrow_OnComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACArrow);
	UClass* Z_Construct_UClass_ACArrow_NoRegister()
	{
		return ACArrow::StaticClass();
	}
	struct Z_Construct_UClass_ACArrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeSpanAfterCollision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSpanAfterCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACArrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACArrow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACArrow_OnComponentHit, "OnComponentHit" }, // 1783141640
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACArrow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/AddOns/CArrow.h" },
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACArrow_Statics::NewProp_LifeSpanAfterCollision_MetaData[] = {
		{ "Category", "LifeSpan" },
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACArrow_Statics::NewProp_LifeSpanAfterCollision = { "LifeSpanAfterCollision", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACArrow, LifeSpanAfterCollision), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::NewProp_LifeSpanAfterCollision_MetaData), Z_Construct_UClass_ACArrow_Statics::NewProp_LifeSpanAfterCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "CArrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACArrow, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule_MetaData), Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "CArrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACArrow, Projectile), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile_MetaData), Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACArrow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACArrow_Statics::NewProp_LifeSpanAfterCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACArrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACArrow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACArrow_Statics::ClassParams = {
		&ACArrow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACArrow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::Class_MetaDataParams), Z_Construct_UClass_ACArrow_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACArrow()
	{
		if (!Z_Registration_Info_UClass_ACArrow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACArrow.OuterSingleton, Z_Construct_UClass_ACArrow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACArrow.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<ACArrow>()
	{
		return ACArrow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACArrow);
	ACArrow::~ACArrow() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACArrow, ACArrow::StaticClass, TEXT("ACArrow"), &Z_Registration_Info_UClass_ACArrow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACArrow), 2371622015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_3013185540(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
