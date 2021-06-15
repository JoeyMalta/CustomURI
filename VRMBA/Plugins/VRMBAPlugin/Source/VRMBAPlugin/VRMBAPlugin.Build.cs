// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class VRMBAPlugin : ModuleRules
{
	string CppRestSdkRoot;
	public VRMBAPlugin(ReadOnlyTargetRules Target) : base(Target)
	{

		// Path pointing to the CCP Rest SDK's root.
		CppRestSdkRoot = Path.Combine(PluginDirectory, "Source/ThirdParty/cpprestsdk");

		System.Console.WriteLine(PluginDirectory);
		System.Console.WriteLine(CppRestSdkRoot);

		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		string cppRestIncludeDirectory = Path.Combine(CppRestSdkRoot, "build/native/include");
		System.Console.WriteLine(cppRestIncludeDirectory);

		PublicIncludePaths.Add(cppRestIncludeDirectory);

		PublicDefinitions.Add("CPPREST_FORCE_PPLX=0");

		//PublicIncludePaths.Add("/Users/Ibrahim Baig/Documents/Unreal Projects/VRMBA/Plugins/VRMBAPlugin/Source/ThirdParty/cpprestsdk/build/native/include");

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			string cppRestLibDirectory = Path.Combine(CppRestSdkRoot, "build/native/x64/lib");
			System.Console.WriteLine(cppRestLibDirectory);
			PublicAdditionalLibraries.Add(Path.Combine(cppRestLibDirectory, "cpprest141_2_10.lib"));
			PublicAdditionalLibraries.Add(Path.Combine(cppRestLibDirectory, "vrmbauth.lib"));
			//PublicAdditionalLibraries.Add(Path.Combine(cppRestLibDirectory, "cpprest141_2_10d.lib"));
			//PublicAdditionalLibraries.Add("/Users/Ibrahim Baig/Documents/Unreal Projects/VRMBA/Plugins/VRMBAPlugin/Source/ThirdParty/cpprestsdk/build/native/x64/lib");

			string cppRestDllDirectory = Path.Combine(CppRestSdkRoot, "build/native/x64/bin");
			System.Console.WriteLine(cppRestDllDirectory);
			RuntimeDependencies.Add(Path.Combine(cppRestDllDirectory, "cpprest141_2_10.dll"));
			RuntimeDependencies.Add(Path.Combine(cppRestDllDirectory, "vrmbauth.dll"));
			//RuntimeDependencies.Add(Path.Combine(cppRestDllDirectory, "cpprest141_2_10d.dll"));
		}
		else if (Target.Platform == UnrealTargetPlatform.Win32)
        {
			string cppRestLibDirectory = Path.Combine(CppRestSdkRoot, "build/native/x86/lib");
			System.Console.WriteLine(cppRestLibDirectory);
			PublicAdditionalLibraries.Add(Path.Combine(cppRestLibDirectory, "cpprest141_2_10.lib"));
			//PublicAdditionalLibraries.Add(Path.Combine(cppRestLibDirectory, "cpprest141_2_10d.lib"));
			//PublicAdditionalLibraries.Add("/Users/Ibrahim Baig/Documents/Unreal Projects/VRMBA/Plugins/VRMBAPlugin/Source/ThirdParty/cpprestsdk/build/native/x64/lib");

			string cppRestDllDirectory = Path.Combine(CppRestSdkRoot, "build/native/x86/bin");
			System.Console.WriteLine(cppRestDllDirectory);
			RuntimeDependencies.Add(Path.Combine(cppRestDllDirectory, "cpprest141_2_10.dll"));
			//RuntimeDependencies.Add(Path.Combine(cppRestDllDirectory, "cpprest141_2_10d.dll"));
			//PublicAdditionalLibraries.Add("/Users/Ibrahim Baig/Documents/Unreal Projects/VRMBA/Plugins/VRMBAPlugin/Source/ThirdParty/cpprestsdk/build/native/x86/lib");
		}
		PublicIncludePaths.AddRange(
			new string[] {
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
