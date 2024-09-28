using UnrealBuildTool;
 
 public class ModuleTestB: ModuleRules
 {
         public ModuleTestB(ReadOnlyTargetRules Target) : base(Target)
         {
                PrivateDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine"});
         }
 }