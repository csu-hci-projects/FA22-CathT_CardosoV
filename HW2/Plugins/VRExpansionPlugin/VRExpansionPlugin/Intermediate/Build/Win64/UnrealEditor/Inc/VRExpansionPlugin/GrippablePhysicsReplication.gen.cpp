// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippablePhysicsReplication.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippablePhysicsReplication() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovementVR();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovement();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRClientAuthReplicationData();
// End Cross Module References

static_assert(std::is_polymorphic<FRepMovementVR>() == std::is_polymorphic<FRepMovement>(), "USTRUCT FRepMovementVR cannot be polymorphic unless super FRepMovement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepMovementVR;
class UScriptStruct* FRepMovementVR::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepMovementVR.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepMovementVR.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepMovementVR, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("RepMovementVR"));
	}
	return Z_Registration_Info_UScriptStruct_RepMovementVR.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FRepMovementVR>()
{
	return FRepMovementVR::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRepMovementVR_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovementVR_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//#endif\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
		{ "ToolTip", "#endif" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRepMovementVR_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepMovementVR>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepMovementVR_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		Z_Construct_UScriptStruct_FRepMovement,
		&NewStructOps,
		"RepMovementVR",
		sizeof(FRepMovementVR),
		alignof(FRepMovementVR),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovementVR_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovementVR_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRepMovementVR()
	{
		if (!Z_Registration_Info_UScriptStruct_RepMovementVR.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepMovementVR.InnerSingleton, Z_Construct_UScriptStruct_FRepMovementVR_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RepMovementVR.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData;
class UScriptStruct* FVRClientAuthReplicationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRClientAuthReplicationData, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRClientAuthReplicationData"));
	}
	return Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRClientAuthReplicationData>()
{
	return FVRClientAuthReplicationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseClientAuthThrowing_MetaData[];
#endif
		static void NewProp_bUseClientAuthThrowing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseClientAuthThrowing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRClientAuthReplicationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing_MetaData[] = {
		{ "Category", "VRReplication" },
		{ "Comment", "// If True and we are using a client auth grip type then we will replicate our throws on release\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
		{ "ToolTip", "If True and we are using a client auth grip type then we will replicate our throws on release" },
	};
#endif
	void Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing_SetBit(void* Obj)
	{
		((FVRClientAuthReplicationData*)Obj)->bUseClientAuthThrowing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing = { "bUseClientAuthThrowing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVRClientAuthReplicationData), &Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_UpdateRate_MetaData[] = {
		{ "Category", "VRReplication" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "// Rate that we will be sending throwing events to the server, not replicated, only serialized\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
		{ "ToolTip", "Rate that we will be sending throwing events to the server, not replicated, only serialized" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010000080000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRClientAuthReplicationData, UpdateRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_UpdateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_UpdateRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_UpdateRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRClientAuthReplicationData",
		sizeof(FVRClientAuthReplicationData),
		alignof(FVRClientAuthReplicationData),
		Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRClientAuthReplicationData()
	{
		if (!Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData.InnerSingleton, Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippablePhysicsReplication_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippablePhysicsReplication_h_Statics::ScriptStructInfo[] = {
		{ FRepMovementVR::StaticStruct, Z_Construct_UScriptStruct_FRepMovementVR_Statics::NewStructOps, TEXT("RepMovementVR"), &Z_Registration_Info_UScriptStruct_RepMovementVR, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepMovementVR), 843695776U) },
		{ FVRClientAuthReplicationData::StaticStruct, Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewStructOps, TEXT("VRClientAuthReplicationData"), &Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRClientAuthReplicationData), 2903334604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippablePhysicsReplication_h_2567958433(TEXT("/Script/VRExpansionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippablePhysicsReplication_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippablePhysicsReplication_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
