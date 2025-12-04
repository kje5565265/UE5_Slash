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

  // DrawPoint(World, Location + GetActorForwardVector() * 100.f);
  DrawVector(World, Location, Location + GetActorForwardVector() * 100.f);
}

constexpr float LineLength = 100.f;

void AItem::Tick(float DeltaTime) {
  Super::Tick(DeltaTime);

  //   const FVector StartLocation = GetActorLocation();
  //   const FVector LineEnd = StartLocation + GetActorForwardVector() *
  //   LineLength; DrawLine(GetWorld(), StartLocation, LineEnd);
}