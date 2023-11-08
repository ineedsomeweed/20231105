
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int power(int x, int y) {

    for (int i = 1; i < y; i++) {
        x= x*x;
    }
    return x;
}



int main()
{
    int X, Y;
    printf("x^y= ?\n");

    printf("Enter x: ");
    scanf_s("%d", &X);

    printf("Enter y: ");
    scanf_s("%d", &Y);

    printf("x^y= %d", power(X, Y));

}


