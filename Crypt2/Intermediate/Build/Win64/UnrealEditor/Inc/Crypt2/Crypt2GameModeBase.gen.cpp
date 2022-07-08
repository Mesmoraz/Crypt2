// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Crypt2/Crypt2GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrypt2GameModeBase() {}
// Cross Module References
	CRYPT2_API UClass* Z_Construct_UClass_ACrypt2GameModeBase_NoRegister();
	CRYPT2_API UClass* Z_Construct_UClass_ACrypt2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Crypt2();
// End Cross Module References
	void ACrypt2GameModeBase::StaticRegisterNativesACrypt2GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACrypt2GameModeBase);
	UClass* Z_Construct_UClass_ACrypt2GameModeBase_NoRegister()
	{
		return ACrypt2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACrypt2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrypt2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Crypt2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrypt2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Crypt2GameModeBase.h" },
		{ "ModuleRelativePath", "Crypt2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrypt2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrypt2GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACrypt2GameModeBase_Statics::ClassParams = {
		&ACrypt2GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACrypt2GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrypt2GameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACrypt2GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrypt2GameModeBase.OuterSingleton, Z_Construct_UClass_ACrypt2GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACrypt2GameModeBase.OuterSingleton;
	}
	template<> CRYPT2_API UClass* StaticClass<ACrypt2GameModeBase>()
	{
		return ACrypt2GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrypt2GameModeBase);
	struct Z_CompiledInDeferFile_FID_Crypt2_Source_Crypt2_Crypt2GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Crypt2_Source_Crypt2_Crypt2GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACrypt2GameModeBase, ACrypt2GameModeBase::StaticClass, TEXT("ACrypt2GameModeBase"), &Z_Registration_Info_UClass_ACrypt2GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrypt2GameModeBase), 4201975893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Crypt2_Source_Crypt2_Crypt2GameModeBase_h_1879813278(TEXT("/Script/Crypt2"),
		Z_CompiledInDeferFile_FID_Crypt2_Source_Crypt2_Crypt2GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Crypt2_Source_Crypt2_Crypt2GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
