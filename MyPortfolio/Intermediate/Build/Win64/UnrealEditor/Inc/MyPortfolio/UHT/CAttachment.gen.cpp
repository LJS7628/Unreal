// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/CAttachment.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAttachment() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACAttachment();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACAttachment_NoRegister();
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginCollision__DelegateSignature();
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature();
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndCollision__DelegateSignature();
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginCollision__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginCollision__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginCollision__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio, nullptr, "AttachmentBeginCollision__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginCollision__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginCollision__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginCollision__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginCollision__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAttachmentBeginCollision_DelegateWrapper(const FMulticastScriptDelegate& AttachmentBeginCollision)
{
	AttachmentBeginCollision.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndCollision__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndCollision__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndCollision__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio, nullptr, "AttachmentEndCollision__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndCollision__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndCollision__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndCollision__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndCollision__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAttachmentEndCollision_DelegateWrapper(const FMulticastScriptDelegate& AttachmentEndCollision)
{
	AttachmentEndCollision.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics
	{
		struct _Script_MyPortfolio_eventAttachmentBeginOverlap_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventAttachmentBeginOverlap_Parms, InAttacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::NewProp_InAttackCauser = { "InAttackCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventAttachmentBeginOverlap_Parms, InAttackCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventAttachmentBeginOverlap_Parms, InOther), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::NewProp_InAttacker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::NewProp_InAttackCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio, nullptr, "AttachmentBeginOverlap__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::_Script_MyPortfolio_eventAttachmentBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::_Script_MyPortfolio_eventAttachmentBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyPortfolio_AttachmentBeginOverlap__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAttachmentBeginOverlap_DelegateWrapper(const FMulticastScriptDelegate& AttachmentBeginOverlap, ACharacter* InAttacker, AActor* InAttackCauser, ACharacter* InOther)
{
	struct _Script_MyPortfolio_eventAttachmentBeginOverlap_Parms
	{
		ACharacter* InAttacker;
		AActor* InAttackCauser;
		ACharacter* InOther;
	};
	_Script_MyPortfolio_eventAttachmentBeginOverlap_Parms Parms;
	Parms.InAttacker=InAttacker;
	Parms.InAttackCauser=InAttackCauser;
	Parms.InOther=InOther;
	AttachmentBeginOverlap.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics
	{
		struct _Script_MyPortfolio_eventAttachmentEndOverlap_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventAttachmentEndOverlap_Parms, InAttacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventAttachmentEndOverlap_Parms, InOther), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::NewProp_InAttacker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio, nullptr, "AttachmentEndOverlap__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::_Script_MyPortfolio_eventAttachmentEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::_Script_MyPortfolio_eventAttachmentEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyPortfolio_AttachmentEndOverlap__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAttachmentEndOverlap_DelegateWrapper(const FMulticastScriptDelegate& AttachmentEndOverlap, ACharacter* InAttacker, ACharacter* InOther)
{
	struct _Script_MyPortfolio_eventAttachmentEndOverlap_Parms
	{
		ACharacter* InAttacker;
		ACharacter* InOther;
	};
	_Script_MyPortfolio_eventAttachmentEndOverlap_Parms Parms;
	Parms.InAttacker=InAttacker;
	Parms.InOther=InOther;
	AttachmentEndOverlap.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ACAttachment::execAttachTo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachTo(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACAttachment::execOnComponentEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACAttachment::execOnComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACAttachment::execOnUnequip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnequip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACAttachment::execOnBeginEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginEquip_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACAttachment_OnBeginEquip = FName(TEXT("OnBeginEquip"));
	void ACAttachment::OnBeginEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACAttachment_OnBeginEquip),NULL);
	}
	static FName NAME_ACAttachment_OnUnequip = FName(TEXT("OnUnequip"));
	void ACAttachment::OnUnequip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACAttachment_OnUnequip),NULL);
	}
	void ACAttachment::StaticRegisterNativesACAttachment()
	{
		UClass* Class = ACAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachTo", &ACAttachment::execAttachTo },
			{ "OnBeginEquip", &ACAttachment::execOnBeginEquip },
			{ "OnComponentBeginOverlap", &ACAttachment::execOnComponentBeginOverlap },
			{ "OnComponentEndOverlap", &ACAttachment::execOnComponentEndOverlap },
			{ "OnUnequip", &ACAttachment::execOnUnequip },
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
	struct Z_Construct_UFunction_ACAttachment_OnBeginEquip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnBeginEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_OnBeginEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "OnBeginEquip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnBeginEquip_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACAttachment_OnBeginEquip_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACAttachment_OnBeginEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACAttachment_OnBeginEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics
	{
		struct CAttachment_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CAttachment_eventOnComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CAttachment_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CAttachment_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CAttachment_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CAttachment_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CAttachment_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CAttachment_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::CAttachment_eventOnComponentBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::CAttachment_eventOnComponentBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics
	{
		struct CAttachment_eventOnComponentEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CAttachment_eventOnComponentEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CAttachment_eventOnComponentEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CAttachment_eventOnComponentEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CAttachment_eventOnComponentEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "OnComponentEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::CAttachment_eventOnComponentEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::CAttachment_eventOnComponentEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACAttachment_OnUnequip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnUnequip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_OnUnequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "OnUnequip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnUnequip_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACAttachment_OnUnequip_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACAttachment_OnUnequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACAttachment_OnUnequip_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
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
		{ &Z_Construct_UFunction_ACAttachment_OnBeginEquip, "OnBeginEquip" }, // 3104372570
		{ &Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 1292463223
		{ &Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap, "OnComponentEndOverlap" }, // 91070707
		{ &Z_Construct_UFunction_ACAttachment_OnUnequip, "OnUnequip" }, // 1369804793
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACAttachment, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter_MetaData), Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter,
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
		{ Z_Construct_UClass_ACAttachment, ACAttachment::StaticClass, TEXT("ACAttachment"), &Z_Registration_Info_UClass_ACAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACAttachment), 2021048087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_2343072308(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
