// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "ExtendedCommonButtonBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = UI, meta = (Category = "Common UI", DisableNativeTick))
class COMMONUI_PROJECT_API UExtendedCommonButtonBase : public UCommonButtonBase
{
	GENERATED_BODY()
	

public:
#if PLATFORM_DESKTOP || WITH_EDITOR
	virtual void NativeOnFocusChanging(const FWeakWidgetPath& PreviousFocusPath, const FWidgetPath& NewWidgetPath, const FFocusEvent& InFocusEvent) override;
#endif
};
