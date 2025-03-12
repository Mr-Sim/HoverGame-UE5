// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/HoverComposite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverComposite() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UHoverComposite();
MYPROJECT_API UClass* Z_Construct_UClass_UHoverComposite_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class UHoverComposite
void UHoverComposite::StaticRegisterNativesUHoverComposite()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoverComposite);
UClass* Z_Construct_UClass_UHoverComposite_NoRegister()
{
	return UHoverComposite::StaticClass();
}
struct Z_Construct_UClass_UHoverComposite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoverComposite.h" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoverComposite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoverComposite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverComposite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoverComposite_Statics::ClassParams = {
	&UHoverComposite::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverComposite_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoverComposite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoverComposite()
{
	if (!Z_Registration_Info_UClass_UHoverComposite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoverComposite.OuterSingleton, Z_Construct_UClass_UHoverComposite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoverComposite.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<UHoverComposite>()
{
	return UHoverComposite::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoverComposite);
UHoverComposite::~UHoverComposite() {}
// End Class UHoverComposite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_scatanese_source_repos_z_UnrealProjects_HoverGame_HoverGame_UE5_MyProject_Source_MyProject_Public_HoverComposite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoverComposite, UHoverComposite::StaticClass, TEXT("UHoverComposite"), &Z_Registration_Info_UClass_UHoverComposite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoverComposite), 3586609287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scatanese_source_repos_z_UnrealProjects_HoverGame_HoverGame_UE5_MyProject_Source_MyProject_Public_HoverComposite_h_2805762234(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_scatanese_source_repos_z_UnrealProjects_HoverGame_HoverGame_UE5_MyProject_Source_MyProject_Public_HoverComposite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scatanese_source_repos_z_UnrealProjects_HoverGame_HoverGame_UE5_MyProject_Source_MyProject_Public_HoverComposite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
