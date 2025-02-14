#pragma once

#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"

#define CheckTrue(x) { if(x == true) return; } //True check용
#define CheckTrueResult(x, y) { if(x == true) return y; } //반환용

#define CheckFalse(x) { if(x == false) return;} //False check용
#define CheckFalseResult(x, y) { if(x == false) return y;}  //반환용

#define CheckNull(x) { if(x == nullptr) return; } //Null check용
#define CheckNullResult(x, y) { if(x == nullptr) return y;}  //반환용

//Text 설정
#define CreateTextRenderComponent()\
{\
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Root);\
	Text->SetRelativeLocation(FVector(0, 0, 100));\
	Text->SetRelativeRotation(FRotator(0, 180, 0));\
	Text->SetRelativeScale3D(FVector(2));\
	Text->TextRenderColor = FColor::Red;\
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;\
	Text->Text = FText::FromString(GetName().Replace(L"Default__", L""));\
}

class MYPORTFOLIO_API CHelpers
{
public:
	template<typename T> //모든 SubObject에 대해 편하게 추가하기 위함
	static void CreateComponent(AActor* InActor, T** OutComponent, FName InName, USceneComponent* InParent = nullptr)
	{
		*OutComponent = InActor->CreateDefaultSubobject<T>(InName);

		if (!!InParent)
		{
			(*OutComponent)->SetupAttachment(InParent);

			return;
		}

		InActor->SetRootComponent(*OutComponent);
	}

	template<typename T> //ActorComponent를 편하게 추가하기 위함
	static void CreateActorComponent(AActor* InActor, T** OutComponent, FName InName)
	{
		*OutComponent = InActor->CreateDefaultSubobject<T>(InName);
	}

	template<typename T> //생성자에서 에셋을 연결해야 할 때 가져오는 기능
	static void GetAsset(T** OutObject, FString InPath)
	{
		ConstructorHelpers::FObjectFinder<T> asset(*InPath);
		*OutObject = asset.Object;
	}

	template<typename T> //런타임시 에셋을 가져와야 할 때
	static void GetAssetDynamic(T** OutObject, FString InPath)
	{
		*OutObject = Cast<T>(StaticLoadObject(T::StaticClass(), nullptr, *InPath));
	}

	template<typename T> //클래스 가져오기
	static void GetClass(TSubclassOf<T>* OutClass, FString InPath)
	{
		ConstructorHelpers::FClassFinder<T> asset(*InPath);
		*OutClass = asset.Class;
	}

	template<typename T> //액터 찾기
	static T* FindActor(UWorld* InWorld)
	{
		for (AActor* actor : InWorld->GetCurrentLevel()->Actors)
		{
			if (!!actor && actor->IsA<T>())
				return Cast<T>(actor);
		}

		return nullptr;
	}

	template<typename T> // 동일 타입 액터 모두 찾기
	static void FindActors(UWorld* InWorld, TArray<T*>& OutActors)
	{
		for (AActor* actor : InWorld->GetCurrentLevel()->Actors)
		{
			if (!!actor && actor->IsA<T>())
				OutActors.Add(Cast<T>(actor));
		}
	}


	//캐릭터 소켓에 액터 부착
	static void AttachTo(AActor* InActor, USceneComponent* InParent, FName InSocketName)
	{
		InActor->AttachToComponent(InParent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), InSocketName);
	}

	//컴포넌트 가져오기
	template<typename T>  
	static T* GetComponent(AActor* InActor)
	{
		return Cast<T>(InActor->GetComponentByClass(T::StaticClass()));
	}

	//이름으로 검색해서 컴포넌트 가져오기
	template<typename T> 
	static T* GetComponent(AActor* InActor, const FString& InName)
	{
		TArray<T*> components;
		InActor->GetComponents<T>(components);

		for (T* component : components)
		{
			if (component->GetName() == InName)
				return component;
		}

		return nullptr;
	}

	static void PlayEffect(UWorld* InWorld, UFXSystemAsset* InAsset, const FTransform& InTransform, USkeletalMeshComponent* InMesh = nullptr, FName InSocketName = NAME_None)
	{
		UParticleSystem* particle = Cast<UParticleSystem>(InAsset);
		UNiagaraSystem* niagara = Cast<UNiagaraSystem>(InAsset);

		FVector location = InTransform.GetLocation();
		FRotator rotation = FRotator(InTransform.GetRotation());
		FVector scale = InTransform.GetScale3D();

		if (!!InMesh)
		{
			return;
		}

		if (!!particle) 
		{
			UGameplayStatics::SpawnEmitterAtLocation(InWorld,particle,InTransform);

			return;
		}

		if (!!niagara) 
		{
			return;
		}
	}
};
