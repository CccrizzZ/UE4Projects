// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_W3_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define CPP_W3_Pickup_generated_h

#define CPP_W3_Source_CPP_W3_Pickup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyFirstFunc) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MyFirstFunc(Z_Param_Out_x); \
		P_NATIVE_END; \
	}


#define CPP_W3_Source_CPP_W3_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyFirstFunc) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MyFirstFunc(Z_Param_Out_x); \
		P_NATIVE_END; \
	}


#define CPP_W3_Source_CPP_W3_Pickup_h_12_EVENT_PARMS
#define CPP_W3_Source_CPP_W3_Pickup_h_12_CALLBACK_WRAPPERS
#define CPP_W3_Source_CPP_W3_Pickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CPP_W3"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define CPP_W3_Source_CPP_W3_Pickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CPP_W3"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define CPP_W3_Source_CPP_W3_Pickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define CPP_W3_Source_CPP_W3_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define CPP_W3_Source_CPP_W3_Pickup_h_12_PRIVATE_PROPERTY_OFFSET
#define CPP_W3_Source_CPP_W3_Pickup_h_9_PROLOG \
	CPP_W3_Source_CPP_W3_Pickup_h_12_EVENT_PARMS


#define CPP_W3_Source_CPP_W3_Pickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_W3_Source_CPP_W3_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	CPP_W3_Source_CPP_W3_Pickup_h_12_RPC_WRAPPERS \
	CPP_W3_Source_CPP_W3_Pickup_h_12_CALLBACK_WRAPPERS \
	CPP_W3_Source_CPP_W3_Pickup_h_12_INCLASS \
	CPP_W3_Source_CPP_W3_Pickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_W3_Source_CPP_W3_Pickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_W3_Source_CPP_W3_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	CPP_W3_Source_CPP_W3_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_W3_Source_CPP_W3_Pickup_h_12_CALLBACK_WRAPPERS \
	CPP_W3_Source_CPP_W3_Pickup_h_12_INCLASS_NO_PURE_DECLS \
	CPP_W3_Source_CPP_W3_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_W3_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_W3_Source_CPP_W3_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
