// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
*
*/
UCLASS()
class BATTERYCOLLECTOR_API ABatteryPickup : public APickup
{
	GENERATED_BODY()

protected:

	// ���͸����� ĳ���ͷ� ������ �Ŀ��� ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = "true"))
		float BatteryPower;


	float GetPower();

public:
	// �⺻ �� ����
	ABatteryPickup();

	// WasCollected �������̵�
	void WasCollected_Implementation() override;

};
