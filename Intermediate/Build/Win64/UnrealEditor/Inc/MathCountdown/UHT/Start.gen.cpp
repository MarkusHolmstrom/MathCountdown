// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MathCountdown/UI/Start.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStart() {}
// Cross Module References
	MATHCOUNTDOWN_API UClass* Z_Construct_UClass_UStart();
	MATHCOUNTDOWN_API UClass* Z_Construct_UClass_UStart_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel();
	UPackage* Z_Construct_UPackage__Script_MathCountdown();
// End Cross Module References
	void UStart::StaticRegisterNativesUStart()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStart);
	UClass* Z_Construct_UClass_UStart_NoRegister()
	{
		return UStart::StaticClass();
	}
	struct Z_Construct_UClass_UStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCanvasPanel,
		(UObject* (*)())Z_Construct_UPackage__Script_MathCountdown,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStart_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStart_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Start.h" },
		{ "ModuleRelativePath", "UI/Start.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStart>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStart_Statics::ClassParams = {
		&UStart::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStart_Statics::Class_MetaDataParams), Z_Construct_UClass_UStart_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UStart()
	{
		if (!Z_Registration_Info_UClass_UStart.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStart.OuterSingleton, Z_Construct_UClass_UStart_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStart.OuterSingleton;
	}
	template<> MATHCOUNTDOWN_API UClass* StaticClass<UStart>()
	{
		return UStart::StaticClass();
	}
	UStart::UStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStart);
	UStart::~UStart() {}
	struct Z_CompiledInDeferFile_FID_Users_Marku_OneDrive_Dokument_Unreal_Projects_MathCountdown_Source_MathCountdown_UI_Start_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marku_OneDrive_Dokument_Unreal_Projects_MathCountdown_Source_MathCountdown_UI_Start_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStart, UStart::StaticClass, TEXT("UStart"), &Z_Registration_Info_UClass_UStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStart), 3684202832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marku_OneDrive_Dokument_Unreal_Projects_MathCountdown_Source_MathCountdown_UI_Start_h_4017403551(TEXT("/Script/MathCountdown"),
		Z_CompiledInDeferFile_FID_Users_Marku_OneDrive_Dokument_Unreal_Projects_MathCountdown_Source_MathCountdown_UI_Start_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marku_OneDrive_Dokument_Unreal_Projects_MathCountdown_Source_MathCountdown_UI_Start_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
