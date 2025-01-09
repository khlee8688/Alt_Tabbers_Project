// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Alt_Tabbers_Project : ModuleRules
{
	public Alt_Tabbers_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
