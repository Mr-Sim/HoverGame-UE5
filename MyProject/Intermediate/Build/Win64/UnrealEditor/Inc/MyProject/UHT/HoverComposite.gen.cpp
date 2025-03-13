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

// Begin Class UHoverComposite Function CalculateCompression
struct Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics
{
	struct HoverComposite_eventCalculateCompression_Parms
	{
		float _distance;
		float _range;
		bool _invertCompression;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__range;
	static void NewProp__invertCompression_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__invertCompression;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp__distance = { "_distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverComposite_eventCalculateCompression_Parms, _distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp__range = { "_range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverComposite_eventCalculateCompression_Parms, _range), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp__invertCompression_SetBit(void* Obj)
{
	((HoverComposite_eventCalculateCompression_Parms*)Obj)->_invertCompression = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp__invertCompression = { "_invertCompression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoverComposite_eventCalculateCompression_Parms), &Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp__invertCompression_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp__distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp__range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp__invertCompression,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoverComposite, nullptr, "CalculateCompression", nullptr, nullptr, Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::HoverComposite_eventCalculateCompression_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::HoverComposite_eventCalculateCompression_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoverComposite_CalculateCompression()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoverComposite::execCalculateCompression)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__distance);
	P_GET_PROPERTY(FFloatProperty,Z_Param__range);
	P_GET_UBOOL(Z_Param__invertCompression);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateCompression(Z_Param__distance,Z_Param__range,Z_Param__invertCompression);
	P_NATIVE_END;
}
// End Class UHoverComposite Function CalculateCompression

// Begin Class UHoverComposite
void UHoverComposite::StaticRegisterNativesUHoverComposite()
{
	UClass* Class = UHoverComposite::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateCompression", &UHoverComposite::execCalculateCompression },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoverComposite_CalculateCompression, "CalculateCompression" }, // 2727786258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UHoverComposite, UHoverComposite::StaticClass, TEXT("UHoverComposite"), &Z_Registration_Info_UClass_UHoverComposite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoverComposite), 1987043794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scatanese_source_repos_z_UnrealProjects_HoverGame_HoverGame_UE5_MyProject_Source_MyProject_Public_HoverComposite_h_1506761074(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_scatanese_source_repos_z_UnrealProjects_HoverGame_HoverGame_UE5_MyProject_Source_MyProject_Public_HoverComposite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scatanese_source_repos_z_UnrealProjects_HoverGame_HoverGame_UE5_MyProject_Source_MyProject_Public_HoverComposite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
