// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Animation/DS1AnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1AnimInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DS1_API UClass* Z_Construct_UClass_UDS1AnimInstance();
DS1_API UClass* Z_Construct_UClass_UDS1AnimInstance_NoRegister();
DS1_API UEnum* Z_Construct_UEnum_DS1_ECombatType();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UDS1AnimInstance Function AnimNotify_ResetMovementInput
struct Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetMovementInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDS1AnimInstance, nullptr, "AnimNotify_ResetMovementInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetMovementInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetMovementInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetMovementInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetMovementInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDS1AnimInstance::execAnimNotify_ResetMovementInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_ResetMovementInput();
	P_NATIVE_END;
}
// End Class UDS1AnimInstance Function AnimNotify_ResetMovementInput

// Begin Class UDS1AnimInstance Function AnimNotify_ResetState
struct Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDS1AnimInstance, nullptr, "AnimNotify_ResetState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDS1AnimInstance::execAnimNotify_ResetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_ResetState();
	P_NATIVE_END;
}
// End Class UDS1AnimInstance Function AnimNotify_ResetState

// Begin Class UDS1AnimInstance
void UDS1AnimInstance::StaticRegisterNativesUDS1AnimInstance()
{
	UClass* Class = UDS1AnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimNotify_ResetMovementInput", &UDS1AnimInstance::execAnimNotify_ResetMovementInput },
		{ "AnimNotify_ResetState", &UDS1AnimInstance::execAnimNotify_ResetState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1AnimInstance);
UClass* Z_Construct_UClass_UDS1AnimInstance_NoRegister()
{
	return UDS1AnimInstance::StaticClass();
}
struct Z_Construct_UClass_UDS1AnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/DS1AnimInstance.h" },
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Movement Data" },
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Movement Data" },
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[] = {
		{ "Category", "Movement Data" },
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[] = {
		{ "Category", "Movement Data" },
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Movement Data" },
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCombatEnabled_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatType_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBlocking_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "ModuleRelativePath", "Animation/DS1AnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static void NewProp_bShouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
	static void NewProp_bIsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
	static void NewProp_bCombatEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombatEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CombatType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatType;
	static void NewProp_bShouldBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBlocking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetMovementInput, "AnimNotify_ResetMovementInput" }, // 2913661569
		{ &Z_Construct_UFunction_UDS1AnimInstance_AnimNotify_ResetState, "AnimNotify_ResetState" }, // 1746763603
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS1AnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1AnimInstance, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1AnimInstance, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1AnimInstance, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1AnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
void Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bShouldMove_SetBit(void* Obj)
{
	((UDS1AnimInstance*)Obj)->bShouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDS1AnimInstance), &Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldMove_MetaData), NewProp_bShouldMove_MetaData) };
void Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
{
	((UDS1AnimInstance*)Obj)->bIsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDS1AnimInstance), &Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFalling_MetaData), NewProp_bIsFalling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1AnimInstance, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
void Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bCombatEnabled_SetBit(void* Obj)
{
	((UDS1AnimInstance*)Obj)->bCombatEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bCombatEnabled = { "bCombatEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDS1AnimInstance), &Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bCombatEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCombatEnabled_MetaData), NewProp_bCombatEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_CombatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_CombatType = { "CombatType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1AnimInstance, CombatType), Z_Construct_UEnum_DS1_ECombatType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatType_MetaData), NewProp_CombatType_MetaData) }; // 4240672285
void Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bShouldBlocking_SetBit(void* Obj)
{
	((UDS1AnimInstance*)Obj)->bShouldBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bShouldBlocking = { "bShouldBlocking", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDS1AnimInstance), &Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bShouldBlocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldBlocking_MetaData), NewProp_bShouldBlocking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS1AnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bShouldMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bIsFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bCombatEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_CombatType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_CombatType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1AnimInstance_Statics::NewProp_bShouldBlocking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1AnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS1AnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1AnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1AnimInstance_Statics::ClassParams = {
	&UDS1AnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDS1AnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS1AnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1AnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1AnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1AnimInstance()
{
	if (!Z_Registration_Info_UClass_UDS1AnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1AnimInstance.OuterSingleton, Z_Construct_UClass_UDS1AnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1AnimInstance.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1AnimInstance>()
{
	return UDS1AnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1AnimInstance);
UDS1AnimInstance::~UDS1AnimInstance() {}
// End Class UDS1AnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_DS1AnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1AnimInstance, UDS1AnimInstance::StaticClass, TEXT("UDS1AnimInstance"), &Z_Registration_Info_UClass_UDS1AnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1AnimInstance), 1338818739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_DS1AnimInstance_h_3662136828(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_DS1AnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_DS1AnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
