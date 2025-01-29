// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CommonUI_Project : ModuleRules
{
	public CommonUI_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput", "UMG", "CommonUI", "Slate", "SlateCore" });
    }
}
