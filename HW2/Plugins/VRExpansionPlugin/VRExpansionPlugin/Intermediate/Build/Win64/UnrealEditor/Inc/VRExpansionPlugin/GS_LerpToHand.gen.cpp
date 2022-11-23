// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_LerpToHand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_LerpToHand() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_LerpToHand_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_LerpToHand();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRLerpToHandFinishedSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UGS_LerpToHand::StaticRegisterNativesUGS_LerpToHand()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGS_LerpToHand);
	UClass* Z_Construct_UClass_UGS_LerpToHand_NoRegister()
	{
		return UGS_LerpToHand::StaticClass();
	}
	struct Z_Construct_UClass_UGS_LerpToHand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceForLerp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceForLerp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeedForLerp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeedForLerp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedForLerp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedForLerp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LerpInterpolationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpInterpolationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LerpInterpolationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLerpToHandBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLerpToHandBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLerpToHandFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLerpToHandFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurve_MetaData[];
#endif
		static void NewProp_bUseCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalCurveToFollow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalCurveToFollow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_LerpToHand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRGripScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "// A grip script that causes new grips to lerp to the hand (from their current position to where they are supposed to sit).\n// It turns off when the lerp is complete.\n" },
		{ "HideCategories", "TickSettings DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_LerpToHand.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A grip script that causes new grips to lerp to the hand (from their current position to where they are supposed to sit).\nIt turns off when the lerp is complete." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinDistanceForLerp_MetaData[] = {
		{ "Category", "LerpSettings" },
		{ "Comment", "// If the initial grip distance is closer than this value then the lerping will not be performed.\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
		{ "ToolTip", "If the initial grip distance is closer than this value then the lerping will not be performed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinDistanceForLerp = { "MinDistanceForLerp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_LerpToHand, MinDistanceForLerp), METADATA_PARAMS(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinDistanceForLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinDistanceForLerp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpDuration_MetaData[] = {
		{ "Category", "LerpSettings" },
		{ "Comment", "// How many seconds the lerp should take\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
		{ "ToolTip", "How many seconds the lerp should take" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpDuration = { "LerpDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_LerpToHand, LerpDuration), METADATA_PARAMS(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinSpeedForLerp_MetaData[] = {
		{ "Category", "LerpSettings" },
		{ "Comment", "// The minimum speed (in UU per second) that that the lerp should have across the initial grip distance\n// Will speed the LerpSpeed up to try and maintain this initial speed if required\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
		{ "ToolTip", "The minimum speed (in UU per second) that that the lerp should have across the initial grip distance\nWill speed the LerpSpeed up to try and maintain this initial speed if required" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinSpeedForLerp = { "MinSpeedForLerp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_LerpToHand, MinSpeedForLerp), METADATA_PARAMS(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinSpeedForLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinSpeedForLerp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MaxSpeedForLerp_MetaData[] = {
		{ "Category", "LerpSettings" },
		{ "Comment", "// The maximum speed (in UU per second) that the lerp should have across the initial grip distance\n// Will slow the LerpSpeed down to try and maintain this initial speed if required\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
		{ "ToolTip", "The maximum speed (in UU per second) that the lerp should have across the initial grip distance\nWill slow the LerpSpeed down to try and maintain this initial speed if required" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MaxSpeedForLerp = { "MaxSpeedForLerp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_LerpToHand, MaxSpeedForLerp), METADATA_PARAMS(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MaxSpeedForLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MaxSpeedForLerp_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode_MetaData[] = {
		{ "Category", "LerpSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode = { "LerpInterpolationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_LerpToHand, LerpInterpolationMode), Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode, METADATA_PARAMS(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode_MetaData)) }; // 2359620219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandBegin_MetaData[] = {
		{ "Category", "LerpEvents" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandBegin = { "OnLerpToHandBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_LerpToHand, OnLerpToHandBegin), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandBegin_MetaData)) }; // 121797197
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandFinished_MetaData[] = {
		{ "Category", "LerpEvents" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandFinished = { "OnLerpToHandFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_LerpToHand, OnLerpToHandFinished), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandFinished_MetaData)) }; // 121797197
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve_MetaData[] = {
		{ "Category", "LerpCurve" },
		{ "Comment", "// Whether to use a curve map to map the lerp to\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
		{ "ToolTip", "Whether to use a curve map to map the lerp to" },
	};
#endif
	void Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve_SetBit(void* Obj)
	{
		((UGS_LerpToHand*)Obj)->bUseCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve = { "bUseCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGS_LerpToHand), &Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OptionalCurveToFollow_MetaData[] = {
		{ "Category", "LerpCurve" },
		{ "Comment", "// The curve to follow when using a curve map, only uses from 0.0 - 1.0 of the curve timeline and maps it across the entire duration\n" },
		{ "editcondition", "bUseCurve" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
		{ "ToolTip", "The curve to follow when using a curve map, only uses from 0.0 - 1.0 of the curve timeline and maps it across the entire duration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OptionalCurveToFollow = { "OptionalCurveToFollow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_LerpToHand, OptionalCurveToFollow), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OptionalCurveToFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OptionalCurveToFollow_MetaData)) }; // 1196190759
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_LerpToHand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinDistanceForLerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinSpeedForLerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MaxSpeedForLerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OptionalCurveToFollow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_LerpToHand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_LerpToHand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGS_LerpToHand_Statics::ClassParams = {
		&UGS_LerpToHand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGS_LerpToHand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGS_LerpToHand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGS_LerpToHand()
	{
		if (!Z_Registration_Info_UClass_UGS_LerpToHand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGS_LerpToHand.OuterSingleton, Z_Construct_UClass_UGS_LerpToHand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGS_LerpToHand.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_LerpToHand>()
	{
		return UGS_LerpToHand::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_LerpToHand);
	struct Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_LerpToHand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_LerpToHand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGS_LerpToHand, UGS_LerpToHand::StaticClass, TEXT("UGS_LerpToHand"), &Z_Registration_Info_UClass_UGS_LerpToHand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGS_LerpToHand), 3392220669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_LerpToHand_h_624298256(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_LerpToHand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_LerpToHand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
