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

	// 배터리에서 캐릭터로 보내는 파워의 양
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = "true"))
		float BatteryPower;


	float GetPower();

public:
	// 기본 값 설정
	ABatteryPickup();

	// WasCollected 오버라이드
	void WasCollected_Implementation() override;

};
