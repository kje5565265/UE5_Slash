#include "Items/Item.h"
#include "DebugMacros.h"
#include "ProjectSlash/ProjectSlash.h"

#define THIRTY 30

AItem::AItem() { PrimaryActorTick.bCanEverTick = true; }

void AItem::BeginPlay() {
  Super::BeginPlay();

  UWorld *World = GetWorld();
  FVector Location = GetActorLocation();
  DrawSphere(World, Location);
  // 새로 추가된 디버그 포인트 그리기 유틸 사용
  DrawPoint(World, Location);
}

constexpr float LineLength = 100.f;

void AItem::Tick(float DeltaTime) {
  Super::Tick(DeltaTime);

  const FVector StartLocation = GetActorLocation();
  const FVector LineEnd = StartLocation + GetActorForwardVector() * LineLength;
  DrawLine(GetWorld(), StartLocation, LineEnd);
}