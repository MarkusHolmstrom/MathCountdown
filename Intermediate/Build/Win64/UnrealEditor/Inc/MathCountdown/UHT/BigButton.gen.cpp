// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MathCountdown/UI/Buttons/BigButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBigButton() {}
// Cross Module References
	MATHCOUNTDOWN_API UClass* Z_Construct_UClass_UBigButton();
	MATHCOUNTDOWN_API UClass* Z_Construct_UClass_UBigButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UPackage* Z_Construct_UPackage__Script_MathCountdown();
// End Cross Module References
	void UBigButton::StaticRegisterNativesUBigButton()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBigButton);
	UClass* Z_Construct_UClass_UBigButton_NoRegister()
	{
		return UBigButton::StaticClass();
	}
	struct Z_Construct_UClass_UBigButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBigButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UButton,
		(UObject* (*)())Z_Construct_UPackage__Script_MathCountdown,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBigButton_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBigButton_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Buttons/BigButton.h" },
		{ "ModuleRelativePath", "UI/Buttons/BigButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBigButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBigButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBigButton_Statics::ClassParams = {
		&UBigButton::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBigButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UBigButton_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBigButton()
	{
		if (!Z_Registration_Info_UClass_UBigButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBigButton.OuterSingleton, Z_Construct_UClass_UBigButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBigButton.OuterSingleton;
	}
	template<> MATHCOUNTDOWN_API UClass* StaticClass<UBigButton>()
	{
		return UBigButton::StaticClass();
	}
	UBigButton::UBigButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBigButton);
	UBigButton::~UBigButton() {}
	struct Z_CompiledInDeferFile_FID_Users_Marku_OneDrive_Dokument_Unreal_Projects_MathCountdown_Source_MathCountdown_UI_Buttons_BigButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marku_OneDrive_Dokument_Unreal_Projects_MathCountdown_Source_MathCountdown_UI_Buttons_BigButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBigButton, UBigButton::StaticClass, TEXT("UBigButton"), &Z_Registration_Info_UClass_UBigButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBigButton), 1315155883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marku_OneDrive_Dokument_Unreal_Projects_MathCountdown_Source_MathCountdown_UI_Buttons_BigButton_h_4133777351(TEXT("/Script/MathCountdown"),
		Z_CompiledInDeferFile_FID_Users_Marku_OneDrive_Dokument_Unreal_Projects_MathCountdown_Source_MathCountdown_UI_Buttons_BigButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marku_OneDrive_Dokument_Unreal_Projects_MathCountdown_Source_MathCountdown_UI_Buttons_BigButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
