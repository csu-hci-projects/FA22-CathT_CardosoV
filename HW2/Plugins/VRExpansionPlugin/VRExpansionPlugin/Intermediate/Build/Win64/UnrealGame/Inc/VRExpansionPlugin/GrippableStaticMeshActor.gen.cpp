// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableStaticMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableStaticMeshActor() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOptionalRepStaticMeshComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOptionalRepStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableStaticMeshActor_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovementVR();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepAttachmentWithWeld();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRClientAuthReplicationData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	void UOptionalRepStaticMeshComponent::StaticRegisterNativesUOptionalRepStaticMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptionalRepStaticMeshComponent);
	UClass* Z_Construct_UClass_UOptionalRepStaticMeshComponent_NoRegister()
	{
		return UOptionalRepStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* A component specifically for being able to turn off movement replication in the component at will\n* Has the upside of also being a blueprintable base since UE4 doesn't allow that with std ones\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Grippables/GrippableStaticMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A component specifically for being able to turn off movement replication in the component at will\nHas the upside of also being a blueprintable base since UE4 doesn't allow that with std ones" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "Component Replication" },
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
	};
#endif
	void Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UOptionalRepStaticMeshComponent*)Obj)->bReplicateMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptionalRepStaticMeshComponent), &Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::NewProp_bReplicateMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionalRepStaticMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::ClassParams = {
		&UOptionalRepStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptionalRepStaticMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UOptionalRepStaticMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptionalRepStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptionalRepStaticMeshComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UOptionalRepStaticMeshComponent>()
	{
		return UOptionalRepStaticMeshComponent::StaticClass();
	}

	void UOptionalRepStaticMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));

		const bool bIsValid = true
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOptionalRepStaticMeshComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionalRepStaticMeshComponent);
	DEFINE_FUNCTION(AGrippableStaticMeshActor::execIsCurrentlyClientAuthThrowing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurrentlyClientAuthThrowing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableStaticMeshActor::execServer_GetClientAuthReplication)
	{
		P_GET_STRUCT(FRepMovementVR,Z_Param_newMovement);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_GetClientAuthReplication_Validate(Z_Param_newMovement))
		{
			RPC_ValidateFailed(TEXT("Server_GetClientAuthReplication_Validate"));
			return;
		}
		P_THIS->Server_GetClientAuthReplication_Implementation(Z_Param_newMovement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableStaticMeshActor::execServer_EndClientAuthReplication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_EndClientAuthReplication_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_EndClientAuthReplication_Validate"));
			return;
		}
		P_THIS->Server_EndClientAuthReplication_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableStaticMeshActor::execCeaseReplicationBlocking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CeaseReplicationBlocking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableStaticMeshActor::execPollReplicationEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PollReplicationEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableStaticMeshActor::execRemoveFromClientReplicationBucket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveFromClientReplicationBucket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableStaticMeshActor::execAddToClientReplicationBucket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddToClientReplicationBucket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableStaticMeshActor::execSetGripPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripPriority(Z_Param_NewGripPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableStaticMeshActor::execSetDenyGripping)
	{
		P_GET_UBOOL(Z_Param_bDenyGripping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDenyGripping(Z_Param_bDenyGripping);
		P_NATIVE_END;
	}
	static FName NAME_AGrippableStaticMeshActor_Server_EndClientAuthReplication = FName(TEXT("Server_EndClientAuthReplication"));
	void AGrippableStaticMeshActor::Server_EndClientAuthReplication()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGrippableStaticMeshActor_Server_EndClientAuthReplication),NULL);
	}
	static FName NAME_AGrippableStaticMeshActor_Server_GetClientAuthReplication = FName(TEXT("Server_GetClientAuthReplication"));
	void AGrippableStaticMeshActor::Server_GetClientAuthReplication(FRepMovementVR const& newMovement)
	{
		GrippableStaticMeshActor_eventServer_GetClientAuthReplication_Parms Parms;
		Parms.newMovement=newMovement;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableStaticMeshActor_Server_GetClientAuthReplication),&Parms);
	}
	void AGrippableStaticMeshActor::StaticRegisterNativesAGrippableStaticMeshActor()
	{
		UClass* Class = AGrippableStaticMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToClientReplicationBucket", &AGrippableStaticMeshActor::execAddToClientReplicationBucket },
			{ "CeaseReplicationBlocking", &AGrippableStaticMeshActor::execCeaseReplicationBlocking },
			{ "IsCurrentlyClientAuthThrowing", &AGrippableStaticMeshActor::execIsCurrentlyClientAuthThrowing },
			{ "PollReplicationEvent", &AGrippableStaticMeshActor::execPollReplicationEvent },
			{ "RemoveFromClientReplicationBucket", &AGrippableStaticMeshActor::execRemoveFromClientReplicationBucket },
			{ "Server_EndClientAuthReplication", &AGrippableStaticMeshActor::execServer_EndClientAuthReplication },
			{ "Server_GetClientAuthReplication", &AGrippableStaticMeshActor::execServer_GetClientAuthReplication },
			{ "SetDenyGripping", &AGrippableStaticMeshActor::execSetDenyGripping },
			{ "SetGripPriority", &AGrippableStaticMeshActor::execSetGripPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics
	{
		struct GrippableStaticMeshActor_eventAddToClientReplicationBucket_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableStaticMeshActor_eventAddToClientReplicationBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableStaticMeshActor_eventAddToClientReplicationBucket_Parms), &Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Add this to client side physics replication (until coming to rest or timeout period is hit)\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Add this to client side physics replication (until coming to rest or timeout period is hit)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "AddToClientReplicationBucket", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::GrippableStaticMeshActor_eventAddToClientReplicationBucket_Parms), Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "CeaseReplicationBlocking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics
	{
		struct GrippableStaticMeshActor_eventIsCurrentlyClientAuthThrowing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableStaticMeshActor_eventIsCurrentlyClientAuthThrowing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableStaticMeshActor_eventIsCurrentlyClientAuthThrowing_Parms), &Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Returns if this object is currently client auth throwing\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Returns if this object is currently client auth throwing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "IsCurrentlyClientAuthThrowing", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::GrippableStaticMeshActor_eventIsCurrentlyClientAuthThrowing_Parms), Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics
	{
		struct GrippableStaticMeshActor_eventPollReplicationEvent_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableStaticMeshActor_eventPollReplicationEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableStaticMeshActor_eventPollReplicationEvent_Parms), &Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// From IVRReplicationInterface\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "From IVRReplicationInterface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "PollReplicationEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::GrippableStaticMeshActor_eventPollReplicationEvent_Parms), Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics
	{
		struct GrippableStaticMeshActor_eventRemoveFromClientReplicationBucket_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableStaticMeshActor_eventRemoveFromClientReplicationBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableStaticMeshActor_eventRemoveFromClientReplicationBucket_Parms), &Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Remove this from client side physics replication\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Remove this from client side physics replication" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "RemoveFromClientReplicationBucket", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::GrippableStaticMeshActor_eventRemoveFromClientReplicationBucket_Parms), Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Notify the server that we are no longer trying to run the throwing auth\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Notify the server that we are no longer trying to run the throwing auth" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "Server_EndClientAuthReplication", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newMovement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_newMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement = { "newMovement", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableStaticMeshActor_eventServer_GetClientAuthReplication_Parms, newMovement), Z_Construct_UScriptStruct_FRepMovementVR, METADATA_PARAMS(Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement_MetaData)) }; // 843695776
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Notify the server about a new movement rep\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Notify the server about a new movement rep" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "Server_GetClientAuthReplication", nullptr, nullptr, sizeof(GrippableStaticMeshActor_eventServer_GetClientAuthReplication_Parms), Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics
	{
		struct GrippableStaticMeshActor_eventSetDenyGripping_Parms
		{
			bool bDenyGripping;
		};
		static void NewProp_bDenyGripping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((GrippableStaticMeshActor_eventSetDenyGripping_Parms*)Obj)->bDenyGripping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableStaticMeshActor_eventSetDenyGripping_Parms), &Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::NewProp_bDenyGripping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Sets the Deny Gripping variable on the FBPInterfaceSettings struct\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Sets the Deny Gripping variable on the FBPInterfaceSettings struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "SetDenyGripping", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::GrippableStaticMeshActor_eventSetDenyGripping_Parms), Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics
	{
		struct GrippableStaticMeshActor_eventSetGripPriority_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableStaticMeshActor_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::NewProp_NewGripPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Sets the grip priority on the FBPInterfaceSettings struct\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Sets the grip priority on the FBPInterfaceSettings struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "SetGripPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::GrippableStaticMeshActor_eventSetGripPriority_Parms), Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrippableStaticMeshActor);
	UClass* Z_Construct_UClass_AGrippableStaticMeshActor_NoRegister()
	{
		return AGrippableStaticMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AGrippableStaticMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentWeldReplication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentWeldReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GripLogicScripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GripLogicScripts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateGripScripts_MetaData[];
#endif
		static void NewProp_bReplicateGripScripts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateGripScripts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientAuthReplicationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientAuthReplicationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowIgnoringAttachOnOwner_MetaData[];
#endif
		static void NewProp_bAllowIgnoringAttachOnOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowIgnoringAttachOnOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRepGripSettingsAndGameplayTags_MetaData[];
#endif
		static void NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepGripSettingsAndGameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRGripInterfaceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRGripInterfaceSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrippableStaticMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGrippableStaticMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket, "AddToClientReplicationBucket" }, // 3340738583
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking, "CeaseReplicationBlocking" }, // 433392856
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing, "IsCurrentlyClientAuthThrowing" }, // 317293648
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent, "PollReplicationEvent" }, // 726111349
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket, "RemoveFromClientReplicationBucket" }, // 2222668227
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication, "Server_EndClientAuthReplication" }, // 103126718
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication, "Server_GetClientAuthReplication" }, // 3294315558
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping, "SetDenyGripping" }, // 3095943866
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority, "SetGripPriority" }, // 1645555133
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n*\n*/" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Grippables/GrippableStaticMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_AttachmentWeldReplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_AttachmentWeldReplication = { "AttachmentWeldReplication", "OnRep_AttachmentReplication", (EPropertyFlags)0x0010008100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, AttachmentWeldReplication), Z_Construct_UScriptStruct_FRepAttachmentWithWeld, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_AttachmentWeldReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_AttachmentWeldReplication_MetaData)) }; // 1975842172
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts_Inner_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts_Inner = { "GripLogicScripts", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts = { "GripLogicScripts", nullptr, (EPropertyFlags)0x001400800000003d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, GripLogicScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bReplicateGripScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// If true then the grip script array will be considered for replication, if false then it will not\n// This is an optimization for when you have a lot of grip scripts in use, you can toggle this off in cases\n// where the object will never have a replicating script\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "If true then the grip script array will be considered for replication, if false then it will not\nThis is an optimization for when you have a lot of grip scripts in use, you can toggle this off in cases\nwhere the object will never have a replicating script" },
	};
#endif
	void Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bReplicateGripScripts_SetBit(void* Obj)
	{
		((AGrippableStaticMeshActor*)Obj)->bReplicateGripScripts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bReplicateGripScripts = { "bReplicateGripScripts", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrippableStaticMeshActor), &Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bReplicateGripScripts_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bReplicateGripScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bReplicateGripScripts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Called when a object is gripped" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnGripped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnGripped_MetaData)) }; // 2937824324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is dropped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Called when a object is dropped" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnDropped_MetaData)) }; // 3250299488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripAdded_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Called when an object we hold is secondary gripped" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripAdded = { "OnSecondaryGripAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, OnSecondaryGripAdded), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripAdded_MetaData)) }; // 2937824324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripRemoved_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary dropped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Called when an object we hold is secondary dropped" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripRemoved = { "OnSecondaryGripRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, OnSecondaryGripRemoved), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripRemoved_MetaData)) }; // 2937824324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_ClientAuthReplicationData_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "// ------------------------------------------------\n// Client Auth Throwing Data and functions \n// ------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Client Auth Throwing Data and functions" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_ClientAuthReplicationData = { "ClientAuthReplicationData", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, ClientAuthReplicationData), Z_Construct_UScriptStruct_FVRClientAuthReplicationData, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_ClientAuthReplicationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_ClientAuthReplicationData_MetaData)) }; // 2903334604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Tags that are set on this object */" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Tags that are set on this object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GameplayTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "// Skips the attachment replication if we are locally owned and our grip settings say that we are a client authed grip.\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ToolTip", "Skips the attachment replication if we are locally owned and our grip settings say that we are a client authed grip." },
	};
