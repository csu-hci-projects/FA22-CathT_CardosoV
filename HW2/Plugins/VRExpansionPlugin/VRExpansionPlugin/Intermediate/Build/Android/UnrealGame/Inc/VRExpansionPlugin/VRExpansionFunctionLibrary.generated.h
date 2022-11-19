// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayTagContainer;
class USplineComponent;
class USplineMeshComponent;
struct FBPEuroLowPassFilter;
struct FBPLowPassPeakFilter;
class UObject;
class USceneComponent;
struct FBPGripPair;
class UGripMotionControllerComponent;
struct FVector_NetQuantize100;
struct FVector_NetQuantize10;
struct FVector_NetQuantize;
struct FTransform_NetQuantize;
struct FBPActorGripInformation;
class AActor;
enum class EBPHMDDeviceType : uint8;
enum class EBPHMDWornState : uint8;
enum class EControllerHand : uint8;
class UPrimitiveComponent;
class UGameViewportClient;
#ifdef VREXPANSIONPLUGIN_VRExpansionFunctionLibrary_generated_h
#error "VRExpansionFunctionLibrary.generated.h already included, missing '#pragma once' in VRExpansionFunctionLibrary.h"
#endif
#define VREXPANSIONPLUGIN_VRExpansionFunctionLibrary_generated_h

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_SPARSE_DATA
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFirstGameplayTagWithExactParent); \
	DECLARE_FUNCTION(execMatchesAnyTagsWithDirectParentTag); \
	DECLARE_FUNCTION(execSmoothUpdateLaserSpline); \
	DECLARE_FUNCTION(execRunEuroSmoothingFilter); \
	DECLARE_FUNCTION(execResetEuroSmoothingFilter); \
	DECLARE_FUNCTION(execGetPeak_PeakLowPassFilter); \
	DECLARE_FUNCTION(execUpdatePeakLowPassFilter); \
	DECLARE_FUNCTION(execResetPeakLowPassFilter); \
	DECLARE_FUNCTION(execAddSceneComponentByClass); \
	DECLARE_FUNCTION(execConv_GripPairToGripID); \
	DECLARE_FUNCTION(execConv_GripPairToMotionController); \
	DECLARE_FUNCTION(execMakeVector_NetQuantize100); \
	DECLARE_FUNCTION(execConv_FVectorToFVectorNetQuantize100); \
	DECLARE_FUNCTION(execMakeVector_NetQuantize10); \
	DECLARE_FUNCTION(execConv_FVectorToFVectorNetQuantize10); \
	DECLARE_FUNCTION(execMakeVector_NetQuantize); \
	DECLARE_FUNCTION(execConv_FVectorToFVectorNetQuantize); \
	DECLARE_FUNCTION(execConv_TransformToTransformNetQuantize); \
	DECLARE_FUNCTION(execBreakTransform_NetQuantize); \
	DECLARE_FUNCTION(execMakeTransform_NetQuantize); \
	DECLARE_FUNCTION(execEqualEqual_FBPActorGripInformation); \
	DECLARE_FUNCTION(execGetGripSlotInRangeByTypeName_Component); \
	DECLARE_FUNCTION(execGetGripSlotInRangeByTypeName); \
	DECLARE_FUNCTION(execGetIsActorMovable); \
	DECLARE_FUNCTION(execLowPassFilter_Exponential); \
	DECLARE_FUNCTION(execLowPassFilter_RollingAverage); \
	DECLARE_FUNCTION(execNonAuthorityMinimumAreaRectangle); \
	DECLARE_FUNCTION(execIsInVREditorPreview); \
	DECLARE_FUNCTION(execIsInVREditorPreviewOrGame); \
	DECLARE_FUNCTION(execGetHMDType); \
	DECLARE_FUNCTION(execGetIsHMDWorn); \
	DECLARE_FUNCTION(execGetIsHMDConnected); \
	DECLARE_FUNCTION(execBPQuat_FindBetween); \
	DECLARE_FUNCTION(execRotateAroundPivot); \
	DECLARE_FUNCTION(execGetHMDPureYaw); \
	DECLARE_FUNCTION(execGetHandFromMotionSourceName); \
	DECLARE_FUNCTION(execIsComponentIgnoringCollision); \
	DECLARE_FUNCTION(execRemoveActorCollisionIgnore); \
	DECLARE_FUNCTION(execRemoveObjectCollisionIgnore); \
	DECLARE_FUNCTION(execSetActorsIgnoreAllCollision); \
	DECLARE_FUNCTION(execSetObjectsIgnoreCollision); \
	DECLARE_FUNCTION(execGetGameViewportClient);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFirstGameplayTagWithExactParent); \
	DECLARE_FUNCTION(execMatchesAnyTagsWithDirectParentTag); \
	DECLARE_FUNCTION(execSmoothUpdateLaserSpline); \
	DECLARE_FUNCTION(execRunEuroSmoothingFilter); \
	DECLARE_FUNCTION(execResetEuroSmoothingFilter); \
	DECLARE_FUNCTION(execGetPeak_PeakLowPassFilter); \
	DECLARE_FUNCTION(execUpdatePeakLowPassFilter); \
	DECLARE_FUNCTION(execResetPeakLowPassFilter); \
	DECLARE_FUNCTION(execAddSceneComponentByClass); \
	DECLARE_FUNCTION(execConv_GripPairToGripID); \
	DECLARE_FUNCTION(execConv_GripPairToMotionController); \
	DECLARE_FUNCTION(execMakeVector_NetQuantize100); \
	DECLARE_FUNCTION(execConv_FVectorToFVectorNetQuantize100); \
	DECLARE_FUNCTION(execMakeVector_NetQuantize10); \
	DECLARE_FUNCTION(execConv_FVectorToFVectorNetQuantize10); \
	DECLARE_FUNCTION(execMakeVector_NetQuantize); \
	DECLARE_FUNCTION(execConv_FVectorToFVectorNetQuantize); \
	DECLARE_FUNCTION(execConv_TransformToTransformNetQuantize); \
	DECLARE_FUNCTION(execBreakTransform_NetQuantize); \
	DECLARE_FUNCTION(execMakeTransform_NetQuantize); \
	DECLARE_FUNCTION(execEqualEqual_FBPActorGripInformation); \
	DECLARE_FUNCTION(execGetGripSlotInRangeByTypeName_Component); \
	DECLARE_FUNCTION(execGetGripSlotInRangeByTypeName); \
	DECLARE_FUNCTION(execGetIsActorMovable); \
	DECLARE_FUNCTION(execLowPassFilter_Exponential); \
	DECLARE_FUNCTION(execLowPassFilter_RollingAverage); \
	DECLARE_FUNCTION(execNonAuthorityMinimumAreaRectangle); \
	DECLARE_FUNCTION(execIsInVREditorPreview); \
	DECLARE_FUNCTION(execIsInVREditorPreviewOrGame); \
	DECLARE_FUNCTION(execGetHMDType); \
	DECLARE_FUNCTION(execGetIsHMDWorn); \
	DECLARE_FUNCTION(execGetIsHMDConnected); \
	DECLARE_FUNCTION(execBPQuat_FindBetween); \
	DECLARE_FUNCTION(execRotateAroundPivot); \
	DECLARE_FUNCTION(execGetHMDPureYaw); \
	DECLARE_FUNCTION(execGetHandFromMotionSourceName); \
	DECLARE_FUNCTION(execIsComponentIgnoringCollision); \
	DECLARE_FUNCTION(execRemoveActorCollisionIgnore); \
	DECLARE_FUNCTION(execRemoveObjectCollisionIgnore); \
	DECLARE_FUNCTION(execSetActorsIgnoreAllCollision); \
	DECLARE_FUNCTION(execSetObjectsIgnoreCollision); \
	DECLARE_FUNCTION(execGetGameViewportClient);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRExpansionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVRExpansionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRExpansionFunctionLibrary)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUVRExpansionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVRExpansionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRExpansionFunctionLibrary)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRExpansionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRExpansionFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRExpansionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRExpansionFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRExpansionFunctionLibrary(UVRExpansionFunctionLibrary&&); \
	NO_API UVRExpansionFunctionLibrary(const UVRExpansionFunctionLibrary&); \
public:


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRExpansionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRExpansionFunctionLibrary(UVRExpansionFunctionLibrary&&); \
	NO_API UVRExpansionFunctionLibrary(const UVRExpansionFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRExpansionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRExpansionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRExpansionFunctionLibrary)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_32_PROLOG
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_RPC_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_INCLASS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_INCLASS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRExpansionFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h


#define FOREACH_ENUM_EBPHMDWORNSTATE(op) \
	op(EBPHMDWornState::Unknown) \
	op(EBPHMDWornState::Worn) \
	op(EBPHMDWornState::NotWorn) 

enum class EBPHMDWornState : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPHMDWornState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
