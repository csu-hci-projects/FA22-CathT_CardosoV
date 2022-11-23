// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/ReplicatedVRCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedVRCameraComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UReplicatedVRCameraComponent::execServer_SendCameraTransform)
	{
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SendCameraTransform_Validate(Z_Param_NewTransform))
		{
			RPC_ValidateFailed(TEXT("Server_SendCameraTransform_Validate"));
			return;
		}
		P_THIS->Server_SendCameraTransform_Implementation(Z_Param_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReplicatedVRCameraComponent::execOnRep_ReplicatedCameraTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedCameraTransform();
		P_NATIVE_END;
	}
	static FName NAME_UReplicatedVRCameraComponent_Server_SendCameraTransform = FName(TEXT("Server_SendCameraTransform"));
	void UReplicatedVRCameraComponent::Server_SendCameraTransform(FBPVRComponentPosRep NewTransform)
	{
		ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_UReplicatedVRCameraComponent_Server_SendCameraTransform),&Parms);
	}
	void UReplicatedVRCameraComponent::StaticRegisterNativesUReplicatedVRCameraComponent()
	{
		UClass* Class = UReplicatedVRCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ReplicatedCameraTransform", &UReplicatedVRCameraComponent::execOnRep_ReplicatedCameraTransform },
			{ "Server_SendCameraTransform", &UReplicatedVRCameraComponent::execServer_SendCameraTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedVRCameraComponent, nullptr, "OnRep_ReplicatedCameraTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(nullptr, 0) }; // 3453632770
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// I'm sending it unreliable because it is being resent pretty often\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "I'm sending it unreliable because it is being resent pretty often" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedVRCameraComponent, nullptr, "Server_SendCameraTransform", nullptr, nullptr, sizeof(ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms), Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicatedVRCameraComponent);
	UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister()
	{
		return UReplicatedVRCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReplicatedVRCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInCharacterMovement_MetaData[];
#endif
		static void NewProp_bUpdateInCharacterMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInCharacterMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachChar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttachChar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSampleVelocityInWorldSpace_MetaData[];
#endif
		static void NewProp_bSampleVelocityInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSampleVelocityInWorldSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetPositionDuringTick_MetaData[];
#endif
		static void NewProp_bSetPositionDuringTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetPositionDuringTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOffsetByHMD_MetaData[];
#endif
		static void NewProp_bOffsetByHMD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOffsetByHMD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetLockToHmd_MetaData[];
#endif
		static void NewProp_bAutoSetLockToHmd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetLockToHmd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedCameraTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedCameraTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothReplicatedMotion_MetaData[];
#endif
		static void NewProp_bSmoothReplicatedMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothReplicatedMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetUpdateRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NetUpdateRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform, "OnRep_ReplicatedCameraTransform" }, // 1435017080
		{ &Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform, "Server_SendCameraTransform" }, // 2609429352
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionLibrary" },
		{ "Comment", "/**\n* An overridden camera component that replicates its location in multiplayer\n*/" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "ReplicatedVRCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An overridden camera component that replicates its location in multiplayer" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "// If true, this component will not perform logic in its tick, it will instead allow the character movement component to move it (unless the CMC is inactive, then it will go back to self managing)\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "If true, this component will not perform logic in its tick, it will instead allow the character movement component to move it (unless the CMC is inactive, then it will go back to self managing)" },
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bUpdateInCharacterMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement = { "bUpdateInCharacterMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar = { "AttachChar", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, AttachChar), Z_Construct_UClass_AVRBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace_MetaData[] = {
		{ "Category", "ReplicatedCamera|ComponentVelocity" },
		{ "Comment", "// If we should sample the velocity in world or local space\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "If we should sample the velocity in world or local space" },
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bSampleVelocityInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace = { "bSampleVelocityInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_MetaData[] = {
		{ "Category", "ReplicatedCamera" },
		{ "Comment", "// For non view target positional updates\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "For non view target positional updates" },
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bSetPositionDuringTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick = { "bSetPositionDuringTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD_MetaData[] = {
		{ "Category", "ReplicatedCamera" },
		{ "Comment", "// If true will subtract the HMD's location from the position, useful for if the actors base is set to the HMD location always (simple character).\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "If true will subtract the HMD's location from the position, useful for if the actors base is set to the HMD location always (simple character)." },
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bOffsetByHMD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD = { "bOffsetByHMD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_MetaData[] = {
		{ "Category", "ReplicatedCamera" },
		{ "Comment", "/** Sets lock to hmd automatically based on if the camera is currently locally controlled or not */" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "Sets lock to hmd automatically based on if the camera is currently locally controlled or not" },
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bAutoSetLockToHmd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd = { "bAutoSetLockToHmd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform = { "ReplicatedCameraTransform", "OnRep_ReplicatedCameraTransform", (EPropertyFlags)0x0010000100010021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, ReplicatedCameraTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform_MetaData)) }; // 3453632770
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking" },
		{ "Comment", "// Whether to smooth (lerp) between ticks for the replicated motion, DOES NOTHING if update rate is larger than FPS!\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "Whether to smooth (lerp) between ticks for the replicated motion, DOES NOTHING if update rate is larger than FPS!" },
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bSmoothReplicatedMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion = { "bSmoothReplicatedMotion", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking" },
		{ "Comment", "// Rate to update the position to the server, 100htz is default (same as replication rate, should also hit every tick).\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "Rate to update the position to the server, 100htz is default (same as replication rate, should also hit every tick)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate = { "NetUpdateRate", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, NetUpdateRate), METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicatedVRCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::ClassParams = {
		&UReplicatedVRCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicatedVRCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UReplicatedVRCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicatedVRCameraComponent.OuterSingleton, Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicatedVRCameraComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UReplicatedVRCameraComponent>()
	{
		return UReplicatedVRCameraComponent::StaticClass();
	}

	void UReplicatedVRCameraComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedCameraTransform(TEXT("ReplicatedCameraTransform"));
		static const FName Name_bSmoothReplicatedMotion(TEXT("bSmoothReplicatedMotion"));
		static const FName Name_NetUpdateRate(TEXT("NetUpdateRate"));

		const bool bIsValid = true
			&& Name_ReplicatedCameraTransform == ClassReps[(int32)ENetFields_Private::ReplicatedCameraTransform].Property->GetFName()
			&& Name_bSmoothReplicatedMotion == ClassReps[(int32)ENetFields_Private::bSmoothReplicatedMotion].Property->GetFName()
			&& Name_NetUpdateRate == ClassReps[(int32)ENetFields_Private::NetUpdateRate].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UReplicatedVRCameraComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicatedVRCameraComponent);
	struct Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplicatedVRCameraComponent, UReplicatedVRCameraComponent::StaticClass, TEXT("UReplicatedVRCameraComponent"), &Z_Registration_Info_UClass_UReplicatedVRCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicatedVRCameraComponent), 1091403483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_4107180429(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
