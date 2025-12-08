#include "Items/Item.h"
#include "DebugMacros.h"
#include "DrawDebugHelpers.h"
#include "Math/MathFwd.h"

AItem::AItem() { PrimaryActorTick.bCanEverTick = true; }

void AItem::BeginPlay() { Super::BeginPlay(); }

void AItem::Tick(float DeltaTime) {
  Super::Tick(DeltaTime);

  float movementRate = 50.f;
  AddActorWorldOffset(FVector(movementRate * DeltaTime, 0.f, 0.f));
  AddActorWorldRotation(FRotator(0.f, movementRate * DeltaTime, 0.f));

  DrawSphereSingleFrame(GetWorld(), GetActorLocation());
  DrawVectorSingleFrame(GetWorld(), GetActorLocation(),
                        GetActorLocation() + GetActorForwardVector() * 100.f);
}