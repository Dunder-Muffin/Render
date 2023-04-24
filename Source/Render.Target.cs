using UnrealBuildTool;
using System.Collections.Generic;

public class RenderTarget : TargetRules
{
	public RenderTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Render" } );
		ExtraModuleNames.Add("ShaderModule");
	}
}
