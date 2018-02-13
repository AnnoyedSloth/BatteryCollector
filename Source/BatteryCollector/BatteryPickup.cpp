// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"
#include "BatteryCollector.h"
#include "Engine.h"

ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);

	// 기본 배터리 파워
	BatteryPower = 150.f;

}

void ABatteryPickup::WasCollected_Implementation()
{
	Super::WasCollected_Implementation();

	Destroy();
}

// 파워 값 반환
float ABatteryPickup::GetPower()
{
	return BatteryPower;
}