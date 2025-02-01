// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Components/CStateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCStateComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCStateComponent();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	MYPORTFOLIO_API UEnum* Z_Construct_UEnum_MyPortfolio_EStateType();
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateType;
	static UEnum* EStateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyPortfolio_EStateType, (UObject*)Z_Construct_UPackage__Script_MyPortfolio(), TEXT("EStateType"));
		}
		return Z_Registration_Info_UEnum_EStateType.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UEnum* StaticEnum<EStateType>()
	{
		return EStateType_StaticEnum();
	}
	struct Z_Construct_UEnum_MyPortfolio_EStateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyPortfolio_EStateType_Statics::Enumerators[] = {
		{ "EStateType::Idle", (int64)EStateType::Idle },
		{ "EStateType::Evade", (int64)EStateType::Evade },
		{ "EStateType::Equip", (int64)EStateType::Equip },
		{ "EStateType::Damaged", (int64)EStateType::Damaged },
		{ "EStateType::Action", (int64)EStateType::Action },
		{ "EStateType::Dead", (int64)EStateType::Dead },
		{ "EStateType::Max", (int64)EStateType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyPortfolio_EStateType_Statics::Enum_MetaDataParams[] = {
		{ "Action.Name", "EStateType::Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Enum\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "Damaged.Name", "EStateType::Damaged" },
		{ "Dead.Name", "EStateType::Dead" },
		{ "Equip.Name", "EStateType::Equip" },
		{ "Evade.Name", "EStateType::Evade" },
		{ "Idle.Name", "EStateType::Idle" },
		{ "Max.Name", "EStateType::Max" },
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Enum\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyPortfolio_EStateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio,
		nullptr,
		"EStateType",
		"EStateType",
		Z_Construct_UEnum_MyPortfolio_EStateType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyPortfolio_EStateType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MyPortfolio_EStateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MyPortfolio_EStateType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MyPortfolio_EStateType()
	{
		if (!Z_Registration_Info_UEnum_EStateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateType.InnerSingleton, Z_Construct_UEnum_MyPortfolio_EStateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics
	{
		struct _Script_MyPortfolio_eventStateTypeChanged_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventStateTypeChanged_Parms, InPrevType), Z_Construct_UEnum_MyPortfolio_EStateType, METADATA_PARAMS(0, nullptr) }; // 3742531876
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventStateTypeChanged_Parms, InNewType), Z_Construct_UEnum_MyPortfolio_EStateType, METADATA_PARAMS(0, nullptr) }; // 3742531876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb7\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae (\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb7\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae (\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio, nullptr, "StateTypeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::_Script_MyPortfolio_eventStateTypeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::_Script_MyPortfolio_eventStateTypeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FStateTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& StateTypeChanged, EStateType InPrevType, EStateType InNewType)
{
	struct _Script_MyPortfolio_eventStateTypeChanged_Parms
	{
		EStateType InPrevType;
		EStateType InNewType;
	};
	_Script_MyPortfolio_eventStateTypeChanged_Parms Parms;
	Parms.InPrevType=InPrevType;
	Parms.InNewType=InNewType;
	StateTypeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UCStateComponent::StaticRegisterNativesUCStateComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCStateComponent);
	UClass* Z_Construct_UClass_UCStateComponent_NoRegister()
	{
		return UCStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCStateComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStateComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/CStateComponent.h" },
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCStateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCStateComponent_Statics::ClassParams = {
		&UCStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCStateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCStateComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCStateComponent()
	{
		if (!Z_Registration_Info_UClass_UCStateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCStateComponent.OuterSingleton, Z_Construct_UClass_UCStateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCStateComponent.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCStateComponent>()
	{
		return UCStateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCStateComponent);
	UCStateComponent::~UCStateComponent() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_Statics::EnumInfo[] = {
		{ EStateType_StaticEnum, TEXT("EStateType"), &Z_Registration_Info_UEnum_EStateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3742531876U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCStateComponent, UCStateComponent::StaticClass, TEXT("UCStateComponent"), &Z_Registration_Info_UClass_UCStateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCStateComponent), 2147035750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_1832207760(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
