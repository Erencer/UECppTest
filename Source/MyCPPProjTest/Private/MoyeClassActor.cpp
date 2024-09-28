// Copyright Moye practice. All Rights Reserved.


#include "MoyeClassActor.h"


// Sets default values
AMoyeClassActor::AMoyeClassActor()
{
	PrimaryActorTick.bCanEverTick = false;

	//创建并设置场景组件为根组件
	SetRootComponent(CreateDefaultSubobject<USceneComponent>(TEXT("MoyeClassActorRoot")));
}

// Called when the game starts or when spawned
void AMoyeClassActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoyeClassActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 AMoyeClassActor::GetMoney()
{
	return Money;
}

void AMoyeClassActor::SetMoney()
{
	Money = 250;
}

int32 AMoyeClassActor::GetCDOMoney()
{
	return Cast<AMoyeClassActor>(AMoyeClassActor::StaticClass()->GetDefaultObject())->GetMoney();;
}


