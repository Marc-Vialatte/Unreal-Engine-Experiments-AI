// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FALLEN_FallenCharacter_generated_h
#error "FallenCharacter.generated.h already included, missing '#pragma once' in FallenCharacter.h"
#endif
#define FALLEN_FallenCharacter_generated_h

#define RPG_Project_Source_Fallen_FallenCharacter_h_12_SPARSE_DATA
#define RPG_Project_Source_Fallen_FallenCharacter_h_12_RPC_WRAPPERS
#define RPG_Project_Source_Fallen_FallenCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_Project_Source_Fallen_FallenCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFallenCharacter(); \
	friend struct Z_Construct_UClass_AFallenCharacter_Statics; \
public: \
	DECLARE_CLASS(AFallenCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fallen"), NO_API) \
	DECLARE_SERIALIZER(AFallenCharacter)


#define RPG_Project_Source_Fallen_FallenCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFallenCharacter(); \
	friend struct Z_Construct_UClass_AFallenCharacter_Statics; \
public: \
	DECLARE_CLASS(AFallenCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fallen"), NO_API) \
	DECLARE_SERIALIZER(AFallenCharacter)


#define RPG_Project_Source_Fallen_FallenCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFallenCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFallenCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFallenCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFallenCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFallenCharacter(AFallenCharacter&&); \
	NO_API AFallenCharacter(const AFallenCharacter&); \
public:


#define RPG_Project_Source_Fallen_FallenCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFallenCharacter(AFallenCharacter&&); \
	NO_API AFallenCharacter(const AFallenCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFallenCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFallenCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFallenCharacter)


#define RPG_Project_Source_Fallen_FallenCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFallenCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFallenCharacter, FollowCamera); }


#define RPG_Project_Source_Fallen_FallenCharacter_h_9_PROLOG
#define RPG_Project_Source_Fallen_FallenCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Project_Source_Fallen_FallenCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	RPG_Project_Source_Fallen_FallenCharacter_h_12_SPARSE_DATA \
	RPG_Project_Source_Fallen_FallenCharacter_h_12_RPC_WRAPPERS \
	RPG_Project_Source_Fallen_FallenCharacter_h_12_INCLASS \
	RPG_Project_Source_Fallen_FallenCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Project_Source_Fallen_FallenCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Project_Source_Fallen_FallenCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	RPG_Project_Source_Fallen_FallenCharacter_h_12_SPARSE_DATA \
	RPG_Project_Source_Fallen_FallenCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_Project_Source_Fallen_FallenCharacter_h_12_INCLASS_NO_PURE_DECLS \
	RPG_Project_Source_Fallen_FallenCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FALLEN_API UClass* StaticClass<class AFallenCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Project_Source_Fallen_FallenCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
