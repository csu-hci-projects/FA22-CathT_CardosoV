// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRBPDatatypes() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPLowPassPeakFilter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPSecondaryGripInfo();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRCustomMovementMode;
	static UEnum* EVRCustomMovementMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRCustomMovementMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRCustomMovementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRCustomMovementMode"));
		}
		return Z_Registration_Info_UEnum_EVRCustomMovementMode.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRCustomMovementMode>()
	{
		return EVRCustomMovementMode_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_Statics::Enumerators[] = {
		{ "EVRCustomMovementMode::VRMOVE_Climbing", (int64)EVRCustomMovementMode::VRMOVE_Climbing },
		{ "EVRCustomMovementMode::VRMOVE_LowGrav", (int64)EVRCustomMovementMode::VRMOVE_LowGrav },
		{ "EVRCustomMovementMode::VRMOVE_Seated", (int64)EVRCustomMovementMode::VRMOVE_Seated },
		{ "EVRCustomMovementMode::VRMOVE_SplineFollow", (int64)EVRCustomMovementMode::VRMOVE_SplineFollow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Custom movement modes for the characters\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Custom movement modes for the characters" },
		{ "VRMOVE_Climbing.DisplayName", "Climbing" },
		{ "VRMOVE_Climbing.Name", "EVRCustomMovementMode::VRMOVE_Climbing" },
		{ "VRMOVE_LowGrav.DisplayName", "LowGrav" },
		{ "VRMOVE_LowGrav.Name", "EVRCustomMovementMode::VRMOVE_LowGrav" },
		{ "VRMOVE_Seated.DisplayName", "Seated" },
		{ "VRMOVE_Seated.Name", "EVRCustomMovementMode::VRMOVE_Seated" },
		{ "VRMOVE_SplineFollow.DisplayName", "SplineFollow" },
		{ "VRMOVE_SplineFollow.Name", "EVRCustomMovementMode::VRMOVE_SplineFollow" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRCustomMovementMode",
		"EVRCustomMovementMode",
		Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode()
	{
		if (!Z_Registration_Info_UEnum_EVRCustomMovementMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRCustomMovementMode.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRCustomMovementMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRConjoinedMovementModes;
	static UEnum* EVRConjoinedMovementModes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRConjoinedMovementModes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRConjoinedMovementModes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRConjoinedMovementModes"));
		}
		return Z_Registration_Info_UEnum_EVRConjoinedMovementModes.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRConjoinedMovementModes>()
	{
		return EVRConjoinedMovementModes_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_Statics::Enumerators[] = {
		{ "EVRConjoinedMovementModes::C_MOVE_None", (int64)EVRConjoinedMovementModes::C_MOVE_None },
		{ "EVRConjoinedMovementModes::C_MOVE_Walking", (int64)EVRConjoinedMovementModes::C_MOVE_Walking },
		{ "EVRConjoinedMovementModes::C_MOVE_NavWalking", (int64)EVRConjoinedMovementModes::C_MOVE_NavWalking },
		{ "EVRConjoinedMovementModes::C_MOVE_Falling", (int64)EVRConjoinedMovementModes::C_MOVE_Falling },
		{ "EVRConjoinedMovementModes::C_MOVE_Swimming", (int64)EVRConjoinedMovementModes::C_MOVE_Swimming },
		{ "EVRConjoinedMovementModes::C_MOVE_Flying", (int64)EVRConjoinedMovementModes::C_MOVE_Flying },
		{ "EVRConjoinedMovementModes::C_MOVE_MAX", (int64)EVRConjoinedMovementModes::C_MOVE_MAX },
		{ "EVRConjoinedMovementModes::C_VRMOVE_Climbing", (int64)EVRConjoinedMovementModes::C_VRMOVE_Climbing },
		{ "EVRConjoinedMovementModes::C_VRMOVE_LowGrav", (int64)EVRConjoinedMovementModes::C_VRMOVE_LowGrav },
		{ "EVRConjoinedMovementModes::C_VRMOVE_Seated", (int64)EVRConjoinedMovementModes::C_VRMOVE_Seated },
		{ "EVRConjoinedMovementModes::C_VRMOVE_SplineFollow", (int64)EVRConjoinedMovementModes::C_VRMOVE_SplineFollow },
		{ "EVRConjoinedMovementModes::C_VRMOVE_Custom1", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom1 },
		{ "EVRConjoinedMovementModes::C_VRMOVE_Custom2", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom2 },
		{ "EVRConjoinedMovementModes::C_VRMOVE_Custom3", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom3 },
		{ "EVRConjoinedMovementModes::C_VRMOVE_Custom4", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom4 },
		{ "EVRConjoinedMovementModes::C_VRMOVE_Custom5", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom5 },
		{ "EVRConjoinedMovementModes::C_VRMOVE_Custom6", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom6 },
		{ "EVRConjoinedMovementModes::C_VRMOVE_Custom7", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom7 },
		{ "EVRConjoinedMovementModes::C_VRMOVE_Custom8", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom8 },
		{ "EVRConjoinedMovementModes::C_VRMOVE_Custom9", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom9 },
		{ "EVRConjoinedMovementModes::C_VRMOVE_Custom10", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom10 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "C_MOVE_Falling.DisplayName", "Falling" },
		{ "C_MOVE_Falling.Name", "EVRConjoinedMovementModes::C_MOVE_Falling" },
		{ "C_MOVE_Flying.DisplayName", "Flying" },
		{ "C_MOVE_Flying.Name", "EVRConjoinedMovementModes::C_MOVE_Flying" },
		{ "C_MOVE_MAX.Comment", "//C_MOVE_Custom = 0x06\x09UMETA(DisplayName = \"Custom\"), // Skip this, could technically get a Custom7 out of using this slot but who needs 7?\n" },
		{ "C_MOVE_MAX.Hidden", "" },
		{ "C_MOVE_MAX.Name", "EVRConjoinedMovementModes::C_MOVE_MAX" },
		{ "C_MOVE_MAX.ToolTip", "C_MOVE_Custom = 0x06    UMETA(DisplayName = \"Custom\"),  Skip this, could technically get a Custom7 out of using this slot but who needs 7?" },
		{ "C_MOVE_NavWalking.DisplayName", "Navmesh Walking" },
		{ "C_MOVE_NavWalking.Name", "EVRConjoinedMovementModes::C_MOVE_NavWalking" },
		{ "C_MOVE_None.DisplayName", "None" },
		{ "C_MOVE_None.Name", "EVRConjoinedMovementModes::C_MOVE_None" },
		{ "C_MOVE_Swimming.DisplayName", "Swimming" },
		{ "C_MOVE_Swimming.Name", "EVRConjoinedMovementModes::C_MOVE_Swimming" },
		{ "C_MOVE_Walking.DisplayName", "Walking" },
		{ "C_MOVE_Walking.Name", "EVRConjoinedMovementModes::C_MOVE_Walking" },
		{ "C_VRMOVE_Climbing.DisplayName", "Climbing" },
		{ "C_VRMOVE_Climbing.Name", "EVRConjoinedMovementModes::C_VRMOVE_Climbing" },
		{ "C_VRMOVE_Custom1.Comment", "// \n// 0x0C\n// 0x0D\n// 0x0E\n// 0x0F\n// 0x10\n// 0x11\n// 0x12\n// 0x13\n// 0x14\n// 0x15\n// 0x16\n// 0x17\n// 0x18\n// 0x19\n" },
		{ "C_VRMOVE_Custom1.DisplayName", "Custom1" },
		{ "C_VRMOVE_Custom1.Name", "EVRConjoinedMovementModes::C_VRMOVE_Custom1" },
		{ "C_VRMOVE_Custom1.ToolTip", "0x0C\n0x0D\n0x0E\n0x0F\n0x10\n0x11\n0x12\n0x13\n0x14\n0x15\n0x16\n0x17\n0x18\n0x19" },
		{ "C_VRMOVE_Custom10.DisplayName", "Custom10" },
		{ "C_VRMOVE_Custom10.Name", "EVRConjoinedMovementModes::C_VRMOVE_Custom10" },
		{ "C_VRMOVE_Custom2.DisplayName", "Custom2" },
		{ "C_VRMOVE_Custom2.Name", "EVRConjoinedMovementModes::C_VRMOVE_Custom2" },
		{ "C_VRMOVE_Custom3.DisplayName", "Custom3" },
		{ "C_VRMOVE_Custom3.Name", "EVRConjoinedMovementModes::C_VRMOVE_Custom3" },
		{ "C_VRMOVE_Custom4.DisplayName", "Custom4" },
		{ "C_VRMOVE_Custom4.Name", "EVRConjoinedMovementModes::C_VRMOVE_Custom4" },
		{ "C_VRMOVE_Custom5.DisplayName", "Custom5" },
		{ "C_VRMOVE_Custom5.Name", "EVRConjoinedMovementModes::C_VRMOVE_Custom5" },
		{ "C_VRMOVE_Custom6.DisplayName", "Custom6" },
		{ "C_VRMOVE_Custom6.Name", "EVRConjoinedMovementModes::C_VRMOVE_Custom6" },
		{ "C_VRMOVE_Custom7.DisplayName", "Custom7" },
		{ "C_VRMOVE_Custom7.Name", "EVRConjoinedMovementModes::C_VRMOVE_Custom7" },
		{ "C_VRMOVE_Custom8.DisplayName", "Custom8" },
		{ "C_VRMOVE_Custom8.Name", "EVRConjoinedMovementModes::C_VRMOVE_Custom8" },
		{ "C_VRMOVE_Custom9.DisplayName", "Custom9" },
		{ "C_VRMOVE_Custom9.Name", "EVRConjoinedMovementModes::C_VRMOVE_Custom9" },
		{ "C_VRMOVE_LowGrav.DisplayName", "LowGrav" },
		{ "C_VRMOVE_LowGrav.Name", "EVRConjoinedMovementModes::C_VRMOVE_LowGrav" },
		{ "C_VRMOVE_Seated.Comment", "//C_VRMOVE_Spider = 0x0A UMETA(DisplayName = \"Spider\"),\n" },
		{ "C_VRMOVE_Seated.DisplayName", "Seated" },
		{ "C_VRMOVE_Seated.Name", "EVRConjoinedMovementModes::C_VRMOVE_Seated" },
		{ "C_VRMOVE_Seated.ToolTip", "C_VRMOVE_Spider = 0x0A UMETA(DisplayName = \"Spider\")," },
		{ "C_VRMOVE_SplineFollow.DisplayName", "SplineFollow" },
		{ "C_VRMOVE_SplineFollow.Name", "EVRConjoinedMovementModes::C_VRMOVE_SplineFollow" },
		{ "Comment", "// We use 6 bits for this so a maximum of 64 elements\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "We use 6 bits for this so a maximum of 64 elements" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRConjoinedMovementModes",
		"EVRConjoinedMovementModes",
		Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes()
	{
		if (!Z_Registration_Info_UEnum_EVRConjoinedMovementModes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRConjoinedMovementModes.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRConjoinedMovementModes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBPVRResultSwitch;
	static UEnum* EBPVRResultSwitch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBPVRResultSwitch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBPVRResultSwitch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPVRResultSwitch"));
		}
		return Z_Registration_Info_UEnum_EBPVRResultSwitch.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPVRResultSwitch>()
	{
		return EBPVRResultSwitch_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_Statics::Enumerators[] = {
		{ "EBPVRResultSwitch::OnSucceeded", (int64)EBPVRResultSwitch::OnSucceeded },
		{ "EBPVRResultSwitch::OnFailed", (int64)EBPVRResultSwitch::OnFailed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// This makes a lot of the blueprint functions cleaner\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "OnFailed.Comment", "// On Failure\n" },
		{ "OnFailed.Name", "EBPVRResultSwitch::OnFailed" },
		{ "OnFailed.ToolTip", "On Failure" },
		{ "OnSucceeded.Comment", "// On Success\n" },
		{ "OnSucceeded.Name", "EBPVRResultSwitch::OnSucceeded" },
		{ "OnSucceeded.ToolTip", "On Success" },
		{ "ToolTip", "This makes a lot of the blueprint functions cleaner" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EBPVRResultSwitch",
		"EBPVRResultSwitch",
		Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch()
	{
		if (!Z_Registration_Info_UEnum_EBPVRResultSwitch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBPVRResultSwitch.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBPVRResultSwitch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBPVRWaistTrackingMode;
	static UEnum* EBPVRWaistTrackingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBPVRWaistTrackingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBPVRWaistTrackingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPVRWaistTrackingMode"));
		}
		return Z_Registration_Info_UEnum_EBPVRWaistTrackingMode.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPVRWaistTrackingMode>()
	{
		return EBPVRWaistTrackingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_Statics::Enumerators[] = {
		{ "EBPVRWaistTrackingMode::VRWaist_Tracked_Front", (int64)EBPVRWaistTrackingMode::VRWaist_Tracked_Front },
		{ "EBPVRWaistTrackingMode::VRWaist_Tracked_Rear", (int64)EBPVRWaistTrackingMode::VRWaist_Tracked_Rear },
		{ "EBPVRWaistTrackingMode::VRWaist_Tracked_Left", (int64)EBPVRWaistTrackingMode::VRWaist_Tracked_Left },
		{ "EBPVRWaistTrackingMode::VRWaist_Tracked_Right", (int64)EBPVRWaistTrackingMode::VRWaist_Tracked_Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Wasn't needed when final setup was realized\n// Tracked device waist location\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Wasn't needed when final setup was realized\nTracked device waist location" },
		{ "VRWaist_Tracked_Front.Comment", "// Waist is tracked from the front\n" },
		{ "VRWaist_Tracked_Front.Name", "EBPVRWaistTrackingMode::VRWaist_Tracked_Front" },
		{ "VRWaist_Tracked_Front.ToolTip", "Waist is tracked from the front" },
		{ "VRWaist_Tracked_Left.Comment", "// Waist is tracked from the left (self perspective)\n" },
		{ "VRWaist_Tracked_Left.Name", "EBPVRWaistTrackingMode::VRWaist_Tracked_Left" },
		{ "VRWaist_Tracked_Left.ToolTip", "Waist is tracked from the left (self perspective)" },
		{ "VRWaist_Tracked_Rear.Comment", "// Waist is tracked from the rear\n" },
		{ "VRWaist_Tracked_Rear.Name", "EBPVRWaistTrackingMode::VRWaist_Tracked_Rear" },
		{ "VRWaist_Tracked_Rear.ToolTip", "Waist is tracked from the rear" },
		{ "VRWaist_Tracked_Right.Comment", "// Waist is tracked from the right (self perspective)\n" },
		{ "VRWaist_Tracked_Right.Name", "EBPVRWaistTrackingMode::VRWaist_Tracked_Right" },
		{ "VRWaist_Tracked_Right.ToolTip", "Waist is tracked from the right (self perspective)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EBPVRWaistTrackingMode",
		"EBPVRWaistTrackingMode",
		Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode()
	{
		if (!Z_Registration_Info_UEnum_EBPVRWaistTrackingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBPVRWaistTrackingMode.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBPVRWaistTrackingMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPVRWaistTracking_Info;
class UScriptStruct* FBPVRWaistTracking_Info::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPVRWaistTracking_Info.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPVRWaistTracking_Info.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRWaistTracking_Info"));
	}
	return Z_Registration_Info_UScriptStruct_BPVRWaistTracking_Info.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVRWaistTracking_Info>()
{
	return FBPVRWaistTracking_Info::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestingRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RestingRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaistRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaistRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedDevice_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackedDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRWaistTracking_Info>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_RestingRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Initial \"Resting\" location of the tracker parent, assumed to be the calibration zero\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Initial \"Resting\" location of the tracker parent, assumed to be the calibration zero" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_RestingRotation = { "RestingRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRWaistTracking_Info, RestingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_RestingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_RestingRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_WaistRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Distance to offset to get center of waist from tracked parent location\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Distance to offset to get center of waist from tracked parent location" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_WaistRadius = { "WaistRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRWaistTracking_Info, WaistRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_WaistRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_WaistRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Controls forward vector\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Controls forward vector" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode = { "TrackingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRWaistTracking_Info, TrackingMode), Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode_MetaData)) }; // 3751524348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackedDevice_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Tracked parent reference\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Tracked parent reference" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackedDevice = { "TrackedDevice", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRWaistTracking_Info, TrackedDevice), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackedDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackedDevice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_RestingRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_WaistRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackedDevice,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPVRWaistTracking_Info",
		sizeof(FBPVRWaistTracking_Info),
		alignof(FBPVRWaistTracking_Info),
		Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info()
	{
		if (!Z_Registration_Info_UScriptStruct_BPVRWaistTracking_Info.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPVRWaistTracking_Info.InnerSingleton, Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPVRWaistTracking_Info.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRLerpInterpolationMode;
	static UEnum* EVRLerpInterpolationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRLerpInterpolationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRLerpInterpolationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRLerpInterpolationMode"));
		}
		return Z_Registration_Info_UEnum_EVRLerpInterpolationMode.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRLerpInterpolationMode>()
	{
		return EVRLerpInterpolationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode_Statics::Enumerators[] = {
		{ "EVRLerpInterpolationMode::QuatInterp", (int64)EVRLerpInterpolationMode::QuatInterp },
		{ "EVRLerpInterpolationMode::EulerInterp", (int64)EVRLerpInterpolationMode::EulerInterp },
		{ "EVRLerpInterpolationMode::DualQuatInterp", (int64)EVRLerpInterpolationMode::DualQuatInterp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Different methods for interpolating rotation between transforms */" },
		{ "DualQuatInterp.Comment", "/** Dual quaternion interpolation, follows helix or screw-motion path between keyframes.   */" },
		{ "DualQuatInterp.Name", "EVRLerpInterpolationMode::DualQuatInterp" },
		{ "DualQuatInterp.ToolTip", "Dual quaternion interpolation, follows helix or screw-motion path between keyframes." },
		{ "EulerInterp.Comment", "/** Rotor or Euler Angle interpolation. */" },
		{ "EulerInterp.Name", "EVRLerpInterpolationMode::EulerInterp" },
		{ "EulerInterp.ToolTip", "Rotor or Euler Angle interpolation." },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "QuatInterp.Comment", "/** Shortest Path or Quaternion interpolation for the rotation. */" },
		{ "QuatInterp.Name", "EVRLerpInterpolationMode::QuatInterp" },
		{ "QuatInterp.ToolTip", "Shortest Path or Quaternion interpolation for the rotation." },
		{ "ToolTip", "Different methods for interpolating rotation between transforms" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRLerpInterpolationMode",
		"EVRLerpInterpolationMode",
		Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode()
	{
		if (!Z_Registration_Info_UEnum_EVRLerpInterpolationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRLerpInterpolationMode.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRLerpInterpolationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPEuroLowPassFilter;
class UScriptStruct* FBPEuroLowPassFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPEuroLowPassFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPEuroLowPassFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPEuroLowPassFilter, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPEuroLowPassFilter"));
	}
	return Z_Registration_Info_UScriptStruct_BPEuroLowPassFilter.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPEuroLowPassFilter>()
{
	return FBPEuroLowPassFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaCutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaCutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutoffSlope_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CutoffSlope;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "/************************************************************************/// A re-implementation of the Euro Low Pass Filter that epic uses for the VR Editor, but for blueprints\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "********************************************************************// A re-implementation of the Euro Low Pass Filter that epic uses for the VR Editor, but for blueprints" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPEuroLowPassFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_MinCutoff_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "// The smaller the value the less jitter and the more lag with micro movements\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The smaller the value the less jitter and the more lag with micro movements" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_MinCutoff = { "MinCutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEuroLowPassFilter, MinCutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_MinCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_MinCutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_DeltaCutoff_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "// If latency is too high with fast movements increase this value\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "If latency is too high with fast movements increase this value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_DeltaCutoff = { "DeltaCutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEuroLowPassFilter, DeltaCutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_DeltaCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_DeltaCutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_CutoffSlope_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "// This is the magnitude of adjustment\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "This is the magnitude of adjustment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_CutoffSlope = { "CutoffSlope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEuroLowPassFilter, CutoffSlope), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_CutoffSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_CutoffSlope_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_MinCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_DeltaCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_CutoffSlope,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPEuroLowPassFilter",
		sizeof(FBPEuroLowPassFilter),
		alignof(FBPEuroLowPassFilter),
		Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_BPEuroLowPassFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPEuroLowPassFilter.InnerSingleton, Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPEuroLowPassFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterQuat;
class UScriptStruct* FBPEuroLowPassFilterQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPEuroLowPassFilterQuat"));
	}
	return Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterQuat.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPEuroLowPassFilterQuat>()
{
	return FBPEuroLowPassFilterQuat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaCutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaCutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutoffSlope_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CutoffSlope;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "/************************************************************************/// A re-implementation of the Euro Low Pass Filter that epic uses for the VR Editor, but for blueprints\n// This version is for Quaternions\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "********************************************************************// A re-implementation of the Euro Low Pass Filter that epic uses for the VR Editor, but for blueprints\n// This version is for Quaternions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPEuroLowPassFilterQuat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_MinCutoff_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "// The smaller the value the less jitter and the more lag with micro movements\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The smaller the value the less jitter and the more lag with micro movements" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_MinCutoff = { "MinCutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEuroLowPassFilterQuat, MinCutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_MinCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_MinCutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_DeltaCutoff_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "// If latency is too high with fast movements increase this value\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "If latency is too high with fast movements increase this value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_DeltaCutoff = { "DeltaCutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEuroLowPassFilterQuat, DeltaCutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_DeltaCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_DeltaCutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_CutoffSlope_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "// This is the magnitude of adjustment\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "This is the magnitude of adjustment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_CutoffSlope = { "CutoffSlope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEuroLowPassFilterQuat, CutoffSlope), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_CutoffSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_CutoffSlope_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_MinCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_DeltaCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewProp_CutoffSlope,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPEuroLowPassFilterQuat",
		sizeof(FBPEuroLowPassFilterQuat),
		alignof(FBPEuroLowPassFilterQuat),
		Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat()
	{
		if (!Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterQuat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterQuat.InnerSingleton, Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterQuat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterTrans;
class UScriptStruct* FBPEuroLowPassFilterTrans::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterTrans.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterTrans.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPEuroLowPassFilterTrans"));
	}
	return Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterTrans.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPEuroLowPassFilterTrans>()
{
	return FBPEuroLowPassFilterTrans::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaCutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaCutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutoffSlope_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CutoffSlope;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "/************************************************************************/// A re-implementation of the Euro Low Pass Filter that epic uses for the VR Editor, but for blueprints\n// This version is for Transforms\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "********************************************************************// A re-implementation of the Euro Low Pass Filter that epic uses for the VR Editor, but for blueprints\n// This version is for Transforms" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPEuroLowPassFilterTrans>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_MinCutoff_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "// The smaller the value the less jitter and the more lag with micro movements\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The smaller the value the less jitter and the more lag with micro movements" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_MinCutoff = { "MinCutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEuroLowPassFilterTrans, MinCutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_MinCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_MinCutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_DeltaCutoff_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "// If latency is too high with fast movements increase this value\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "If latency is too high with fast movements increase this value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_DeltaCutoff = { "DeltaCutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEuroLowPassFilterTrans, DeltaCutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_DeltaCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_DeltaCutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_CutoffSlope_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "// This is the magnitude of adjustment\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "This is the magnitude of adjustment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_CutoffSlope = { "CutoffSlope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEuroLowPassFilterTrans, CutoffSlope), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_CutoffSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_CutoffSlope_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_MinCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_DeltaCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewProp_CutoffSlope,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPEuroLowPassFilterTrans",
		sizeof(FBPEuroLowPassFilterTrans),
		alignof(FBPEuroLowPassFilterTrans),
		Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans()
	{
		if (!Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterTrans.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterTrans.InnerSingleton, Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterTrans.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRVelocityType;
	static UEnum* EVRVelocityType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRVelocityType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRVelocityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRVelocityType"));
		}
		return Z_Registration_Info_UEnum_EVRVelocityType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRVelocityType>()
	{
		return EVRVelocityType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType_Statics::Enumerators[] = {
		{ "EVRVelocityType::VRLOCITY_Default", (int64)EVRVelocityType::VRLOCITY_Default },
		{ "EVRVelocityType::VRLOCITY_RunningAverage", (int64)EVRVelocityType::VRLOCITY_RunningAverage },
		{ "EVRVelocityType::VRLOCITY_SamplePeak", (int64)EVRVelocityType::VRLOCITY_SamplePeak },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The type of velocity tracking to perform on the motion controllers\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The type of velocity tracking to perform on the motion controllers" },
		{ "VRLOCITY_Default.Comment", "// Gets the frame by frame velocity\n" },
		{ "VRLOCITY_Default.DisplayName", "Default" },
		{ "VRLOCITY_Default.Name", "EVRVelocityType::VRLOCITY_Default" },
		{ "VRLOCITY_Default.ToolTip", "Gets the frame by frame velocity" },
		{ "VRLOCITY_RunningAverage.Comment", "// Gets a running average velocity across a sample duration\n" },
		{ "VRLOCITY_RunningAverage.DisplayName", "Running Average" },
		{ "VRLOCITY_RunningAverage.Name", "EVRVelocityType::VRLOCITY_RunningAverage" },
		{ "VRLOCITY_RunningAverage.ToolTip", "Gets a running average velocity across a sample duration" },
		{ "VRLOCITY_SamplePeak.Comment", "// Gets the peak velocity across a sample duration\n" },
		{ "VRLOCITY_SamplePeak.DisplayName", "Sampled Peak" },
		{ "VRLOCITY_SamplePeak.Name", "EVRVelocityType::VRLOCITY_SamplePeak" },
		{ "VRLOCITY_SamplePeak.ToolTip", "Gets the peak velocity across a sample duration" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRVelocityType",
		"EVRVelocityType",
		Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType()
	{
		if (!Z_Registration_Info_UEnum_EVRVelocityType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRVelocityType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRVelocityType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPLowPassPeakFilter;
class UScriptStruct* FBPLowPassPeakFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPLowPassPeakFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPLowPassPeakFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPLowPassPeakFilter, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPLowPassPeakFilter"));
	}
	return Z_Registration_Info_UScriptStruct_BPLowPassPeakFilter.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPLowPassPeakFilter>()
{
	return FBPLowPassPeakFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocitySamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VelocitySamples;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocitySampleLog_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocitySampleLog_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VelocitySampleLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "// A structure used to store and calculate velocities in different ways\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "A structure used to store and calculate velocities in different ways" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPLowPassPeakFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewProp_VelocitySamples_MetaData[] = {
		{ "Category", "Samples" },
		{ "Comment", "// This is the number of samples to keep active\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "This is the number of samples to keep active" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewProp_VelocitySamples = { "VelocitySamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPLowPassPeakFilter, VelocitySamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewProp_VelocitySamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewProp_VelocitySamples_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewProp_VelocitySampleLog_Inner = { "VelocitySampleLog", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewProp_VelocitySampleLog_MetaData[] = {
		{ "Category", "Samples" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewProp_VelocitySampleLog = { "VelocitySampleLog", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPLowPassPeakFilter, VelocitySampleLog), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewProp_VelocitySampleLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewProp_VelocitySampleLog_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewProp_VelocitySamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewProp_VelocitySampleLog_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewProp_VelocitySampleLog,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPLowPassPeakFilter",
		sizeof(FBPLowPassPeakFilter),
		alignof(FBPLowPassPeakFilter),
		Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPLowPassPeakFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_BPLowPassPeakFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPLowPassPeakFilter.InnerSingleton, Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPLowPassPeakFilter.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTransform_NetQuantize>() == std::is_polymorphic<FTransform>(), "USTRUCT FTransform_NetQuantize cannot be polymorphic unless super FTransform is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Transform_NetQuantize;
class UScriptStruct* FTransform_NetQuantize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Transform_NetQuantize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Transform_NetQuantize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransform_NetQuantize, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("Transform_NetQuantize"));
	}
	return Z_Registration_Info_UScriptStruct_Transform_NetQuantize.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FTransform_NetQuantize>()
{
	return FTransform_NetQuantize::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary|TransformNetQuantize" },
		{ "Comment", "/*noexport, */" },
		{ "HasNativeBreak", "VRExpansionPlugin.VRExpansionFunctionLibrary.BreakTransform_NetQuantize" },
		{ "HasNativeMake", "VRExpansionPlugin.VRExpansionFunctionLibrary.MakeTransform_NetQuantize" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "noexport," },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransform_NetQuantize>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		Z_Construct_UScriptStruct_FTransform,
		&NewStructOps,
		"Transform_NetQuantize",
		sizeof(FTransform_NetQuantize),
		alignof(FTransform_NetQuantize),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize()
	{
		if (!Z_Registration_Info_UScriptStruct_Transform_NetQuantize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Transform_NetQuantize.InnerSingleton, Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Transform_NetQuantize.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRVectorQuantization;
	static UEnum* EVRVectorQuantization_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRVectorQuantization.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRVectorQuantization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRVectorQuantization"));
		}
		return Z_Registration_Info_UEnum_EVRVectorQuantization.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRVectorQuantization>()
	{
		return EVRVectorQuantization_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_Statics::Enumerators[] = {
		{ "EVRVectorQuantization::RoundOneDecimal", (int64)EVRVectorQuantization::RoundOneDecimal },
		{ "EVRVectorQuantization::RoundTwoDecimals", (int64)EVRVectorQuantization::RoundTwoDecimals },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "RoundOneDecimal.Comment", "/** Each vector component will be rounded, preserving one decimal place. */" },
		{ "RoundOneDecimal.Name", "EVRVectorQuantization::RoundOneDecimal" },
		{ "RoundOneDecimal.ToolTip", "Each vector component will be rounded, preserving one decimal place." },
		{ "RoundTwoDecimals.Comment", "/** Each vector component will be rounded, preserving two decimal places. */" },
		{ "RoundTwoDecimals.Name", "EVRVectorQuantization::RoundTwoDecimals" },
		{ "RoundTwoDecimals.ToolTip", "Each vector component will be rounded, preserving two decimal places." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRVectorQuantization",
		"EVRVectorQuantization",
		Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization()
	{
		if (!Z_Registration_Info_UEnum_EVRVectorQuantization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRVectorQuantization.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRVectorQuantization.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRRotationQuantization;
	static UEnum* EVRRotationQuantization_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRRotationQuantization.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRRotationQuantization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRRotationQuantization"));
		}
		return Z_Registration_Info_UEnum_EVRRotationQuantization.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRRotationQuantization>()
	{
		return EVRRotationQuantization_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization_Statics::Enumerators[] = {
		{ "EVRRotationQuantization::RoundTo10Bits", (int64)EVRRotationQuantization::RoundTo10Bits },
		{ "EVRRotationQuantization::RoundToShort", (int64)EVRRotationQuantization::RoundToShort },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "RoundTo10Bits.Comment", "/** Each rotation component will be rounded to 10 bits (1024 values). */" },
		{ "RoundTo10Bits.Name", "EVRRotationQuantization::RoundTo10Bits" },
		{ "RoundTo10Bits.ToolTip", "Each rotation component will be rounded to 10 bits (1024 values)." },
		{ "RoundToShort.Comment", "/** Each rotation component will be rounded to a short. */" },
		{ "RoundToShort.Name", "EVRRotationQuantization::RoundToShort" },
		{ "RoundToShort.ToolTip", "Each rotation component will be rounded to a short." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRRotationQuantization",
		"EVRRotationQuantization",
		Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization()
	{
		if (!Z_Registration_Info_UEnum_EVRRotationQuantization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRRotationQuantization.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRRotationQuantization.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPVRComponentPosRep;
class UScriptStruct* FBPVRComponentPosRep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPVRComponentPosRep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPVRComponentPosRep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRComponentPosRep, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRComponentPosRep"));
	}
	return Z_Registration_Info_UScriptStruct_BPVRComponentPosRep.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVRComponentPosRep>()
{
	return FBPVRComponentPosRep::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QuantizationLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QuantizationLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationQuantizationLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationQuantizationLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationQuantizationLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRComponentPosRep>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRComponentPosRep, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRComponentPosRep, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "// The quantization level to use for the vector components\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The quantization level to use for the vector components" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel = { "QuantizationLevel", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRComponentPosRep, QuantizationLevel), Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel_MetaData)) }; // 3943848948
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "// The quantization level to use for the rotation components\n// Using 10 bits mode saves approx 2.25 bytes per replication.\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The quantization level to use for the rotation components\nUsing 10 bits mode saves approx 2.25 bytes per replication." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel = { "RotationQuantizationLevel", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRComponentPosRep, RotationQuantizationLevel), Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel_MetaData)) }; // 1588567064
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPVRComponentPosRep",
		sizeof(FBPVRComponentPosRep),
		alignof(FBPVRComponentPosRep),
		Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep()
	{
		if (!Z_Registration_Info_UScriptStruct_BPVRComponentPosRep.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPVRComponentPosRep.InnerSingleton, Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPVRComponentPosRep.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGripCollisionType;
	static UEnum* EGripCollisionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGripCollisionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGripCollisionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripCollisionType"));
		}
		return Z_Registration_Info_UEnum_EGripCollisionType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripCollisionType>()
	{
		return EGripCollisionType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_Statics::Enumerators[] = {
		{ "EGripCollisionType::InteractiveCollisionWithPhysics", (int64)EGripCollisionType::InteractiveCollisionWithPhysics },
		{ "EGripCollisionType::InteractiveCollisionWithSweep", (int64)EGripCollisionType::InteractiveCollisionWithSweep },
		{ "EGripCollisionType::InteractiveHybridCollisionWithPhysics", (int64)EGripCollisionType::InteractiveHybridCollisionWithPhysics },
		{ "EGripCollisionType::InteractiveHybridCollisionWithSweep", (int64)EGripCollisionType::InteractiveHybridCollisionWithSweep },
		{ "EGripCollisionType::SweepWithPhysics", (int64)EGripCollisionType::SweepWithPhysics },
		{ "EGripCollisionType::PhysicsOnly", (int64)EGripCollisionType::PhysicsOnly },
		{ "EGripCollisionType::ManipulationGrip", (int64)EGripCollisionType::ManipulationGrip },
		{ "EGripCollisionType::ManipulationGripWithWristTwist", (int64)EGripCollisionType::ManipulationGripWithWristTwist },
		{ "EGripCollisionType::AttachmentGrip", (int64)EGripCollisionType::AttachmentGrip },
		{ "EGripCollisionType::CustomGrip", (int64)EGripCollisionType::CustomGrip },
		{ "EGripCollisionType::EventsOnly", (int64)EGripCollisionType::EventsOnly },
		{ "EGripCollisionType::LockedConstraint", (int64)EGripCollisionType::LockedConstraint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_Statics::Enum_MetaDataParams[] = {
		{ "AttachmentGrip.Comment", "/** Attachment grips use native attachment and only sets location / rotation if they differ, this grip always late updates*/" },
		{ "AttachmentGrip.Name", "EGripCollisionType::AttachmentGrip" },
		{ "AttachmentGrip.ToolTip", "Attachment grips use native attachment and only sets location / rotation if they differ, this grip always late updates" },
		{ "BlueprintType", "true" },
		{ "CustomGrip.Comment", "/** Custom grip is to be handled by the object itself, it just sends the TickGrip event every frame but doesn't move the object. */" },
		{ "CustomGrip.Name", "EGripCollisionType::CustomGrip" },
		{ "CustomGrip.ToolTip", "Custom grip is to be handled by the object itself, it just sends the TickGrip event every frame but doesn't move the object." },
		{ "EventsOnly.Comment", "/** A grip that does not tick or move, used for drop / grip events only and uses least amount of processing. */" },
		{ "EventsOnly.Name", "EGripCollisionType::EventsOnly" },
		{ "EventsOnly.ToolTip", "A grip that does not tick or move, used for drop / grip events only and uses least amount of processing." },
		{ "InteractiveCollisionWithPhysics.Comment", "/** Held items can be offset by geometry, uses physics for the offset, pushes physics simulating objects with weight taken into account. */" },
		{ "InteractiveCollisionWithPhysics.Name", "EGripCollisionType::InteractiveCollisionWithPhysics" },
		{ "InteractiveCollisionWithPhysics.ToolTip", "Held items can be offset by geometry, uses physics for the offset, pushes physics simulating objects with weight taken into account." },
		{ "InteractiveCollisionWithSweep.Comment", "/** Held items can be offset by geometry, uses sweep for the offset, pushes physics simulating objects, no weight. */" },
		{ "InteractiveCollisionWithSweep.Name", "EGripCollisionType::InteractiveCollisionWithSweep" },
		{ "InteractiveCollisionWithSweep.ToolTip", "Held items can be offset by geometry, uses sweep for the offset, pushes physics simulating objects, no weight." },
		{ "InteractiveHybridCollisionWithPhysics.Comment", "/** Uses Stiffness and damping settings on collision, on no collision uses stiffness values 10x stronger so it has less play. */" },
		{ "InteractiveHybridCollisionWithPhysics.Name", "EGripCollisionType::InteractiveHybridCollisionWithPhysics" },
		{ "InteractiveHybridCollisionWithPhysics.ToolTip", "Uses Stiffness and damping settings on collision, on no collision uses stiffness values 10x stronger so it has less play." },
		{ "InteractiveHybridCollisionWithSweep.Comment", "/** Swaps back and forth between physics grip and a sweep type grip depending on if the held object will be colliding this frame or not. */" },
		{ "InteractiveHybridCollisionWithSweep.Name", "EGripCollisionType::InteractiveHybridCollisionWithSweep" },
		{ "InteractiveHybridCollisionWithSweep.ToolTip", "Swaps back and forth between physics grip and a sweep type grip depending on if the held object will be colliding this frame or not." },
		{ "IsBlueprintBase", "true" },
		{ "LockedConstraint.Comment", "/** Uses a hard constraint with no softness to lock them together, best used with ConstrainToPivot enabled and a bone chain. */" },
		{ "LockedConstraint.Name", "EGripCollisionType::LockedConstraint" },
		{ "LockedConstraint.ToolTip", "Uses a hard constraint with no softness to lock them together, best used with ConstrainToPivot enabled and a bone chain." },
		{ "ManipulationGrip.Comment", "/** Free constraint to controller base, no rotational drives. */" },
		{ "ManipulationGrip.Name", "EGripCollisionType::ManipulationGrip" },
		{ "ManipulationGrip.ToolTip", "Free constraint to controller base, no rotational drives." },
		{ "ManipulationGripWithWristTwist.Comment", "/** Free constraint to controller base with a twist drive. */" },
		{ "ManipulationGripWithWristTwist.Name", "EGripCollisionType::ManipulationGripWithWristTwist" },
		{ "ManipulationGripWithWristTwist.ToolTip", "Free constraint to controller base with a twist drive." },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "PhysicsOnly.Comment", "/** Does not sweep at all (does not trigger OnHitEvents), still pushes physics simulating objects, no weight. */" },
		{ "PhysicsOnly.Name", "EGripCollisionType::PhysicsOnly" },
		{ "PhysicsOnly.ToolTip", "Does not sweep at all (does not trigger OnHitEvents), still pushes physics simulating objects, no weight." },
		{ "SweepWithPhysics.Comment", "/** Only sweeps movement, will not be offset by geomtry, still pushes physics simulating objects, no weight. */" },
		{ "SweepWithPhysics.Name", "EGripCollisionType::SweepWithPhysics" },
		{ "SweepWithPhysics.ToolTip", "Only sweeps movement, will not be offset by geomtry, still pushes physics simulating objects, no weight." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EGripCollisionType",
		"EGripCollisionType",
		Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType()
	{
		if (!Z_Registration_Info_UEnum_EGripCollisionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGripCollisionType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGripCollisionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBPHMDDeviceType;
	static UEnum* EBPHMDDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBPHMDDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBPHMDDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPHMDDeviceType"));
		}
		return Z_Registration_Info_UEnum_EBPHMDDeviceType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPHMDDeviceType>()
	{
		return EBPHMDDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_Statics::Enumerators[] = {
		{ "EBPHMDDeviceType::DT_OculusHMD", (int64)EBPHMDDeviceType::DT_OculusHMD },
		{ "EBPHMDDeviceType::DT_PSVR", (int64)EBPHMDDeviceType::DT_PSVR },
		{ "EBPHMDDeviceType::DT_ES2GenericStereoMesh", (int64)EBPHMDDeviceType::DT_ES2GenericStereoMesh },
		{ "EBPHMDDeviceType::DT_SteamVR", (int64)EBPHMDDeviceType::DT_SteamVR },
		{ "EBPHMDDeviceType::DT_GearVR", (int64)EBPHMDDeviceType::DT_GearVR },
		{ "EBPHMDDeviceType::DT_GoogleVR", (int64)EBPHMDDeviceType::DT_GoogleVR },
		{ "EBPHMDDeviceType::DT_AppleARKit", (int64)EBPHMDDeviceType::DT_AppleARKit },
		{ "EBPHMDDeviceType::DT_GoogleARCore", (int64)EBPHMDDeviceType::DT_GoogleARCore },
		{ "EBPHMDDeviceType::DT_Unknown", (int64)EBPHMDDeviceType::DT_Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// This needs to be updated as the original gets changed, that or hope they make the original blueprint accessible.\n" },
		{ "DT_AppleARKit.Name", "EBPHMDDeviceType::DT_AppleARKit" },
		{ "DT_ES2GenericStereoMesh.Comment", "//DT_Morpheus,\n" },
		{ "DT_ES2GenericStereoMesh.Name", "EBPHMDDeviceType::DT_ES2GenericStereoMesh" },
		{ "DT_ES2GenericStereoMesh.ToolTip", "DT_Morpheus," },
		{ "DT_GearVR.Name", "EBPHMDDeviceType::DT_GearVR" },
		{ "DT_GoogleARCore.Name", "EBPHMDDeviceType::DT_GoogleARCore" },
		{ "DT_GoogleVR.Name", "EBPHMDDeviceType::DT_GoogleVR" },
		{ "DT_OculusHMD.Name", "EBPHMDDeviceType::DT_OculusHMD" },
		{ "DT_PSVR.Comment", "//Rift,\n" },
		{ "DT_PSVR.Name", "EBPHMDDeviceType::DT_PSVR" },
		{ "DT_PSVR.ToolTip", "Rift," },
		{ "DT_SteamVR.Name", "EBPHMDDeviceType::DT_SteamVR" },
		{ "DT_Unknown.Name", "EBPHMDDeviceType::DT_Unknown" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "This needs to be updated as the original gets changed, that or hope they make the original blueprint accessible." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EBPHMDDeviceType",
		"EBPHMDDeviceType",
		Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType()
	{
		if (!Z_Registration_Info_UEnum_EBPHMDDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBPHMDDeviceType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBPHMDDeviceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGripLerpState;
	static UEnum* EGripLerpState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGripLerpState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGripLerpState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripLerpState"));
		}
		return Z_Registration_Info_UEnum_EGripLerpState.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripLerpState>()
	{
		return EGripLerpState_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_Statics::Enumerators[] = {
		{ "EGripLerpState::StartLerp", (int64)EGripLerpState::StartLerp },
		{ "EGripLerpState::EndLerp", (int64)EGripLerpState::EndLerp },
		{ "EGripLerpState::NotLerping", (int64)EGripLerpState::NotLerping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Lerp states\n" },
		{ "EndLerp.Name", "EGripLerpState::EndLerp" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "NotLerping.Comment", "//ConstantLerp_DEPRECATED,\n" },
		{ "NotLerping.Name", "EGripLerpState::NotLerping" },
		{ "NotLerping.ToolTip", "ConstantLerp_DEPRECATED," },
		{ "StartLerp.Name", "EGripLerpState::StartLerp" },
		{ "ToolTip", "Lerp states" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EGripLerpState",
		"EGripLerpState",
		Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState()
	{
		if (!Z_Registration_Info_UEnum_EGripLerpState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGripLerpState.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGripLerpState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESecondaryGripType;
	static UEnum* ESecondaryGripType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESecondaryGripType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESecondaryGripType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ESecondaryGripType"));
		}
		return Z_Registration_Info_UEnum_ESecondaryGripType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<ESecondaryGripType>()
	{
		return ESecondaryGripType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_Statics::Enumerators[] = {
		{ "ESecondaryGripType::SG_None", (int64)ESecondaryGripType::SG_None },
		{ "ESecondaryGripType::SG_Free", (int64)ESecondaryGripType::SG_Free },
		{ "ESecondaryGripType::SG_SlotOnly", (int64)ESecondaryGripType::SG_SlotOnly },
		{ "ESecondaryGripType::SG_Free_Retain", (int64)ESecondaryGripType::SG_Free_Retain },
		{ "ESecondaryGripType::SG_SlotOnly_Retain", (int64)ESecondaryGripType::SG_SlotOnly_Retain },
		{ "ESecondaryGripType::SG_FreeWithScaling_Retain", (int64)ESecondaryGripType::SG_FreeWithScaling_Retain },
		{ "ESecondaryGripType::SG_SlotOnlyWithScaling_Retain", (int64)ESecondaryGripType::SG_SlotOnlyWithScaling_Retain },
		{ "ESecondaryGripType::SG_Custom", (int64)ESecondaryGripType::SG_Custom },
		{ "ESecondaryGripType::SG_ScalingOnly", (int64)ESecondaryGripType::SG_ScalingOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Secondary Grip Type\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "SG_Custom.Comment", "// Does nothing, just provides the events for personal use\n" },
		{ "SG_Custom.Name", "ESecondaryGripType::SG_Custom" },
		{ "SG_Custom.ToolTip", "Does nothing, just provides the events for personal use" },
		{ "SG_Free.Comment", "// Free secondary grip\n" },
		{ "SG_Free.Name", "ESecondaryGripType::SG_Free" },
		{ "SG_Free.ToolTip", "Free secondary grip" },
		{ "SG_Free_Retain.Comment", "// Retain pos on drop\n" },
		{ "SG_Free_Retain.Name", "ESecondaryGripType::SG_Free_Retain" },
		{ "SG_Free_Retain.ToolTip", "Retain pos on drop" },
		{ "SG_FreeWithScaling_Retain.Comment", "// Scaling with retain pos on drop\n" },
		{ "SG_FreeWithScaling_Retain.Name", "ESecondaryGripType::SG_FreeWithScaling_Retain" },
		{ "SG_FreeWithScaling_Retain.ToolTip", "Scaling with retain pos on drop" },
		{ "SG_None.Comment", "// No secondary grip\n" },
		{ "SG_None.Name", "ESecondaryGripType::SG_None" },
		{ "SG_None.ToolTip", "No secondary grip" },
		{ "SG_ScalingOnly.Comment", "// Does not track the hand, only scales the mesh with it\n" },
		{ "SG_ScalingOnly.Name", "ESecondaryGripType::SG_ScalingOnly" },
		{ "SG_ScalingOnly.ToolTip", "Does not track the hand, only scales the mesh with it" },
		{ "SG_SlotOnly.Comment", "// Only secondary grip at a slot\n" },
		{ "SG_SlotOnly.Name", "ESecondaryGripType::SG_SlotOnly" },
		{ "SG_SlotOnly.ToolTip", "Only secondary grip at a slot" },
		{ "SG_SlotOnly_Retain.Comment", "// Retain pos on drop, slot only\n" },
		{ "SG_SlotOnly_Retain.Name", "ESecondaryGripType::SG_SlotOnly_Retain" },
		{ "SG_SlotOnly_Retain.ToolTip", "Retain pos on drop, slot only" },
		{ "SG_SlotOnlyWithScaling_Retain.Comment", "// Scaling with retain pos on drop, slot only\n" },
		{ "SG_SlotOnlyWithScaling_Retain.Name", "ESecondaryGripType::SG_SlotOnlyWithScaling_Retain" },
		{ "SG_SlotOnlyWithScaling_Retain.ToolTip", "Scaling with retain pos on drop, slot only" },
		{ "ToolTip", "Secondary Grip Type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"ESecondaryGripType",
		"ESecondaryGripType",
		Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType()
	{
		if (!Z_Registration_Info_UEnum_ESecondaryGripType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESecondaryGripType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESecondaryGripType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGripLateUpdateSettings;
	static UEnum* EGripLateUpdateSettings_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGripLateUpdateSettings.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGripLateUpdateSettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripLateUpdateSettings"));
		}
		return Z_Registration_Info_UEnum_EGripLateUpdateSettings.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripLateUpdateSettings>()
	{
		return EGripLateUpdateSettings_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_Statics::Enumerators[] = {
		{ "EGripLateUpdateSettings::LateUpdatesAlwaysOn", (int64)EGripLateUpdateSettings::LateUpdatesAlwaysOn },
		{ "EGripLateUpdateSettings::LateUpdatesAlwaysOff", (int64)EGripLateUpdateSettings::LateUpdatesAlwaysOff },
		{ "EGripLateUpdateSettings::NotWhenColliding", (int64)EGripLateUpdateSettings::NotWhenColliding },
		{ "EGripLateUpdateSettings::NotWhenDoubleGripping", (int64)EGripLateUpdateSettings::NotWhenDoubleGripping },
		{ "EGripLateUpdateSettings::NotWhenCollidingOrDoubleGripping", (int64)EGripLateUpdateSettings::NotWhenCollidingOrDoubleGripping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Grip Late Update information\n" },
		{ "IsBlueprintBase", "true" },
		{ "LateUpdatesAlwaysOff.Name", "EGripLateUpdateSettings::LateUpdatesAlwaysOff" },
		{ "LateUpdatesAlwaysOn.Name", "EGripLateUpdateSettings::LateUpdatesAlwaysOn" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "NotWhenColliding.Name", "EGripLateUpdateSettings::NotWhenColliding" },
		{ "NotWhenCollidingOrDoubleGripping.Name", "EGripLateUpdateSettings::NotWhenCollidingOrDoubleGripping" },
		{ "NotWhenDoubleGripping.Name", "EGripLateUpdateSettings::NotWhenDoubleGripping" },
		{ "ToolTip", "Grip Late Update information" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EGripLateUpdateSettings",
		"EGripLateUpdateSettings",
		Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings()
	{
		if (!Z_Registration_Info_UEnum_EGripLateUpdateSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGripLateUpdateSettings.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGripLateUpdateSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGripMovementReplicationSettings;
	static UEnum* EGripMovementReplicationSettings_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGripMovementReplicationSettings.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGripMovementReplicationSettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripMovementReplicationSettings"));
		}
		return Z_Registration_Info_UEnum_EGripMovementReplicationSettings.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripMovementReplicationSettings>()
	{
		return EGripMovementReplicationSettings_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_Statics::Enumerators[] = {
		{ "EGripMovementReplicationSettings::KeepOriginalMovement", (int64)EGripMovementReplicationSettings::KeepOriginalMovement },
		{ "EGripMovementReplicationSettings::ForceServerSideMovement", (int64)EGripMovementReplicationSettings::ForceServerSideMovement },
		{ "EGripMovementReplicationSettings::ForceClientSideMovement", (int64)EGripMovementReplicationSettings::ForceClientSideMovement },
		{ "EGripMovementReplicationSettings::ClientSide_Authoritive", (int64)EGripMovementReplicationSettings::ClientSide_Authoritive },
		{ "EGripMovementReplicationSettings::ClientSide_Authoritive_NoRep", (int64)EGripMovementReplicationSettings::ClientSide_Authoritive_NoRep },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClientSide_Authoritive.Name", "EGripMovementReplicationSettings::ClientSide_Authoritive" },
		{ "ClientSide_Authoritive_NoRep.Name", "EGripMovementReplicationSettings::ClientSide_Authoritive_NoRep" },
		{ "Comment", "// Grip movement replication settings\n// LocalOnly_Not_Replicated is useful for instant client grips \n// that can be sent to the server and everyone locally grips it (IE: inventories that don't ever leave a player)\n// Objects that need to be handled possibly by multiple players should be ran\n// non locally gripped instead so that the server can validate grips instead.\n// ClientSide_Authoritive will grip on the client instantly without server intervention and then send a notice to the server\n// ClientSide_Authoritive_NoRep will grip on the client instantly without server intervention but will not rep the grip to the server\n// that the grip was made\n" },
		{ "ForceClientSideMovement.Name", "EGripMovementReplicationSettings::ForceClientSideMovement" },
		{ "ForceServerSideMovement.Name", "EGripMovementReplicationSettings::ForceServerSideMovement" },
		{ "IsBlueprintBase", "true" },
		{ "KeepOriginalMovement.Name", "EGripMovementReplicationSettings::KeepOriginalMovement" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Grip movement replication settings\nLocalOnly_Not_Replicated is useful for instant client grips\nthat can be sent to the server and everyone locally grips it (IE: inventories that don't ever leave a player)\nObjects that need to be handled possibly by multiple players should be ran\nnon locally gripped instead so that the server can validate grips instead.\nClientSide_Authoritive will grip on the client instantly without server intervention and then send a notice to the server\nClientSide_Authoritive_NoRep will grip on the client instantly without server intervention but will not rep the grip to the server\nthat the grip was made" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EGripMovementReplicationSettings",
		"EGripMovementReplicationSettings",
		Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings()
	{
		if (!Z_Registration_Info_UEnum_EGripMovementReplicationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGripMovementReplicationSettings.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGripMovementReplicationSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGripTargetType;
	static UEnum* EGripTargetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGripTargetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGripTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripTargetType"));
		}
		return Z_Registration_Info_UEnum_EGripTargetType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripTargetType>()
	{
		return EGripTargetType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_Statics::Enumerators[] = {
		{ "EGripTargetType::ActorGrip", (int64)EGripTargetType::ActorGrip },
		{ "EGripTargetType::ComponentGrip", (int64)EGripTargetType::ComponentGrip },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_Statics::Enum_MetaDataParams[] = {
		{ "ActorGrip.Name", "EGripTargetType::ActorGrip" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Grip Target Type\n" },
		{ "ComponentGrip.Name", "EGripTargetType::ComponentGrip" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Grip Target Type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EGripTargetType",
		"EGripTargetType",
		Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType()
	{
		if (!Z_Registration_Info_UEnum_EGripTargetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGripTargetType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGripTargetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGripInterfaceTeleportBehavior;
	static UEnum* EGripInterfaceTeleportBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGripInterfaceTeleportBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGripInterfaceTeleportBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripInterfaceTeleportBehavior"));
		}
		return Z_Registration_Info_UEnum_EGripInterfaceTeleportBehavior.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripInterfaceTeleportBehavior>()
	{
		return EGripInterfaceTeleportBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_Statics::Enumerators[] = {
		{ "EGripInterfaceTeleportBehavior::TeleportAllComponents", (int64)EGripInterfaceTeleportBehavior::TeleportAllComponents },
		{ "EGripInterfaceTeleportBehavior::DeltaTeleportation", (int64)EGripInterfaceTeleportBehavior::DeltaTeleportation },
		{ "EGripInterfaceTeleportBehavior::OnlyTeleportRootComponent", (int64)EGripInterfaceTeleportBehavior::OnlyTeleportRootComponent },
		{ "EGripInterfaceTeleportBehavior::DropOnTeleport", (int64)EGripInterfaceTeleportBehavior::DropOnTeleport },
		{ "EGripInterfaceTeleportBehavior::DontTeleport", (int64)EGripInterfaceTeleportBehavior::DontTeleport },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Lerp states\n" },
		{ "DeltaTeleportation.Comment", "/* Teleports by the location delta and not the calculated new position of the grip, useful for rag dolls*/" },
		{ "DeltaTeleportation.Name", "EGripInterfaceTeleportBehavior::DeltaTeleportation" },
		{ "DeltaTeleportation.ToolTip", "Teleports by the location delta and not the calculated new position of the grip, useful for rag dolls" },
		{ "DontTeleport.Comment", "/* Teleporting is not allowed */" },
		{ "DontTeleport.Name", "EGripInterfaceTeleportBehavior::DontTeleport" },
		{ "DontTeleport.ToolTip", "Teleporting is not allowed" },
		{ "DropOnTeleport.Comment", "/* Just drop the grip on teleport */" },
		{ "DropOnTeleport.Name", "EGripInterfaceTeleportBehavior::DropOnTeleport" },
		{ "DropOnTeleport.ToolTip", "Just drop the grip on teleport" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "OnlyTeleportRootComponent.Comment", "/* Only teleports an actor if the root component is held */" },
		{ "OnlyTeleportRootComponent.Name", "EGripInterfaceTeleportBehavior::OnlyTeleportRootComponent" },
		{ "OnlyTeleportRootComponent.ToolTip", "Only teleports an actor if the root component is held" },
		{ "TeleportAllComponents.Comment", "/* Teleports entire actor */" },
		{ "TeleportAllComponents.Name", "EGripInterfaceTeleportBehavior::TeleportAllComponents" },
		{ "TeleportAllComponents.ToolTip", "Teleports entire actor" },
		{ "ToolTip", "Lerp states" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EGripInterfaceTeleportBehavior",
		"EGripInterfaceTeleportBehavior",
		Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior()
	{
		if (!Z_Registration_Info_UEnum_EGripInterfaceTeleportBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGripInterfaceTeleportBehavior.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGripInterfaceTeleportBehavior.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsGripConstraintType;
	static UEnum* EPhysicsGripConstraintType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsGripConstraintType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysicsGripConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EPhysicsGripConstraintType"));
		}
		return Z_Registration_Info_UEnum_EPhysicsGripConstraintType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EPhysicsGripConstraintType>()
	{
		return EPhysicsGripConstraintType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_Statics::Enumerators[] = {
		{ "EPhysicsGripConstraintType::AccelerationConstraint", (int64)EPhysicsGripConstraintType::AccelerationConstraint },
		{ "EPhysicsGripConstraintType::ForceConstraint", (int64)EPhysicsGripConstraintType::ForceConstraint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_Statics::Enum_MetaDataParams[] = {
		{ "AccelerationConstraint.Name", "EPhysicsGripConstraintType::AccelerationConstraint" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Type of physics constraint to use\n" },
		{ "ForceConstraint.Name", "EPhysicsGripConstraintType::ForceConstraint" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Type of physics constraint to use" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EPhysicsGripConstraintType",
		"EPhysicsGripConstraintType",
		Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsGripConstraintType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsGripConstraintType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysicsGripConstraintType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsGripCOMType;
	static UEnum* EPhysicsGripCOMType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsGripCOMType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysicsGripCOMType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EPhysicsGripCOMType"));
		}
		return Z_Registration_Info_UEnum_EPhysicsGripCOMType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EPhysicsGripCOMType>()
	{
		return EPhysicsGripCOMType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType_Statics::Enumerators[] = {
		{ "EPhysicsGripCOMType::COM_Default", (int64)EPhysicsGripCOMType::COM_Default },
		{ "EPhysicsGripCOMType::COM_AtPivot", (int64)EPhysicsGripCOMType::COM_AtPivot },
		{ "EPhysicsGripCOMType::COM_SetAndGripAt", (int64)EPhysicsGripCOMType::COM_SetAndGripAt },
		{ "EPhysicsGripCOMType::COM_GripAt", (int64)EPhysicsGripCOMType::COM_GripAt },
		{ "EPhysicsGripCOMType::COM_GripAtControllerLoc", (int64)EPhysicsGripCOMType::COM_GripAtControllerLoc },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COM_AtPivot.Comment", "/* Don't grip at center of mass (generally unstable as it grips at actor zero)*/" },
		{ "COM_AtPivot.Name", "EPhysicsGripCOMType::COM_AtPivot" },
		{ "COM_AtPivot.ToolTip", "Don't grip at center of mass (generally unstable as it grips at actor zero)" },
		{ "COM_Default.Comment", "/* Use the default setting for the specified grip type */" },
		{ "COM_Default.Name", "EPhysicsGripCOMType::COM_Default" },
		{ "COM_Default.ToolTip", "Use the default setting for the specified grip type" },
		{ "COM_GripAt.Comment", "/* Grip at center of mass but do not set it */" },
		{ "COM_GripAt.Name", "EPhysicsGripCOMType::COM_GripAt" },
		{ "COM_GripAt.ToolTip", "Grip at center of mass but do not set it" },
		{ "COM_GripAtControllerLoc.Comment", "/* Just grip at the controller location, but don't set COM (default for manipulation grips)*/" },
		{ "COM_GripAtControllerLoc.Name", "EPhysicsGripCOMType::COM_GripAtControllerLoc" },
		{ "COM_GripAtControllerLoc.ToolTip", "Just grip at the controller location, but don't set COM (default for manipulation grips)" },
		{ "COM_SetAndGripAt.Comment", "/* Set center of mass to grip location and grip there (default for interactible with physics) */" },
		{ "COM_SetAndGripAt.Name", "EPhysicsGripCOMType::COM_SetAndGripAt" },
		{ "COM_SetAndGripAt.ToolTip", "Set center of mass to grip location and grip there (default for interactible with physics)" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EPhysicsGripCOMType",
		"EPhysicsGripCOMType",
		Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsGripCOMType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsGripCOMType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysicsGripCOMType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPAdvGripPhysicsSettings;
class UScriptStruct* FBPAdvGripPhysicsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPAdvGripPhysicsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPAdvGripPhysicsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPAdvGripPhysicsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BPAdvGripPhysicsSettings.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPAdvGripPhysicsSettings>()
{
	return FBPAdvGripPhysicsSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePhysicsSettings_MetaData[];
#endif
		static void NewProp_bUsePhysicsSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePhysicsSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicsConstraintType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsConstraintType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PhysicsConstraintType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicsGripLocationSettings_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsGripLocationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PhysicsGripLocationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTurnOffGravityDuringGrip_MetaData[];
#endif
		static void NewProp_bTurnOffGravityDuringGrip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurnOffGravityDuringGrip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipSettingSimulating_MetaData[];
#endif
		static void NewProp_bSkipSettingSimulating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipSettingSimulating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearMaxForceCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearMaxForceCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularMaxForceCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularMaxForceCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomAngularValues_MetaData[];
#endif
		static void NewProp_bUseCustomAngularValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomAngularValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPAdvGripPhysicsSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings_SetBit(void* Obj)
	{
		((FBPAdvGripPhysicsSettings*)Obj)->bUsePhysicsSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings = { "bUsePhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvGripPhysicsSettings), &Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "Comment", "// Set the constraint force mode\n" },
		{ "editcondition", "bUsePhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Set the constraint force mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType = { "PhysicsConstraintType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripPhysicsSettings, PhysicsConstraintType), Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType_MetaData)) }; // 4242150398
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "Comment", "// Set how the grips handle center of mass\n" },
		{ "editcondition", "bUsePhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Set how the grips handle center of mass" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings = { "PhysicsGripLocationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripPhysicsSettings, PhysicsGripLocationSettings), Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings_MetaData)) }; // 2447560144
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "Comment", "// Turn off gravity during the grip, resolves the slight downward offset of the object with normal constraint strengths.\n" },
		{ "editcondition", "bUsePhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Turn off gravity during the grip, resolves the slight downward offset of the object with normal constraint strengths." },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip_SetBit(void* Obj)
	{
		((FBPAdvGripPhysicsSettings*)Obj)->bTurnOffGravityDuringGrip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip = { "bTurnOffGravityDuringGrip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvGripPhysicsSettings), &Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bSkipSettingSimulating_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "Comment", "// Don't automatically (un)simulate the component/root on grip/drop, let the end user set it up instead\n" },
		{ "editcondition", "bUsePhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Don't automatically (un)simulate the component/root on grip/drop, let the end user set it up instead" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bSkipSettingSimulating_SetBit(void* Obj)
	{
		((FBPAdvGripPhysicsSettings*)Obj)->bSkipSettingSimulating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bSkipSettingSimulating = { "bSkipSettingSimulating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvGripPhysicsSettings), &Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bSkipSettingSimulating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bSkipSettingSimulating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bSkipSettingSimulating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_LinearMaxForceCoefficient_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "ClampMax", "256.00" },
		{ "ClampMin", "0.00" },
		{ "Comment", "// A multiplier to add to the stiffness of a grip that is then set as the MaxForce of the grip\n// It is clamped between 0.00 and 256.00 to save in replication cost, a value of 0 will mean max force is infinite as it will multiply it to zero (legacy behavior)\n// If you want an exact value you can figure it out as a factor of the stiffness, also Max force can be directly edited with SetAdvancedConstraintSettings\n" },
		{ "editcondition", "bUsePhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "A multiplier to add to the stiffness of a grip that is then set as the MaxForce of the grip\nIt is clamped between 0.00 and 256.00 to save in replication cost, a value of 0 will mean max force is infinite as it will multiply it to zero (legacy behavior)\nIf you want an exact value you can figure it out as a factor of the stiffness, also Max force can be directly edited with SetAdvancedConstraintSettings" },
		{ "UIMax", "256.00" },
		{ "UIMin", "0.00" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_LinearMaxForceCoefficient = { "LinearMaxForceCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripPhysicsSettings, LinearMaxForceCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_LinearMaxForceCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_LinearMaxForceCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularMaxForceCoefficient_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "ClampMax", "256.00" },
		{ "ClampMin", "0.00" },
		{ "Comment", "// A multiplier to add to the stiffness of a grip that is then set as the MaxForce of the grip\n// It is clamped between 0.00 and 256.00 to save in replication cost, a value of 0 will mean max force is infinite as it will multiply it to zero (legacy behavior)\n// If you want an exact value you can figure it out as a factor of the stiffness, also Max force can be directly edited with SetAdvancedConstraintSettings\n" },
		{ "editcondition", "bUsePhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "A multiplier to add to the stiffness of a grip that is then set as the MaxForce of the grip\nIt is clamped between 0.00 and 256.00 to save in replication cost, a value of 0 will mean max force is infinite as it will multiply it to zero (legacy behavior)\nIf you want an exact value you can figure it out as a factor of the stiffness, also Max force can be directly edited with SetAdvancedConstraintSettings" },
		{ "UIMax", "256.00" },
		{ "UIMin", "0.00" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularMaxForceCoefficient = { "AngularMaxForceCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripPhysicsSettings, AngularMaxForceCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularMaxForceCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularMaxForceCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "Comment", "// Use the custom angular values on this grip\n" },
		{ "editcondition", "bUsePhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Use the custom angular values on this grip" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues_SetBit(void* Obj)
	{
		((FBPAdvGripPhysicsSettings*)Obj)->bUseCustomAngularValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues = { "bUseCustomAngularValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvGripPhysicsSettings), &Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularStiffness_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "ClampMin", "0.000" },
		{ "editcondition", "bUseCustomAngularValues" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "UIMin", "0.000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularStiffness = { "AngularStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripPhysicsSettings, AngularStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularDamping_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "ClampMin", "0.000" },
		{ "editcondition", "bUseCustomAngularValues" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "UIMin", "0.000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularDamping = { "AngularDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripPhysicsSettings, AngularDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularDamping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bSkipSettingSimulating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_LinearMaxForceCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularMaxForceCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularDamping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPAdvGripPhysicsSettings",
		sizeof(FBPAdvGripPhysicsSettings),
		alignof(FBPAdvGripPhysicsSettings),
		Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BPAdvGripPhysicsSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPAdvGripPhysicsSettings.InnerSingleton, Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPAdvGripPhysicsSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPAdvGripSettings;
class UScriptStruct* FBPAdvGripSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPAdvGripSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPAdvGripSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPAdvGripSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPAdvGripSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BPAdvGripSettings.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPAdvGripSettings>()
{
	return FBPAdvGripSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripPriority_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GripPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetOwnerOnGrip_MetaData[];
#endif
		static void NewProp_bSetOwnerOnGrip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetOwnerOnGrip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisallowLerping_MetaData[];
#endif
		static void NewProp_bDisallowLerping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisallowLerping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPAdvGripSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_GripPriority_MetaData[] = {
		{ "Category", "AdvancedGripSettings" },
		{ "Comment", "// Priority of this item when being gripped, (Higher is more priority)\n// This lets you prioritize whether an object should be gripped over another one when both\n// collide with traces or overlaps. #Note: Currently not implemented in the plugin, here for your use.\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Priority of this item when being gripped, (Higher is more priority)\nThis lets you prioritize whether an object should be gripped over another one when both\ncollide with traces or overlaps. #Note: Currently not implemented in the plugin, here for your use." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_GripPriority = { "GripPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripSettings, GripPriority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_GripPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_GripPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip_MetaData[] = {
		{ "Category", "AdvancedGripSettings" },
		{ "Comment", "// If true, will set the owner of actor grips on grip\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "If true, will set the owner of actor grips on grip" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip_SetBit(void* Obj)
	{
		((FBPAdvGripSettings*)Obj)->bSetOwnerOnGrip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip = { "bSetOwnerOnGrip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvGripSettings), &Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bDisallowLerping_MetaData[] = {
		{ "Category", "AdvancedGripSettings" },
		{ "Comment", "// If true, we will be bypassed on global lerp operations\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "If true, we will be bypassed on global lerp operations" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bDisallowLerping_SetBit(void* Obj)
	{
		((FBPAdvGripSettings*)Obj)->bDisallowLerping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bDisallowLerping = { "bDisallowLerping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvGripSettings), &Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bDisallowLerping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bDisallowLerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bDisallowLerping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_PhysicsSettings_MetaData[] = {
		{ "Category", "AdvancedGripSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_PhysicsSettings = { "PhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripSettings, PhysicsSettings), Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_PhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_PhysicsSettings_MetaData)) }; // 1739245077
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_GripPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bDisallowLerping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_PhysicsSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPAdvGripSettings",
		sizeof(FBPAdvGripSettings),
		alignof(FBPAdvGripSettings),
		Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BPAdvGripSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPAdvGripSettings.InnerSingleton, Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPAdvGripSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPSecondaryGripInfo;
class UScriptStruct* FBPSecondaryGripInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPSecondaryGripInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPSecondaryGripInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSecondaryGripInfo, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPSecondaryGripInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BPSecondaryGripInfo.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPSecondaryGripInfo>()
{
	return FBPSecondaryGripInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSecondaryAttachment_MetaData[];
#endif
		static void NewProp_bHasSecondaryAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSecondaryAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAttachment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SecondaryAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlotGrip_MetaData[];
#endif
		static void NewProp_bIsSlotGrip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlotGrip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondarySlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SecondarySlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpToRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpToRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryGripDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPSecondaryGripInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment_MetaData[] = {
		{ "Category", "SecondaryGripInfo" },
		{ "Comment", "// For multi grip situations\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "For multi grip situations" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment_SetBit(void* Obj)
	{
		((FBPSecondaryGripInfo*)Obj)->bHasSecondaryAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment = { "bHasSecondaryAttachment", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPSecondaryGripInfo), &Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryAttachment_MetaData[] = {
		{ "Category", "SecondaryGripInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryAttachment = { "SecondaryAttachment", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSecondaryGripInfo, SecondaryAttachment), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryAttachment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryRelativeTransform_MetaData[] = {
		{ "Category", "SecondaryGripInfo" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryRelativeTransform = { "SecondaryRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSecondaryGripInfo, SecondaryRelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryRelativeTransform_MetaData)) }; // 2465919809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip_MetaData[] = {
		{ "Category", "SecondaryGripInfo" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip_SetBit(void* Obj)
	{
		((FBPSecondaryGripInfo*)Obj)->bIsSlotGrip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip = { "bIsSlotGrip", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPSecondaryGripInfo), &Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondarySlotName_MetaData[] = {
		{ "Category", "SecondaryGripInfo" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondarySlotName = { "SecondarySlotName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSecondaryGripInfo, SecondarySlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondarySlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondarySlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_LerpToRate_MetaData[] = {
		{ "Comment", "// Lerp transitions\n// Max value is 16 seconds with two decimal precision, this is to reduce replication overhead\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Lerp transitions\nMax value is 16 seconds with two decimal precision, this is to reduce replication overhead" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_LerpToRate = { "LerpToRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSecondaryGripInfo, LerpToRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_LerpToRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_LerpToRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryGripDistance_MetaData[] = {
		{ "Category", "SecondaryGripInfo" },
		{ "Comment", "// Filled in from the tick code so users can activate and deactivate grips based on this\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Filled in from the tick code so users can activate and deactivate grips based on this" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryGripDistance = { "SecondaryGripDistance", nullptr, (EPropertyFlags)0x0010000080000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSecondaryGripInfo, SecondaryGripDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryGripDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryGripDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondarySlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_LerpToRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryGripDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPSecondaryGripInfo",
		sizeof(FBPSecondaryGripInfo),
		alignof(FBPSecondaryGripInfo),
		Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPSecondaryGripInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BPSecondaryGripInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPSecondaryGripInfo.InnerSingleton, Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPSecondaryGripInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPActorGripInformation;
class UScriptStruct* FBPActorGripInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPActorGripInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPActorGripInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPActorGripInformation, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPActorGripInformation"));
	}
	return Z_Registration_Info_UScriptStruct_BPActorGripInformation.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPActorGripInformation>()
{
	return FBPActorGripInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPActorGripInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripID_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GripID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GripTargetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripTargetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GripTargetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrippedObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrippedObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GripCollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripCollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GripCollisionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GripLateUpdateSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripLateUpdateSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GripLateUpdateSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bColliding_MetaData[];
#endif
		static void NewProp_bColliding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bColliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlotGrip_MetaData[];
#endif
		static void NewProp_bIsSlotGrip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlotGrip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrippedBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GrippedBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GripMovementReplicationSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripMovementReplicationSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GripMovementReplicationSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[];
#endif
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPendingKill_MetaData[];
#endif
		static void NewProp_bIsPendingKill_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPendingKill;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockHybridGrip_MetaData[];
#endif
		static void NewProp_bLockHybridGrip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockHybridGrip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOriginalReplicatesMovement_MetaData[];
#endif
		static void NewProp_bOriginalReplicatesMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOriginalReplicatesMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOriginalGravity_MetaData[];
#endif
		static void NewProp_bOriginalGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOriginalGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGripSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedGripSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryGripInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GripDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLerping_MetaData[];
#endif
		static void NewProp_bIsLerping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLerping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPActorGripInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripID_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Hashed unique ID to identify this grip instance\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Hashed unique ID to identify this grip instance" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GripID), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType = { "GripTargetType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GripTargetType), Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType_MetaData)) }; // 2155042911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedObject_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedObject = { "GrippedObject", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GrippedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType = { "GripCollisionType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GripCollisionType), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType_MetaData)) }; // 3664031501
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting = { "GripLateUpdateSetting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GripLateUpdateSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting_MetaData)) }; // 3886628611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bColliding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding = { "bColliding", nullptr, (EPropertyFlags)0x0010000080000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, RelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_RelativeTransform_MetaData)) }; // 2465919809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bIsSlotGrip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip = { "bIsSlotGrip", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedBoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedBoneName = { "GrippedBoneName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GrippedBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SlotName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting = { "GripMovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GripMovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting_MetaData)) }; // 2250529565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether the grip is currently paused\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Whether the grip is currently paused" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bIsPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000080000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPendingKill_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Only true in one specific circumstance, when you are a simulated client\n// and the grip has been dropped but replication on the array hasn't deleted\n// the entry yet. We cannot remove the entry as it can corrupt the array.\n// this lets end users check against the grip to ignore it.\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Only true in one specific circumstance, when you are a simulated client\nand the grip has been dropped but replication on the array hasn't deleted\nthe entry yet. We cannot remove the entry as it can corrupt the array.\nthis lets end users check against the grip to ignore it." },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPendingKill_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bIsPendingKill = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPendingKill = { "bIsPendingKill", nullptr, (EPropertyFlags)0x0010000080000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPendingKill_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPendingKill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPendingKill_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bLockHybridGrip_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// When true, will lock a hybrid grip into its collision state\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "When true, will lock a hybrid grip into its collision state" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bLockHybridGrip_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bLockHybridGrip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bLockHybridGrip = { "bLockHybridGrip", nullptr, (EPropertyFlags)0x0010000080000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bLockHybridGrip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bLockHybridGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bLockHybridGrip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement_MetaData[] = {
		{ "Comment", "// I would have loved to have both of these not be replicated (and in normal grips they wouldn't have to be)\n// However for serialization purposes and Client_Authority grips they need to be....\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "I would have loved to have both of these not be replicated (and in normal grips they wouldn't have to be)\nHowever for serialization purposes and Client_Authority grips they need to be...." },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bOriginalReplicatesMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement = { "bOriginalReplicatesMovement", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bOriginalGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity = { "bOriginalGravity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdvancedGripSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdvancedGripSettings = { "AdvancedGripSettings", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, AdvancedGripSettings), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdvancedGripSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdvancedGripSettings_MetaData)) }; // 2174263497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SecondaryGripInfo_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// For multi grip situations\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "For multi grip situations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SecondaryGripInfo = { "SecondaryGripInfo", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, SecondaryGripInfo), Z_Construct_UScriptStruct_FBPSecondaryGripInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SecondaryGripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SecondaryGripInfo_MetaData)) }; // 1540361125
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdditionTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Optional Additive Transform for programmatic animation\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Optional Additive Transform for programmatic animation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdditionTransform = { "AdditionTransform", nullptr, (EPropertyFlags)0x0010000080000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, AdditionTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdditionTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdditionTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Distance from the target point for the grip\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Distance from the target point for the grip" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripDistance = { "GripDistance", nullptr, (EPropertyFlags)0x0010000080000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GripDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsLerping_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsLerping_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bIsLerping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsLerping = { "bIsLerping", nullptr, (EPropertyFlags)0x0010000080000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsLerping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsLerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsLerping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_RelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPendingKill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bLockHybridGrip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdvancedGripSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SecondaryGripInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdditionTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsLerping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPActorGripInformation",
		sizeof(FBPActorGripInformation),
		alignof(FBPActorGripInformation),
		Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_BPActorGripInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPActorGripInformation.InnerSingleton, Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPActorGripInformation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPGripPair;
class UScriptStruct* FBPGripPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPGripPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPGripPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPGripPair, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPGripPair"));
	}
	return Z_Registration_Info_UScriptStruct_BPGripPair.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPGripPair>()
{
	return FBPGripPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPGripPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldingController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HoldingController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripID_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GripID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGripPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPGripPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPGripPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGripPair_Statics::NewProp_HoldingController_MetaData[] = {
		{ "Category", "GripPair" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBPGripPair_Statics::NewProp_HoldingController = { "HoldingController", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGripPair, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGripPair_Statics::NewProp_HoldingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGripPair_Statics::NewProp_HoldingController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGripPair_Statics::NewProp_GripID_MetaData[] = {
		{ "Category", "GripPair" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPGripPair_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGripPair, GripID), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGripPair_Statics::NewProp_GripID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGripPair_Statics::NewProp_GripID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPGripPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGripPair_Statics::NewProp_HoldingController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGripPair_Statics::NewProp_GripID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPGripPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPGripPair",
		sizeof(FBPGripPair),
		alignof(FBPGripPair),
		Z_Construct_UScriptStruct_FBPGripPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGripPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGripPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGripPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair()
	{
		if (!Z_Registration_Info_UScriptStruct_BPGripPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPGripPair.InnerSingleton, Z_Construct_UScriptStruct_FBPGripPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPGripPair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPInterfaceProperties;
class UScriptStruct* FBPInterfaceProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPInterfaceProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPInterfaceProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPInterfaceProperties, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPInterfaceProperties"));
	}
	return Z_Registration_Info_UScriptStruct_BPInterfaceProperties.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPInterfaceProperties>()
{
	return FBPInterfaceProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDenyGripping_MetaData[];
#endif
		static void NewProp_bDenyGripping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleGrips_MetaData[];
#endif
		static void NewProp_bAllowMultipleGrips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleGrips;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OnTeleportBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTeleportBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OnTeleportBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimulateOnDrop_MetaData[];
#endif
		static void NewProp_bSimulateOnDrop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulateOnDrop;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SlotDefaultGripType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotDefaultGripType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SlotDefaultGripType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FreeDefaultGripType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreeDefaultGripType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FreeDefaultGripType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SecondaryGripType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SecondaryGripType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementReplicationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementReplicationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementReplicationType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LateUpdateSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LateUpdateSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LateUpdateSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstraintStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstraintDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBreakDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstraintBreakDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondarySlotRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondarySlotRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySlotRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimarySlotRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGripSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedGripSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[];
#endif
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoldingControllers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldingControllers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HoldingControllers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPInterfaceProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((FBPInterfaceProperties*)Obj)->bDenyGripping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPInterfaceProperties), &Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bAllowMultipleGrips_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bAllowMultipleGrips_SetBit(void* Obj)
	{
		((FBPInterfaceProperties*)Obj)->bAllowMultipleGrips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bAllowMultipleGrips = { "bAllowMultipleGrips", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPInterfaceProperties), &Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bAllowMultipleGrips_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bAllowMultipleGrips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bAllowMultipleGrips_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior = { "OnTeleportBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, OnTeleportBehavior), Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior_MetaData)) }; // 1816860793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop_SetBit(void* Obj)
	{
		((FBPInterfaceProperties*)Obj)->bSimulateOnDrop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop = { "bSimulateOnDrop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPInterfaceProperties), &Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType = { "SlotDefaultGripType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, SlotDefaultGripType), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType_MetaData)) }; // 3664031501
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType = { "FreeDefaultGripType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, FreeDefaultGripType), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType_MetaData)) }; // 3664031501
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType = { "SecondaryGripType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, SecondaryGripType), Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType_MetaData)) }; // 3018210991
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType = { "MovementReplicationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, MovementReplicationType), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType_MetaData)) }; // 2250529565
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting = { "LateUpdateSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, LateUpdateSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting_MetaData)) }; // 3886628611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintStiffness_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintStiffness = { "ConstraintStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, ConstraintStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintDamping_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintDamping = { "ConstraintDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, ConstraintDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintBreakDistance_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintBreakDistance = { "ConstraintBreakDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, ConstraintBreakDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintBreakDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintBreakDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondarySlotRange_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondarySlotRange = { "SecondarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, SecondarySlotRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondarySlotRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondarySlotRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_PrimarySlotRange_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_PrimarySlotRange = { "PrimarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, PrimarySlotRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_PrimarySlotRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_PrimarySlotRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_AdvancedGripSettings_MetaData[] = {
		{ "Category", "VRGripInterface|AdvancedGripSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_AdvancedGripSettings = { "AdvancedGripSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, AdvancedGripSettings), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_AdvancedGripSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_AdvancedGripSettings_MetaData)) }; // 2174263497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((FBPInterfaceProperties*)Obj)->bIsHeld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000080000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPInterfaceProperties), &Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_HoldingControllers_Inner = { "HoldingControllers", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(nullptr, 0) }; // 4278698171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_HoldingControllers_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_HoldingControllers = { "HoldingControllers", nullptr, (EPropertyFlags)0x0010008080000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, HoldingControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_HoldingControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_HoldingControllers_MetaData)) }; // 4278698171
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bAllowMultipleGrips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintBreakDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondarySlotRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_PrimarySlotRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_AdvancedGripSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_HoldingControllers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_HoldingControllers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPInterfaceProperties",
		sizeof(FBPInterfaceProperties),
		alignof(FBPInterfaceProperties),
		Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_BPInterfaceProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPInterfaceProperties.InnerSingleton, Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPInterfaceProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPActorPhysicsHandleInformation;
class UScriptStruct* FBPActorPhysicsHandleInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPActorPhysicsHandleInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPActorPhysicsHandleInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPActorPhysicsHandleInformation"));
	}
	return Z_Registration_Info_UScriptStruct_BPActorPhysicsHandleInformation.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPActorPhysicsHandleInformation>()
{
	return FBPActorPhysicsHandleInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandledObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandledObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPActorPhysicsHandleInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewProp_HandledObject_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewProp_HandledObject = { "HandledObject", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorPhysicsHandleInformation, HandledObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewProp_HandledObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewProp_HandledObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewProp_HandledObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPActorPhysicsHandleInformation",
		sizeof(FBPActorPhysicsHandleInformation),
		alignof(FBPActorPhysicsHandleInformation),
		Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_BPActorPhysicsHandleInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPActorPhysicsHandleInformation.InnerSingleton, Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPActorPhysicsHandleInformation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleAxisSettings;
class UScriptStruct* FBPAdvancedPhysicsHandleAxisSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleAxisSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleAxisSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPAdvancedPhysicsHandleAxisSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleAxisSettings.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPAdvancedPhysicsHandleAxisSettings>()
{
	return FBPAdvancedPhysicsHandleAxisSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxForceCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxForceCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePositionDrive_MetaData[];
#endif
		static void NewProp_bEnablePositionDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePositionDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVelocityDrive_MetaData[];
#endif
		static void NewProp_bEnableVelocityDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVelocityDrive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPAdvancedPhysicsHandleAxisSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The spring strength of the drive. Force proportional to the position error. */" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The spring strength of the drive. Force proportional to the position error." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvancedPhysicsHandleAxisSettings, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The damping strength of the drive. Force proportional to the velocity error. */" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The damping strength of the drive. Force proportional to the velocity error." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvancedPhysicsHandleAxisSettings, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_MaxForceCoefficient_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "ClampMax", "256.00" },
		{ "ClampMin", "0.00" },
		{ "Comment", "// A multiplier to add to the stiffness that is then set as the MaxForce\n// It is clamped between 0.00 and 256.00 to save in replication cost, a value of 0 will mean max force is infinite as it will multiply it to zero (legacy behavior)\n// If you want an exact value you can figure it out as a factor of the stiffness\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "A multiplier to add to the stiffness that is then set as the MaxForce\nIt is clamped between 0.00 and 256.00 to save in replication cost, a value of 0 will mean max force is infinite as it will multiply it to zero (legacy behavior)\nIf you want an exact value you can figure it out as a factor of the stiffness" },
		{ "UIMax", "256.00" },
		{ "UIMin", "0.00" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_MaxForceCoefficient = { "MaxForceCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvancedPhysicsHandleAxisSettings, MaxForceCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_MaxForceCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_MaxForceCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnablePositionDrive_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Enables/Disables position drive (orientation if using angular drive)*/" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Enables/Disables position drive (orientation if using angular drive)" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnablePositionDrive_SetBit(void* Obj)
	{
		((FBPAdvancedPhysicsHandleAxisSettings*)Obj)->bEnablePositionDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnablePositionDrive = { "bEnablePositionDrive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvancedPhysicsHandleAxisSettings), &Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnablePositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnablePositionDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnablePositionDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnableVelocityDrive_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Enables/Disables velocity drive (damping) (angular velocity if using angular drive) */" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Enables/Disables velocity drive (damping) (angular velocity if using angular drive)" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnableVelocityDrive_SetBit(void* Obj)
	{
		((FBPAdvancedPhysicsHandleAxisSettings*)Obj)->bEnableVelocityDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnableVelocityDrive = { "bEnableVelocityDrive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvancedPhysicsHandleAxisSettings), &Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnableVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnableVelocityDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnableVelocityDrive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_MaxForceCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnablePositionDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewProp_bEnableVelocityDrive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPAdvancedPhysicsHandleAxisSettings",
		sizeof(FBPAdvancedPhysicsHandleAxisSettings),
		alignof(FBPAdvancedPhysicsHandleAxisSettings),
		Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleAxisSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleAxisSettings.InnerSingleton, Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleAxisSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleSettings;
class UScriptStruct* FBPAdvancedPhysicsHandleSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPAdvancedPhysicsHandleSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleSettings.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPAdvancedPhysicsHandleSettings>()
{
	return FBPAdvancedPhysicsHandleSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XAxisSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XAxisSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YAxisSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YAxisSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZAxisSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZAxisSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlerpSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlerpSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwistSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwingSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPAdvancedPhysicsHandleSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_XAxisSettings_MetaData[] = {
		{ "Category", "Linear Constraint Settings" },
		{ "Comment", "// The settings for the XAxis\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The settings for the XAxis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_XAxisSettings = { "XAxisSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvancedPhysicsHandleSettings, XAxisSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_XAxisSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_XAxisSettings_MetaData)) }; // 3943210622
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_YAxisSettings_MetaData[] = {
		{ "Category", "Linear Constraint Settings" },
		{ "Comment", "// The settings for the YAxis\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The settings for the YAxis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_YAxisSettings = { "YAxisSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvancedPhysicsHandleSettings, YAxisSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_YAxisSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_YAxisSettings_MetaData)) }; // 3943210622
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_ZAxisSettings_MetaData[] = {
		{ "Category", "Linear Constraint Settings" },
		{ "Comment", "// The settings for the ZAxis\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The settings for the ZAxis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_ZAxisSettings = { "ZAxisSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvancedPhysicsHandleSettings, ZAxisSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_ZAxisSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_ZAxisSettings_MetaData)) }; // 3943210622
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_SlerpSettings_MetaData[] = {
		{ "Category", "Angular Constraint Settings" },
		{ "Comment", "// The settings for the Orientation (Slerp only for now)\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The settings for the Orientation (Slerp only for now)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_SlerpSettings = { "SlerpSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvancedPhysicsHandleSettings, SlerpSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_SlerpSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_SlerpSettings_MetaData)) }; // 3943210622
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_TwistSettings_MetaData[] = {
		{ "Category", "Angular Constraint Settings" },
		{ "Comment", "// The settings for the Orientation (Slerp only for now)\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The settings for the Orientation (Slerp only for now)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_TwistSettings = { "TwistSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvancedPhysicsHandleSettings, TwistSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_TwistSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_TwistSettings_MetaData)) }; // 3943210622
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_SwingSettings_MetaData[] = {
		{ "Category", "Angular Constraint Settings" },
		{ "Comment", "// The settings for the Orientation (Slerp only for now)\n" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The settings for the Orientation (Slerp only for now)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_SwingSettings = { "SwingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvancedPhysicsHandleSettings, SwingSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_SwingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_SwingSettings_MetaData)) }; // 3943210622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_XAxisSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_YAxisSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_ZAxisSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_SlerpSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_TwistSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewProp_SwingSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPAdvancedPhysicsHandleSettings",
		sizeof(FBPAdvancedPhysicsHandleSettings),
		alignof(FBPAdvancedPhysicsHandleSettings),
		Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleSettings.InnerSingleton, Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_Statics::EnumInfo[] = {
		{ EVRCustomMovementMode_StaticEnum, TEXT("EVRCustomMovementMode"), &Z_Registration_Info_UEnum_EVRCustomMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2785901203U) },
		{ EVRConjoinedMovementModes_StaticEnum, TEXT("EVRConjoinedMovementModes"), &Z_Registration_Info_UEnum_EVRConjoinedMovementModes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2120590815U) },
		{ EBPVRResultSwitch_StaticEnum, TEXT("EBPVRResultSwitch"), &Z_Registration_Info_UEnum_EBPVRResultSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3212684435U) },
		{ EBPVRWaistTrackingMode_StaticEnum, TEXT("EBPVRWaistTrackingMode"), &Z_Registration_Info_UEnum_EBPVRWaistTrackingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3751524348U) },
		{ EVRLerpInterpolationMode_StaticEnum, TEXT("EVRLerpInterpolationMode"), &Z_Registration_Info_UEnum_EVRLerpInterpolationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2359620219U) },
		{ EVRVelocityType_StaticEnum, TEXT("EVRVelocityType"), &Z_Registration_Info_UEnum_EVRVelocityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1145549254U) },
		{ EVRVectorQuantization_StaticEnum, TEXT("EVRVectorQuantization"), &Z_Registration_Info_UEnum_EVRVectorQuantization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3943848948U) },
		{ EVRRotationQuantization_StaticEnum, TEXT("EVRRotationQuantization"), &Z_Registration_Info_UEnum_EVRRotationQuantization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1588567064U) },
		{ EGripCollisionType_StaticEnum, TEXT("EGripCollisionType"), &Z_Registration_Info_UEnum_EGripCollisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3664031501U) },
		{ EBPHMDDeviceType_StaticEnum, TEXT("EBPHMDDeviceType"), &Z_Registration_Info_UEnum_EBPHMDDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1901541915U) },
		{ EGripLerpState_StaticEnum, TEXT("EGripLerpState"), &Z_Registration_Info_UEnum_EGripLerpState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 158395771U) },
		{ ESecondaryGripType_StaticEnum, TEXT("ESecondaryGripType"), &Z_Registration_Info_UEnum_ESecondaryGripType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3018210991U) },
		{ EGripLateUpdateSettings_StaticEnum, TEXT("EGripLateUpdateSettings"), &Z_Registration_Info_UEnum_EGripLateUpdateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3886628611U) },
		{ EGripMovementReplicationSettings_StaticEnum, TEXT("EGripMovementReplicationSettings"), &Z_Registration_Info_UEnum_EGripMovementReplicationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2250529565U) },
		{ EGripTargetType_StaticEnum, TEXT("EGripTargetType"), &Z_Registration_Info_UEnum_EGripTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2155042911U) },
		{ EGripInterfaceTeleportBehavior_StaticEnum, TEXT("EGripInterfaceTeleportBehavior"), &Z_Registration_Info_UEnum_EGripInterfaceTeleportBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1816860793U) },
		{ EPhysicsGripConstraintType_StaticEnum, TEXT("EPhysicsGripConstraintType"), &Z_Registration_Info_UEnum_EPhysicsGripConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4242150398U) },
		{ EPhysicsGripCOMType_StaticEnum, TEXT("EPhysicsGripCOMType"), &Z_Registration_Info_UEnum_EPhysicsGripCOMType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2447560144U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_Statics::ScriptStructInfo[] = {
		{ FBPVRWaistTracking_Info::StaticStruct, Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewStructOps, TEXT("BPVRWaistTracking_Info"), &Z_Registration_Info_UScriptStruct_BPVRWaistTracking_Info, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPVRWaistTracking_Info), 3798876135U) },
		{ FBPEuroLowPassFilter::StaticStruct, Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewStructOps, TEXT("BPEuroLowPassFilter"), &Z_Registration_Info_UScriptStruct_BPEuroLowPassFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPEuroLowPassFilter), 4292007945U) },
		{ FBPEuroLowPassFilterQuat::StaticStruct, Z_Construct_UScriptStruct_FBPEuroLowPassFilterQuat_Statics::NewStructOps, TEXT("BPEuroLowPassFilterQuat"), &Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPEuroLowPassFilterQuat), 4194914807U) },
		{ FBPEuroLowPassFilterTrans::StaticStruct, Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans_Statics::NewStructOps, TEXT("BPEuroLowPassFilterTrans"), &Z_Registration_Info_UScriptStruct_BPEuroLowPassFilterTrans, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPEuroLowPassFilterTrans), 256643382U) },
		{ FBPLowPassPeakFilter::StaticStruct, Z_Construct_UScriptStruct_FBPLowPassPeakFilter_Statics::NewStructOps, TEXT("BPLowPassPeakFilter"), &Z_Registration_Info_UScriptStruct_BPLowPassPeakFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPLowPassPeakFilter), 3524766702U) },
		{ FTransform_NetQuantize::StaticStruct, Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::NewStructOps, TEXT("Transform_NetQuantize"), &Z_Registration_Info_UScriptStruct_Transform_NetQuantize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransform_NetQuantize), 2465919809U) },
		{ FBPVRComponentPosRep::StaticStruct, Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewStructOps, TEXT("BPVRComponentPosRep"), &Z_Registration_Info_UScriptStruct_BPVRComponentPosRep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPVRComponentPosRep), 3453632770U) },
		{ FBPAdvGripPhysicsSettings::StaticStruct, Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewStructOps, TEXT("BPAdvGripPhysicsSettings"), &Z_Registration_Info_UScriptStruct_BPAdvGripPhysicsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPAdvGripPhysicsSettings), 1739245077U) },
		{ FBPAdvGripSettings::StaticStruct, Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewStructOps, TEXT("BPAdvGripSettings"), &Z_Registration_Info_UScriptStruct_BPAdvGripSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPAdvGripSettings), 2174263497U) },
		{ FBPSecondaryGripInfo::StaticStruct, Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewStructOps, TEXT("BPSecondaryGripInfo"), &Z_Registration_Info_UScriptStruct_BPSecondaryGripInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPSecondaryGripInfo), 1540361125U) },
		{ FBPActorGripInformation::StaticStruct, Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewStructOps, TEXT("BPActorGripInformation"), &Z_Registration_Info_UScriptStruct_BPActorGripInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPActorGripInformation), 2559775509U) },
		{ FBPGripPair::StaticStruct, Z_Construct_UScriptStruct_FBPGripPair_Statics::NewStructOps, TEXT("BPGripPair"), &Z_Registration_Info_UScriptStruct_BPGripPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPGripPair), 4278698171U) },
		{ FBPInterfaceProperties::StaticStruct, Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewStructOps, TEXT("BPInterfaceProperties"), &Z_Registration_Info_UScriptStruct_BPInterfaceProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPInterfaceProperties), 4245312167U) },
		{ FBPActorPhysicsHandleInformation::StaticStruct, Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewStructOps, TEXT("BPActorPhysicsHandleInformation"), &Z_Registration_Info_UScriptStruct_BPActorPhysicsHandleInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPActorPhysicsHandleInformation), 3339169635U) },
		{ FBPAdvancedPhysicsHandleAxisSettings::StaticStruct, Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleAxisSettings_Statics::NewStructOps, TEXT("BPAdvancedPhysicsHandleAxisSettings"), &Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleAxisSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPAdvancedPhysicsHandleAxisSettings), 3943210622U) },
		{ FBPAdvancedPhysicsHandleSettings::StaticStruct, Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings_Statics::NewStructOps, TEXT("BPAdvancedPhysicsHandleSettings"), &Z_Registration_Info_UScriptStruct_BPAdvancedPhysicsHandleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPAdvancedPhysicsHandleSettings), 4098109705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_3500552650(TEXT("/Script/VRExpansionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
