// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Straight_Ahead : ModuleRules
{
	public Straight_Ahead(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
