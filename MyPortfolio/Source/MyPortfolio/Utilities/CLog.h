#pragma once

#include "CoreMinimal.h"

class MYPORTFOLIO_API CLog
{
public:
public:
	//Log â ���
	static void Log(int32 InValue);  //int32 ���
	static void Log(float InValue);	//float ���
	static void Log(const FString& InValue); //FString ���
	static void Log(const FVector& InValue); //FVector ���
	static void Log(const FRotator& InValue); //FRotator ���
	static void Log(const UObject* InValue); //UObject ���

	//ȭ�� ��� : �� �� Ÿ�Ժ��� 10�� ���� �Ķ� �۾��� ���
	static void Print(int32 InValue, int32 InKey = -1, float InDuration = 10, FColor InColor = FColor::Blue);
	static void Print(float InValue, int32 InKey = -1, float InDuration = 10, FColor InColor = FColor::Blue);
	static void Print(const FString& InValue, int32 InKey = -1, float InDuration = 10, FColor InColor = FColor::Blue);
	static void Print(const FVector& InValue, int32 InKey = -1, float InDuration = 10, FColor InColor = FColor::Blue);
	static void Print(const FRotator& InValue, int32 InKey = -1, float InDuration = 10, FColor InColor = FColor::Blue);
	static void Print(const UObject* InValue, int32 InKey = -1, float InDuration = 10, FColor InColor = FColor::Blue);
};
