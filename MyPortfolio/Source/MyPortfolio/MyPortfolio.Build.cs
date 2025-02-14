// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyPortfolio : ModuleRules
{
	public MyPortfolio(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.Add("Core");
        PublicDependencyModuleNames.Add("CoreUObject");
        PublicDependencyModuleNames.Add("Engine");
        PublicDependencyModuleNames.Add("InputCore");
        PublicDependencyModuleNames.Add("Niagara");
	}
}
