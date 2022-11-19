// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Interactibles/VRSliderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRSliderComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSliderComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSliderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType;
	static UEnum* EVRInteractibleSliderLerpType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleSliderLerpType"));
		}
		return Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleSliderLerpType>()
	{
		return EVRInteractibleSliderLerpType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::Enumerators[] = {
		{ "EVRInteractibleSliderLerpType::Lerp_None", (int64)EVRInteractibleSliderLerpType::Lerp_None },
		{ "EVRInteractibleSliderLerpType::Lerp_Interp", (int64)EVRInteractibleSliderLerpType::Lerp_Interp },
		{ "EVRInteractibleSliderLerpType::Lerp_InterpConstantTo", (int64)EVRInteractibleSliderLerpType::Lerp_InterpConstantTo },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "Lerp_Interp.Name", "EVRInteractibleSliderLerpType::Lerp_Interp" },
		{ "Lerp_InterpConstantTo.Name", "EVRInteractibleSliderLerpType::Lerp_InterpConstantTo" },
		{ "Lerp_None.Name", "EVRInteractibleSliderLerpType::Lerp_None" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRInteractibleSliderLerpType",
		"EVRInteractibleSliderLerpType",
		Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType()
	{
		if (!Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior;
	static UEnum* EVRInteractibleSliderDropBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleSliderDropBehavior"));
		}
		return Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleSliderDropBehavior>()
	{
		return EVRInteractibleSliderDropBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::Enumerators[] = {
		{ "EVRInteractibleSliderDropBehavior::Stay", (int64)EVRInteractibleSliderDropBehavior::Stay },
		{ "EVRInteractibleSliderDropBehavior::RetainMomentum", (int64)EVRInteractibleSliderDropBehavior::RetainMomentum },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "RetainMomentum.Comment", "/** Retains momentum on release*/" },
		{ "RetainMomentum.Name", "EVRInteractibleSliderDropBehavior::RetainMomentum" },
		{ "RetainMomentum.ToolTip", "Retains momentum on release" },
		{ "Stay.Comment", "/** Stays in place on drop */" },
		{ "Stay.Name", "EVRInteractibleSliderDropBehavior::Stay" },
		{ "Stay.ToolTip", "Stays in place on drop" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRInteractibleSliderDropBehavior",
		"EVRInteractibleSliderDropBehavior",
		Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior()
	{
		if (!Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRSliderHitPointSignature_Parms
		{
			float SliderProgressPoint;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderProgressPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::NewProp_SliderProgressPoint = { "SliderProgressPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRSliderHitPointSignature_Parms, SliderProgressPoint), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::NewProp_SliderProgressPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when the slider state changes. */" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Delegate for notification when the slider state changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRSliderHitPointSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRSliderHitPointSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRSliderFinishedLerpingSignature_Parms
		{
			float FinalProgress;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::NewProp_FinalProgress = { "FinalProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRSliderFinishedLerpingSignature_Parms, FinalProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::NewProp_FinalProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRSliderFinishedLerpingSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRSliderFinishedLerpingSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVRSliderComponent::execSetSplineComponentToFollow)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_SplineToFollow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineComponentToFollow(Z_Param_SplineToFollow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRSliderComponent::execResetInitialSliderLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetInitialSliderLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRSliderComponent::execSetSliderProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSliderProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderProgress(Z_Param_NewSliderProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRSliderComponent::execCalculateSliderProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateSliderProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRSliderComponent::execOnRep_InitialRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InitialRelativeTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRSliderComponent::execSetGripPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripPriority(Z_Param_NewGripPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRSliderComponent::execSetIsLocked)
	{
		P_GET_UBOOL(Z_Param_bNewLockedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsLocked(Z_Param_bNewLockedState);
		P_NATIVE_END;
	}
	static FName NAME_UVRSliderComponent_ReceiveSliderFinishedLerping = FName(TEXT("ReceiveSliderFinishedLerping"));
	void UVRSliderComponent::ReceiveSliderFinishedLerping(float FinalProgress)
	{
		VRSliderComponent_eventReceiveSliderFinishedLerping_Parms Parms;
		Parms.FinalProgress=FinalProgress;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_ReceiveSliderFinishedLerping),&Parms);
	}
	static FName NAME_UVRSliderComponent_ReceiveSliderHitPoint = FName(TEXT("ReceiveSliderHitPoint"));
	void UVRSliderComponent::ReceiveSliderHitPoint(float SliderProgressPoint)
	{
		VRSliderComponent_eventReceiveSliderHitPoint_Parms Parms;
		Parms.SliderProgressPoint=SliderProgressPoint;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_ReceiveSliderHitPoint),&Parms);
	}
	void UVRSliderComponent::StaticRegisterNativesUVRSliderComponent()
	{
		UClass* Class = UVRSliderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateSliderProgress", &UVRSliderComponent::execCalculateSliderProgress },
			{ "OnRep_InitialRelativeTransform", &UVRSliderComponent::execOnRep_InitialRelativeTransform },
			{ "ResetInitialSliderLocation", &UVRSliderComponent::execResetInitialSliderLocation },
			{ "SetGripPriority", &UVRSliderComponent::execSetGripPriority },
			{ "SetIsLocked", &UVRSliderComponent::execSetIsLocked },
			{ "SetSliderProgress", &UVRSliderComponent::execSetSliderProgress },
			{ "SetSplineComponentToFollow", &UVRSliderComponent::execSetSplineComponentToFollow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics
	{
		struct VRSliderComponent_eventCalculateSliderProgress_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSliderComponent_eventCalculateSliderProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// Calculates the current slider progress\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Calculates the current slider progress" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "CalculateSliderProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::VRSliderComponent_eventCalculateSliderProgress_Parms), Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "OnRep_InitialRelativeTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::NewProp_FinalProgress = { "FinalProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSliderComponent_eventReceiveSliderFinishedLerping_Parms, FinalProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::NewProp_FinalProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Slider Finished Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "ReceiveSliderFinishedLerping", nullptr, nullptr, sizeof(VRSliderComponent_eventReceiveSliderFinishedLerping_Parms), Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderProgressPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::NewProp_SliderProgressPoint = { "SliderProgressPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSliderComponent_eventReceiveSliderHitPoint_Parms, SliderProgressPoint), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::NewProp_SliderProgressPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Slider State Changed" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "ReceiveSliderHitPoint", nullptr, nullptr, sizeof(VRSliderComponent_eventReceiveSliderHitPoint_Parms), Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// Should be called after the slider is moved post begin play\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Should be called after the slider is moved post begin play" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "ResetInitialSliderLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics
	{
		struct VRSliderComponent_eventSetGripPriority_Parms
		{
			int32 NewGripPriority;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewGripPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSliderComponent_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::NewProp_NewGripPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripSettings" },
		{ "Comment", "// Sets the grip priority\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Sets the grip priority" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "SetGripPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::VRSliderComponent_eventSetGripPriority_Parms), Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRSliderComponent_SetGripPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics
	{
		struct VRSliderComponent_eventSetIsLocked_Parms
		{
			bool bNewLockedState;
		};
		static void NewProp_bNewLockedState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewLockedState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::NewProp_bNewLockedState_SetBit(void* Obj)
	{
		((VRSliderComponent_eventSetIsLocked_Parms*)Obj)->bNewLockedState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::NewProp_bNewLockedState = { "bNewLockedState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRSliderComponent_eventSetIsLocked_Parms), &Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::NewProp_bNewLockedState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::NewProp_bNewLockedState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripSettings" },
		{ "Comment", "// Sets if the slider is locked or not\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Sets if the slider is locked or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "SetIsLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::VRSliderComponent_eventSetIsLocked_Parms), Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRSliderComponent_SetIsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics
	{
		struct VRSliderComponent_eventSetSliderProgress_Parms
		{
			float NewSliderProgress;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSliderProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::NewProp_NewSliderProgress = { "NewSliderProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSliderComponent_eventSetSliderProgress_Parms, NewSliderProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::NewProp_NewSliderProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// Forcefully sets the slider progress to the defined value\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Forcefully sets the slider progress to the defined value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "SetSliderProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::VRSliderComponent_eventSetSliderProgress_Parms), Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics
	{
		struct VRSliderComponent_eventSetSplineComponentToFollow_Parms
		{
			USplineComponent* SplineToFollow;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineToFollow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineToFollow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::NewProp_SplineToFollow_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::NewProp_SplineToFollow = { "SplineToFollow", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSliderComponent_eventSetSplineComponentToFollow_Parms, SplineToFollow), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::NewProp_SplineToFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::NewProp_SplineToFollow_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::NewProp_SplineToFollow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// Sets the spline component to follow, if empty, just reinitializes the transform and removes the follow component\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Sets the spline component to follow, if empty, just reinitializes the transform and removes the follow component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "SetSplineComponentToFollow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::VRSliderComponent_eventSetSplineComponentToFollow_Parms), Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRSliderComponent);
	UClass* Z_Construct_UClass_UVRSliderComponent_NoRegister()
	{
		return UVRSliderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRSliderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSliderHitPoint_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSliderHitPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSliderFinishedLerping_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSliderFinishedLerping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInTick_MetaData[];
#endif
		static void NewProp_bUpdateInTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSlideDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxSlideDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSlideDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinSlideDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SliderBehaviorWhenReleased_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderBehaviorWhenReleased_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SliderBehaviorWhenReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesToAverage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FramesToAverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderMomentumFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderMomentumFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderRestitution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderRestitution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSliderMomentum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSliderMomentum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLerping_MetaData[];
#endif
		static void NewProp_bIsLerping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLerping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSliderProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSliderProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSlideDistanceIsInParentSpace_MetaData[];
#endif
		static void NewProp_bSlideDistanceIsInParentSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlideDistanceIsInParentSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDropWhenLocked_MetaData[];
#endif
		static void NewProp_bAutoDropWhenLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDropWhenLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyLogic_MetaData[];
#endif
		static void NewProp_bUseLegacyLogic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyLogic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventThrowThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EventThrowThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySlotRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimarySlotRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondarySlotRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondarySlotRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripPriority_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GripPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponentToFollow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineComponentToFollow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowSplineRotationAndScale_MetaData[];
#endif
		static void NewProp_bFollowSplineRotationAndScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowSplineRotationAndScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnforceSplineLinearity_MetaData[];
#endif
		static void NewProp_bEnforceSplineLinearity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforceSplineLinearity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SplineLerpType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineLerpType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineLerpType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineLerpValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineLerpValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSliderUsesSnapPoints_MetaData[];
#endif
		static void NewProp_bSliderUsesSnapPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSliderUsesSnapPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapIncrement_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapIncrement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncrementProgressBetweenSnapPoints_MetaData[];
#endif
		static void NewProp_bIncrementProgressBetweenSnapPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncrementProgressBetweenSnapPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRepGameplayTags_MetaData[];
#endif
		static void NewProp_bRepGameplayTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepGameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementReplicationSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementReplicationSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementReplicationSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDenyGripping_MetaData[];
#endif
		static void NewProp_bDenyGripping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[];
#endif
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldingGrip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoldingGrip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRSliderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRSliderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress, "CalculateSliderProgress" }, // 1774451679
		{ &Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform, "OnRep_InitialRelativeTransform" }, // 3075264469
		{ &Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping, "ReceiveSliderFinishedLerping" }, // 687222947
		{ &Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint, "ReceiveSliderHitPoint" }, // 406465984
		{ &Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation, "ResetInitialSliderLocation" }, // 3157012245
		{ &Z_Construct_UFunction_UVRSliderComponent_SetGripPriority, "SetGripPriority" }, // 2923723847
		{ &Z_Construct_UFunction_UVRSliderComponent_SetIsLocked, "SetIsLocked" }, // 3169221936
		{ &Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress, "SetSliderProgress" }, // 1061780804
		{ &Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow, "SetSplineComponentToFollow" }, // 718735878
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* A slider component, can act like a scroll bar, or gun bolt, or spline following component\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interactibles/VRSliderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A slider component, can act like a scroll bar, or gun bolt, or spline following component" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderHitPoint_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderHitPoint = { "OnSliderHitPoint", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, OnSliderHitPoint), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderHitPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderHitPoint_MetaData)) }; // 2427137981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderFinishedLerping_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderFinishedLerping = { "OnSliderFinishedLerping", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, OnSliderFinishedLerping), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderFinishedLerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderFinishedLerping_MetaData)) }; // 3712226810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUpdateInTick_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// If true then this slider will only update in its tick event instead of normally using the controllers update event\n// Keep in mind that you then must adjust the tick group in order to make sure it happens after the gripping controller\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "If true then this slider will only update in its tick event instead of normally using the controllers update event\nKeep in mind that you then must adjust the tick group in order to make sure it happens after the gripping controller" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUpdateInTick_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bUpdateInTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUpdateInTick = { "bUpdateInTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUpdateInTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUpdateInTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUpdateInTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSlideDistance_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSlideDistance = { "MaxSlideDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, MaxSlideDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSlideDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSlideDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MinSlideDistance_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MinSlideDistance = { "MinSlideDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, MinSlideDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MinSlideDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MinSlideDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderBehaviorWhenReleased_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderBehaviorWhenReleased_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderBehaviorWhenReleased = { "SliderBehaviorWhenReleased", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, SliderBehaviorWhenReleased), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderBehaviorWhenReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderBehaviorWhenReleased_MetaData)) }; // 1339434445
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_FramesToAverage_MetaData[] = {
		{ "Category", "VRSliderComponent|Momentum Settings" },
		{ "ClampMax", "12" },
		{ "ClampMin", "0" },
		{ "Comment", "// Number of frames to average momentum across for the release momentum (avoids quick waggles)\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Number of frames to average momentum across for the release momentum (avoids quick waggles)" },
		{ "UIMax", "12" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_FramesToAverage = { "FramesToAverage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, FramesToAverage), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_FramesToAverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_FramesToAverage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderMomentumFriction_MetaData[] = {
		{ "Category", "VRSliderComponent|Momentum Settings" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Units in % of total length per second to slow a momentum lerp down\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Units in % of total length per second to slow a momentum lerp down" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderMomentumFriction = { "SliderMomentumFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, SliderMomentumFriction), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderMomentumFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderMomentumFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderRestitution_MetaData[] = {
		{ "Category", "VRSliderComponent|Momentum Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// % of elasticity on reaching the end 0 - 1.0 \n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "% of elasticity on reaching the end 0 - 1.0" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderRestitution = { "SliderRestitution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, SliderRestitution), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderRestitution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderRestitution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSliderMomentum_MetaData[] = {
		{ "Category", "VRSliderComponent|Momentum Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Maximum momentum of the slider in units of the total distance per second (0.0 - 1.0)\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Maximum momentum of the slider in units of the total distance per second (0.0 - 1.0)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSliderMomentum = { "MaxSliderMomentum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, MaxSliderMomentum), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSliderMomentum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSliderMomentum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLerping_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLerping_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bIsLerping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLerping = { "bIsLerping", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLerping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLerping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_CurrentSliderProgress_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// Gets filled in with the current slider location progress\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Gets filled in with the current slider location progress" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_CurrentSliderProgress = { "CurrentSliderProgress", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, CurrentSliderProgress), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_CurrentSliderProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_CurrentSliderProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSlideDistanceIsInParentSpace_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSlideDistanceIsInParentSpace_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bSlideDistanceIsInParentSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSlideDistanceIsInParentSpace = { "bSlideDistanceIsInParentSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSlideDistanceIsInParentSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSlideDistanceIsInParentSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSlideDistanceIsInParentSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// If true then this slider is locked in place until unlocked again\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "If true then this slider is locked in place until unlocked again" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bAutoDropWhenLocked_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// If true then this slider will auto drop even when locked\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "If true then this slider will auto drop even when locked" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bAutoDropWhenLocked_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bAutoDropWhenLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bAutoDropWhenLocked = { "bAutoDropWhenLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bAutoDropWhenLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bAutoDropWhenLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bAutoDropWhenLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUseLegacyLogic_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// Uses the legacy slider logic that doesn't ABS the min and max values\n// Retains compatibility with some older projects\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Uses the legacy slider logic that doesn't ABS the min and max values\nRetains compatibility with some older projects" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUseLegacyLogic_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bUseLegacyLogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUseLegacyLogic = { "bUseLegacyLogic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUseLegacyLogic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUseLegacyLogic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUseLegacyLogic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_EventThrowThreshold_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How far away from an event state before the slider allows throwing the same state again, default of 1.0 means it takes a full toggle\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "How far away from an event state before the slider allows throwing the same state again, default of 1.0 means it takes a full toggle" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_EventThrowThreshold = { "EventThrowThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, EventThrowThreshold), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_EventThrowThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_EventThrowThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_PrimarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_PrimarySlotRange = { "PrimarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, PrimarySlotRange), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_PrimarySlotRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_PrimarySlotRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SecondarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SecondarySlotRange = { "SecondarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, SecondarySlotRange), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SecondarySlotRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SecondarySlotRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GripPriority_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GripPriority = { "GripPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, GripPriority), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GripPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GripPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineComponentToFollow_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "/*Using = OnRep_SplineComponentToFollow*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Using = OnRep_SplineComponentToFollow" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineComponentToFollow = { "SplineComponentToFollow", nullptr, (EPropertyFlags)0x00140000000a002d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, SplineComponentToFollow), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineComponentToFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineComponentToFollow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bFollowSplineRotationAndScale_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "/*UFUNCTION()\n\x09virtual void OnRep_SplineComponentToFollow()\n\x09{\n\x09\x09""CalculateSliderProgress();\n\x09}*/// Where the slider should follow the rotation and scale of the spline as well\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "UFUNCTION()\n       virtual void OnRep_SplineComponentToFollow()\n       {\n               CalculateSliderProgress();\n       }// Where the slider should follow the rotation and scale of the spline as well" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bFollowSplineRotationAndScale_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bFollowSplineRotationAndScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bFollowSplineRotationAndScale = { "bFollowSplineRotationAndScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bFollowSplineRotationAndScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bFollowSplineRotationAndScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bFollowSplineRotationAndScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bEnforceSplineLinearity_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// Does not allow the slider to skip past nodes on the spline, it requires it to progress from node to node\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Does not allow the slider to skip past nodes on the spline, it requires it to progress from node to node" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bEnforceSplineLinearity_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bEnforceSplineLinearity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bEnforceSplineLinearity = { "bEnforceSplineLinearity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bEnforceSplineLinearity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bEnforceSplineLinearity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bEnforceSplineLinearity_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpType_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// Type of lerp to use when following a spline\n// For lerping I would suggest using ConstantTo in general as it will be the smoothest.\n// Normal Interp will change speed based on distance, that may also have its uses.\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Type of lerp to use when following a spline\nFor lerping I would suggest using ConstantTo in general as it will be the smoothest.\nNormal Interp will change speed based on distance, that may also have its uses." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpType = { "SplineLerpType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, SplineLerpType), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpType_MetaData)) }; // 604816821
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpValue_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ClampMin", "0" },
		{ "Comment", "// Lerp Value for the spline, when in InterpMode it is the speed of interpolation\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Lerp Value for the spline, when in InterpMode it is the speed of interpolation" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpValue = { "SplineLerpValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, SplineLerpValue), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSliderUsesSnapPoints_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// Uses snap increments to move between, not compatible with retain momentum.\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Uses snap increments to move between, not compatible with retain momentum." },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSliderUsesSnapPoints_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bSliderUsesSnapPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSliderUsesSnapPoints = { "bSliderUsesSnapPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSliderUsesSnapPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSliderUsesSnapPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSliderUsesSnapPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapIncrement_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Portion of the slider that the slider snaps to on release and when within the threshold distance\n" },
		{ "editcondition", "bSliderUsesSnapPoints" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Portion of the slider that the slider snaps to on release and when within the threshold distance" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapIncrement = { "SnapIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, SnapIncrement), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapIncrement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapThreshold_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Threshold distance that when within the slider will stay snapped to its current snap increment\n" },
		{ "editcondition", "bSliderUsesSnapPoints" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Threshold distance that when within the slider will stay snapped to its current snap increment" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapThreshold = { "SnapThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, SnapThreshold), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIncrementProgressBetweenSnapPoints_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// If true then the slider progress will keep incrementing between snap points if outside of the threshold\n// However events will not be thrown\n" },
		{ "editcondition", "bSliderUsesSnapPoints" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "If true then the slider progress will keep incrementing between snap points if outside of the threshold\nHowever events will not be thrown" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIncrementProgressBetweenSnapPoints_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bIncrementProgressBetweenSnapPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIncrementProgressBetweenSnapPoints = { "bIncrementProgressBetweenSnapPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIncrementProgressBetweenSnapPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIncrementProgressBetweenSnapPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIncrementProgressBetweenSnapPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_InitialRelativeTransform_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "Comment", "// Now replicating this so that it works correctly over the network\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Now replicating this so that it works correctly over the network" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_InitialRelativeTransform = { "InitialRelativeTransform", "OnRep_InitialRelativeTransform", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, InitialRelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_InitialRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_InitialRelativeTransform_MetaData)) }; // 2465919809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Tags that are set on this object */" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Tags that are set on this object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GameplayTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bRepGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Requires bReplicates to be true for the component" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bRepGameplayTags_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bRepGameplayTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bRepGameplayTags = { "bRepGameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bRepGameplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bRepGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bRepGameplayTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bReplicateMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MovementReplicationSetting_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MovementReplicationSetting = { "MovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, MovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MovementReplicationSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MovementReplicationSetting_MetaData)) }; // 2250529565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_BreakDistance_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Distance before the object will break out of the hand, 0.0f == never will\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Distance before the object will break out of the hand, 0.0f == never will" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_BreakDistance = { "BreakDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, BreakDistance), METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_BreakDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_BreakDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bDenyGripping_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Should we deny gripping on this object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ScriptName", "IsDenyGripping" },
		{ "ToolTip", "Should we deny gripping on this object" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bDenyGripping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bDenyGripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bDenyGripping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsHeld_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ScriptName", "IsCurrentlyHeld" },
	};
#endif
	void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((UVRSliderComponent*)Obj)->bIsHeld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsHeld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_HoldingGrip_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Set on grip notify, not net serializing\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Set on grip notify, not net serializing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_HoldingGrip = { "HoldingGrip", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, HoldingGrip), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_HoldingGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_HoldingGrip_MetaData)) }; // 4278698171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Called when a object is gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnGripped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnGripped_MetaData)) }; // 2937824324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ToolTip", "Called when a object is dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSliderComponent, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnDropped_MetaData)) }; // 3250299488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRSliderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderHitPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderFinishedLerping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUpdateInTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSlideDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MinSlideDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderBehaviorWhenReleased_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderBehaviorWhenReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_FramesToAverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderMomentumFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderRestitution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSliderMomentum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLerping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_CurrentSliderProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSlideDistanceIsInParentSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bAutoDropWhenLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUseLegacyLogic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_EventThrowThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_PrimarySlotRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SecondarySlotRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GripPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineComponentToFollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bFollowSplineRotationAndScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bEnforceSplineLinearity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSliderUsesSnapPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapIncrement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIncrementProgressBetweenSnapPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_InitialRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bRepGameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bReplicateMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MovementReplicationSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MovementReplicationSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_BreakDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bDenyGripping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsHeld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_HoldingGrip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnGripped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnDropped,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVRSliderComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UVRSliderComponent, IVRGripInterface), false },  // 2844245502
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UVRSliderComponent, IGameplayTagAssetInterface), false },  // 2897640864
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRSliderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRSliderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRSliderComponent_Statics::ClassParams = {
		&UVRSliderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRSliderComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRSliderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRSliderComponent()
	{
		if (!Z_Registration_Info_UClass_UVRSliderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRSliderComponent.OuterSingleton, Z_Construct_UClass_UVRSliderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRSliderComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRSliderComponent>()
	{
		return UVRSliderComponent::StaticClass();
	}

	void UVRSliderComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SplineComponentToFollow(TEXT("SplineComponentToFollow"));
		static const FName Name_InitialRelativeTransform(TEXT("InitialRelativeTransform"));
		static const FName Name_GameplayTags(TEXT("GameplayTags"));
		static const FName Name_bRepGameplayTags(TEXT("bRepGameplayTags"));
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));

		const bool bIsValid = true
			&& Name_SplineComponentToFollow == ClassReps[(int32)ENetFields_Private::SplineComponentToFollow].Property->GetFName()
			&& Name_InitialRelativeTransform == ClassReps[(int32)ENetFields_Private::InitialRelativeTransform].Property->GetFName()
			&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
			&& Name_bRepGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGameplayTags].Property->GetFName()
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVRSliderComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRSliderComponent);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_Statics::EnumInfo[] = {
		{ EVRInteractibleSliderLerpType_StaticEnum, TEXT("EVRInteractibleSliderLerpType"), &Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 604816821U) },
		{ EVRInteractibleSliderDropBehavior_StaticEnum, TEXT("EVRInteractibleSliderDropBehavior"), &Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1339434445U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRSliderComponent, UVRSliderComponent::StaticClass, TEXT("UVRSliderComponent"), &Z_Registration_Info_UClass_UVRSliderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRSliderComponent), 2868672677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_312128048(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
