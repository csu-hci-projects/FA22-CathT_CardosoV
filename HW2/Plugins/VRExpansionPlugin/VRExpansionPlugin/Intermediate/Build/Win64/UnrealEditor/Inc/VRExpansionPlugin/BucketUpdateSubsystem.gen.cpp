// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/BucketUpdateSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBucketUpdateSubsystem() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucketDrop();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucket();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucketContainer();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UBucketUpdateSubsystem_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UBucketUpdateSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "DynamicBucketUpdateTickSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateBucketDrop;
class UScriptStruct* FUpdateBucketDrop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateBucketDrop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateBucketDrop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateBucketDrop, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("UpdateBucketDrop"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateBucketDrop.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FUpdateBucketDrop>()
{
	return FUpdateBucketDrop::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateBucketDrop>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"UpdateBucketDrop",
		sizeof(FUpdateBucketDrop),
		alignof(FUpdateBucketDrop),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucketDrop()
	{
		if (!Z_Registration_Info_UScriptStruct_UpdateBucketDrop.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateBucketDrop.InnerSingleton, Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UpdateBucketDrop.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateBucket;
class UScriptStruct* FUpdateBucket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateBucket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateBucket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateBucket, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("UpdateBucket"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateBucket.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FUpdateBucket>()
{
	return FUpdateBucket::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUpdateBucket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateBucket_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateBucket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateBucket>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateBucket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"UpdateBucket",
		sizeof(FUpdateBucket),
		alignof(FUpdateBucket),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateBucket_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateBucket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucket()
	{
		if (!Z_Registration_Info_UScriptStruct_UpdateBucket.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateBucket.InnerSingleton, Z_Construct_UScriptStruct_FUpdateBucket_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UpdateBucket.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateBucketContainer;
class UScriptStruct* FUpdateBucketContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateBucketContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateBucketContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateBucketContainer, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("UpdateBucketContainer"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateBucketContainer.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FUpdateBucketContainer>()
{
	return FUpdateBucketContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateBucketContainer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"UpdateBucketContainer",
		sizeof(FUpdateBucketContainer),
		alignof(FUpdateBucketContainer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucketContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_UpdateBucketContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateBucketContainer.InnerSingleton, Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UpdateBucketContainer.InnerSingleton;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execIsObjectFunctionInBucket)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsObjectFunctionInBucket(Z_Param_InObject,Z_Param_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execRemoveObjectFromAllBuckets)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveObjectFromAllBuckets(Z_Param_InObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execRemoveObjectFromBucketByEvent)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveObjectFromBucketByEvent(FDynamicBucketUpdateTickSignature(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execRemoveObjectFromBucketByFunctionName)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveObjectFromBucketByFunctionName(Z_Param_InObject,Z_Param_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execK2_AddObjectEventToBucket)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_PROPERTY(FIntProperty,Z_Param_UpdateHTZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_AddObjectEventToBucket(FDynamicBucketUpdateTickSignature(Z_Param_Delegate),Z_Param_UpdateHTZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execK2_AddObjectToBucket)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_UpdateHTZ);
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_AddObjectToBucket(Z_Param_UpdateHTZ,Z_Param_InObject,Z_Param_FunctionName);
		P_NATIVE_END;
	}
	void UBucketUpdateSubsystem::StaticRegisterNativesUBucketUpdateSubsystem()
	{
		UClass* Class = UBucketUpdateSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActive", &UBucketUpdateSubsystem::execIsActive },
			{ "IsObjectFunctionInBucket", &UBucketUpdateSubsystem::execIsObjectFunctionInBucket },
			{ "K2_AddObjectEventToBucket", &UBucketUpdateSubsystem::execK2_AddObjectEventToBucket },
			{ "K2_AddObjectToBucket", &UBucketUpdateSubsystem::execK2_AddObjectToBucket },
			{ "RemoveObjectFromAllBuckets", &UBucketUpdateSubsystem::execRemoveObjectFromAllBuckets },
			{ "RemoveObjectFromBucketByEvent", &UBucketUpdateSubsystem::execRemoveObjectFromBucketByEvent },
			{ "RemoveObjectFromBucketByFunctionName", &UBucketUpdateSubsystem::execRemoveObjectFromBucketByFunctionName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics
	{
		struct BucketUpdateSubsystem_eventIsActive_Parms
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
	void Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventIsActive_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "Comment", "// Returns if an update bucket contains an entry with the passed in function\n" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ToolTip", "Returns if an update bucket contains an entry with the passed in function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "IsActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::BucketUpdateSubsystem_eventIsActive_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics
	{
		struct BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms
		{
			UObject* InObject;
			FName FunctionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "Comment", "// Returns if an update bucket contains an entry with the passed in function\n" },
		{ "CPP_Default_FunctionName", "None" },
		{ "CPP_Default_InObject", "None" },
		{ "DisplayName", "Is Object In Bucket" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "IsObjectInBucket" },
		{ "ToolTip", "Returns if an update bucket contains an entry with the passed in function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "IsObjectFunctionInBucket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics
	{
		struct BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms
		{
			FScriptDelegate Delegate;
			int32 UpdateHTZ;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateHTZ;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_Delegate_MetaData[] = {
		{ "DisplayName", "Event" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms, Delegate), Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_Delegate_MetaData)) }; // 1355243574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_UpdateHTZ = { "UpdateHTZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms, UpdateHTZ), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_UpdateHTZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "CPP_Default_UpdateHTZ", "100" },
		{ "DisplayName", "Add Object to Bucket Updates by Event" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "AddBucketObjectEvent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "K2_AddObjectEventToBucket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics
	{
		struct BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms
		{
			int32 UpdateHTZ;
			UObject* InObject;
			FName FunctionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateHTZ;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_UpdateHTZ = { "UpdateHTZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms, UpdateHTZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_UpdateHTZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "Comment", "// Adds an object to an update bucket with the set HTZ, calls the passed in UFUNCTION name\n// If one of the bucket contains an entry with the function already then the existing one is removed and the new one is added\n" },
		{ "CPP_Default_FunctionName", "None" },
		{ "CPP_Default_InObject", "None" },
		{ "CPP_Default_UpdateHTZ", "100" },
		{ "DisplayName", "Add Object to Bucket Updates" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "AddObjectToBucket" },
		{ "ToolTip", "Adds an object to an update bucket with the set HTZ, calls the passed in UFUNCTION name\nIf one of the bucket contains an entry with the function already then the existing one is removed and the new one is added" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "K2_AddObjectToBucket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics
	{
		struct BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms
		{
			UObject* InObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "Comment", "// Removes ALL entries in the bucket update system with the specified object\n" },
		{ "CPP_Default_InObject", "None" },
		{ "DisplayName", "Remove Object From All Bucket Updates" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "RemoveObjectFromAllBuckets" },
		{ "ToolTip", "Removes ALL entries in the bucket update system with the specified object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "RemoveObjectFromAllBuckets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics
	{
		struct BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms
		{
			FScriptDelegate Delegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_Delegate_MetaData[] = {
		{ "DisplayName", "Event" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms, Delegate), Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_Delegate_MetaData)) }; // 1355243574
	void Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "Comment", "// Remove the entry in the bucket updates with the passed in UFUNCTION name\n" },
		{ "DisplayName", "Remove Object From Bucket Updates By Event" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "RemoveObjectFromBucketByEvent" },
		{ "ToolTip", "Remove the entry in the bucket updates with the passed in UFUNCTION name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "RemoveObjectFromBucketByEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics
	{
		struct BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms
		{
			UObject* InObject;
			FName FunctionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "Comment", "// Remove the entry in the bucket updates with the passed in UFUNCTION name\n" },
		{ "CPP_Default_FunctionName", "None" },
		{ "CPP_Default_InObject", "None" },
		{ "DisplayName", "Remove Object From Bucket Updates By Function" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "RemoveObjectFromBucketByFunction" },
		{ "ToolTip", "Remove the entry in the bucket updates with the passed in UFUNCTION name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "RemoveObjectFromBucketByFunctionName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBucketUpdateSubsystem);
	UClass* Z_Construct_UClass_UBucketUpdateSubsystem_NoRegister()
	{
		return UBucketUpdateSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UBucketUpdateSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBucketUpdateSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBucketUpdateSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive, "IsActive" }, // 1215613676
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket, "IsObjectFunctionInBucket" }, // 3125463988
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket, "K2_AddObjectEventToBucket" }, // 912852551
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket, "K2_AddObjectToBucket" }, // 4138145802
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets, "RemoveObjectFromAllBuckets" }, // 973964438
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent, "RemoveObjectFromBucketByEvent" }, // 2851566165
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName, "RemoveObjectFromBucketByFunctionName" }, // 836057951
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBucketUpdateSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/BucketUpdateSubsystem.h" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBucketUpdateSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBucketUpdateSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBucketUpdateSubsystem_Statics::ClassParams = {
		&UBucketUpdateSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBucketUpdateSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBucketUpdateSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBucketUpdateSubsystem()
	{
		if (!Z_Registration_Info_UClass_UBucketUpdateSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBucketUpdateSubsystem.OuterSingleton, Z_Construct_UClass_UBucketUpdateSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBucketUpdateSubsystem.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UBucketUpdateSubsystem>()
	{
		return UBucketUpdateSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBucketUpdateSubsystem);
	struct Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FUpdateBucketDrop::StaticStruct, Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::NewStructOps, TEXT("UpdateBucketDrop"), &Z_Registration_Info_UScriptStruct_UpdateBucketDrop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateBucketDrop), 2562880279U) },
		{ FUpdateBucket::StaticStruct, Z_Construct_UScriptStruct_FUpdateBucket_Statics::NewStructOps, TEXT("UpdateBucket"), &Z_Registration_Info_UScriptStruct_UpdateBucket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateBucket), 764194967U) },
		{ FUpdateBucketContainer::StaticStruct, Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::NewStructOps, TEXT("UpdateBucketContainer"), &Z_Registration_Info_UScriptStruct_UpdateBucketContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateBucketContainer), 2370836984U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBucketUpdateSubsystem, UBucketUpdateSubsystem::StaticClass, TEXT("UBucketUpdateSubsystem"), &Z_Registration_Info_UClass_UBucketUpdateSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBucketUpdateSubsystem), 3793781764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_2346013155(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
