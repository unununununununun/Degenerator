// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;




public class Degenerator : ModuleRules
{

    private string ModulePath
    {
        get { return ModuleDirectory; }
    }

    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModulePath, "../../Source/Degenerator/fmodapi/")); }
    }

    public Degenerator(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        string LibrariesPath = Path.Combine(ThirdPartyPath, "lib");
        string DLLPath = Path.Combine(ThirdPartyPath, "fmodex64.dll");
        PublicDelayLoadDLLs.Add(DLLPath);

        PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath,"fmodex64_vc.lib"));


        PublicIncludePaths.AddRange(
			new string[] {
                ThirdPartyPath
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "Degenerator"
				// ... add private dependencies that you statically link with here ...	
			}
			);



        DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
