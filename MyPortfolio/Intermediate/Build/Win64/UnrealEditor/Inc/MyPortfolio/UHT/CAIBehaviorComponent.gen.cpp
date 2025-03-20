// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Components/CAIBehaviorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAIBehaviorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAIBehaviorComponent();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAIBehaviorComponent_NoRegister();
	MYPORTFOLIO_API UEnum* Z_Construct_UEnum_MyPortfolio_EAIStateType();
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIStateType;
	static UEnum* EAIStateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIStateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIStateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyPortfolio_EAIStateType, (UObject*)Z_Construct_UPackage__Script_MyPortfolio(), TEXT("EAIStateType"));
		}
		return Z_Registration_Info_UEnum_EAIStateType.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UEnum* StaticEnum<EAIStateType>()
	{
		return EAIStateType_StaticEnum();
	}
	struct Z_Construct_UEnum_MyPortfolio_EAIStateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyPortfolio_EAIStateType_Statics::Enumerators[] = {
		{ "EAIStateType::Wait", (int64)EAIStateType::Wait },
		{ "EAIStateType::Patrol", (int64)EAIStateType::Patrol },
		{ "EAIStateType::Equip", (int64)EAIStateType::Equip },
		{ "EAIStateType::Approach", (int64)EAIStateType::Approach },
		{ "EAIStateType::Action", (int64)EAIStateType::Action },
		{ "EAIStateType::Damaged", (int64)EAIStateType::Damaged },
		{ "EAIStateType::Avoid", (int64)EAIStateType::Avoid },
		{ "EAIStateType::Max", (int64)EAIStateType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyPortfolio_EAIStateType_Statics::Enum_MetaDataParams[] = {
		{ "Action.Name", "EAIStateType::Action" },
		{ "Approach.Name", "EAIStateType::Approach" },
		{ "Avoid.Name", "EAIStateType::Avoid" },
		{ "BlueprintType", "true" },
		{ "Damaged.Name", "EAIStateType::Damaged" },
		{ "Equip.Name", "EAIStateType::Equip" },
		{ "Max.Name", "EAIStateType::Max" },
		{ "ModuleRelativePath", "Components/CAIBehaviorComponent.h" },
		{ "Patrol.Name", "EAIStateType::Patrol" },
		{ "Wait.Name", "EAIStateType::Wait" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyPortfolio_EAIStateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio,
		nullptr,
		"EAIStateType",
		"EAIStateType",
		Z_Construct_UEnum_MyPortfolio_EAIStateType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyPortfolio_EAIStateType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MyPortfolio_EAIStateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MyPortfolio_EAIStateType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MyPortfolio_EAIStateType()
	{
		if (!Z_Registration_Info_UEnum_EAIStateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIStateType.InnerSingleton, Z_Construct_UEnum_MyPortfolio_EAIStateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIStateType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics
	{
		struct _Script_MyPortfolio_eventAIStateTypeChanged_Parms
		{
			EAIStateType InPrevType;
			EAIStateType InNewType;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventAIStateTypeChanged_Parms, InPrevType), Z_Construct_UEnum_MyPortfolio_EAIStateType, METADATA_PARAMS(0, nullptr) }; // 2606506645
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventAIStateTypeChanged_Parms, InNewType), Z_Construct_UEnum_MyPortfolio_EAIStateType, METADATA_PARAMS(0, nullptr) }; // 2606506645
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CAIBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio, nullptr, "AIStateTypeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::_Script_MyPortfolio_eventAIStateTypeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::_Script_MyPortfolio_eventAIStateTypeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyPortfolio_AIStateTypeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAIStateTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& AIStateTypeChanged, EAIStateType InPrevType, EAIStateType InNewType)
{
	struct _Script_MyPortfolio_eventAIStateTypeChanged_Parms
	{
		EAIStateType InPrevType;
		EAIStateType InNewType;
	};
	_Script_MyPortfolio_eventAIStateTypeChanged_Parms Parms;
	Parms.InPrevType=InPrevType;
	Parms.InNewType=InNewType;
	AIStateTypeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UCAIBehaviorComponent::StaticRegisterNativesUCAIBehaviorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCAIBehaviorComponent);
	UClass* Z_Construct_UClass_UCAIBehaviorComponent_NoRegister()
	{
		return UCAIBehaviorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCAIBehaviorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIStateTypeKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AIStateTypeKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolLocationKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PatrolLocationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeLocationKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DodgeLocationKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAIBehaviorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAIBehaviorComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAIBehaviorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/CAIBehaviorComponent.h" },
		{ "ModuleRelativePath", "Components/CAIBehaviorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_AIStateTypeKey_MetaData[] = {
		{ "Category", "BlackBoard Key" },
		{ "ModuleRelativePath", "Components/CAIBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_AIStateTypeKey = { "AIStateTypeKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCAIBehaviorComponent, AIStateTypeKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_AIStateTypeKey_MetaData), Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_AIStateTypeKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_TargetKey_MetaData[] = {
		{ "Category", "BlackBoard Key" },
		{ "ModuleRelativePath", "Components/CAIBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCAIBehaviorComponent, TargetKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_TargetKey_MetaData), Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_TargetKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_PatrolLocationKey_MetaData[] = {
		{ "Category", "BlackBoard Key" },
		{ "ModuleRelativePath", "Components/CAIBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_PatrolLocationKey = { "PatrolLocationKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCAIBehaviorComponent, PatrolLocationKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_PatrolLocationKey_MetaData), Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_PatrolLocationKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_DodgeLocationKey_MetaData[] = {
		{ "Category", "BlackBoard Key" },
		{ "ModuleRelativePath", "Components/CAIBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_DodgeLocationKey = { "DodgeLocationKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCAIBehaviorComponent, DodgeLocationKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_DodgeLocationKey_MetaData), Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_DodgeLocationKey_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCAIBehaviorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_AIStateTypeKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_TargetKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_PatrolLocationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAIBehaviorComponent_Statics::NewProp_DodgeLocationKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAIBehaviorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAIBehaviorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCAIBehaviorComponent_Statics::ClassParams = {
		&UCAIBehaviorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCAIBehaviorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCAIBehaviorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAIBehaviorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCAIBehaviorComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAIBehaviorComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCAIBehaviorComponent()
	{
		if (!Z_Registration_Info_UClass_UCAIBehaviorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCAIBehaviorComponent.OuterSingleton, Z_Construct_UClass_UCAIBehaviorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCAIBehaviorComponent.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCAIBehaviorComponent>()
	{
		return UCAIBehaviorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAIBehaviorComponent);
	UCAIBehaviorComponent::~UCAIBehaviorComponent() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_Statics::EnumInfo[] = {
		{ EAIStateType_StaticEnum, TEXT("EAIStateType"), &Z_Registration_Info_UEnum_EAIStateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2606506645U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCAIBehaviorComponent, UCAIBehaviorComponent::StaticClass, TEXT("UCAIBehaviorComponent"), &Z_Registration_Info_UClass_UCAIBehaviorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCAIBehaviorComponent), 1656121126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_1295528139(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
