// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef VREXPANSIONPLUGIN_BucketUpdateSubsystem_generated_h
#error "BucketUpdateSubsystem.generated.h already included, missing '#pragma once' in BucketUpdateSubsystem.h"
#endif
#define VREXPANSIONPLUGIN_BucketUpdateSubsystem_generated_h

#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_16_DELEGATE \
static inline void FDynamicBucketUpdateTickSignature_DelegateWrapper(const FScriptDelegate& DynamicBucketUpdateTickSignature) \
{ \
	DynamicBucketUpdateTickSignature.ProcessDelegate<UObject>(NULL); \
}


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FUpdateBucketDrop>();

#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateBucket_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FUpdateBucket>();

#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FUpdateBucketContainer>();

#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_SPARSE_DATA
#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsObjectFunctionInBucket); \
	DECLARE_FUNCTION(execRemoveObjectFromAllBuckets); \
	DECLARE_FUNCTION(execRemoveObjectFromBucketByEvent); \
	DECLARE_FUNCTION(execRemoveObjectFromBucketByFunctionName); \
	DECLARE_FUNCTION(execK2_AddObjectEventToBucket); \
	DECLARE_FUNCTION(execK2_AddObjectToBucket);


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsObjectFunctionInBucket); \
	DECLARE_FUNCTION(execRemoveObjectFromAllBuckets); \
	DECLARE_FUNCTION(execRemoveObjectFromBucketByEvent); \
	DECLARE_FUNCTION(execRemoveObjectFromBucketByFunctionName); \
	DECLARE_FUNCTION(execK2_AddObjectEventToBucket); \
	DECLARE_FUNCTION(execK2_AddObjectToBucket);


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBucketUpdateSubsystem(); \
	friend struct Z_Construct_UClass_UBucketUpdateSubsystem_Statics; \
public: \
	DECLARE_CLASS(UBucketUpdateSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBucketUpdateSubsystem)


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUBucketUpdateSubsystem(); \
	friend struct Z_Construct_UClass_UBucketUpdateSubsystem_Statics; \
public: \
	DECLARE_CLASS(UBucketUpdateSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBucketUpdateSubsystem)


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBucketUpdateSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBucketUpdateSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBucketUpdateSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBucketUpdateSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBucketUpdateSubsystem(UBucketUpdateSubsystem&&); \
	NO_API UBucketUpdateSubsystem(const UBucketUpdateSubsystem&); \
public:


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBucketUpdateSubsystem(UBucketUpdateSubsystem&&); \
	NO_API UBucketUpdateSubsystem(const UBucketUpdateSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBucketUpdateSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBucketUpdateSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBucketUpdateSubsystem)


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_98_PROLOG
#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_SPARSE_DATA \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_RPC_WRAPPERS \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_INCLASS \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_SPARSE_DATA \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_INCLASS_NO_PURE_DECLS \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UBucketUpdateSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
