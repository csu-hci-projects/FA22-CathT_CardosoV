// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VREPhysicalAnimationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREPhysicalAnimationComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWeldedBoneDriverData();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalAnimationComponent();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeldedBoneDriverData;
class UScriptStruct* FWeldedBoneDriverData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeldedBoneDriverData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeldedBoneDriverData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeldedBoneDriverData, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("WeldedBoneDriverData"));
	}
	return Z_Registration_Info_UScriptStruct_WeldedBoneDriverData.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FWeldedBoneDriverData>()
{
	return FWeldedBoneDriverData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeldedBoneDriverData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"WeldedBoneDriverData",
		sizeof(FWeldedBoneDriverData),
		alignof(FWeldedBoneDriverData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeldedBoneDriverData()
	{
		if (!Z_Registration_Info_UScriptStruct_WeldedBoneDriverData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeldedBoneDriverData.InnerSingleton, Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeldedBoneDriverData.InnerSingleton;
	}
	DEFINE_FUNCTION(UVREPhysicalAnimationComponent::execIsWeldedBoneDriverPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWeldedBoneDriverPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicalAnimationComponent::execSetWeldedBoneDriverPaused)
	{
		P_GET_UBOOL(Z_Param_bPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeldedBoneDriverPaused(Z_Param_bPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicalAnimationComponent::execRefreshWeldedBoneDriver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshWeldedBoneDriver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicalAnimationComponent::execSetupWeldedBoneDriver)
	{
		P_GET_TARRAY(FName,Z_Param_BaseBoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupWeldedBoneDriver(Z_Param_BaseBoneNames);
		P_NATIVE_END;
	}
	void UVREPhysicalAnimationComponent::StaticRegisterNativesUVREPhysicalAnimationComponent()
	{
		UClass* Class = UVREPhysicalAnimationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsWeldedBoneDriverPaused", &UVREPhysicalAnimationComponent::execIsWeldedBoneDriverPaused },
			{ "RefreshWeldedBoneDriver", &UVREPhysicalAnimationComponent::execRefreshWeldedBoneDriver },
			{ "SetupWeldedBoneDriver", &UVREPhysicalAnimationComponent::execSetupWeldedBoneDriver },
			{ "SetWeldedBoneDriverPaused", &UVREPhysicalAnimationComponent::execSetWeldedBoneDriverPaused },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics
	{
		struct VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms
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
	void Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms), &Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicalAnimationComponent, nullptr, "IsWeldedBoneDriverPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms), Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "// Refreshes the welded bone driver, use this in cases where the body may have changed (such as welding to another body or switching physics)\n" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "Refreshes the welded bone driver, use this in cases where the body may have changed (such as welding to another body or switching physics)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicalAnimationComponent, nullptr, "RefreshWeldedBoneDriver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics
	{
		struct VREPhysicalAnimationComponent_eventSetupWeldedBoneDriver_Parms
		{
			TArray<FName> BaseBoneNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BaseBoneNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseBoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::NewProp_BaseBoneNames_Inner = { "BaseBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::NewProp_BaseBoneNames = { "BaseBoneNames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREPhysicalAnimationComponent_eventSetupWeldedBoneDriver_Parms, BaseBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::NewProp_BaseBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::NewProp_BaseBoneNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "// Call to setup the welded body driver, initializes all mappings and caches shape contexts\n// Requires that SetSkeletalMesh be called first\n" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "Call to setup the welded body driver, initializes all mappings and caches shape contexts\nRequires that SetSkeletalMesh be called first" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicalAnimationComponent, nullptr, "SetupWeldedBoneDriver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::VREPhysicalAnimationComponent_eventSetupWeldedBoneDriver_Parms), Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics
	{
		struct VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms
		{
			bool bPaused;
		};
		static void NewProp_bPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::NewProp_bPaused_SetBit(void* Obj)
	{
		((VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms*)Obj)->bPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms), &Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::NewProp_bPaused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "// Sets the welded bone driver to be paused, you can also stop the component from ticking but that will also stop any physical animations going on\n" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "Sets the welded bone driver to be paused, you can also stop the component from ticking but that will also stop any physical animations going on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicalAnimationComponent, nullptr, "SetWeldedBoneDriverPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms), Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVREPhysicalAnimationComponent);
	UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent_NoRegister()
	{
		return UVREPhysicalAnimationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[];
#endif
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetPhysicsSleepSensitivity_MetaData[];
#endif
		static void NewProp_bAutoSetPhysicsSleepSensitivity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetPhysicsSleepSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SleepThresholdMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepThresholdMultiplier;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BaseWeldedBoneDriverNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseWeldedBoneDriverNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseWeldedBoneDriverNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneDriverMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneDriverMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneDriverMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicalAnimationComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused, "IsWeldedBoneDriverPaused" }, // 2230797964
		{ &Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver, "RefreshWeldedBoneDriver" }, // 4250678364
		{ &Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver, "SetupWeldedBoneDriver" }, // 1835518180
		{ &Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused, "SetWeldedBoneDriverPaused" }, // 3631320005
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "IncludePath", "Misc/VREPhysicalAnimationComponent.h" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused_MetaData[] = {
		{ "Category", "WeldedBoneDriver" },
		{ "Comment", "/** Is the welded bone driver paused */" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "Is the welded bone driver paused" },
	};
#endif
	void Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((UVREPhysicalAnimationComponent*)Obj)->bIsPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVREPhysicalAnimationComponent), &Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity_MetaData[] = {
		{ "Category", "WeldedBoneDriver" },
		{ "Comment", "/** IF true then we will auto adjust the sleep settings of the body so that it won't rest during welded bone driving */" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "IF true then we will auto adjust the sleep settings of the body so that it won't rest during welded bone driving" },
	};
#endif
	void Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity_SetBit(void* Obj)
	{
		((UVREPhysicalAnimationComponent*)Obj)->bAutoSetPhysicsSleepSensitivity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity = { "bAutoSetPhysicsSleepSensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVREPhysicalAnimationComponent), &Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_SleepThresholdMultiplier_MetaData[] = {
		{ "Category", "WeldedBoneDriver" },
		{ "Comment", "/** The threshold multiplier to set on the body */" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "The threshold multiplier to set on the body" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_SleepThresholdMultiplier = { "SleepThresholdMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREPhysicalAnimationComponent, SleepThresholdMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_SleepThresholdMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_SleepThresholdMultiplier_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames_Inner = { "BaseWeldedBoneDriverNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames_MetaData[] = {
		{ "Category", "WeldedBoneDriver" },
		{ "Comment", "/** The Base bone to use as the bone driver root */" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "The Base bone to use as the bone driver root" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames = { "BaseWeldedBoneDriverNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREPhysicalAnimationComponent, BaseWeldedBoneDriverNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap_Inner = { "BoneDriverMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWeldedBoneDriverData, METADATA_PARAMS(nullptr, 0) }; // 2281336702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap = { "BoneDriverMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREPhysicalAnimationComponent, BoneDriverMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap_MetaData)) }; // 2281336702
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_SleepThresholdMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREPhysicalAnimationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::ClassParams = {
		&UVREPhysicalAnimationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent()
	{
		if (!Z_Registration_Info_UClass_UVREPhysicalAnimationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVREPhysicalAnimationComponent.OuterSingleton, Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVREPhysicalAnimationComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVREPhysicalAnimationComponent>()
	{
		return UVREPhysicalAnimationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREPhysicalAnimationComponent);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_Statics::ScriptStructInfo[] = {
		{ FWeldedBoneDriverData::StaticStruct, Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::NewStructOps, TEXT("WeldedBoneDriverData"), &Z_Registration_Info_UScriptStruct_WeldedBoneDriverData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeldedBoneDriverData), 2281336702U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVREPhysicalAnimationComponent, UVREPhysicalAnimationComponent::StaticClass, TEXT("UVREPhysicalAnimationComponent"), &Z_Registration_Info_UClass_UVREPhysicalAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVREPhysicalAnimationComponent), 2748466874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_3425094071(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
