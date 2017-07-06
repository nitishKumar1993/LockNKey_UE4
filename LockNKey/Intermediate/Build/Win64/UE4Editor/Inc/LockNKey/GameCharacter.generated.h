// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOCKNKEY_GameCharacter_generated_h
#error "GameCharacter.generated.h already included, missing '#pragma once' in GameCharacter.h"
#endif
#define LOCKNKEY_GameCharacter_generated_h

#define LockNKey_Source_LockNKey_Players_GameCharacter_h_12_RPC_WRAPPERS
#define LockNKey_Source_LockNKey_Players_GameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define LockNKey_Source_LockNKey_Players_GameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameCharacter(); \
	friend LOCKNKEY_API class UClass* Z_Construct_UClass_AGameCharacter(); \
public: \
	DECLARE_CLASS(AGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LockNKey"), NO_API) \
	DECLARE_SERIALIZER(AGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define LockNKey_Source_LockNKey_Players_GameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameCharacter(); \
	friend LOCKNKEY_API class UClass* Z_Construct_UClass_AGameCharacter(); \
public: \
	DECLARE_CLASS(AGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LockNKey"), NO_API) \
	DECLARE_SERIALIZER(AGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define LockNKey_Source_LockNKey_Players_GameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCharacter(AGameCharacter&&); \
	NO_API AGameCharacter(const AGameCharacter&); \
public:


#define LockNKey_Source_LockNKey_Players_GameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCharacter(AGameCharacter&&); \
	NO_API AGameCharacter(const AGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameCharacter)


#define LockNKey_Source_LockNKey_Players_GameCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define LockNKey_Source_LockNKey_Players_GameCharacter_h_9_PROLOG
#define LockNKey_Source_LockNKey_Players_GameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LockNKey_Source_LockNKey_Players_GameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	LockNKey_Source_LockNKey_Players_GameCharacter_h_12_RPC_WRAPPERS \
	LockNKey_Source_LockNKey_Players_GameCharacter_h_12_INCLASS \
	LockNKey_Source_LockNKey_Players_GameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LockNKey_Source_LockNKey_Players_GameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LockNKey_Source_LockNKey_Players_GameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	LockNKey_Source_LockNKey_Players_GameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LockNKey_Source_LockNKey_Players_GameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	LockNKey_Source_LockNKey_Players_GameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LockNKey_Source_LockNKey_Players_GameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
