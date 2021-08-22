// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cat_Tankogeddon/Cat_TankogeddonGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCat_TankogeddonGameModeBase() {}
// Cross Module References
	CAT_TANKOGEDDON_API UClass* Z_Construct_UClass_ACat_TankogeddonGameModeBase_NoRegister();
	CAT_TANKOGEDDON_API UClass* Z_Construct_UClass_ACat_TankogeddonGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Cat_Tankogeddon();
// End Cross Module References
	void ACat_TankogeddonGameModeBase::StaticRegisterNativesACat_TankogeddonGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACat_TankogeddonGameModeBase_NoRegister()
	{
		return ACat_TankogeddonGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACat_TankogeddonGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACat_TankogeddonGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Cat_Tankogeddon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACat_TankogeddonGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Cat_TankogeddonGameModeBase.h" },
		{ "ModuleRelativePath", "Cat_TankogeddonGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACat_TankogeddonGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACat_TankogeddonGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACat_TankogeddonGameModeBase_Statics::ClassParams = {
		&ACat_TankogeddonGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACat_TankogeddonGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACat_TankogeddonGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACat_TankogeddonGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACat_TankogeddonGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACat_TankogeddonGameModeBase, 2268111195);
	template<> CAT_TANKOGEDDON_API UClass* StaticClass<ACat_TankogeddonGameModeBase>()
	{
		return ACat_TankogeddonGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACat_TankogeddonGameModeBase(Z_Construct_UClass_ACat_TankogeddonGameModeBase, &ACat_TankogeddonGameModeBase::StaticClass, TEXT("/Script/Cat_Tankogeddon"), TEXT("ACat_TankogeddonGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACat_TankogeddonGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
