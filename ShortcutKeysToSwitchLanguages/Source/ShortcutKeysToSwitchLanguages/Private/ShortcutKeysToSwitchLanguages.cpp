// Copyright 2022 Wei Yueyou. All Rights Reserved.

#include "ShortcutKeysToSwitchLanguages.h"
#include "ISettingsModule.h"
#include "EditorProperties.h"
#define LOCTEXT_NAMESPACE "FShortcutKeysToSwitchLanguagesModule"

#if WITH_EDITOR
void FShortcutKeysToSwitchLanguagesModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
		//将UEditorProperties注册到项目
	if (ISettingsModule* SettingModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingModule->RegisterSettings("Project", "Plugins", "MySetting",
			LOCTEXT("RuntimeSettingsName", "Language Switching"),
			LOCTEXT("RuntimeSettingsDescription", "Configure my setting"),
			GetMutableDefault<UEditorProperties>()

		);

	}
}

void FShortcutKeysToSwitchLanguagesModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "MySetting");
	}
}
#endif
#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FShortcutKeysToSwitchLanguagesModule, ShortcutKeysToSwitchLanguages)