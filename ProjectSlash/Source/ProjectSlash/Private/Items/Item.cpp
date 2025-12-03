#include "Items/Item.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
}

void AItem::Tick(float aDeltaTime)
{
	Super::Tick(aDeltaTime);

}

