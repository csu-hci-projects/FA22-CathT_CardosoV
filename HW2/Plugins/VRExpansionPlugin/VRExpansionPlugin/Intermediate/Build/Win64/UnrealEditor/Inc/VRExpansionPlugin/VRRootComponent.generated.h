// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_VRRootComponent_generated_h
#error "VRRootComponent.generated.h already included, missing '#pragma once' in VRRootComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRRootComponent_generated_h

#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_SPARSE_DATA
#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTrackingPaused); \
	DECLARE_FUNCTION(execSetCapsuleHalfHeightVR); \
	DECLARE_FUNCTION(execSetCapsuleSizeVR);


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTrackingPaused); \
	DECLARE_FUNCTION(execSetCapsuleHalfHeightVR); \
	DECLARE_FUNCTION(execSetCapsuleSizeVR);


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRRootComponent(); \
	friend struct Z_Construct_UClass_UVRRootComponent_Statics; \
public: \
	DECLARE_CLASS(UVRRootComponent, UCapsuleComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRRootComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRRootComponent*>(this); }


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUVRRootComponent(); \
	friend struct Z_Construct_UClass_UVRRootComponent_Statics; \
public: \
	DECLARE_CLASS(UVRRootComponent, UCapsuleComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRRootComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRRootComponent*>(this); }


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRRootComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRRootComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRRootComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRRootComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRRootComponent(UVRRootComponent&&); \
	NO_API UVRRootComponent(const UVRRootComponent&); \
public:


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRRootComponent(UVRRootComponent&&); \
	NO_API UVRRootComponent(const UVRRootComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRRootComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRRootComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRRootComponent)


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_PROLOG
#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_SPARSE_DATA \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_RPC_WRAPPERS \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_INCLASS \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_SPARSE_DATA \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRRootComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
