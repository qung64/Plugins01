// Copyright 2022 Wei Yueyou. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EdMode.h"
#include "Framework/Application/IInputProcessor.h"
#include "EditorProperties.generated.h"

/**
 * 
 */
UENUM()
enum ESetLanguage
{
	English,
	Chinese,
	Japanese,
	Portuguese,
	Spanish,
	Korean
};


class FInputProcessor : public IInputProcessor
{
public:
	FInputProcessor(UEditorProperties* InOwner)
	{
		Owner = InOwner;
	}

	//~ IInputProcess overrides
	virtual void Tick(const float DeltaTime, FSlateApplication& SlateApp, TSharedRef<ICursor> ICursor) override;
	virtual bool HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override;
	virtual bool HandleKeyUpEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override;
	virtual bool HandleAnalogInputEvent(FSlateApplication& SlateApp, const FAnalogInputEvent& InAnalogInputEvent) override;
	virtual bool HandleMouseMoveEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override;
	virtual const TCHAR* GetDebugName() const override { return TEXT("MySlateInputProcessor"); }

private:
	class UEditorProperties* Owner;
};


UCLASS(config = EditorProperties)
class SHORTCUTKEYSTOSWITCHLANGUAGES_API UEditorProperties : public UObject
{
	GENERATED_BODY()
public:
	UEditorProperties(const FObjectInitializer& obj);
	~UEditorProperties();


	TArray<UObject*>EditedAssets;
	
	void GetOpenTheBlueprint();
	
	TSharedPtr<FInputProcessor> inputp;

	UPROPERTY(Config, EditAnywhere, Category = Settings)
		FKey ShortcutKey;

	UPROPERTY(Config, EditAnywhere, Category = Settings)
		TEnumAsByte<ESetLanguage> SetLanguage;

	void RefreshBlueprints();

	TMap<ESetLanguage, FString>GetLanguage;

	UFUNCTION(BlueprintImplementableEvent, Category = "KeyDown")
		void KeyDown(const FKey& KEY);

	FString  Switch;
	FString Previous;
};
