﻿
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main() {
    unsigned seed;

    printf("enter seed: ");
    scanf_s("%u", &seed);

    for (int i = 1; i < 11; i++) {

        printf("%10d", 1 + (rand() % 6));
        if (i % 5 == 0) printf("\n");
    }

}

