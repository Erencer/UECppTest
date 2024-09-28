using UnrealBuildTool;
 
 public class ModuleTestA: ModuleRules
 {
         public ModuleTestA(ReadOnlyTargetRules Target) : base(Target)
         {
                PrivateDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine"});

                PrivateIncludePaths.Add("ModuleTestA/Public/TestActorBFile");
         }
 }