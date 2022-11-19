// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/HandSocketComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandSocketComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRAxis();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRHandPoseBonePair();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UHandSocketComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UHandSocketComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UHandSocketAnimInstance_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UHandSocketAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRAxis;
	static UEnum* EVRAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRAxis, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRAxis"));
		}
		return Z_Registration_Info_UEnum_EVRAxis.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRAxis::Type>()
	{
		return EVRAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRAxis_Statics::Enumerators[] = {
		{ "EVRAxis::X", (int64)EVRAxis::X },
		{ "EVRAxis::Y", (int64)EVRAxis::Y },
		{ "EVRAxis::Z", (int64)EVRAxis::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRAxis_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "X.Name", "EVRAxis::X" },
		{ "Y.Name", "EVRAxis::Y" },
		{ "Z.Name", "EVRAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRAxis",
		"EVRAxis::Type",
		Z_Construct_UEnum_VRExpansionPlugin_EVRAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRAxis()
	{
		if (!Z_Registration_Info_UEnum_EVRAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRAxis.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRAxis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPVRHandPoseBonePair;
class UScriptStruct* FBPVRHandPoseBonePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPVRHandPoseBonePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPVRHandPoseBonePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRHandPoseBonePair, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRHandPoseBonePair"));
	}
	return Z_Registration_Info_UScriptStruct_BPVRHandPoseBonePair.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVRHandPoseBonePair>()
{
	return FBPVRHandPoseBonePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "/**\n* A base class for custom hand socket objects\n* Not directly blueprint spawnable as you are supposed to subclass this to add on top your own custom data\n*/" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "A base class for custom hand socket objects\nNot directly blueprint spawnable as you are supposed to subclass this to add on top your own custom data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRHandPoseBonePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Distance to offset to get center of waist from tracked parent location\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Distance to offset to get center of waist from tracked parent location" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRHandPoseBonePair, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::NewProp_DeltaPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Initial \"Resting\" location of the tracker parent, assumed to be the calibration zero\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Initial \"Resting\" location of the tracker parent, assumed to be the calibration zero" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::NewProp_DeltaPose = { "DeltaPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRHandPoseBonePair, DeltaPose), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::NewProp_DeltaPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::NewProp_DeltaPose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::NewProp_DeltaPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPVRHandPoseBonePair",
		sizeof(FBPVRHandPoseBonePair),
		alignof(FBPVRHandPoseBonePair),
		Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRHandPoseBonePair()
	{
		if (!Z_Registration_Info_UScriptStruct_BPVRHandPoseBonePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPVRHandPoseBonePair.InnerSingleton, Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPVRHandPoseBonePair.InnerSingleton;
	}
	DEFINE_FUNCTION(UHandSocketComponent::execGetHandSocketComponentFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToCheck);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHandSocketComponent**)Z_Param__Result=UHandSocketComponent::GetHandSocketComponentFromObject(Z_Param_ObjectToCheck,Z_Param_SocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandSocketComponent::execGetMeshRelativeTransform)
	{
		P_GET_UBOOL(Z_Param_bIsRightHand);
		P_GET_UBOOL(Z_Param_bUseParentScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetMeshRelativeTransform(Z_Param_bIsRightHand,Z_Param_bUseParentScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandSocketComponent::execGetAnimationSequenceAsPoseSnapShot)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_InAnimationSequence);
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_OutPoseSnapShot);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_TargetMesh);
		P_GET_UBOOL(Z_Param_bSkipRootBone);
		P_GET_UBOOL(Z_Param_bFlipHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHandSocketComponent::GetAnimationSequenceAsPoseSnapShot(Z_Param_InAnimationSequence,Z_Param_Out_OutPoseSnapShot,Z_Param_TargetMesh,Z_Param_bSkipRootBone,Z_Param_bFlipHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandSocketComponent::execGetBlendedPoseSnapShot)
	{
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_PoseSnapShot);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_TargetMesh);
		P_GET_UBOOL(Z_Param_bSkipRootBone);
		P_GET_UBOOL(Z_Param_bFlipHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBlendedPoseSnapShot(Z_Param_Out_PoseSnapShot,Z_Param_TargetMesh,Z_Param_bSkipRootBone,Z_Param_bFlipHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandSocketComponent::execGetTargetAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetTargetAnimation();
		P_NATIVE_END;
	}
	void UHandSocketComponent::StaticRegisterNativesUHandSocketComponent()
	{
		UClass* Class = UHandSocketComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationSequenceAsPoseSnapShot", &UHandSocketComponent::execGetAnimationSequenceAsPoseSnapShot },
			{ "GetBlendedPoseSnapShot", &UHandSocketComponent::execGetBlendedPoseSnapShot },
			{ "GetHandSocketComponentFromObject", &UHandSocketComponent::execGetHandSocketComponentFromObject },
			{ "GetMeshRelativeTransform", &UHandSocketComponent::execGetMeshRelativeTransform },
			{ "GetTargetAnimation", &UHandSocketComponent::execGetTargetAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics
	{
		struct HandSocketComponent_eventGetAnimationSequenceAsPoseSnapShot_Parms
		{
			UAnimSequence* InAnimationSequence;
			FPoseSnapshot OutPoseSnapShot;
			USkeletalMeshComponent* TargetMesh;
			bool bSkipRootBone;
			bool bFlipHand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimationSequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoseSnapShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_bSkipRootBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipRootBone;
		static void NewProp_bFlipHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_InAnimationSequence = { "InAnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandSocketComponent_eventGetAnimationSequenceAsPoseSnapShot_Parms, InAnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_OutPoseSnapShot = { "OutPoseSnapShot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandSocketComponent_eventGetAnimationSequenceAsPoseSnapShot_Parms, OutPoseSnapShot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) }; // 1666854200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_TargetMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandSocketComponent_eventGetAnimationSequenceAsPoseSnapShot_Parms, TargetMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_TargetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_TargetMesh_MetaData)) };
	void Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_bSkipRootBone_SetBit(void* Obj)
	{
		((HandSocketComponent_eventGetAnimationSequenceAsPoseSnapShot_Parms*)Obj)->bSkipRootBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_bSkipRootBone = { "bSkipRootBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HandSocketComponent_eventGetAnimationSequenceAsPoseSnapShot_Parms), &Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_bSkipRootBone_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_bFlipHand_SetBit(void* Obj)
	{
		((HandSocketComponent_eventGetAnimationSequenceAsPoseSnapShot_Parms*)Obj)->bFlipHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_bFlipHand = { "bFlipHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HandSocketComponent_eventGetAnimationSequenceAsPoseSnapShot_Parms), &Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_bFlipHand_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HandSocketComponent_eventGetAnimationSequenceAsPoseSnapShot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HandSocketComponent_eventGetAnimationSequenceAsPoseSnapShot_Parms), &Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_InAnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_OutPoseSnapShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_bSkipRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_bFlipHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "Hand Socket Data" },
		{ "Comment", "/**\n\x09* Converts an animation sequence into a pose snapshot\n\x09* @param InAnimationSequence - Sequence to convert to a pose snapshot\n\x09* @param OutPoseSnapShot - Snapshot returned by this function\n\x09* @param TargetMesh - Targetmesh to check the skeleton of\n\x09* @param bSkipRootBone - If true we will skip the root bone (IE: Hand_r) and only apply the children poses (Full body)\n\x09* @param bFlipHand - If true we will mirror the pose, this is primarily to apply to a left hand from a right\n\x09*/" },
		{ "CPP_Default_bFlipHand", "false" },
		{ "CPP_Default_bSkipRootBone", "false" },
		{ "CPP_Default_TargetMesh", "None" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Converts an animation sequence into a pose snapshot\n@param InAnimationSequence - Sequence to convert to a pose snapshot\n@param OutPoseSnapShot - Snapshot returned by this function\n@param TargetMesh - Targetmesh to check the skeleton of\n@param bSkipRootBone - If true we will skip the root bone (IE: Hand_r) and only apply the children poses (Full body)\n@param bFlipHand - If true we will mirror the pose, this is primarily to apply to a left hand from a right" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandSocketComponent, nullptr, "GetAnimationSequenceAsPoseSnapShot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::HandSocketComponent_eventGetAnimationSequenceAsPoseSnapShot_Parms), Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics
	{
		struct HandSocketComponent_eventGetBlendedPoseSnapShot_Parms
		{
			FPoseSnapshot PoseSnapShot;
			USkeletalMeshComponent* TargetMesh;
			bool bSkipRootBone;
			bool bFlipHand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseSnapShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_bSkipRootBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipRootBone;
		static void NewProp_bFlipHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_PoseSnapShot = { "PoseSnapShot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandSocketComponent_eventGetBlendedPoseSnapShot_Parms, PoseSnapShot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) }; // 1666854200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_TargetMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandSocketComponent_eventGetBlendedPoseSnapShot_Parms, TargetMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_TargetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_TargetMesh_MetaData)) };
	void Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_bSkipRootBone_SetBit(void* Obj)
	{
		((HandSocketComponent_eventGetBlendedPoseSnapShot_Parms*)Obj)->bSkipRootBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_bSkipRootBone = { "bSkipRootBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HandSocketComponent_eventGetBlendedPoseSnapShot_Parms), &Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_bSkipRootBone_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_bFlipHand_SetBit(void* Obj)
	{
		((HandSocketComponent_eventGetBlendedPoseSnapShot_Parms*)Obj)->bFlipHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_bFlipHand = { "bFlipHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HandSocketComponent_eventGetBlendedPoseSnapShot_Parms), &Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_bFlipHand_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HandSocketComponent_eventGetBlendedPoseSnapShot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HandSocketComponent_eventGetBlendedPoseSnapShot_Parms), &Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_PoseSnapShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_bSkipRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_bFlipHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "/** \n\x09* Returns the target animation of the hand blended with the delta rotations if there are any\n\x09* @param PoseSnapShot - Snapshot generated by this function\n\x09* @param TargetMesh - Targetmesh to check the skeleton of\n\x09* @param bSkipRootBone - If true we will skip the root bone (IE: Hand_r) and only apply the children poses (Full body)\n\x09* @param bFlipHand - If true we will mirror the pose, this is primarily to apply to a left hand from a right\n\x09*/" },
		{ "CPP_Default_bFlipHand", "false" },
		{ "CPP_Default_bSkipRootBone", "false" },
		{ "CPP_Default_TargetMesh", "None" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Returns the target animation of the hand blended with the delta rotations if there are any\n@param PoseSnapShot - Snapshot generated by this function\n@param TargetMesh - Targetmesh to check the skeleton of\n@param bSkipRootBone - If true we will skip the root bone (IE: Hand_r) and only apply the children poses (Full body)\n@param bFlipHand - If true we will mirror the pose, this is primarily to apply to a left hand from a right" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandSocketComponent, nullptr, "GetBlendedPoseSnapShot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::HandSocketComponent_eventGetBlendedPoseSnapShot_Parms), Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics
	{
		struct HandSocketComponent_eventGetHandSocketComponentFromObject_Parms
		{
			UObject* ObjectToCheck;
			FName SocketName;
			UHandSocketComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectToCheck;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::NewProp_ObjectToCheck = { "ObjectToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandSocketComponent_eventGetHandSocketComponentFromObject_Parms, ObjectToCheck), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandSocketComponent_eventGetHandSocketComponentFromObject_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandSocketComponent_eventGetHandSocketComponentFromObject_Parms, ReturnValue), Z_Construct_UClass_UHandSocketComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::NewProp_ObjectToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "// Returns the defined hand socket component (if it exists, you need to valid check the return!\n// If it is a valid return you can then cast to your projects base socket class and handle whatever logic you want\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Returns the defined hand socket component (if it exists, you need to valid check the return!\nIf it is a valid return you can then cast to your projects base socket class and handle whatever logic you want" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandSocketComponent, nullptr, "GetHandSocketComponentFromObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::HandSocketComponent_eventGetHandSocketComponentFromObject_Parms), Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics
	{
		struct HandSocketComponent_eventGetMeshRelativeTransform_Parms
		{
			bool bIsRightHand;
			bool bUseParentScale;
			FTransform ReturnValue;
		};
		static void NewProp_bIsRightHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
		static void NewProp_bUseParentScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParentScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::NewProp_bIsRightHand_SetBit(void* Obj)
	{
		((HandSocketComponent_eventGetMeshRelativeTransform_Parms*)Obj)->bIsRightHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::NewProp_bIsRightHand = { "bIsRightHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HandSocketComponent_eventGetMeshRelativeTransform_Parms), &Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::NewProp_bUseParentScale_SetBit(void* Obj)
	{
		((HandSocketComponent_eventGetMeshRelativeTransform_Parms*)Obj)->bUseParentScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::NewProp_bUseParentScale = { "bUseParentScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HandSocketComponent_eventGetMeshRelativeTransform_Parms), &Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::NewProp_bUseParentScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandSocketComponent_eventGetMeshRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::NewProp_bIsRightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::NewProp_bUseParentScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "// Returns the target relative transform of the hand to the gripped object\n// If you want the transform mirrored you need to pass in which hand is requesting the information\n// If UseParentScale is true then we will scale the value by the parent scale (generally only for when not using absolute hand scale)\n" },
		{ "CPP_Default_bUseParentScale", "false" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Returns the target relative transform of the hand to the gripped object\nIf you want the transform mirrored you need to pass in which hand is requesting the information\nIf UseParentScale is true then we will scale the value by the parent scale (generally only for when not using absolute hand scale)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandSocketComponent, nullptr, "GetMeshRelativeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::HandSocketComponent_eventGetMeshRelativeTransform_Parms), Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation_Statics
	{
		struct HandSocketComponent_eventGetTargetAnimation_Parms
		{
			UAnimSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandSocketComponent_eventGetTargetAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "// Returns the base target animation of the hand (if there is one)\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Returns the base target animation of the hand (if there is one)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandSocketComponent, nullptr, "GetTargetAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation_Statics::HandSocketComponent_eventGetTargetAnimation_Parms), Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHandSocketComponent);
	UClass* Z_Construct_UClass_UHandSocketComponent_NoRegister()
	{
		return UHandSocketComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHandSocketComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FlipAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandRelativePlacement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandRelativePlacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotPrefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDecoupleMeshPlacement_MetaData[];
#endif
		static void NewProp_bDecoupleMeshPlacement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDecoupleMeshPlacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySnapMesh_MetaData[];
#endif
		static void NewProp_bOnlySnapMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySnapMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLeftHandDominant_MetaData[];
#endif
		static void NewProp_bLeftHandDominant_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftHandDominant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipForLeftHand_MetaData[];
#endif
		static void NewProp_bFlipForLeftHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipForLeftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyFlipRotation_MetaData[];
#endif
		static void NewProp_bOnlyFlipRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyFlipRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysInRange_MetaData[];
#endif
		static void NewProp_bAlwaysInRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysInRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMatchRotation_MetaData[];
#endif
		static void NewProp_bMatchRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[];
#endif
		static void NewProp_bDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomPoseDeltas_MetaData[];
#endif
		static void NewProp_bUseCustomPoseDeltas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomPoseDeltas;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPoseDeltas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPoseDeltas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomPoseDeltas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandTargetAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandTargetAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirroredScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MirroredScale;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDecoupled_MetaData[];
#endif
		static void NewProp_bDecoupled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDecoupled;
#endif // WITH_EDITORONLY_DATA
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
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualizationMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowVisualizationMesh_MetaData[];
#endif
		static void NewProp_bShowVisualizationMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowVisualizationMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorVisualizationMesh_MetaData[];
#endif
		static void NewProp_bMirrorVisualizationMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorVisualizationMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRangeVisualization_MetaData[];
#endif
		static void NewProp_bShowRangeVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRangeVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandPreviewMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandPreviewMaterial;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHandSocketComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHandSocketComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot, "GetAnimationSequenceAsPoseSnapShot" }, // 1404167644
		{ &Z_Construct_UFunction_UHandSocketComponent_GetBlendedPoseSnapShot, "GetBlendedPoseSnapShot" }, // 671026164
		{ &Z_Construct_UFunction_UHandSocketComponent_GetHandSocketComponentFromObject, "GetHandSocketComponentFromObject" }, // 1497252613
		{ &Z_Construct_UFunction_UHandSocketComponent_GetMeshRelativeTransform, "GetMeshRelativeTransform" }, // 3154767373
		{ &Z_Construct_UFunction_UHandSocketComponent_GetTargetAnimation, "GetTargetAnimation" }, // 3694193348
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "Component Tick Events Physics Lod Asset User Data Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Grippables/HandSocketComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "Hand Socket Data|Mirroring|Advanced" },
		{ "Comment", "//Axis to mirror on for this socket\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Axis to mirror on for this socket" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandSocketComponent, MirrorAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRAxis, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_MirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_MirrorAxis_MetaData)) }; // 501105104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_FlipAxis_MetaData[] = {
		{ "Category", "Hand Socket Data|Mirroring|Advanced" },
		{ "Comment", "// Axis to flip on when mirroring this socket\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Axis to flip on when mirroring this socket" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_FlipAxis = { "FlipAxis", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandSocketComponent, FlipAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRAxis, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_FlipAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_FlipAxis_MetaData)) }; // 501105104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandRelativePlacement_MetaData[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "/*DuplicateTransient,*/" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "DuplicateTransient," },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandRelativePlacement = { "HandRelativePlacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandSocketComponent, HandRelativePlacement), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandRelativePlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandRelativePlacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_SlotPrefix_MetaData[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "// Target Slot Prefix\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Target Slot Prefix" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_SlotPrefix = { "SlotPrefix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandSocketComponent, SlotPrefix), METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_SlotPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_SlotPrefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupleMeshPlacement_MetaData[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "// If true the hand meshes relative transform will be de-coupled from the hand socket\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "If true the hand meshes relative transform will be de-coupled from the hand socket" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupleMeshPlacement_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bDecoupleMeshPlacement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupleMeshPlacement = { "bDecoupleMeshPlacement", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupleMeshPlacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupleMeshPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupleMeshPlacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlySnapMesh_MetaData[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "// If true we should only be used to snap mesh to us, not for the actual socket transform\n// Will act like free gripping but the mesh will snap into position\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "If true we should only be used to snap mesh to us, not for the actual socket transform\nWill act like free gripping but the mesh will snap into position" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlySnapMesh_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bOnlySnapMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlySnapMesh = { "bOnlySnapMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlySnapMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlySnapMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlySnapMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bLeftHandDominant_MetaData[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "// If true then this socket is left hand dominant and will flip for the right hand instead\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "If true then this socket is left hand dominant and will flip for the right hand instead" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bLeftHandDominant_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bLeftHandDominant = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bLeftHandDominant = { "bLeftHandDominant", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bLeftHandDominant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bLeftHandDominant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bLeftHandDominant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bFlipForLeftHand_MetaData[] = {
		{ "Category", "Hand Socket Data|Mirroring" },
		{ "Comment", "// If true we will mirror ourselves automatically for the off hand\n" },
		{ "DisplayName", "Flip For Off Hand" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "If true we will mirror ourselves automatically for the off hand" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bFlipForLeftHand_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bFlipForLeftHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bFlipForLeftHand = { "bFlipForLeftHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bFlipForLeftHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bFlipForLeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bFlipForLeftHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlyFlipRotation_MetaData[] = {
		{ "Category", "Hand Socket Data|Mirroring" },
		{ "Comment", "// If true, when we mirror the hand socket it will only mirror rotation, not position\n" },
		{ "editcondition", "bFlipForLeftHand" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "If true, when we mirror the hand socket it will only mirror rotation, not position" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlyFlipRotation_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bOnlyFlipRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlyFlipRotation = { "bOnlyFlipRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlyFlipRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlyFlipRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlyFlipRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bAlwaysInRange_MetaData[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "// If true then this hand socket will always be considered \"in range\" and checked against others for lowest distance\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "If true then this hand socket will always be considered \"in range\" and checked against others for lowest distance" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bAlwaysInRange_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bAlwaysInRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bAlwaysInRange = { "bAlwaysInRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bAlwaysInRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bAlwaysInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bAlwaysInRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMatchRotation_MetaData[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "// If true and there are multiple hand socket components in range with this setting\n// Then the default behavior will compare closest rotation on them all to pick one\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "If true and there are multiple hand socket components in range with this setting\nThen the default behavior will compare closest rotation on them all to pick one" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMatchRotation_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bMatchRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMatchRotation = { "bMatchRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMatchRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMatchRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMatchRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "// If true then the hand socket will not be considered for search operations\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "If true then the hand socket will not be considered for search operations" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_OverrideDistance_MetaData[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "// Snap distance to use if you want to override the defaults.\n// Will be ignored if == 0.0f or bAlwaysInRange is true\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Snap distance to use if you want to override the defaults.\nWill be ignored if == 0.0f or bAlwaysInRange is true" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_OverrideDistance = { "OverrideDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandSocketComponent, OverrideDistance), METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_OverrideDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_OverrideDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bUseCustomPoseDeltas_MetaData[] = {
		{ "Category", "Hand Animation" },
		{ "Comment", "// If true we are expected to have a list of custom deltas for bones to overlay onto our base pose\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "If true we are expected to have a list of custom deltas for bones to overlay onto our base pose" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bUseCustomPoseDeltas_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bUseCustomPoseDeltas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bUseCustomPoseDeltas = { "bUseCustomPoseDeltas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bUseCustomPoseDeltas_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bUseCustomPoseDeltas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bUseCustomPoseDeltas_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_CustomPoseDeltas_Inner = { "CustomPoseDeltas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPVRHandPoseBonePair, METADATA_PARAMS(nullptr, 0) }; // 3101973735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_CustomPoseDeltas_MetaData[] = {
		{ "Category", "Hand Animation" },
		{ "Comment", "// Custom rotations that are added on top of an animations bone rotation to make a final transform\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Custom rotations that are added on top of an animations bone rotation to make a final transform" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_CustomPoseDeltas = { "CustomPoseDeltas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandSocketComponent, CustomPoseDeltas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_CustomPoseDeltas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_CustomPoseDeltas_MetaData)) }; // 3101973735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandTargetAnimation_MetaData[] = {
		{ "Category", "Hand Animation" },
		{ "Comment", "// Primary hand animation, for both hands if they share animations, right hand if they don't\n// If using a custom pose delta this is expected to be the base pose\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Primary hand animation, for both hands if they share animations, right hand if they don't\nIf using a custom pose delta this is expected to be the base pose" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandTargetAnimation = { "HandTargetAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandSocketComponent, HandTargetAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandTargetAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandTargetAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_MirroredScale_MetaData[] = {
		{ "Category", "Hand Socket Data" },
		{ "Comment", "// Scale to apply when mirroring the hand, adjust to visualize your off hand correctly\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Scale to apply when mirroring the hand, adjust to visualize your off hand correctly" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_MirroredScale = { "MirroredScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandSocketComponent, MirroredScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_MirroredScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_MirroredScale_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupled_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bDecoupled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupled = { "bDecoupled", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupled_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Tags that are set on this object */" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Tags that are set on this object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandSocketComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_GameplayTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bRepGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Requires bReplicates to be true for the component" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bRepGameplayTags_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bRepGameplayTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bRepGameplayTags = { "bRepGameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bRepGameplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bRepGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bRepGameplayTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bReplicateMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_VisualizationMesh_MetaData[] = {
		{ "Category", "Hand Visualization" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_VisualizationMesh = { "VisualizationMesh", nullptr, (EPropertyFlags)0x0014000800002015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandSocketComponent, VisualizationMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_VisualizationMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_VisualizationMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowVisualizationMesh_MetaData[] = {
		{ "Category", "Hand Visualization" },
		{ "Comment", "// If we should show the visualization mesh\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "If we should show the visualization mesh" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowVisualizationMesh_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bShowVisualizationMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowVisualizationMesh = { "bShowVisualizationMesh", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowVisualizationMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowVisualizationMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowVisualizationMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMirrorVisualizationMesh_MetaData[] = {
		{ "Category", "Hand Visualization" },
		{ "Comment", "// Show the visualization mirrored\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Show the visualization mirrored" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMirrorVisualizationMesh_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bMirrorVisualizationMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMirrorVisualizationMesh = { "bMirrorVisualizationMesh", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMirrorVisualizationMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMirrorVisualizationMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMirrorVisualizationMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowRangeVisualization_MetaData[] = {
		{ "Category", "Hand Visualization" },
		{ "Comment", "// If we should show the grip range of this socket (shows text if always in range)\n// If override distance is zero then it attempts to infer the value from the parent architecture\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "If we should show the grip range of this socket (shows text if always in range)\nIf override distance is zero then it attempts to infer the value from the parent architecture" },
	};
#endif
	void Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowRangeVisualization_SetBit(void* Obj)
	{
		((UHandSocketComponent*)Obj)->bShowRangeVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowRangeVisualization = { "bShowRangeVisualization", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandSocketComponent), &Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowRangeVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowRangeVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowRangeVisualization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandPreviewMaterial_MetaData[] = {
		{ "Category", "Hand Visualization" },
		{ "Comment", "// Material to apply to the hand\n" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
		{ "ToolTip", "Material to apply to the hand" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandPreviewMaterial = { "HandPreviewMaterial", nullptr, (EPropertyFlags)0x0014000800000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandSocketComponent, HandPreviewMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandPreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandPreviewMaterial_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHandSocketComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_MirrorAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_FlipAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandRelativePlacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_SlotPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupleMeshPlacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlySnapMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bLeftHandDominant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bFlipForLeftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bOnlyFlipRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bAlwaysInRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMatchRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_OverrideDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bUseCustomPoseDeltas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_CustomPoseDeltas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_CustomPoseDeltas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandTargetAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_MirroredScale,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bDecoupled,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bRepGameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bReplicateMovement,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_VisualizationMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowVisualizationMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bMirrorVisualizationMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_bShowRangeVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketComponent_Statics::NewProp_HandPreviewMaterial,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHandSocketComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UHandSocketComponent, IGameplayTagAssetInterface), false },  // 2897640864
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHandSocketComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandSocketComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandSocketComponent_Statics::ClassParams = {
		&UHandSocketComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHandSocketComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHandSocketComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHandSocketComponent()
	{
		if (!Z_Registration_Info_UClass_UHandSocketComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandSocketComponent.OuterSingleton, Z_Construct_UClass_UHandSocketComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHandSocketComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UHandSocketComponent>()
	{
		return UHandSocketComponent::StaticClass();
	}

	void UHandSocketComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GameplayTags(TEXT("GameplayTags"));
		static const FName Name_bRepGameplayTags(TEXT("bRepGameplayTags"));
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));

		const bool bIsValid = true
			&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
			&& Name_bRepGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGameplayTags].Property->GetFName()
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UHandSocketComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandSocketComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHandSocketComponent)
	void UHandSocketAnimInstance::StaticRegisterNativesUHandSocketAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHandSocketAnimInstance);
	UClass* Z_Construct_UClass_UHandSocketAnimInstance_NoRegister()
	{
		return UHandSocketAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UHandSocketAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningSocket_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningSocket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHandSocketAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance AnimInstance" },
		{ "IncludePath", "Grippables/HandSocketComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandSocketAnimInstance_Statics::NewProp_OwningSocket_MetaData[] = {
		{ "Category", "Socket Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/HandSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHandSocketAnimInstance_Statics::NewProp_OwningSocket = { "OwningSocket", nullptr, (EPropertyFlags)0x00140000000a201d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandSocketAnimInstance, OwningSocket), Z_Construct_UClass_UHandSocketComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHandSocketAnimInstance_Statics::NewProp_OwningSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketAnimInstance_Statics::NewProp_OwningSocket_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHandSocketAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandSocketAnimInstance_Statics::NewProp_OwningSocket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHandSocketAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandSocketAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandSocketAnimInstance_Statics::ClassParams = {
		&UHandSocketAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHandSocketAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHandSocketAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHandSocketAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHandSocketAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UHandSocketAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandSocketAnimInstance.OuterSingleton, Z_Construct_UClass_UHandSocketAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHandSocketAnimInstance.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UHandSocketAnimInstance>()
	{
		return UHandSocketAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandSocketAnimInstance);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_Statics::EnumInfo[] = {
		{ EVRAxis_StaticEnum, TEXT("EVRAxis"), &Z_Registration_Info_UEnum_EVRAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 501105104U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_Statics::ScriptStructInfo[] = {
		{ FBPVRHandPoseBonePair::StaticStruct, Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics::NewStructOps, TEXT("BPVRHandPoseBonePair"), &Z_Registration_Info_UScriptStruct_BPVRHandPoseBonePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPVRHandPoseBonePair), 3101973735U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHandSocketComponent, UHandSocketComponent::StaticClass, TEXT("UHandSocketComponent"), &Z_Registration_Info_UClass_UHandSocketComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandSocketComponent), 3185179093U) },
		{ Z_Construct_UClass_UHandSocketAnimInstance, UHandSocketAnimInstance::StaticClass, TEXT("UHandSocketAnimInstance"), &Z_Registration_Info_UClass_UHandSocketAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandSocketAnimInstance), 3764633114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_1070835310(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
