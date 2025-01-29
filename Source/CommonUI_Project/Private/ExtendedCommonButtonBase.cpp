// Fill out your copyright notice in the Description page of Project Settings.


#include "ExtendedCommonButtonBase.h"

#if PLATFORM_DESKTOP || WITH_EDITOR
void UExtendedCommonButtonBase::NativeOnFocusChanging(const FWeakWidgetPath& PreviousFocusPath, const FWidgetPath& NewWidgetPath, const FFocusEvent& InFocusEvent)
{
    TSharedRef<SWidget> NewWidget = NewWidgetPath.GetLastWidget();
    TWeakPtr<SWidget> PreviousWidget = PreviousFocusPath.GetLastWidget();
    FName WidgetType = NewWidget.Get().GetType();

    if (InFocusEvent.GetCause() == EFocusCause::Mouse
        && (WidgetType == FName("SPIEViewport") || WidgetType == FName("SViewport")))
    {
        SetKeyboardFocus();
        return;
    }
    Super::NativeOnFocusChanging(PreviousFocusPath, NewWidgetPath, InFocusEvent);
}
#endif