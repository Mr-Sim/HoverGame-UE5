// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/BP_HoverGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_HoverGroup() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UBP_HoverGroup();
MYPROJECT_API UClass* Z_Construct_UClass_UBP_HoverGroup_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class UBP_HoverGroup
void UBP_HoverGroup::StaticRegisterNativesUBP_HoverGroup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBP_HoverGroup);
UClass* Z_Construct_UClass_UBP_HoverGroup_NoRegister()
{
	return UBP_HoverGroup::StaticClass();
}
struct Z_Construct_UClass_UBP_HoverGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BP_HoverGroup.h" },
		{ "ModuleRelativePath", "Public/BP_HoverGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HoverGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttrCompression_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BP_HoverGroup" },
		{ "ModuleRelativePath", "Public/BP_HoverGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepCompression_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BP_HoverGroup" },
		{ "ModuleRelativePath", "Public/BP_HoverGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hovers_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BP_HoverGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HoverGroup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttrCompression;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepCompression;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hovers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hovers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBP_HoverGroup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBP_HoverGroup_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBP_HoverGroup, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveComponent_MetaData), NewProp_PrimitiveComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBP_HoverGroup_Statics::NewProp_AttrCompression = { "AttrCompression", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBP_HoverGroup, AttrCompression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttrCompression_MetaData), NewProp_AttrCompression_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBP_HoverGroup_Statics::NewProp_RepCompression = { "RepCompression", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBP_HoverGroup, RepCompression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepCompression_MetaData), NewProp_RepCompression_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBP_HoverGroup_Statics::NewProp_Hovers_Inner = { "Hovers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBP_HoverGroup_Statics::NewProp_Hovers = { "Hovers", nullptr, (EPropertyFlags)0x004000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBP_HoverGroup, Hovers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hovers_MetaData), NewProp_Hovers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBP_HoverGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_HoverGroup_Statics::NewProp_PrimitiveComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_HoverGroup_Statics::NewProp_AttrCompression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_HoverGroup_Statics::NewProp_RepCompression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_HoverGroup_Statics::NewProp_Hovers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_HoverGroup_Statics::NewProp_Hovers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBP_HoverGroup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBP_HoverGroup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBP_HoverGroup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBP_HoverGroup_Statics::ClassParams = {
	&UBP_HoverGroup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBP_HoverGroup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBP_HoverGroup_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBP_HoverGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_UBP_HoverGroup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBP_HoverGroup()
{
	if (!Z_Registration_Info_UClass_UBP_HoverGroup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBP_HoverGroup.OuterSingleton, Z_Construct_UClass_UBP_HoverGroup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBP_HoverGroup.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<UBP_HoverGroup>()
{
	return UBP_HoverGroup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBP_HoverGroup);
UBP_HoverGroup::~UBP_HoverGroup() {}
// End Class UBP_HoverGroup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_scatanese_source_repos_z_UnrealProjects_HoverGame_HoverGame_UE5_MyProject_Source_MyProject_Public_BP_HoverGroup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBP_HoverGroup, UBP_HoverGroup::StaticClass, TEXT("UBP_HoverGroup"), &Z_Registration_Info_UClass_UBP_HoverGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBP_HoverGroup), 3969170603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scatanese_source_repos_z_UnrealProjects_HoverGame_HoverGame_UE5_MyProject_Source_MyProject_Public_BP_HoverGroup_h_2480349475(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_scatanese_source_repos_z_UnrealProjects_HoverGame_HoverGame_UE5_MyProject_Source_MyProject_Public_BP_HoverGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scatanese_source_repos_z_UnrealProjects_HoverGame_HoverGame_UE5_MyProject_Source_MyProject_Public_BP_HoverGroup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
