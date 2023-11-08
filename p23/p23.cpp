
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

enum Status {C, WON, LOST};
int roll(void);

int main() {

    int sum, mypoint;
    enum Status gameStatus;

    srand(time(NULL));
    sum=roll();

    switch (sum)
    {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
    default:
        gameStatus = C;
        mypoint = sum;
        printf("point: \n", mypoint);
        break;
    }
    while (gameStatus== C)
    {
        sum = roll();
        if (sum == mypoint) gameStatus = WON;
        else
        {
            if (sum == 7) gameStatus = LOST;
        }
    }
    if (gameStatus == WON) printf("palyer wins\n");
    else
    {
        printf("palyer loss\n");
    }

}

int roll(void) {

    int d1, d2, w;
    d1 = 1 + (rand()%6);
    d2 = 1 + (rand()%6);
    w = d1 + d2;
    printf("player rolled %d +%d = %d\n", d1, d2, w);
    return w;

}

