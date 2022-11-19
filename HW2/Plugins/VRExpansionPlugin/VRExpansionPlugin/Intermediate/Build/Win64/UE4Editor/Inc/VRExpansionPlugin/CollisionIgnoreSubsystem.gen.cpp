// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/CollisionIgnoreSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionIgnoreSubsystem() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionIgnorePairArray();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionIgnorePair();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionPrimPair();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UCollisionIgnoreSubsystem_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UCollisionIgnoreSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
// End Cross Module References
class UScriptStruct* FCollisionIgnorePairArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionIgnorePairArray, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("CollisionIgnorePairArray"), sizeof(FCollisionIgnorePairArray), Get_Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FCollisionIgnorePairArray>()
{
	return FCollisionIgnorePairArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionIgnorePairArray(FCollisionIgnorePairArray::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("CollisionIgnorePairArray"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFCollisionIgnorePairArray
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFCollisionIgnorePairArray()
	{
		UScriptStruct::DeferCppStructOps<FCollisionIgnorePairArray>(FName(TEXT("CollisionIgnorePairArray")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFCollisionIgnorePairArray;
	struct Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PairArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PairArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PairArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionIgnorePairArray>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray_Inner = { "PairArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCollisionIgnorePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray = { "PairArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionIgnorePairArray, PairArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"CollisionIgnorePairArray",
		sizeof(FCollisionIgnorePairArray),
		alignof(FCollisionIgnorePairArray),
		Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionIgnorePairArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionIgnorePairArray"), sizeof(FCollisionIgnorePairArray), Get_Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Hash() { return 4283828329U; }
class UScriptStruct* FCollisionIgnorePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FCollisionIgnorePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionIgnorePair, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("CollisionIgnorePair"), sizeof(FCollisionIgnorePair), Get_Z_Construct_UScriptStruct_FCollisionIgnorePair_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FCollisionIgnorePair>()
{
	return FCollisionIgnorePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionIgnorePair(FCollisionIgnorePair::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("CollisionIgnorePair"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFCollisionIgnorePair
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFCollisionIgnorePair()
	{
		UScriptStruct::DeferCppStructOps<FCollisionIgnorePair>(FName(TEXT("CollisionIgnorePair")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFCollisionIgnorePair;
	struct Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName1_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName2_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionIgnorePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName1 = { "BoneName1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionIgnorePair, BoneName1), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName2 = { "BoneName2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionIgnorePair, BoneName2), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName2,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"CollisionIgnorePair",
		sizeof(FCollisionIgnorePair),
		alignof(FCollisionIgnorePair),
		Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionIgnorePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionIgnorePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionIgnorePair"), sizeof(FCollisionIgnorePair), Get_Z_Construct_UScriptStruct_FCollisionIgnorePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionIgnorePair_Hash() { return 860565233U; }
class UScriptStruct* FCollisionPrimPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FCollisionPrimPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionPrimPair, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("CollisionPrimPair"), sizeof(FCollisionPrimPair), Get_Z_Construct_UScriptStruct_FCollisionPrimPair_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FCollisionPrimPair>()
{
	return FCollisionPrimPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionPrimPair(FCollisionPrimPair::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("CollisionPrimPair"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFCollisionPrimPair
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFCollisionPrimPair()
	{
		UScriptStruct::DeferCppStructOps<FCollisionPrimPair>(FName(TEXT("CollisionPrimPair")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFCollisionPrimPair;
	struct Z_Construct_UScriptStruct_FCollisionPrimPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prim1_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Prim1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prim2_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Prim2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionPrimPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim1 = { "Prim1", nullptr, (EPropertyFlags)0x0014000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionPrimPair, Prim1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim2 = { "Prim2", nullptr, (EPropertyFlags)0x0014000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionPrimPair, Prim2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim2,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"CollisionPrimPair",
		sizeof(FCollisionPrimPair),
		alignof(FCollisionPrimPair),
		Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionPrimPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionPrimPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionPrimPair"), sizeof(FCollisionPrimPair), Get_Z_Construct_UScriptStruct_FCollisionPrimPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionPrimPair_Hash() { return 1140202946U; }
	DEFINE_FUNCTION(UCollisionIgnoreSubsystem::execCheckActiveFilters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckActiveFilters();
		P_NATIVE_END;
	}
	void UCollisionIgnoreSubsystem::StaticRegisterNativesUCollisionIgnoreSubsystem()
	{
		UClass* Class = UCollisionIgnoreSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckActiveFilters", &UCollisionIgnoreSubsystem::execCheckActiveFilters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollisionIgnoreSubsystem, nullptr, "CheckActiveFilters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCollisionIgnoreSubsystem_NoRegister()
	{
		return UCollisionIgnoreSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionTrackedPairs_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionTrackedPairs_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTrackedPairs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CollisionTrackedPairs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedPairs_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedPairs_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedPairs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RemovedPairs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters, "CheckActiveFilters" }, // 3857364054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/CollisionIgnoreSubsystem.h" },
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_ValueProp = { "CollisionTrackedPairs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCollisionIgnorePairArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_Key_KeyProp = { "CollisionTrackedPairs_Key", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCollisionPrimPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs = { "CollisionTrackedPairs", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionIgnoreSubsystem, CollisionTrackedPairs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_ValueProp = { "RemovedPairs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCollisionIgnorePairArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_Key_KeyProp = { "RemovedPairs_Key", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCollisionPrimPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_MetaData[] = {
		{ "Comment", "//TArray<FCollisionIgnorePair> CollisionTrackedPairs;\n" },
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
		{ "ToolTip", "TArray<FCollisionIgnorePair> CollisionTrackedPairs;" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs = { "RemovedPairs", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionIgnoreSubsystem, RemovedPairs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionIgnoreSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::ClassParams = {
		&UCollisionIgnoreSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollisionIgnoreSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollisionIgnoreSubsystem, 2755753839);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UCollisionIgnoreSubsystem>()
	{
		return UCollisionIgnoreSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollisionIgnoreSubsystem(Z_Construct_UClass_UCollisionIgnoreSubsystem, &UCollisionIgnoreSubsystem::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UCollisionIgnoreSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionIgnoreSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
