#pragma once

#include "DrawDebugHelpers.h"

FORCEINLINE void DrawSphere(const UWorld *World, const FVector &Location) {
  if (World) {
    DrawDebugSphere(World, Location, 25.f, 12, FColor::Red, true);
  }
}

FORCEINLINE void DrawLine(const UWorld *World, const FVector &StartLocation,
                          const FVector &LineEnd) {
  if (World) {
    DrawDebugLine(World, StartLocation, LineEnd, FColor::Red, true, -1.f, 0,
                  1.f);
  }
}

FORCEINLINE void DrawPoint(const UWorld *World, const FVector &Location) {
  if (World) {
    DrawDebugPoint(World, Location, 15.f, FColor::Red, true, -1.f, 0);
  }
}
