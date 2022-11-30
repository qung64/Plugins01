// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShortcutKeysToSwitchLanguages/Public/EditorProperties.h"
#include "InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorProperties() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SHORTCUTKEYSTOSWITCHLANGUAGES_API UClass* Z_Construct_UClass_UEditorProperties();
	SHORTCUTKEYSTOSWITCHLANGUAGES_API UClass* Z_Construct_UClass_UEditorProperties_NoRegister();
	SHORTCUTKEYSTOSWITCHLANGUAGES_API UEnum* Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage();
	UPackage* Z_Construct_UPackage__Script_ShortcutKeysToSwitchLanguages();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESetLanguage;
	static UEnum* ESetLanguage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESetLanguage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESetLanguage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage, Z_Construct_UPackage__Script_ShortcutKeysToSwitchLanguages(), TEXT("ESetLanguage"));
		}
		return Z_Registration_Info_UEnum_ESetLanguage.OuterSingleton;
	}
	template<> SHORTCUTKEYSTOSWITCHLANGUAGES_API UEnum* StaticEnum<ESetLanguage>()
	{
		return ESetLanguage_StaticEnum();
	}
	struct Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage_Statics::Enumerators[] = {
		{ "English", (int64)English },
		{ "Chinese", (int64)Chinese },
		{ "Japanese", (int64)Japanese },
		{ "Portuguese", (int64)Portuguese },
		{ "Spanish", (int64)Spanish },
		{ "Korean", (int64)Korean },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage_Statics::Enum_MetaDataParams[] = {
		{ "Chinese.Comment", "/**\n * \n */" },
		{ "Chinese.Name", "Chinese" },
		{ "Comment", "/**\n * \n */" },
		{ "English.Comment", "/**\n * \n */" },
		{ "English.Name", "English" },
		{ "Japanese.Comment", "/**\n * \n */" },
		{ "Japanese.Name", "Japanese" },
		{ "Korean.Comment", "/**\n * \n */" },
		{ "Korean.Name", "Korean" },
		{ "ModuleRelativePath", "Public/EditorProperties.h" },
		{ "Portuguese.Comment", "/**\n * \n */" },
		{ "Portuguese.Name", "Portuguese" },
		{ "Spanish.Comment", "/**\n * \n */" },
		{ "Spanish.Name", "Spanish" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ShortcutKeysToSwitchLanguages,
		nullptr,
		"ESetLanguage",
		"ESetLanguage",
		Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage()
	{
		if (!Z_Registration_Info_UEnum_ESetLanguage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESetLanguage.InnerSingleton, Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESetLanguage.InnerSingleton;
	}
	struct EditorProperties_eventKeyDown_Parms
	{
		FKey KEY;
	};
	static FName NAME_UEditorProperties_KeyDown = FName(TEXT("KeyDown"));
	void UEditorProperties::KeyDown(FKey const& KEY)
	{
		EditorProperties_eventKeyDown_Parms Parms;
		Parms.KEY=KEY;
		ProcessEvent(FindFunctionChecked(NAME_UEditorProperties_KeyDown),&Parms);
	}
	void UEditorProperties::StaticRegisterNativesUEditorProperties()
	{
	}
	struct Z_Construct_UFunction_UEditorProperties_KeyDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KEY_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KEY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::NewProp_KEY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::NewProp_KEY = { "KEY", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorProperties_eventKeyDown_Parms, KEY), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::NewProp_KEY_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::NewProp_KEY_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::NewProp_KEY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyDown" },
		{ "ModuleRelativePath", "Public/EditorProperties.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorProperties, nullptr, "KeyDown", nullptr, nullptr, sizeof(EditorProperties_eventKeyDown_Parms), Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorProperties_KeyDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorProperties_KeyDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorProperties);
	UClass* Z_Construct_UClass_UEditorProperties_NoRegister()
	{
		return UEditorProperties::StaticClass();
	}
	struct Z_Construct_UClass_UEditorProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortcutKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShortcutKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetLanguage_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SetLanguage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ShortcutKeysToSwitchLanguages,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorProperties_KeyDown, "KeyDown" }, // 3600859082
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorProperties.h" },
		{ "ModuleRelativePath", "Public/EditorProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProperties_Statics::NewProp_ShortcutKey_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/EditorProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorProperties_Statics::NewProp_ShortcutKey = { "ShortcutKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProperties, ShortcutKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UEditorProperties_Statics::NewProp_ShortcutKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProperties_Statics::NewProp_ShortcutKey_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProperties_Statics::NewProp_SetLanguage_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/EditorProperties.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProperties_Statics::NewProp_SetLanguage = { "SetLanguage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProperties, SetLanguage), Z_Construct_UEnum_ShortcutKeysToSwitchLanguages_ESetLanguage, METADATA_PARAMS(Z_Construct_UClass_UEditorProperties_Statics::NewProp_SetLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProperties_Statics::NewProp_SetLanguage_MetaData)) }; // 1455020776
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProperties_Statics::NewProp_ShortcutKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProperties_Statics::NewProp_SetLanguage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorProperties_Statics::ClassParams = {
		&UEditorProperties::StaticClass,
		"EditorProperties",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditorProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProperties_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorProperties()
	{
		if (!Z_Registration_Info_UClass_UEditorProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorProperties.OuterSingleton, Z_Construct_UClass_UEditorProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorProperties.OuterSingleton;
	}
	template<> SHORTCUTKEYSTOSWITCHLANGUAGES_API UClass* StaticClass<UEditorProperties>()
	{
		return UEditorProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorProperties);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ShortcutKeysToSwitchLanguages_Source_ShortcutKeysToSwitchLanguages_Public_EditorProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ShortcutKeysToSwitchLanguages_Source_ShortcutKeysToSwitchLanguages_Public_EditorProperties_h_Statics::EnumInfo[] = {
		{ ESetLanguage_StaticEnum, TEXT("ESetLanguage"), &Z_Registration_Info_UEnum_ESetLanguage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1455020776U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ShortcutKeysToSwitchLanguages_Source_ShortcutKeysToSwitchLanguages_Public_EditorProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorProperties, UEditorProperties::StaticClass, TEXT("UEditorProperties"), &Z_Registration_Info_UClass_UEditorProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorProperties), 977887616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ShortcutKeysToSwitchLanguages_Source_ShortcutKeysToSwitchLanguages_Public_EditorProperties_h_3076518932(TEXT("/Script/ShortcutKeysToSwitchLanguages"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ShortcutKeysToSwitchLanguages_Source_ShortcutKeysToSwitchLanguages_Public_EditorProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ShortcutKeysToSwitchLanguages_Source_ShortcutKeysToSwitchLanguages_Public_EditorProperties_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ShortcutKeysToSwitchLanguages_Source_ShortcutKeysToSwitchLanguages_Public_EditorProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ShortcutKeysToSwitchLanguages_Source_ShortcutKeysToSwitchLanguages_Public_EditorProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
