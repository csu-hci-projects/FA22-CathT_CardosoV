// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UHandSocketComponent;
struct FTransform;
class UAnimSequence;
struct FPoseSnapshot;
class USkeletalMeshComponent;
#ifdef VREXPANSIONPLUGIN_HandSocketComponent_generated_h
#error "HandSocketComponent.generated.h already included, missing '#pragma once' in HandSocketComponent.h"
#endif
#define VREXPANSIONPLUGIN_HandSocketComponent_generated_h

#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPVRHandPoseBonePair>();

#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_SPARSE_DATA
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHandSocketComponentFromObject); \
	DECLARE_FUNCTION(execGetMeshRelativeTransform); \
	DECLARE_FUNCTION(execGetAnimationSequenceAsPoseSnapShot); \
	DECLARE_FUNCTION(execGetBlendedPoseSnapShot); \
	DECLARE_FUNCTION(execGetTargetAnimation);


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHandSocketComponentFromObject); \
	DECLARE_FUNCTION(execGetMeshRelativeTransform); \
	DECLARE_FUNCTION(execGetAnimationSequenceAsPoseSnapShot); \
	DECLARE_FUNCTION(execGetBlendedPoseSnapShot); \
	DECLARE_FUNCTION(execGetTargetAnimation);


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandSocketComponent(); \
	friend struct Z_Construct_UClass_UHandSocketComponent_Statics; \
public: \
	DECLARE_CLASS(UHandSocketComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHandSocketComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UHandSocketComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameplayTags=NETFIELD_REP_START, \
		bRepGameplayTags, \
		bReplicateMovement, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUHandSocketComponent(); \
	friend struct Z_Construct_UClass_UHandSocketComponent_Statics; \
public: \
	DECLARE_CLASS(UHandSocketComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHandSocketComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UHandSocketComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameplayTags=NETFIELD_REP_START, \
		bRepGameplayTags, \
		bReplicateMovement, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandSocketComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandSocketComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandSocketComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandSocketComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandSocketComponent(UHandSocketComponent&&); \
	NO_API UHandSocketComponent(const UHandSocketComponent&); \
public:


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandSocketComponent(UHandSocketComponent&&); \
	NO_API UHandSocketComponent(const UHandSocketComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandSocketComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandSocketComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandSocketComponent)


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_PRIVATE_PROPERTY_OFFSET
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_68_PROLOG
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_PRIVATE_PROPERTY_OFFSET \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_SPARSE_DATA \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_RPC_WRAPPERS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_INCLASS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_PRIVATE_PROPERTY_OFFSET \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_SPARSE_DATA \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_INCLASS_NO_PURE_DECLS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UHandSocketComponent>();

#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_SPARSE_DATA
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_RPC_WRAPPERS
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandSocketAnimInstance(); \
	friend struct Z_Construct_UClass_UHandSocketAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UHandSocketAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHandSocketAnimInstance)


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_INCLASS \
private: \
	static void StaticRegisterNativesUHandSocketAnimInstance(); \
	friend struct Z_Construct_UClass_UHandSocketAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UHandSocketAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHandSocketAnimInstance)


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandSocketAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandSocketAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandSocketAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandSocketAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandSocketAnimInstance(UHandSocketAnimInstance&&); \
	NO_API UHandSocketAnimInstance(const UHandSocketAnimInstance&); \
public:


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandSocketAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandSocketAnimInstance(UHandSocketAnimInstance&&); \
	NO_API UHandSocketAnimInstance(const UHandSocketAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandSocketAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandSocketAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandSocketAnimInstance)


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_PRIVATE_PROPERTY_OFFSET
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_402_PROLOG
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_PRIVATE_PROPERTY_OFFSET \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_SPARSE_DATA \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_RPC_WRAPPERS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_INCLASS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_PRIVATE_PROPERTY_OFFSET \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_SPARSE_DATA \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_INCLASS_NO_PURE_DECLS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_405_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UHandSocketAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h


#define FOREACH_ENUM_EVRAXIS(op) \
	op(EVRAxis::X) \
	op(EVRAxis::Y) \
	op(EVRAxis::Z) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
