#include <stdio.h>

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

int main() {
    enum Class {
        ALPHA = 1,
        BETA,
        GAMMA,
        DELTA,
        EPSILON,
        ZETA,
        ETA,
        THETA,
        IOTA
    };


    enum Level myVar = MEDIUM;
    enum Class Value = GAMMA;

  switch (myVar) {
    case 0:
      printf("Low Level");
      break;
    case 1:
      printf("Medium level");
      break;
    case 2:
      printf("High level");
      break;
  }


    switch (Value) {
        case 1:
        printf("\nAlpha");
        break;
        case 2:
        printf("\nBeta");
        break;
        case 3:
        printf("\nGamma");
        break;
        case 4:
        printf("\nDelta");
        break;
        default:
        printf("\nInvalid value");
    }


  return 0;
}


/*
Output : 
Medium level
Gamma
*/