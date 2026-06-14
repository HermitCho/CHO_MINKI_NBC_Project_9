// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BullsAndCows : ModuleRules
{
	public BullsAndCows(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
	    // Initial Dependencies
        PublicDependencyModuleNames.AddRange(new string[]
        { 
            //default
            "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput",
            //UI
			"UMG", "Slate", "SlateCore"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        PublicIncludePaths.AddRange(new string[]
        {
            "BullsAndCows",
        });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
