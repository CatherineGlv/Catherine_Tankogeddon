// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAT_TANKOGEDDON_TankPawn_generated_h
#error "TankPawn.generated.h already included, missing '#pragma once' in TankPawn.h"
#endif
#define CAT_TANKOGEDDON_TankPawn_generated_h

#define Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_SPARSE_DATA
#define Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupCannon); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execRotateRight); \
	DECLARE_FUNCTION(execMoveForward);


#define Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupCannon); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execRotateRight); \
	DECLARE_FUNCTION(execMoveForward);


#define Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend struct Z_Construct_UClass_ATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATankPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cat_Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn)


#define Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_INCLASS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend struct Z_Construct_UClass_ATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATankPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cat_Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn)


#define Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public:


#define Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankPawn)


#define Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BodyMesh() { return STRUCT_OFFSET(ATankPawn, BodyMesh); } \
	FORCEINLINE static uint32 __PPO__TurretMesh() { return STRUCT_OFFSET(ATankPawn, TurretMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ATankPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ATankPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__CannonSetupPoint() { return STRUCT_OFFSET(ATankPawn, CannonSetupPoint); } \
	FORCEINLINE static uint32 __PPO__CannonClass() { return STRUCT_OFFSET(ATankPawn, CannonClass); } \
	FORCEINLINE static uint32 __PPO__MoveSpeed() { return STRUCT_OFFSET(ATankPawn, MoveSpeed); } \
	FORCEINLINE static uint32 __PPO__RotationSpeed() { return STRUCT_OFFSET(ATankPawn, RotationSpeed); } \
	FORCEINLINE static uint32 __PPO__RotationSmootheness() { return STRUCT_OFFSET(ATankPawn, RotationSmootheness); } \
	FORCEINLINE static uint32 __PPO__TurretRotationSmootheness() { return STRUCT_OFFSET(ATankPawn, TurretRotationSmootheness); } \
	FORCEINLINE static uint32 __PPO__TankController() { return STRUCT_OFFSET(ATankPawn, TankController); } \
	FORCEINLINE static uint32 __PPO__Cannon() { return STRUCT_OFFSET(ATankPawn, Cannon); }


#define Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_17_PROLOG
#define Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_PRIVATE_PROPERTY_OFFSET \
	Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_SPARSE_DATA \
	Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_RPC_WRAPPERS \
	Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_INCLASS \
	Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_PRIVATE_PROPERTY_OFFSET \
	Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_SPARSE_DATA \
	Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_INCLASS_NO_PURE_DECLS \
	Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAT_TANKOGEDDON_API UClass* StaticClass<class ATankPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cat_Tankogeddon_Source_Cat_Tankogeddon_TankPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
