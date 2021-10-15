// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class LEARNKIT_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// 记录创建的组件
	UPROPERTY(EditAnywhere)
	USceneComponent* OurVisibleComponent;

	//输入函数
	void Move_XAxis(float AxisValue);
	void Move_YAxis(float AxisValue);
	void StartGrowing();
	void StopGrowing();

	//输入变量
	FVector CurrentVelocity;
	bool bGrowing;
};
