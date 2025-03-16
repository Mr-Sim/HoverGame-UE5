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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
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
		float ReturnValue;
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverComposite_eventCalculateCompression_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp__distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp__range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp__invertCompression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_CalculateCompression_Statics::NewProp_ReturnValue,
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
	*(float*)Z_Param__Result=P_THIS->CalculateCompression(Z_Param__distance,Z_Param__range,Z_Param__invertCompression);
	P_NATIVE_END;
}
// End Class UHoverComposite Function CalculateCompression

// Begin Class UHoverComposite Function DoRaycast
struct Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics
{
	struct HoverComposite_eventDoRaycast_Parms
	{
		bool _drawRay;
		FLinearColor _color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
#endif // WITH_METADATA
	static void NewProp__drawRay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__drawRay;
	static const UECodeGen_Private::FStructPropertyParams NewProp__color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::NewProp__drawRay_SetBit(void* Obj)
{
	((HoverComposite_eventDoRaycast_Parms*)Obj)->_drawRay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::NewProp__drawRay = { "_drawRay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoverComposite_eventDoRaycast_Parms), &Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::NewProp__drawRay_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::NewProp__color = { "_color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverComposite_eventDoRaycast_Parms, _color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::NewProp__drawRay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::NewProp__color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoverComposite, nullptr, "DoRaycast", nullptr, nullptr, Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::HoverComposite_eventDoRaycast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::HoverComposite_eventDoRaycast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoverComposite_DoRaycast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoverComposite_DoRaycast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoverComposite::execDoRaycast)
{
	P_GET_UBOOL(Z_Param__drawRay);
	P_GET_STRUCT(FLinearColor,Z_Param__color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoRaycast(Z_Param__drawRay,Z_Param__color);
	P_NATIVE_END;
}
// End Class UHoverComposite Function DoRaycast

// Begin Class UHoverComposite Function GetAttractionForce
struct Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics
{
	struct HoverComposite_eventGetAttractionForce_Parms
	{
		float _compression;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__compression;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::NewProp__compression = { "_compression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverComposite_eventGetAttractionForce_Parms, _compression), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverComposite_eventGetAttractionForce_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::NewProp__compression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoverComposite, nullptr, "GetAttractionForce", nullptr, nullptr, Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::HoverComposite_eventGetAttractionForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::HoverComposite_eventGetAttractionForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoverComposite_GetAttractionForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoverComposite_GetAttractionForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoverComposite::execGetAttractionForce)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__compression);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttractionForce(Z_Param__compression);
	P_NATIVE_END;
}
// End Class UHoverComposite Function GetAttractionForce

// Begin Class UHoverComposite Function GetRepultionForce
struct Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics
{
	struct HoverComposite_eventGetRepultionForce_Parms
	{
		float _compression;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__compression;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::NewProp__compression = { "_compression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverComposite_eventGetRepultionForce_Parms, _compression), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverComposite_eventGetRepultionForce_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::NewProp__compression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoverComposite, nullptr, "GetRepultionForce", nullptr, nullptr, Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::HoverComposite_eventGetRepultionForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::HoverComposite_eventGetRepultionForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoverComposite_GetRepultionForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoverComposite_GetRepultionForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoverComposite::execGetRepultionForce)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__compression);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRepultionForce(Z_Param__compression);
	P_NATIVE_END;
}
// End Class UHoverComposite Function GetRepultionForce

// Begin Class UHoverComposite
void UHoverComposite::StaticRegisterNativesUHoverComposite()
{
	UClass* Class = UHoverComposite::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateCompression", &UHoverComposite::execCalculateCompression },
		{ "DoRaycast", &UHoverComposite::execDoRaycast },
		{ "GetAttractionForce", &UHoverComposite::execGetAttractionForce },
		{ "GetRepultionForce", &UHoverComposite::execGetRepultionForce },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugRay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rep_Range_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rep_PreviousCompression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rep_Damp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rep_Stiff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rep_Force_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRep_Hit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attr_Range_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attr_PreviousCompression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attr_Damp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attr_Stiff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attr_Force_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttr_Hit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelsGrounded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attr_Dist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rep_Dist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoverComposite" },
		{ "ModuleRelativePath", "Public/HoverComposite.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDebugRay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugRay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rep_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rep_PreviousCompression;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rep_Damp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rep_Stiff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rep_Force;
	static void NewProp_bRep_Hit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRep_Hit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attr_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attr_PreviousCompression;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attr_Damp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attr_Stiff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attr_Force;
	static void NewProp_bAttr_Hit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttr_Hit;
	static void NewProp_WheelsGrounded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WheelsGrounded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attr_Dist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rep_Dist;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoverComposite_CalculateCompression, "CalculateCompression" }, // 4189935026
		{ &Z_Construct_UFunction_UHoverComposite_DoRaycast, "DoRaycast" }, // 451146934
		{ &Z_Construct_UFunction_UHoverComposite_GetAttractionForce, "GetAttractionForce" }, // 1258276456
		{ &Z_Construct_UFunction_UHoverComposite_GetRepultionForce, "GetRepultionForce" }, // 917844566
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoverComposite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHoverComposite_Statics::NewProp_bDebugRay_SetBit(void* Obj)
{
	((UHoverComposite*)Obj)->bDebugRay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_bDebugRay = { "bDebugRay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoverComposite), &Z_Construct_UClass_UHoverComposite_Statics::NewProp_bDebugRay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugRay_MetaData), NewProp_bDebugRay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_Rep_Range = { "Rep_Range", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverComposite, Rep_Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rep_Range_MetaData), NewProp_Rep_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_Rep_PreviousCompression = { "Rep_PreviousCompression", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverComposite, Rep_PreviousCompression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rep_PreviousCompression_MetaData), NewProp_Rep_PreviousCompression_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_Rep_Damp = { "Rep_Damp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverComposite, Rep_Damp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rep_Damp_MetaData), NewProp_Rep_Damp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_Rep_Stiff = { "Rep_Stiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverComposite, Rep_Stiff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rep_Stiff_MetaData), NewProp_Rep_Stiff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_Rep_Force = { "Rep_Force", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverComposite, Rep_Force), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rep_Force_MetaData), NewProp_Rep_Force_MetaData) };
void Z_Construct_UClass_UHoverComposite_Statics::NewProp_bRep_Hit_SetBit(void* Obj)
{
	((UHoverComposite*)Obj)->bRep_Hit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_bRep_Hit = { "bRep_Hit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoverComposite), &Z_Construct_UClass_UHoverComposite_Statics::NewProp_bRep_Hit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRep_Hit_MetaData), NewProp_bRep_Hit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_Attr_Range = { "Attr_Range", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverComposite, Attr_Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attr_Range_MetaData), NewProp_Attr_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_Attr_PreviousCompression = { "Attr_PreviousCompression", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverComposite, Attr_PreviousCompression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attr_PreviousCompression_MetaData), NewProp_Attr_PreviousCompression_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_Attr_Damp = { "Attr_Damp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverComposite, Attr_Damp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attr_Damp_MetaData), NewProp_Attr_Damp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_Attr_Stiff = { "Attr_Stiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverComposite, Attr_Stiff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attr_Stiff_MetaData), NewProp_Attr_Stiff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_Attr_Force = { "Attr_Force", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverComposite, Attr_Force), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attr_Force_MetaData), NewProp_Attr_Force_MetaData) };
void Z_Construct_UClass_UHoverComposite_Statics::NewProp_bAttr_Hit_SetBit(void* Obj)
{
	((UHoverComposite*)Obj)->bAttr_Hit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_bAttr_Hit = { "bAttr_Hit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoverComposite), &Z_Construct_UClass_UHoverComposite_Statics::NewProp_bAttr_Hit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttr_Hit_MetaData), NewProp_bAttr_Hit_MetaData) };
void Z_Construct_UClass_UHoverComposite_Statics::NewProp_WheelsGrounded_SetBit(void* Obj)
{
	((UHoverComposite*)Obj)->WheelsGrounded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_WheelsGrounded = { "WheelsGrounded", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoverComposite), &Z_Construct_UClass_UHoverComposite_Statics::NewProp_WheelsGrounded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelsGrounded_MetaData), NewProp_WheelsGrounded_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_Attr_Dist = { "Attr_Dist", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverComposite, Attr_Dist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attr_Dist_MetaData), NewProp_Attr_Dist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverComposite_Statics::NewProp_Rep_Dist = { "Rep_Dist", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverComposite, Rep_Dist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rep_Dist_MetaData), NewProp_Rep_Dist_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoverComposite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_bDebugRay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_Rep_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_Rep_PreviousCompression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_Rep_Damp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_Rep_Stiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_Rep_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_bRep_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_Attr_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_Attr_PreviousCompression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_Attr_Damp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_Attr_Stiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_Attr_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_bAttr_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_WheelsGrounded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_Attr_Dist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverComposite_Statics::NewProp_Rep_Dist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverComposite_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UHoverComposite_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoverComposite_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_HoverComposite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoverComposite, UHoverComposite::StaticClass, TEXT("UHoverComposite"), &Z_Registration_Info_UClass_UHoverComposite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoverComposite), 1871380401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_HoverComposite_h_131020610(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_HoverComposite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_HoverComposite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
