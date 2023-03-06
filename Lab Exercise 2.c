/*
https://github.com/RyuseikaDesuYo/Total-Current-In-A-Series-Circuit-With-Resistor
*/


#include <stdio.h>
#include <stdlib.h> // for exit()

#define Vt 12.0
#define mA 1000.0

int main() {
    float R1, R2, R3, R4, Rt, ImA;

    printf("Enter value for R1: ");
    if (scanf("%f", &R1) != 1 || R1 <= 0) {
        printf("Invalid input.\n");
        exit(1);
    }

    printf("Enter value for R2: ");
    if (scanf("%f", &R2) != 1 || R2 <= 0) {
        printf("Invalid input.\n");
        exit(1);
    }

    printf("Enter value for R3: ");
    if (scanf("%f", &R3) != 1 || R3 <= 0) {
        printf("Invalid input.\n");
        exit(1);
    }

    printf("Enter value for R4: ");
    if (scanf("%f", &R4) != 1 || R4 <= 0) {
        printf("Invalid input.\n");
        exit(1);
    }

    Rt = R1 + R2 + R3 + R4;
    ImA = Vt * mA / Rt;

    printf("The total current of the circuit is: %.3f mA\n", ImA);

    return 0;
}
