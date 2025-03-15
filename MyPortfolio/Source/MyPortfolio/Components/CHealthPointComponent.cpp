#include "../Components/CHealthPointComponent.h"
#include "../Global.h"

UCHealthPointComponent::UCHealthPointComponent()
{

}

// 최대 체력 설정
void UCHealthPointComponent::BeginPlay()
{
	Super::BeginPlay();

	Health = MaxHealth;
}

// 데미지 처리
void UCHealthPointComponent::Damage(float InAmount)
{
	Health += (InAmount * -1.0f);
	Health = FMath::Clamp(Health, 0.0f, MaxHealth);

	if (OnHealthPointChanged.IsBound())
		OnHealthPointChanged.Broadcast(Health, MaxHealth);
}

