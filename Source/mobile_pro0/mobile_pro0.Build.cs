// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class mobile_pro0 : ModuleRules
{
	public mobile_pro0(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
