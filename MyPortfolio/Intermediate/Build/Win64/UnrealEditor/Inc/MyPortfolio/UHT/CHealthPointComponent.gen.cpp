// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Components/CHealthPointComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCHealthPointComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCHealthPointComponent();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCHealthPointComponent_NoRegister();
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics
	{
		struct _Script_MyPortfolio_eventHealthPointChanged_Parms
		{
			float InCurrentHealth;
			float InMaxHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InCurrentHealth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::NewProp_InCurrentHealth = { "InCurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventHealthPointChanged_Parms, InCurrentHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::NewProp_InMaxHealth = { "InMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventHealthPointChanged_Parms, InMaxHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::NewProp_InCurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::NewProp_InMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CHealthPointComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio, nullptr, "HealthPointChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::_Script_MyPortfolio_eventHealthPointChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::_Script_MyPortfolio_eventHealthPointChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyPortfolio_HealthPointChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHealthPointChanged_DelegateWrapper(const FMulticastScriptDelegate& HealthPointChanged, float InCurrentHealth, float InMaxHealth)
{
	struct _Script_MyPortfolio_eventHealthPointChanged_Parms
	{
		float InCurrentHealth;
		float InMaxHealth;
	};
	_Script_MyPortfolio_eventHealthPointChanged_Parms Parms;
	Parms.InCurrentHealth=InCurrentHealth;
	Parms.InMaxHealth=InMaxHealth;
	HealthPointChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UCHealthPointComponent::StaticRegisterNativesUCHealthPointComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCHealthPointComponent);
	UClass* Z_Construct_UClass_UCHealthPointComponent_NoRegister()
	{
		return UCHealthPointComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCHealthPointComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCHealthPointComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCHealthPointComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCHealthPointComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CHealthPointComponent.h" },
		{ "ModuleRelativePath", "Components/CHealthPointComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCHealthPointComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/CHealthPointComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCHealthPointComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCHealthPointComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCHealthPointComponent_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UCHealthPointComponent_Statics::NewProp_MaxHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCHealthPointComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCHealthPointComponent_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCHealthPointComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCHealthPointComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCHealthPointComponent_Statics::ClassParams = {
		&UCHealthPointComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCHealthPointComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCHealthPointComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCHealthPointComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCHealthPointComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCHealthPointComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCHealthPointComponent()
	{
		if (!Z_Registration_Info_UClass_UCHealthPointComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCHealthPointComponent.OuterSingleton, Z_Construct_UClass_UCHealthPointComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCHealthPointComponent.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCHealthPointComponent>()
	{
		return UCHealthPointComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCHealthPointComponent);
	UCHealthPointComponent::~UCHealthPointComponent() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCHealthPointComponent, UCHealthPointComponent::StaticClass, TEXT("UCHealthPointComponent"), &Z_Registration_Info_UClass_UCHealthPointComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCHealthPointComponent), 2591080454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_1442800070(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
