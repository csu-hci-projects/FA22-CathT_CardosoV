// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/CharacterMovementCompTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementCompTypes() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionArray();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMoveAction;
	static UEnum* EVRMoveAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRMoveAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRMoveAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveAction"));
		}
		return Z_Registration_Info_UEnum_EVRMoveAction.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveAction>()
	{
		return EVRMoveAction_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::Enumerators[] = {
		{ "EVRMoveAction::VRMOVEACTION_None", (int64)EVRMoveAction::VRMOVEACTION_None },
		{ "EVRMoveAction::VRMOVEACTION_SnapTurn", (int64)EVRMoveAction::VRMOVEACTION_SnapTurn },
		{ "EVRMoveAction::VRMOVEACTION_Teleport", (int64)EVRMoveAction::VRMOVEACTION_Teleport },
		{ "EVRMoveAction::VRMOVEACTION_StopAllMovement", (int64)EVRMoveAction::VRMOVEACTION_StopAllMovement },
		{ "EVRMoveAction::VRMOVEACTION_SetRotation", (int64)EVRMoveAction::VRMOVEACTION_SetRotation },
		{ "EVRMoveAction::VRMOVEACTION_PauseTracking", (int64)EVRMoveAction::VRMOVEACTION_PauseTracking },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM1", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM1 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM2", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM2 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM3", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM3 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM4", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM4 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM5", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM5 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM6", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM6 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM7", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM7 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM8", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM8 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM9", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM9 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM10", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM10 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM11", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM11 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM12", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM12 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM13", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM13 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM14", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM14 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM15", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM15 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
		{ "VRMOVEACTION_CUSTOM1.Comment", "// Reserved from here up to 0x40\n" },
		{ "VRMOVEACTION_CUSTOM1.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM1" },
		{ "VRMOVEACTION_CUSTOM1.ToolTip", "Reserved from here up to 0x40" },
		{ "VRMOVEACTION_CUSTOM10.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM10" },
		{ "VRMOVEACTION_CUSTOM11.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM11" },
		{ "VRMOVEACTION_CUSTOM12.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM12" },
		{ "VRMOVEACTION_CUSTOM13.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM13" },
		{ "VRMOVEACTION_CUSTOM14.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM14" },
		{ "VRMOVEACTION_CUSTOM15.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM15" },
		{ "VRMOVEACTION_CUSTOM2.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM2" },
		{ "VRMOVEACTION_CUSTOM3.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM3" },
		{ "VRMOVEACTION_CUSTOM4.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM4" },
		{ "VRMOVEACTION_CUSTOM5.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM5" },
		{ "VRMOVEACTION_CUSTOM6.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM6" },
		{ "VRMOVEACTION_CUSTOM7.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM7" },
		{ "VRMOVEACTION_CUSTOM8.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM8" },
		{ "VRMOVEACTION_CUSTOM9.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM9" },
		{ "VRMOVEACTION_None.Name", "EVRMoveAction::VRMOVEACTION_None" },
		{ "VRMOVEACTION_PauseTracking.Name", "EVRMoveAction::VRMOVEACTION_PauseTracking" },
		{ "VRMOVEACTION_SetRotation.Name", "EVRMoveAction::VRMOVEACTION_SetRotation" },
		{ "VRMOVEACTION_SnapTurn.Name", "EVRMoveAction::VRMOVEACTION_SnapTurn" },
		{ "VRMOVEACTION_StopAllMovement.Name", "EVRMoveAction::VRMOVEACTION_StopAllMovement" },
		{ "VRMOVEACTION_Teleport.Name", "EVRMoveAction::VRMOVEACTION_Teleport" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRMoveAction",
		"EVRMoveAction",
		Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction()
	{
		if (!Z_Registration_Info_UEnum_EVRMoveAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMoveAction.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRMoveAction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention;
	static UEnum* EVRMoveActionVelocityRetention_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveActionVelocityRetention"));
		}
		return Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionVelocityRetention>()
	{
		return EVRMoveActionVelocityRetention_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::Enumerators[] = {
		{ "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None", (int64)EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None },
		{ "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear", (int64)EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear },
		{ "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn", (int64)EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// What to do with the players velocity when specific move actions are called\n// Default of none leaves it as is, for people with 0 ramp up time on acelleration\n// This likely won't be that useful.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
		{ "ToolTip", "What to do with the players velocity when specific move actions are called\nDefault of none leaves it as is, for people with 0 ramp up time on acelleration\nThis likely won't be that useful." },
		{ "VRMOVEACTION_Velocity_Clear.Comment", "// Clears velocity entirely\n" },
		{ "VRMOVEACTION_Velocity_Clear.Name", "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear" },
		{ "VRMOVEACTION_Velocity_Clear.ToolTip", "Clears velocity entirely" },
		{ "VRMOVEACTION_Velocity_None.Comment", "// Leaves velocity as is\n" },
		{ "VRMOVEACTION_Velocity_None.Name", "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None" },
		{ "VRMOVEACTION_Velocity_None.ToolTip", "Leaves velocity as is" },
		{ "VRMOVEACTION_Velocity_Turn.Comment", "// Rotates the velocity to match new heading\n" },
		{ "VRMOVEACTION_Velocity_Turn.Name", "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn" },
		{ "VRMOVEACTION_Velocity_Turn.ToolTip", "Rotates the velocity to match new heading" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRMoveActionVelocityRetention",
		"EVRMoveActionVelocityRetention",
		Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention()
	{
		if (!Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMoveActionDataReq;
	static UEnum* EVRMoveActionDataReq_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRMoveActionDataReq.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRMoveActionDataReq.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveActionDataReq"));
		}
		return Z_Registration_Info_UEnum_EVRMoveActionDataReq.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionDataReq>()
	{
		return EVRMoveActionDataReq_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::Enumerators[] = {
		{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_None", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_None },
		{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC },
		{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT },
		{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
		{ "VRMOVEACTIONDATA_LOC.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC" },
		{ "VRMOVEACTIONDATA_LOC_AND_ROT.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT" },
		{ "VRMOVEACTIONDATA_None.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_None" },
		{ "VRMOVEACTIONDATA_ROT.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRMoveActionDataReq",
		"EVRMoveActionDataReq",
		Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq()
	{
		if (!Z_Registration_Info_UEnum_EVRMoveActionDataReq.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMoveActionDataReq.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRMoveActionDataReq.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMoveActionContainer;
class UScriptStruct* FVRMoveActionContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMoveActionContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMoveActionContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMoveActionContainer, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRMoveActionContainer"));
	}
	return Z_Registration_Info_UScriptStruct_VRMoveActionContainer.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRMoveActionContainer>()
{
	return FVRMoveActionContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveActionDataReq_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionDataReq_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveActionDataReq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionLoc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionVel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionVel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionFlags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveActionFlags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveActionObjectReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionObjectReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MoveActionObjectReferences;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VelRetentionSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelRetentionSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VelRetentionSetting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMoveActionContainer>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveAction), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_MetaData)) }; // 2857044917
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq = { "MoveActionDataReq", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionDataReq), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_MetaData)) }; // 1962317298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc = { "MoveActionLoc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionVel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionVel = { "MoveActionVel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionVel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot = { "MoveActionRot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionFlags = { "MoveActionFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionFlags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionFlags_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionObjectReferences_Inner = { "MoveActionObjectReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionObjectReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionObjectReferences = { "MoveActionObjectReferences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionObjectReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionObjectReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionObjectReferences_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting = { "VelRetentionSetting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, VelRetentionSetting), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_MetaData)) }; // 1695435993
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionVel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionObjectReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionObjectReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRMoveActionContainer",
		sizeof(FVRMoveActionContainer),
		alignof(FVRMoveActionContainer),
		Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMoveActionContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMoveActionContainer.InnerSingleton, Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMoveActionContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMoveActionArray;
class UScriptStruct* FVRMoveActionArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMoveActionArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMoveActionArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMoveActionArray, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRMoveActionArray"));
	}
	return Z_Registration_Info_UScriptStruct_VRMoveActionArray.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRMoveActionArray>()
{
	return FVRMoveActionArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMoveActionArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MoveActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMoveActionArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_Inner = { "MoveActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVRMoveActionContainer, METADATA_PARAMS(nullptr, 0) }; // 1801607278
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions = { "MoveActions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionArray, MoveActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_MetaData)) }; // 1801607278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRMoveActionArray",
		sizeof(FVRMoveActionArray),
		alignof(FVRMoveActionArray),
		Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionArray()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMoveActionArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMoveActionArray.InnerSingleton, Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMoveActionArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRConditionalMoveRep;
class UScriptStruct* FVRConditionalMoveRep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRConditionalMoveRep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRConditionalMoveRep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRConditionalMoveRep, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRConditionalMoveRep"));
	}
	return Z_Registration_Info_UScriptStruct_VRConditionalMoveRep.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRConditionalMoveRep>()
{
	return FVRConditionalMoveRep::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomVRInputVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomVRInputVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestedVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRConditionalMoveRep>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector = { "CustomVRInputVector", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep, CustomVRInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity = { "RequestedVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep, RequestedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray = { "MoveActionArray", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep, MoveActionArray), Z_Construct_UScriptStruct_FVRMoveActionArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray_MetaData)) }; // 3929445501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRConditionalMoveRep",
		sizeof(FVRConditionalMoveRep),
		alignof(FVRConditionalMoveRep),
		Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep()
	{
		if (!Z_Registration_Info_UScriptStruct_VRConditionalMoveRep.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRConditionalMoveRep.InnerSingleton, Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRConditionalMoveRep.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2;
class UScriptStruct* FVRConditionalMoveRep2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRConditionalMoveRep2, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRConditionalMoveRep2"));
	}
	return Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRConditionalMoveRep2>()
{
	return FVRConditionalMoveRep2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientBaseBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ClientYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ClientPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientRoll_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #TODO: DELETE THIS\n" },
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
		{ "ToolTip", "#TODO: DELETE THIS" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRConditionalMoveRep2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase_MetaData[] = {
		{ "Comment", "// Moved these here to avoid having to duplicate tons of properties\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
		{ "ToolTip", "Moved these here to avoid having to duplicate tons of properties" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase = { "ClientMovementBase", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName = { "ClientBaseBoneName", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientBaseBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw = { "ClientYaw", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch = { "ClientPitch", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientRoll), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRConditionalMoveRep2",
		sizeof(FVRConditionalMoveRep2),
		alignof(FVRConditionalMoveRep2),
		Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2()
	{
		if (!Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2.InnerSingleton, Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_Statics::EnumInfo[] = {
		{ EVRMoveAction_StaticEnum, TEXT("EVRMoveAction"), &Z_Registration_Info_UEnum_EVRMoveAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2857044917U) },
		{ EVRMoveActionVelocityRetention_StaticEnum, TEXT("EVRMoveActionVelocityRetention"), &Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1695435993U) },
		{ EVRMoveActionDataReq_StaticEnum, TEXT("EVRMoveActionDataReq"), &Z_Registration_Info_UEnum_EVRMoveActionDataReq, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1962317298U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_Statics::ScriptStructInfo[] = {
		{ FVRMoveActionContainer::StaticStruct, Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewStructOps, TEXT("VRMoveActionContainer"), &Z_Registration_Info_UScriptStruct_VRMoveActionContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMoveActionContainer), 1801607278U) },
		{ FVRMoveActionArray::StaticStruct, Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewStructOps, TEXT("VRMoveActionArray"), &Z_Registration_Info_UScriptStruct_VRMoveActionArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMoveActionArray), 3929445501U) },
		{ FVRConditionalMoveRep::StaticStruct, Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewStructOps, TEXT("VRConditionalMoveRep"), &Z_Registration_Info_UScriptStruct_VRConditionalMoveRep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRConditionalMoveRep), 1075441342U) },
		{ FVRConditionalMoveRep2::StaticStruct, Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewStructOps, TEXT("VRConditionalMoveRep2"), &Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRConditionalMoveRep2), 3114223669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_435977076(TEXT("/Script/VRExpansionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
