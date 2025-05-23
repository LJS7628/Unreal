// Fill out your copyright notice in the Description page of Project Settings.


#include "Equipments/DS1Shield.h"

#include "DS1Weapon.h"
#include "Components/DS1CombatComponent.h"

void ADS1Shield::EquipItem()
{
	Super::EquipItem();

	if (const AActor* OwnActor = GetOwner())
	{
		if (UDS1CombatComponent* CombatComponent = OwnActor->GetComponentByClass<UDS1CombatComponent>())
		{
			CombatComponent->SetShield(this);

			FName AttachSocketName = UnequipSocketName;

			// ���Ⱑ �̹� �ִ��� üũ�غ��� ������ ���� ��ġ�� �������ش�.
			const ADS1Weapon* MainWeapon = CombatComponent->GetMainWeapon();
			if (IsValid(MainWeapon))
			{
				const ECombatType CombatType = MainWeapon->GetCombatType();
				if (CombatType == ECombatType::SwordShield)
				{
					if (CombatComponent->IsCombatEnabled())
					{
						AttachSocketName = EquipSocketName;
					}
				}
			}

			AttachToOwner(AttachSocketName);
		}
	}
}
