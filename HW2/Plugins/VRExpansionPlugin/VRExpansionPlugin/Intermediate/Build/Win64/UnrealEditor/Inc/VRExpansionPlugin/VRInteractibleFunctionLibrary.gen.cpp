// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Interactibles/VRInteractibleFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRInteractibleFunctionLibrary() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRInteractibleBaseData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRInteractibleAxis;
	static UEnum* EVRInteractibleAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRInteractibleAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRInteractibleAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleAxis"));
		}
		return Z_Registration_Info_UEnum_EVRInteractibleAxis.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleAxis>()
	{
		return EVRInteractibleAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::Enumerators[] = {
		{ "EVRInteractibleAxis::Axis_X", (int64)EVRInteractibleAxis::Axis_X },
		{ "EVRInteractibleAxis::Axis_Y", (int64)EVRInteractibleAxis::Axis_Y },
		{ "EVRInteractibleAxis::Axis_Z", (int64)EVRInteractibleAxis::Axis_Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::Enum_MetaDataParams[] = {
		{ "Axis_X.Name", "EVRInteractibleAxis::Axis_X" },
		{ "Axis_Y.Name", "EVRInteractibleAxis::Axis_Y" },
		{ "Axis_Z.Name", "EVRInteractibleAxis::Axis_Z" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Declares our interactible axis's\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "Declares our interactible axis's" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRInteractibleAxis",
		"EVRInteractibleAxis",
		Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis()
	{
		if (!Z_Registration_Info_UEnum_EVRInteractibleAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRInteractibleAxis.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRInteractibleAxis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData;
class UScriptStruct* FBPVRInteractibleBaseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRInteractibleBaseData"));
	}
	return Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVRInteractibleBaseData>()
{
	return FBPVRInteractibleBaseData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialInteractorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialInteractorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialGripLoc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialGripLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialDropLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialDropLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReversedRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReversedRelativeTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "// A data structure to hold important interactible data\n// Should be init'd in Beginplay with BeginPlayInit as well as OnGrip with OnGripInit.\n// Works in \"static space\", it records the original relative transform of the interactible on begin play\n// so that calculations on the actual component can be done based off of it.\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "A data structure to hold important interactible data\nShould be init'd in Beginplay with BeginPlayInit as well as OnGrip with OnGripInit.\nWorks in \"static space\", it records the original relative transform of the interactible on begin play\nso that calculations on the actual component can be done based off of it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRInteractibleBaseData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialRelativeTransform_MetaData[] = {
		{ "Category", "InteractibleData" },
		{ "Comment", "// Our initial relative transform to our parent \"static space\" - Set in BeginPlayInit\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "Our initial relative transform to our parent \"static space\" - Set in BeginPlayInit" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialRelativeTransform = { "InitialRelativeTransform", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRInteractibleBaseData, InitialRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialInteractorLocation_MetaData[] = {
		{ "Category", "InteractibleData" },
		{ "Comment", "// Initial location in \"static space\" of the interactor on grip - Set in OnGripInit\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "Initial location in \"static space\" of the interactor on grip - Set in OnGripInit" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialInteractorLocation = { "InitialInteractorLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRInteractibleBaseData, InitialInteractorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialInteractorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialInteractorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialGripLoc_MetaData[] = {
		{ "Category", "InteractibleData" },
		{ "Comment", "// Initial location of the interactible in the \"static space\" - Set in OnGripInit\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "Initial location of the interactible in the \"static space\" - Set in OnGripInit" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialGripLoc = { "InitialGripLoc", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRInteractibleBaseData, InitialGripLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialGripLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialGripLoc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialDropLocation_MetaData[] = {
		{ "Category", "InteractibleData" },
		{ "Comment", "// Initial location on the interactible of the grip, used for drop calculations - Set in OnGripInit\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "Initial location on the interactible of the grip, used for drop calculations - Set in OnGripInit" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialDropLocation = { "InitialDropLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRInteractibleBaseData, InitialDropLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialDropLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialDropLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_ReversedRelativeTransform_MetaData[] = {
		{ "Category", "InteractibleData" },
		{ "Comment", "// The initial transform in relative space of the grip to us - Set in OnGripInit\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "The initial transform in relative space of the grip to us - Set in OnGripInit" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_ReversedRelativeTransform = { "ReversedRelativeTransform", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRInteractibleBaseData, ReversedRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_ReversedRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_ReversedRelativeTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialInteractorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialGripLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialDropLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_ReversedRelativeTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPVRInteractibleBaseData",
		sizeof(FBPVRInteractibleBaseData),
		alignof(FBPVRInteractibleBaseData),
		Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRInteractibleBaseData()
	{
		if (!Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData.InnerSingleton, Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData.InnerSingleton;
	}
	DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_GetThresholdSnappedValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ValueToSnap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SnapIncrement);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SnapThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetThresholdSnappedValue(Z_Param_ValueToSnap,Z_Param_SnapIncrement,Z_Param_SnapThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_GetAngleAroundAxisDelta)
	{
		P_GET_ENUM(EVRInteractibleAxis,Z_Param_AxisToCalc);
		P_GET_STRUCT(FVector,Z_Param_CurInteractorLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InitialAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetAngleAroundAxisDelta(EVRInteractibleAxis(Z_Param_AxisToCalc),Z_Param_CurInteractorLocation,Z_Param_InitialAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_GetAngleAroundAxis)
	{
		P_GET_ENUM(EVRInteractibleAxis,Z_Param_AxisToCalc);
		P_GET_STRUCT(FVector,Z_Param_CurInteractorLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetAngleAroundAxis(EVRInteractibleAxis(Z_Param_AxisToCalc),Z_Param_CurInteractorLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_OnGripInit)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_InteractibleComp);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_STRUCT_REF(FBPVRInteractibleBaseData,Z_Param_Out_BaseDataToInit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRInteractibleFunctionLibrary::Interactible_OnGripInit(Z_Param_InteractibleComp,Z_Param_Out_GripInformation,Z_Param_Out_BaseDataToInit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_BeginPlayInit)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_InteractibleComp);
		P_GET_STRUCT_REF(FBPVRInteractibleBaseData,Z_Param_Out_BaseDataToInit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRInteractibleFunctionLibrary::Interactible_BeginPlayInit(Z_Param_InteractibleComp,Z_Param_Out_BaseDataToInit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_GetCurrentRelativeTransform)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponentToCheck);
		P_GET_STRUCT_REF(FBPVRInteractibleBaseData,Z_Param_Out_BaseData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetCurrentRelativeTransform(Z_Param_SceneComponentToCheck,Z_Param_Out_BaseData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_GetCurrentParentTransform)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponentToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetCurrentParentTransform(Z_Param_SceneComponentToCheck);
		P_NATIVE_END;
	}
	void UVRInteractibleFunctionLibrary::StaticRegisterNativesUVRInteractibleFunctionLibrary()
	{
		UClass* Class = UVRInteractibleFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interactible_BeginPlayInit", &UVRInteractibleFunctionLibrary::execInteractible_BeginPlayInit },
			{ "Interactible_GetAngleAroundAxis", &UVRInteractibleFunctionLibrary::execInteractible_GetAngleAroundAxis },
			{ "Interactible_GetAngleAroundAxisDelta", &UVRInteractibleFunctionLibrary::execInteractible_GetAngleAroundAxisDelta },
			{ "Interactible_GetCurrentParentTransform", &UVRInteractibleFunctionLibrary::execInteractible_GetCurrentParentTransform },
			{ "Interactible_GetCurrentRelativeTransform", &UVRInteractibleFunctionLibrary::execInteractible_GetCurrentRelativeTransform },
			{ "Interactible_GetThresholdSnappedValue", &UVRInteractibleFunctionLibrary::execInteractible_GetThresholdSnappedValue },
			{ "Interactible_OnGripInit", &UVRInteractibleFunctionLibrary::execInteractible_OnGripInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms
		{
			USceneComponent* InteractibleComp;
			FBPVRInteractibleBaseData BaseDataToInit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractibleComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractibleComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseDataToInit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::NewProp_InteractibleComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::NewProp_InteractibleComp = { "InteractibleComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms, InteractibleComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::NewProp_InteractibleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::NewProp_InteractibleComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::NewProp_BaseDataToInit = { "BaseDataToInit", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms, BaseDataToInit), Z_Construct_UScriptStruct_FBPVRInteractibleBaseData, METADATA_PARAMS(nullptr, 0) }; // 373297400
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::NewProp_InteractibleComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::NewProp_BaseDataToInit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
		{ "Comment", "// Inits the initial relative transform of an interactible on begin play\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "Inits the initial relative transform of an interactible on begin play" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_BeginPlayInit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms
		{
			EVRInteractibleAxis AxisToCalc;
			FVector CurInteractorLocation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToCalc_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisToCalc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurInteractorLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_AxisToCalc_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_AxisToCalc = { "AxisToCalc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms, AxisToCalc), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(nullptr, 0) }; // 3085627722
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_CurInteractorLocation = { "CurInteractorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms, CurInteractorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_AxisToCalc_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_AxisToCalc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_CurInteractorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
		{ "Comment", "// Returns (in degrees) the angle around the axis of a location\n// Expects the CurInteractorLocation to be in relative space already\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "Returns (in degrees) the angle around the axis of a location\nExpects the CurInteractorLocation to be in relative space already" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_GetAngleAroundAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms
		{
			EVRInteractibleAxis AxisToCalc;
			FVector CurInteractorLocation;
			float InitialAngle;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToCalc_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisToCalc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurInteractorLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_AxisToCalc_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_AxisToCalc = { "AxisToCalc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms, AxisToCalc), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(nullptr, 0) }; // 3085627722
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_CurInteractorLocation = { "CurInteractorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms, CurInteractorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_InitialAngle = { "InitialAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms, InitialAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_AxisToCalc_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_AxisToCalc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_CurInteractorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_InitialAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
		{ "Comment", "// Returns (in degrees) the delta rotation from the initial angle at grip to the current interactor angle around the axis\n// Expects CurInteractorLocation to be in relative space already\n// You can add this to an initial rotation and clamp the result to rotate over time based on hand position\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "Returns (in degrees) the delta rotation from the initial angle at grip to the current interactor angle around the axis\nExpects CurInteractorLocation to be in relative space already\nYou can add this to an initial rotation and clamp the result to rotate over time based on hand position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_GetAngleAroundAxisDelta", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms
		{
			USceneComponent* SceneComponentToCheck;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponentToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponentToCheck;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::NewProp_SceneComponentToCheck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::NewProp_SceneComponentToCheck = { "SceneComponentToCheck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms, SceneComponentToCheck), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::NewProp_SceneComponentToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::NewProp_SceneComponentToCheck_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::NewProp_SceneComponentToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
		{ "Comment", "// Get current parent transform\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "Get current parent transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_GetCurrentParentTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms
		{
			USceneComponent* SceneComponentToCheck;
			FBPVRInteractibleBaseData BaseData;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponentToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponentToCheck;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_SceneComponentToCheck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_SceneComponentToCheck = { "SceneComponentToCheck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms, SceneComponentToCheck), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_SceneComponentToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_SceneComponentToCheck_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_BaseData = { "BaseData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms, BaseData), Z_Construct_UScriptStruct_FBPVRInteractibleBaseData, METADATA_PARAMS(nullptr, 0) }; // 373297400
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_SceneComponentToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_BaseData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
		{ "Comment", "// Get current relative transform (original transform we were at on grip for the current parent transform)\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "Get current relative transform (original transform we were at on grip for the current parent transform)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_GetCurrentRelativeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms
		{
			float ValueToSnap;
			float SnapIncrement;
			float SnapThreshold;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueToSnap;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapIncrement;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapThreshold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_ValueToSnap = { "ValueToSnap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms, ValueToSnap), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_SnapIncrement = { "SnapIncrement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms, SnapIncrement), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_SnapThreshold = { "SnapThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms, SnapThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_ValueToSnap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_SnapIncrement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_SnapThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
		{ "Comment", "// Returns a value that is snapped to the given settings, taking into account the threshold and increment\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "Returns a value that is snapped to the given settings, taking into account the threshold and increment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_GetThresholdSnappedValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms
		{
			USceneComponent* InteractibleComp;
			FBPActorGripInformation GripInformation;
			FBPVRInteractibleBaseData BaseDataToInit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractibleComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractibleComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseDataToInit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_InteractibleComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_InteractibleComp = { "InteractibleComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms, InteractibleComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_InteractibleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_InteractibleComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) }; // 2559775509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_BaseDataToInit = { "BaseDataToInit", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms, BaseDataToInit), Z_Construct_UScriptStruct_FBPVRInteractibleBaseData, METADATA_PARAMS(nullptr, 0) }; // 373297400
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_InteractibleComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_GripInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_BaseDataToInit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
		{ "Comment", "// Inits the calculated values of a VR Interactible Base Data Structure on a grip event\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ToolTip", "Inits the calculated values of a VR Interactible Base Data Structure on a grip event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_OnGripInit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRInteractibleFunctionLibrary);
	UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary_NoRegister()
	{
		return UVRInteractibleFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit, "Interactible_BeginPlayInit" }, // 2333064796
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis, "Interactible_GetAngleAroundAxis" }, // 3323124972
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta, "Interactible_GetAngleAroundAxisDelta" }, // 528185142
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform, "Interactible_GetCurrentParentTransform" }, // 857697581
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform, "Interactible_GetCurrentRelativeTransform" }, // 3656317358
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue, "Interactible_GetThresholdSnappedValue" }, // 3079109661
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit, "Interactible_OnGripInit" }, // 1293904668
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRInteractibleFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::ClassParams = {
		&UVRInteractibleFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UVRInteractibleFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRInteractibleFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRInteractibleFunctionLibrary.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRInteractibleFunctionLibrary>()
	{
		return UVRInteractibleFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRInteractibleFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EVRInteractibleAxis_StaticEnum, TEXT("EVRInteractibleAxis"), &Z_Registration_Info_UEnum_EVRInteractibleAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3085627722U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FBPVRInteractibleBaseData::StaticStruct, Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewStructOps, TEXT("BPVRInteractibleBaseData"), &Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPVRInteractibleBaseData), 373297400U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRInteractibleFunctionLibrary, UVRInteractibleFunctionLibrary::StaticClass, TEXT("UVRInteractibleFunctionLibrary"), &Z_Registration_Info_UClass_UVRInteractibleFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRInteractibleFunctionLibrary), 915845700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_251399997(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
