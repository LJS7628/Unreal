// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Components/DS1StateComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1StateComponent() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UDS1StateComponent();
DS1_API UClass* Z_Construct_UClass_UDS1StateComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UDS1StateComponent Function MovementInputEnableAction
struct Z_Construct_UFunction_UDS1StateComponent_MovementInputEnableAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/DS1StateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDS1StateComponent_MovementInputEnableAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDS1StateComponent, nullptr, "MovementInputEnableAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDS1StateComponent_MovementInputEnableAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDS1StateComponent_MovementInputEnableAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDS1StateComponent_MovementInputEnableAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDS1StateComponent_MovementInputEnableAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDS1StateComponent::execMovementInputEnableAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MovementInputEnableAction();
	P_NATIVE_END;
}
// End Class UDS1StateComponent Function MovementInputEnableAction

// Begin Class UDS1StateComponent
void UDS1StateComponent::StaticRegisterNativesUDS1StateComponent()
{
	UClass* Class = UDS1StateComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MovementInputEnableAction", &UDS1StateComponent::execMovementInputEnableAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1StateComponent);
UClass* Z_Construct_UClass_UDS1StateComponent_NoRegister()
{
	return UDS1StateComponent::StaticClass();
}
struct Z_Construct_UClass_UDS1StateComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DS1StateComponent.h" },
		{ "ModuleRelativePath", "Components/DS1StateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMovementInputEnabled_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9d\xb4\xeb\x8f\x99\xed\x82\xa4 \xec\x9e\x85\xeb\xa0\xa5 \xec\x83\x81\xed\x83\x9c \xea\xb4\x80\xeb\xa6\xac */" },
#endif
		{ "ModuleRelativePath", "Components/DS1StateComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xeb\x8f\x99\xed\x82\xa4 \xec\x9e\x85\xeb\xa0\xa5 \xec\x83\x81\xed\x83\x9c \xea\xb4\x80\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\xec\x9d\x98 \xed\x98\x84\xec\x9e\xac \xec\x83\x81\xed\x83\x9c */" },
#endif
		{ "ModuleRelativePath", "Components/DS1StateComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\xec\x9d\x98 \xed\x98\x84\xec\x9e\xac \xec\x83\x81\xed\x83\x9c" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bMovementInputEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovementInputEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDS1StateComponent_MovementInputEnableAction, "MovementInputEnableAction" }, // 1610548532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS1StateComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDS1StateComponent_Statics::NewProp_bMovementInputEnabled_SetBit(void* Obj)
{
	((UDS1StateComponent*)Obj)->bMovementInputEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDS1StateComponent_Statics::NewProp_bMovementInputEnabled = { "bMovementInputEnabled", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDS1StateComponent), &Z_Construct_UClass_UDS1StateComponent_Statics::NewProp_bMovementInputEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMovementInputEnabled_MetaData), NewProp_bMovementInputEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDS1StateComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1StateComponent, CurrentState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS1StateComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1StateComponent_Statics::NewProp_bMovementInputEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1StateComponent_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1StateComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS1StateComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1StateComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1StateComponent_Statics::ClassParams = {
	&UDS1StateComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDS1StateComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS1StateComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1StateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1StateComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1StateComponent()
{
	if (!Z_Registration_Info_UClass_UDS1StateComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1StateComponent.OuterSingleton, Z_Construct_UClass_UDS1StateComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1StateComponent.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1StateComponent>()
{
	return UDS1StateComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1StateComponent);
UDS1StateComponent::~UDS1StateComponent() {}
// End Class UDS1StateComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1StateComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1StateComponent, UDS1StateComponent::StaticClass, TEXT("UDS1StateComponent"), &Z_Registration_Info_UClass_UDS1StateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1StateComponent), 2040702579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1StateComponent_h_160934941(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1StateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1StateComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
