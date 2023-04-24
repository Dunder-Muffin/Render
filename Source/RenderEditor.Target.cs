using UnrealBuildTool;
using System.Collections.Generic;

public class RenderEditorTarget : TargetRules
{
	public RenderEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Render" } );
		ExtraModuleNames.Add("ShaderModule");
	}
}
