// Copyright Moye practice. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoyeClassActor.generated.h"

UCLASS()
class MYCPPPROJTEST_API AMoyeClassActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoyeClassActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MoyeClass")
	int32 Money = 100;

	UFUNCTION(BlueprintCallable, Category = "MoyeClass")
	FORCEINLINE int32 GetMoney();

	UFUNCTION(BlueprintCallable, Category = "MoyeClass")
	FORCEINLINE void SetMoney();

	UFUNCTION(BlueprintCallable, Category = "MoyeClass")
	FORCEINLINE int32 GetCDOMoney();
	
};
