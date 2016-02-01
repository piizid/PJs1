// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef S1_s1PlayerController_generated_h
#error "s1PlayerController.generated.h already included, missing '#pragma once' in s1PlayerController.h"
#endif
#define S1_s1PlayerController_generated_h

#define s1_Source_s1_s1PlayerController_h_9_RPC_WRAPPERS
#define s1_Source_s1_s1PlayerController_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define s1_Source_s1_s1PlayerController_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAs1PlayerController(); \
	friend S1_API class UClass* Z_Construct_UClass_As1PlayerController(); \
	public: \
	DECLARE_CLASS(As1PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, s1, NO_API) \
	DECLARE_SERIALIZER(As1PlayerController) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<As1PlayerController*>(this); }


#define s1_Source_s1_s1PlayerController_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAs1PlayerController(); \
	friend S1_API class UClass* Z_Construct_UClass_As1PlayerController(); \
	public: \
	DECLARE_CLASS(As1PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, s1, NO_API) \
	DECLARE_SERIALIZER(As1PlayerController) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<As1PlayerController*>(this); }


#define s1_Source_s1_s1PlayerController_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API As1PlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(As1PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, As1PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(As1PlayerController); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API As1PlayerController(const As1PlayerController& InCopy); \
public:


#define s1_Source_s1_s1PlayerController_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API As1PlayerController(const As1PlayerController& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, As1PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(As1PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(As1PlayerController)


#define s1_Source_s1_s1PlayerController_h_6_PROLOG
#define s1_Source_s1_s1PlayerController_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	s1_Source_s1_s1PlayerController_h_9_RPC_WRAPPERS \
	s1_Source_s1_s1PlayerController_h_9_INCLASS \
	s1_Source_s1_s1PlayerController_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define s1_Source_s1_s1PlayerController_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	s1_Source_s1_s1PlayerController_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	s1_Source_s1_s1PlayerController_h_9_INCLASS_NO_PURE_DECLS \
	s1_Source_s1_s1PlayerController_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID s1_Source_s1_s1PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
