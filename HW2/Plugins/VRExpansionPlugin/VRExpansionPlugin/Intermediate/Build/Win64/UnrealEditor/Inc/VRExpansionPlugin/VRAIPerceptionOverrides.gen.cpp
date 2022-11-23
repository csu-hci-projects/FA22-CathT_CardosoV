// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRAIPerceptionOverrides.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRAIPerceptionOverrides() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_VR_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_VR();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UAISense_Sight_VR_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAISightEventVR();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UAISense_Sight_VR();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
// End Cross Module References
	void UAISenseConfig_Sight_VR::StaticRegisterNativesUAISenseConfig_Sight_VR()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseConfig_Sight_VR);
	UClass* Z_Construct_UClass_UAISenseConfig_Sight_VR_NoRegister()
	{
		return UAISenseConfig_Sight_VR::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Implementation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngleDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngleDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoSuccessRangeFromLastSeenLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AI Sight VR config" },
		{ "IncludePath", "Misc/VRAIPerceptionOverrides.h" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_Implementation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_Implementation = { "Implementation", nullptr, (EPropertyFlags)0x0014000002014015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, Implementation), Z_Construct_UClass_UAISense_Sight_VR_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_Implementation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_Implementation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_SightRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Maximum sight distance to notice a target. */" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
		{ "ToolTip", "Maximum sight distance to notice a target." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, SightRadius), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_SightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_SightRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Maximum sight distance to see target that has been already seen. */" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
		{ "ToolTip", "Maximum sight distance to see target that has been already seen." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, LoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_LoseSightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_LoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime.\n\x09*\x09The value represents the angle measured in relation to the forward vector, not the whole range. */" },
		{ "DisplayName", "PeripheralVisionHalfAngleDegrees" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
		{ "ToolTip", "How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime.\n     The value represents the angle measured in relation to the forward vector, not the whole range." },
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PeripheralVisionAngleDegrees = { "PeripheralVisionAngleDegrees", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, PeripheralVisionAngleDegrees), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_DetectionByAffiliation_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_DetectionByAffiliation = { "DetectionByAffiliation", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_DetectionByAffiliation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_DetectionByAffiliation_MetaData)) }; // 1034587660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** If not an InvalidRange (which is the default), we will always be able to see the target that has already been seen if they are within this range of their last seen location. */" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
		{ "ToolTip", "If not an InvalidRange (which is the default), we will always be able to see the target that has already been seen if they are within this range of their last seen location." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation = { "AutoSuccessRangeFromLastSeenLocation", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, AutoSuccessRangeFromLastSeenLocation), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_Implementation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_SightRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_LoseSightRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PeripheralVisionAngleDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_DetectionByAffiliation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Sight_VR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::ClassParams = {
		&UAISenseConfig_Sight_VR::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Sight_VR()
	{
		if (!Z_Registration_Info_UClass_UAISenseConfig_Sight_VR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseConfig_Sight_VR.OuterSingleton, Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISenseConfig_Sight_VR.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UAISenseConfig_Sight_VR>()
	{
		return UAISenseConfig_Sight_VR::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Sight_VR);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AISightEventVR;
class UScriptStruct* FAISightEventVR::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AISightEventVR.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AISightEventVR.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISightEventVR, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("AISightEventVR"));
	}
	return Z_Registration_Info_UScriptStruct_AISightEventVR.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FAISightEventVR>()
{
	return FAISightEventVR::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAISightEventVR_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeenActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SeenActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Observer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISightEventVR_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISightEventVR>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_SeenActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_SeenActor = { "SeenActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISightEventVR, SeenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_SeenActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_SeenActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_Observer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISightEventVR, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_Observer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_Observer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISightEventVR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_SeenActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_Observer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISightEventVR_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"AISightEventVR",
		sizeof(FAISightEventVR),
		alignof(FAISightEventVR),
		Z_Construct_UScriptStruct_FAISightEventVR_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEventVR_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISightEventVR_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEventVR_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISightEventVR()
	{
		if (!Z_Registration_Info_UScriptStruct_AISightEventVR.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AISightEventVR.InnerSingleton, Z_Construct_UScriptStruct_FAISightEventVR_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AISightEventVR.InnerSingleton;
	}
	void UAISense_Sight_VR::StaticRegisterNativesUAISense_Sight_VR()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Sight_VR);
	UClass* Z_Construct_UClass_UAISense_Sight_VR_NoRegister()
	{
		return UAISense_Sight_VR::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Sight_VR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTracesPerTick_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTracesPerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinQueriesPerTimeSliceCheck_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinQueriesPerTimeSliceCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeSlicePerTick_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxTimeSlicePerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighImportanceQueryDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighImportanceQueryDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxQueryImportance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxQueryImportance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightLimitQueryImportance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightLimitQueryImportance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Sight_VR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Misc/VRAIPerceptionOverrides.h" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTracesPerTick_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTracesPerTick = { "MaxTracesPerTick", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight_VR, MaxTracesPerTick), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTracesPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTracesPerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MinQueriesPerTimeSliceCheck_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MinQueriesPerTimeSliceCheck = { "MinQueriesPerTimeSliceCheck", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight_VR, MinQueriesPerTimeSliceCheck), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MinQueriesPerTimeSliceCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MinQueriesPerTimeSliceCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTimeSlicePerTick_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTimeSlicePerTick = { "MaxTimeSlicePerTick", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight_VR, MaxTimeSlicePerTick), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTimeSlicePerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTimeSlicePerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_HighImportanceQueryDistanceThreshold_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_HighImportanceQueryDistanceThreshold = { "HighImportanceQueryDistanceThreshold", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight_VR, HighImportanceQueryDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_HighImportanceQueryDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_HighImportanceQueryDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxQueryImportance_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxQueryImportance = { "MaxQueryImportance", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight_VR, MaxQueryImportance), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxQueryImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxQueryImportance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_SightLimitQueryImportance_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_SightLimitQueryImportance = { "SightLimitQueryImportance", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight_VR, SightLimitQueryImportance), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_SightLimitQueryImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_SightLimitQueryImportance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Sight_VR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTracesPerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MinQueriesPerTimeSliceCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTimeSlicePerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_HighImportanceQueryDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxQueryImportance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_SightLimitQueryImportance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Sight_VR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Sight_VR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Sight_VR_Statics::ClassParams = {
		&UAISense_Sight_VR::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISense_Sight_VR_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Sight_VR()
	{
		if (!Z_Registration_Info_UClass_UAISense_Sight_VR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Sight_VR.OuterSingleton, Z_Construct_UClass_UAISense_Sight_VR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISense_Sight_VR.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UAISense_Sight_VR>()
	{
		return UAISense_Sight_VR::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Sight_VR);
	struct Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_Statics::ScriptStructInfo[] = {
		{ FAISightEventVR::StaticStruct, Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewStructOps, TEXT("AISightEventVR"), &Z_Registration_Info_UScriptStruct_AISightEventVR, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAISightEventVR), 3330269369U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseConfig_Sight_VR, UAISenseConfig_Sight_VR::StaticClass, TEXT("UAISenseConfig_Sight_VR"), &Z_Registration_Info_UClass_UAISenseConfig_Sight_VR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseConfig_Sight_VR), 1285229482U) },
		{ Z_Construct_UClass_UAISense_Sight_VR, UAISense_Sight_VR::StaticClass, TEXT("UAISense_Sight_VR"), &Z_Registration_Info_UClass_UAISense_Sight_VR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Sight_VR), 2600137221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_584176522(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
