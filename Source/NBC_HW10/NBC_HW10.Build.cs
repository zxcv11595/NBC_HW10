// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NBC_HW10 : ModuleRules
{
	public NBC_HW10(ReadOnlyTargetRules Target) : base(Target)
	{
		// 언리얼 프로젝트에서 사용하는 PCH 설정
		// PCH(Precompoiled Header):
		// 미리 헤더 파일을 컴파일하고, 소스 코드들을 재활용하여 빌드 시간을 단축시킴
		// ExplicitPCH - 명시적으로 지정한 PCH
		// SharedPCH - 엔진에서 제공하는 PCH
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // public 헤더에서 사용할 모듈 등록
        // Core -			기본 타입, 로그, 문자열 등
        // CourUObject -	UBoject, UClass, UPROPERTY 등 리플렉션 기능
        // Engine -			Actor, Component 등 엔진 기능
        // Test, Temporary 등 외부 모듈 추가 
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Test", "Temporary" });
	}
}