#endif
	void Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_SetBit(void* Obj)
	{
		((AGrippableStaticMeshActor*)Obj)->bAllowIgnoringAttachOnOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner = { "bAllowIgnoringAttachOnOwner", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrippableStaticMeshActor), &Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
#endif
	void Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj)
	{
		((AGrippableStaticMeshActor*)Obj)->bRepGripSettingsAndGameplayTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags = { "bRepGripSettingsAndGameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrippableStaticMeshActor), &Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_VRGripInterfaceSettings_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_VRGripInterfaceSettings = { "VRGripInterfaceSettings", nullptr, (EPropertyFlags)0x0010008000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, VRGripInterfaceSettings), Z_Construct_UScriptStruct_FBPInterfaceProperties, METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_VRGripInterfaceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_VRGripInterfaceSettings_MetaData)) }; // 4245312167
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrippableStaticMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_AttachmentWeldReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bReplicateGripScripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnGripped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnDropped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_ClientAuthReplicationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_VRGripInterfaceSettings,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(AGrippableStaticMeshActor, IVRGripInterface), false },  // 2844245502
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(AGrippableStaticMeshActor, IGameplayTagAssetInterface), false },  // 2897640864
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrippableStaticMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrippableStaticMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::ClassParams = {
		&AGrippableStaticMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGrippableStaticMeshActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrippableStaticMeshActor()
	{
		if (!Z_Registration_Info_UClass_AGrippableStaticMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrippableStaticMeshActor.OuterSingleton, Z_Construct_UClass_AGrippableStaticMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrippableStaticMeshActor.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AGrippableStaticMeshActor>()
	{
		return AGrippableStaticMeshActor::StaticClass();
	}

	void AGrippableStaticMeshActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AttachmentWeldReplication(TEXT("AttachmentWeldReplication"));
		static const FName Name_GripLogicScripts(TEXT("GripLogicScripts"));
		static const FName Name_bReplicateGripScripts(TEXT("bReplicateGripScripts"));
		static const FName Name_ClientAuthReplicationData(TEXT("ClientAuthReplicationData"));
		static const FName Name_GameplayTags(TEXT("GameplayTags"));
		static const FName Name_bAllowIgnoringAttachOnOwner(TEXT("bAllowIgnoringAttachOnOwner"));
		static const FName Name_bRepGripSettingsAndGameplayTags(TEXT("bRepGripSettingsAndGameplayTags"));
		static const FName Name_VRGripInterfaceSettings(TEXT("VRGripInterfaceSettings"));

		const bool bIsValid = true
			&& Name_AttachmentWeldReplication == ClassReps[(int32)ENetFields_Private::AttachmentWeldReplication].Property->GetFName()
			&& Name_GripLogicScripts == ClassReps[(int32)ENetFields_Private::GripLogicScripts].Property->GetFName()
			&& Name_bReplicateGripScripts == ClassReps[(int32)ENetFields_Private::bReplicateGripScripts].Property->GetFName()
			&& Name_ClientAuthReplicationData == ClassReps[(int32)ENetFields_Private::ClientAuthReplicationData].Property->GetFName()
			&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
			&& Name_bAllowIgnoringAttachOnOwner == ClassReps[(int32)ENetFields_Private::bAllowIgnoringAttachOnOwner].Property->GetFName()
			&& Name_bRepGripSettingsAndGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGripSettingsAndGameplayTags].Property->GetFName()
			&& Name_VRGripInterfaceSettings == ClassReps[(int32)ENetFields_Private::VRGripInterfaceSettings].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGrippableStaticMeshActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrippableStaticMeshActor);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptionalRepStaticMeshComponent, UOptionalRepStaticMeshComponent::StaticClass, TEXT("UOptionalRepStaticMeshComponent"), &Z_Registration_Info_UClass_UOptionalRepStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptionalRepStaticMeshComponent), 16992568U) },
		{ Z_Construct_UClass_AGrippableStaticMeshActor, AGrippableStaticMeshActor::StaticClass, TEXT("AGrippableStaticMeshActor"), &Z_Registration_Info_UClass_AGrippableStaticMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrippableStaticMeshActor), 1346759572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_4055328930(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
