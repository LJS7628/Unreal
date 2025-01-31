#pragma once

#include "CoreMinimal.h"

class MYPORTFOLIO_API CLog
{
public:
public:
	//Log 창 출력
	static void Log(int32 InValue);  //int32 출력
	static void Log(float InValue);	//float 출력
	static void Log(const FString& InValue); //FString 출력
	static void Log(const FVector& InValue); //FVector 출력
	static void Log(const FRotator& InValue); //FRotator 출력
	static void Log(const UObject* InValue); //UObject 출력

	//화면 출력 : 위 각 타입별로 10초 동안 파란 글씨로 출력
	static void Print(int32 InValue, int32 InKey = -1, float InDuration = 10, FColor InColor = FColor::Blue);
	static void Print(float InValue, int32 InKey = -1, float InDuration = 10, FColor InColor = FColor::Blue);
	static void Print(const FString& InValue, int32 InKey = -1, float InDuration = 10, FColor InColor = FColor::Blue);
	static void Print(const FVector& InValue, int32 InKey = -1, float InDuration = 10, FColor InColor = FColor::Blue);
	static void Print(const FRotator& InValue, int32 InKey = -1, float InDuration = 10, FColor InColor = FColor::Blue);
	static void Print(const UObject* InValue, int32 InKey = -1, float InDuration = 10, FColor InColor = FColor::Blue);
};
