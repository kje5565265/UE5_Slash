#pragma once

#include "CoreMinimal.h"
#include "DrawDebugHelpers.h"

FORCEINLINE void DrawSphere(const UWorld *World, const FVector &Location) {
  if (World) {
    DrawDebugSphere(World, Location, 25.f, 12, FColor::Red, true);
  }
}

FORCEINLINE void DrawSphereSingleFrame(const UWorld *World,
                                       const FVector &Location) {
  if (World) {
    DrawDebugSphere(World, Location, 25.f, 12, FColor::Red, false, -1.f);
  }
}

FORCEINLINE void DrawLine(const UWorld *World, const FVector &StartLocation,
                          const FVector &LineEnd) {
  if (World) {
    DrawDebugLine(World, StartLocation, LineEnd, FColor::Red, true, -1.f, 0,
                  1.f);
  }
}

FORCEINLINE void DrawLineSingleFrame(const UWorld *World,
                                     const FVector &StartLocation,
                                     const FVector &LineEnd) {
  if (World) {
    DrawDebugLine(World, StartLocation, LineEnd, FColor::Red, false, -1.f, 0,
                  1.f);
  }
}

FORCEINLINE void DrawPoint(const UWorld *World, const FVector &Location) {
  if (World) {
    DrawDebugPoint(World, Location, 15.f, FColor::Red, true, -1.f, 0);
  }
}

FORCEINLINE void DrawPointSingleFrame(const UWorld *World,
                                      const FVector &Location) {
  if (World) {
    DrawDebugPoint(World, Location, 15.f, FColor::Red, false, -1.f, 0);
  }
}

FORCEINLINE void DrawVector(const UWorld *World, const FVector &Location,
                            const FVector &LineEnd) {
  if (World) {
    DrawDebugLine(World, Location, LineEnd, FColor::Red, true, -1.f, 0, 1.f);
    DrawDebugPoint(World, LineEnd, 15.f, FColor::Red, true, -1.f, 0);
  }
}

FORCEINLINE void DrawVectorSingleFrame(const UWorld *World,
                                       const FVector &Location,
                                       const FVector &LineEnd) {
  if (World) {
    DrawDebugLine(World, Location, LineEnd, FColor::Red, false, -1.f, 0, 1.f);
    DrawDebugPoint(World, LineEnd, 15.f, FColor::Red, false, -1.f, 0);
  }
}