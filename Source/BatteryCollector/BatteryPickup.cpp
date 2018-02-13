// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"
#include "BatteryCollector.h"
#include "Engine.h"

ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);

	// �⺻ ���͸� �Ŀ�
	BatteryPower = 150.f;

}

void ABatteryPickup::WasCollected_Implementation()
{
	Super::WasCollected_Implementation();

	Destroy();
}

// �Ŀ� �� ��ȯ
float ABatteryPickup::GetPower()
{
	return BatteryPower;
}