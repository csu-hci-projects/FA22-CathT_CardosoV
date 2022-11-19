// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRExpansionPlugin/Public/OpenXRHandPoseComponent.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRHandPoseComponent() {}
// Cross Module References
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer();
	UPackage* Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOpenXRGesture();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRGestureDatabase_NoRegister();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRGestureDatabase();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	OPENXREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature();
	OPENXREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRHandPoseComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRAnimInstance_NoRegister();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer;
class UScriptStruct* FBPXRSkeletalRepContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("BPXRSkeletalRepContainer"));
	}
	return Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPXRSkeletalRepContainer>()
{
	return FBPXRSkeletalRepContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDeformingMesh_MetaData[];
#endif
		static void NewProp_bAllowDeformingMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDeformingMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUE4HandRepSavings_MetaData[];
#endif
		static void NewProp_bEnableUE4HandRepSavings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUE4HandRepSavings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalTransforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionFunctions|OpenXR|HandSkeleton" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPXRSkeletalRepContainer>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_TargetHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_TargetHand_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_TargetHand = { "TargetHand", nullptr, (EPropertyFlags)0x0010000080002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPXRSkeletalRepContainer, TargetHand), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_TargetHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_TargetHand_MetaData)) }; // 1054813515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh_SetBit(void* Obj)
	{
		((FBPXRSkeletalRepContainer*)Obj)->bAllowDeformingMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh = { "bAllowDeformingMesh", nullptr, (EPropertyFlags)0x0010000080002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPXRSkeletalRepContainer), &Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings_MetaData[] = {
		{ "Comment", "// If true we will skip sending the 4 metacarpal bones that ue4 doesn't need, (STEAMVR skeletons need this disabled!)\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "If true we will skip sending the 4 metacarpal bones that ue4 doesn't need, (STEAMVR skeletons need this disabled!)" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings_SetBit(void* Obj)
	{
		((FBPXRSkeletalRepContainer*)Obj)->bEnableUE4HandRepSavings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings = { "bEnableUE4HandRepSavings", nullptr, (EPropertyFlags)0x0010000080002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPXRSkeletalRepContainer), &Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_SkeletalTransforms_Inner = { "SkeletalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_SkeletalTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_SkeletalTransforms = { "SkeletalTransforms", nullptr, (EPropertyFlags)0x0010000080002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPXRSkeletalRepContainer, SkeletalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_SkeletalTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_SkeletalTransforms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_BoneCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_BoneCount = { "BoneCount", nullptr, (EPropertyFlags)0x0010000080002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPXRSkeletalRepContainer, BoneCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_BoneCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_BoneCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_TargetHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_TargetHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_SkeletalTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_SkeletalTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_BoneCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPXRSkeletalRepContainer",
		sizeof(FBPXRSkeletalRepContainer),
		alignof(FBPXRSkeletalRepContainer),
		Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer.InnerSingleton, Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition;
class UScriptStruct* FOpenXRGestureFingerPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("OpenXRGestureFingerPosition"));
	}
	return Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FOpenXRGestureFingerPosition>()
{
	return FOpenXRGestureFingerPosition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_IndexType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenXRGestureFingerPosition>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "Comment", "// The Finger index, not editable\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "The Finger index, not editable" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType = { "IndexType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenXRGestureFingerPosition, IndexType), Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType_MetaData)) }; // 796399456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "Comment", "// The locational value of this element 0.f - 1.f\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "The locational value of this element 0.f - 1.f" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenXRGestureFingerPosition, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The threshold within which this finger value will be detected as matching (1.0 would be always matching, IE: finger doesn't count)\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "The threshold within which this finger value will be detected as matching (1.0 would be always matching, IE: finger doesn't count)" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenXRGestureFingerPosition, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Threshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Threshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"OpenXRGestureFingerPosition",
		sizeof(FOpenXRGestureFingerPosition),
		alignof(FOpenXRGestureFingerPosition),
		Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition()
	{
		if (!Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition.InnerSingleton, Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenXRGesture;
class UScriptStruct* FOpenXRGesture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenXRGesture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenXRGesture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenXRGesture, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("OpenXRGesture"));
	}
	return Z_Registration_Info_UScriptStruct_OpenXRGesture.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FOpenXRGesture>()
{
	return FOpenXRGesture::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOpenXRGesture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FingerValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FingerValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FingerValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGesture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenXRGesture>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "Comment", "// Name of the recorded gesture\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "Name of the recorded gesture" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenXRGesture, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues_Inner = { "FingerValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition, METADATA_PARAMS(nullptr, 0) }; // 936583785
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "Comment", "// Samples in the recorded gesture\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "Samples in the recorded gesture" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues = { "FingerValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenXRGesture, FingerValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues_MetaData)) }; // 936583785
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenXRGesture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenXRGesture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"OpenXRGesture",
		sizeof(FOpenXRGesture),
		alignof(FOpenXRGesture),
		Z_Construct_UScriptStruct_FOpenXRGesture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenXRGesture()
	{
		if (!Z_Registration_Info_UScriptStruct_OpenXRGesture.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenXRGesture.InnerSingleton, Z_Construct_UScriptStruct_FOpenXRGesture_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OpenXRGesture.InnerSingleton;
	}
	void UOpenXRGestureDatabase::StaticRegisterNativesUOpenXRGestureDatabase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRGestureDatabase);
	UClass* Z_Construct_UClass_UOpenXRGestureDatabase_NoRegister()
	{
		return UOpenXRGestureDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRGestureDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gestures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gestures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Gestures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRGestureDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRGestureDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "Comment", "/**\n* Items Database DataAsset, here we can save all of our game items\n*/" },
		{ "IncludePath", "OpenXRHandPoseComponent.h" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "Items Database DataAsset, here we can save all of our game items" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures_Inner = { "Gestures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenXRGesture, METADATA_PARAMS(nullptr, 0) }; // 2180229115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "Comment", "// Gestures in this database\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "Gestures in this database" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures = { "Gestures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRGestureDatabase, Gestures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures_MetaData)) }; // 2180229115
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRGestureDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRGestureDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRGestureDatabase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRGestureDatabase_Statics::ClassParams = {
		&UOpenXRGestureDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenXRGestureDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRGestureDatabase()
	{
		if (!Z_Registration_Info_UClass_UOpenXRGestureDatabase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRGestureDatabase.OuterSingleton, Z_Construct_UClass_UOpenXRGestureDatabase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenXRGestureDatabase.OuterSingleton;
	}
	template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<UOpenXRGestureDatabase>()
	{
		return UOpenXRGestureDatabase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRGestureDatabase);
	struct Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics
	{
		struct _Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms
		{
			FName GestureDetected;
			int32 GestureIndex;
			EVRSkeletalHandIndex ActionHandType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GestureDetected_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GestureDetected;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GestureIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionHandType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionHandType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureDetected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureDetected = { "GestureDetected", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms, GestureDetected), METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureDetected_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureIndex = { "GestureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms, GestureIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_ActionHandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_ActionHandType = { "ActionHandType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms, ActionHandType), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(nullptr, 0) }; // 1054813515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureDetected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_ActionHandType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_ActionHandType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin, nullptr, "OpenXRGestureDetected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms), Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics
	{
		struct _Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms
		{
			FName GestureEnded;
			int32 GestureIndex;
			EVRSkeletalHandIndex ActionHandType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GestureEnded_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GestureEnded;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GestureIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionHandType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionHandType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureEnded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureEnded = { "GestureEnded", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms, GestureEnded), METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureEnded_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureIndex = { "GestureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms, GestureIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_ActionHandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_ActionHandType = { "ActionHandType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms, ActionHandType), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(nullptr, 0) }; // 1054813515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_ActionHandType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_ActionHandType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin, nullptr, "OpenXRGestureEnded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms), Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOpenXRHandPoseComponent::execOnRep_SkeletalTransformRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SkeletalTransformRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenXRHandPoseComponent::execOnRep_SkeletalTransformLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SkeletalTransformLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenXRHandPoseComponent::execServer_SendSkeletalTransforms)
	{
		P_GET_STRUCT(FBPXRSkeletalRepContainer,Z_Param_SkeletalInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SendSkeletalTransforms_Validate(Z_Param_SkeletalInfo))
		{
			RPC_ValidateFailed(TEXT("Server_SendSkeletalTransforms_Validate"));
			return;
		}
		P_THIS->Server_SendSkeletalTransforms_Implementation(Z_Param_SkeletalInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenXRHandPoseComponent::execK2_DetectCurrentPose)
	{
		P_GET_STRUCT_REF(FBPOpenXRActionSkeletalData,Z_Param_Out_SkeletalAction);
		P_GET_STRUCT_REF(FOpenXRGesture,Z_Param_Out_GestureOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_DetectCurrentPose(Z_Param_Out_SkeletalAction,Z_Param_Out_GestureOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenXRHandPoseComponent::execSaveCurrentPose)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RecordingName);
		P_GET_ENUM(EVRSkeletalHandIndex,Z_Param_HandToSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveCurrentPose(Z_Param_RecordingName,EVRSkeletalHandIndex(Z_Param_HandToSave));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenXRHandPoseComponent::execSetDetectGestures)
	{
		P_GET_UBOOL(Z_Param_bNewDetectGestures);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDetectGestures(Z_Param_bNewDetectGestures);
		P_NATIVE_END;
	}
	static FName NAME_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms = FName(TEXT("Server_SendSkeletalTransforms"));
	void UOpenXRHandPoseComponent::Server_SendSkeletalTransforms(FBPXRSkeletalRepContainer const& SkeletalInfo)
	{
		OpenXRHandPoseComponent_eventServer_SendSkeletalTransforms_Parms Parms;
		Parms.SkeletalInfo=SkeletalInfo;
		ProcessEvent(FindFunctionChecked(NAME_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms),&Parms);
	}
	void UOpenXRHandPoseComponent::StaticRegisterNativesUOpenXRHandPoseComponent()
	{
		UClass* Class = UOpenXRHandPoseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_DetectCurrentPose", &UOpenXRHandPoseComponent::execK2_DetectCurrentPose },
			{ "OnRep_SkeletalTransformLeft", &UOpenXRHandPoseComponent::execOnRep_SkeletalTransformLeft },
			{ "OnRep_SkeletalTransformRight", &UOpenXRHandPoseComponent::execOnRep_SkeletalTransformRight },
			{ "SaveCurrentPose", &UOpenXRHandPoseComponent::execSaveCurrentPose },
			{ "Server_SendSkeletalTransforms", &UOpenXRHandPoseComponent::execServer_SendSkeletalTransforms },
			{ "SetDetectGestures", &UOpenXRHandPoseComponent::execSetDetectGestures },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics
	{
		struct OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms
		{
			FBPOpenXRActionSkeletalData SkeletalAction;
			FOpenXRGesture GestureOut;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalAction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GestureOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_SkeletalAction = { "SkeletalAction", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms, SkeletalAction), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, METADATA_PARAMS(nullptr, 0) }; // 2676973271
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_GestureOut = { "GestureOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms, GestureOut), Z_Construct_UScriptStruct_FOpenXRGesture, METADATA_PARAMS(nullptr, 0) }; // 2180229115
	void Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms), &Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_SkeletalAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_GestureOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "DisplayName", "DetectCurrentPose" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "K2_DetectCurrentPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms), Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "OnRep_SkeletalTransformLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "OnRep_SkeletalTransformRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics
	{
		struct OpenXRHandPoseComponent_eventSaveCurrentPose_Parms
		{
			FName RecordingName;
			EVRSkeletalHandIndex HandToSave;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_RecordingName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandToSave_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandToSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_RecordingName = { "RecordingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventSaveCurrentPose_Parms, RecordingName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_HandToSave_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_HandToSave = { "HandToSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventSaveCurrentPose_Parms, HandToSave), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(nullptr, 0) }; // 1054813515
	void Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenXRHandPoseComponent_eventSaveCurrentPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenXRHandPoseComponent_eventSaveCurrentPose_Parms), &Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_RecordingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_HandToSave_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_HandToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "CPP_Default_HandToSave", "EActionHandIndex_Right" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "SaveCurrentPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::OpenXRHandPoseComponent_eventSaveCurrentPose_Parms), Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::NewProp_SkeletalInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::NewProp_SkeletalInfo = { "SkeletalInfo", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventServer_SendSkeletalTransforms_Parms, SkeletalInfo), Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::NewProp_SkeletalInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::NewProp_SkeletalInfo_MetaData)) }; // 3063379491
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::NewProp_SkeletalInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "Server_SendSkeletalTransforms", nullptr, nullptr, sizeof(OpenXRHandPoseComponent_eventServer_SendSkeletalTransforms_Parms), Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics
	{
		struct OpenXRHandPoseComponent_eventSetDetectGestures_Parms
		{
			bool bNewDetectGestures;
		};
		static void NewProp_bNewDetectGestures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDetectGestures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::NewProp_bNewDetectGestures_SetBit(void* Obj)
	{
		((OpenXRHandPoseComponent_eventSetDetectGestures_Parms*)Obj)->bNewDetectGestures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::NewProp_bNewDetectGestures = { "bNewDetectGestures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenXRHandPoseComponent_eventSetDetectGestures_Parms), &Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::NewProp_bNewDetectGestures_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::NewProp_bNewDetectGestures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "SetDetectGestures", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::OpenXRHandPoseComponent_eventSetDetectGestures_Parms), Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRHandPoseComponent);
	UClass* Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister()
	{
		return UOpenXRHandPoseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRHandPoseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetectGestures_MetaData[];
#endif
		static void NewProp_bDetectGestures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectGestures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNewGestureDetected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewGestureDetected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGestureEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGestureEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GesturesDB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GesturesDB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGetMockUpPoseForDebugging_MetaData[];
#endif
		static void NewProp_bGetMockUpPoseForDebugging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetMockUpPoseForDebugging;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandSkeletalActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandSkeletalActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HandSkeletalActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandRep_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandRep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandRep_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandRep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateSkeletalData_MetaData[];
#endif
		static void NewProp_bReplicateSkeletalData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateSkeletalData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothReplicatedSkeletalData_MetaData[];
#endif
		static void NewProp_bSmoothReplicatedSkeletalData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothReplicatedSkeletalData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationRateForSkeletalAnimations_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReplicationRateForSkeletalAnimations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose, "K2_DetectCurrentPose" }, // 2400900212
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft, "OnRep_SkeletalTransformLeft" }, // 1201667317
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight, "OnRep_SkeletalTransformRight" }, // 462378440
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose, "SaveCurrentPose" }, // 4022551770
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms, "Server_SendSkeletalTransforms" }, // 899604140
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures, "SetDetectGestures" }, // 3813471887
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpenXRHandPoseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "Comment", "// Says whether we should run gesture detection\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "Says whether we should run gesture detection" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures_SetBit(void* Obj)
	{
		((UOpenXRHandPoseComponent*)Obj)->bDetectGestures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures = { "bDetectGestures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnNewGestureDetected_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnNewGestureDetected = { "OnNewGestureDetected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, OnNewGestureDetected), Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnNewGestureDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnNewGestureDetected_MetaData)) }; // 3527406621
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnGestureEnded_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnGestureEnded = { "OnGestureEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, OnGestureEnded), Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnGestureEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnGestureEnded_MetaData)) }; // 3723428420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_GesturesDB_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "Comment", "// Known sequences\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "Known sequences" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_GesturesDB = { "GesturesDB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, GesturesDB), Z_Construct_UClass_UOpenXRGestureDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_GesturesDB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_GesturesDB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging_MetaData[] = {
		{ "Category", "SkeletalData|Actions" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging_SetBit(void* Obj)
	{
		((UOpenXRHandPoseComponent*)Obj)->bGetMockUpPoseForDebugging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging = { "bGetMockUpPoseForDebugging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions_Inner = { "HandSkeletalActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, METADATA_PARAMS(nullptr, 0) }; // 2676973271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions_MetaData[] = {
		{ "Category", "SkeletalData|Actions" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions = { "HandSkeletalActions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, HandSkeletalActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions_MetaData)) }; // 2676973271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_LeftHandRep_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_LeftHandRep = { "LeftHandRep", "OnRep_SkeletalTransformLeft", (EPropertyFlags)0x0010000100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, LeftHandRep), Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_LeftHandRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_LeftHandRep_MetaData)) }; // 3063379491
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_RightHandRep_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_RightHandRep = { "RightHandRep", "OnRep_SkeletalTransformRight", (EPropertyFlags)0x0010000100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, RightHandRep), Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_RightHandRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_RightHandRep_MetaData)) }; // 3063379491
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData_MetaData[] = {
		{ "Category", "SkeletalData" },
		{ "Comment", "// If we should replicate the skeletal transform data\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "If we should replicate the skeletal transform data" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData_SetBit(void* Obj)
	{
		((UOpenXRHandPoseComponent*)Obj)->bReplicateSkeletalData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData = { "bReplicateSkeletalData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData_MetaData[] = {
		{ "Category", "SkeletalData" },
		{ "Comment", "// If true we will lerp between updates of the skeletal mesh transforms and smooth the result\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "If true we will lerp between updates of the skeletal mesh transforms and smooth the result" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData_SetBit(void* Obj)
	{
		((UOpenXRHandPoseComponent*)Obj)->bSmoothReplicatedSkeletalData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData = { "bSmoothReplicatedSkeletalData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_ReplicationRateForSkeletalAnimations_MetaData[] = {
		{ "Category", "SkeletalData" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_ReplicationRateForSkeletalAnimations = { "ReplicationRateForSkeletalAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, ReplicationRateForSkeletalAnimations), METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_ReplicationRateForSkeletalAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_ReplicationRateForSkeletalAnimations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnNewGestureDetected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnGestureEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_GesturesDB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_LeftHandRep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_RightHandRep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_ReplicationRateForSkeletalAnimations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRHandPoseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::ClassParams = {
		&UOpenXRHandPoseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRHandPoseComponent()
	{
		if (!Z_Registration_Info_UClass_UOpenXRHandPoseComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRHandPoseComponent.OuterSingleton, Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenXRHandPoseComponent.OuterSingleton;
	}
	template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<UOpenXRHandPoseComponent>()
	{
		return UOpenXRHandPoseComponent::StaticClass();
	}

	void UOpenXRHandPoseComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LeftHandRep(TEXT("LeftHandRep"));
		static const FName Name_RightHandRep(TEXT("RightHandRep"));

		const bool bIsValid = true
			&& Name_LeftHandRep == ClassReps[(int32)ENetFields_Private::LeftHandRep].Property->GetFName()
			&& Name_RightHandRep == ClassReps[(int32)ENetFields_Private::RightHandRep].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOpenXRHandPoseComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRHandPoseComponent);

static_assert(std::is_polymorphic<FOpenXRAnimInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FOpenXRAnimInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy;
class UScriptStruct* FOpenXRAnimInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("OpenXRAnimInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FOpenXRAnimInstanceProxy>()
{
	return FOpenXRAnimInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenXRAnimInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"OpenXRAnimInstanceProxy",
		sizeof(FOpenXRAnimInstanceProxy),
		alignof(FOpenXRAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy.InnerSingleton;
	}
	DEFINE_FUNCTION(UOpenXRAnimInstance::execInitializeCustomBoneMapping)
	{
		P_GET_STRUCT_REF(FBPOpenXRSkeletalMappingData,Z_Param_Out_SkeletalMappingData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCustomBoneMapping(Z_Param_Out_SkeletalMappingData);
		P_NATIVE_END;
	}
	void UOpenXRAnimInstance::StaticRegisterNativesUOpenXRAnimInstance()
	{
		UClass* Class = UOpenXRAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeCustomBoneMapping", &UOpenXRAnimInstance::execInitializeCustomBoneMapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics
	{
		struct OpenXRAnimInstance_eventInitializeCustomBoneMapping_Parms
		{
			FBPOpenXRSkeletalMappingData SkeletalMappingData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMappingData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::NewProp_SkeletalMappingData = { "SkeletalMappingData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRAnimInstance_eventInitializeCustomBoneMapping_Parms, SkeletalMappingData), Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData, METADATA_PARAMS(nullptr, 0) }; // 3281851393
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::NewProp_SkeletalMappingData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoneMappings" },
		{ "Comment", "//virtual void NativeInitializeAnimation() override;\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "virtual void NativeInitializeAnimation() override;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRAnimInstance, nullptr, "InitializeCustomBoneMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::OpenXRAnimInstance_eventInitializeCustomBoneMapping_Parms), Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRAnimInstance);
	UClass* Z_Construct_UClass_UOpenXRAnimInstance_NoRegister()
	{
		return UOpenXRAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPoseComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPoseComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenXRAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping, "InitializeCustomBoneMapping" }, // 3108803671
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance AnimInstance" },
		{ "IncludePath", "OpenXRHandPoseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRAnimInstance_Statics::NewProp_OwningPoseComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenXRAnimInstance_Statics::NewProp_OwningPoseComp = { "OwningPoseComp", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRAnimInstance, OwningPoseComp), Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenXRAnimInstance_Statics::NewProp_OwningPoseComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRAnimInstance_Statics::NewProp_OwningPoseComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRAnimInstance_Statics::NewProp_OwningPoseComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRAnimInstance_Statics::ClassParams = {
		&UOpenXRAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOpenXRAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UOpenXRAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRAnimInstance.OuterSingleton, Z_Construct_UClass_UOpenXRAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenXRAnimInstance.OuterSingleton;
	}
	template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<UOpenXRAnimInstance>()
	{
		return UOpenXRAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRAnimInstance);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_Statics::ScriptStructInfo[] = {
		{ FBPXRSkeletalRepContainer::StaticStruct, Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewStructOps, TEXT("BPXRSkeletalRepContainer"), &Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPXRSkeletalRepContainer), 3063379491U) },
		{ FOpenXRGestureFingerPosition::StaticStruct, Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewStructOps, TEXT("OpenXRGestureFingerPosition"), &Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenXRGestureFingerPosition), 936583785U) },
		{ FOpenXRGesture::StaticStruct, Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewStructOps, TEXT("OpenXRGesture"), &Z_Registration_Info_UScriptStruct_OpenXRGesture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenXRGesture), 2180229115U) },
		{ FOpenXRAnimInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::NewStructOps, TEXT("OpenXRAnimInstanceProxy"), &Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenXRAnimInstanceProxy), 1447175724U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenXRGestureDatabase, UOpenXRGestureDatabase::StaticClass, TEXT("UOpenXRGestureDatabase"), &Z_Registration_Info_UClass_UOpenXRGestureDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRGestureDatabase), 2221116188U) },
		{ Z_Construct_UClass_UOpenXRHandPoseComponent, UOpenXRHandPoseComponent::StaticClass, TEXT("UOpenXRHandPoseComponent"), &Z_Registration_Info_UClass_UOpenXRHandPoseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRHandPoseComponent), 1424105279U) },
		{ Z_Construct_UClass_UOpenXRAnimInstance, UOpenXRAnimInstance::StaticClass, TEXT("UOpenXRAnimInstance"), &Z_Registration_Info_UClass_UOpenXRAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRAnimInstance), 210843769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_2930506071(TEXT("/Script/OpenXRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
