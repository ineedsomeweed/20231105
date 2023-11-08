
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int m(int a, int b, int c) {

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;

}

int main() {
    int a, b, c;
    printf("enter 3 integers:\n");
    scanf_s("%d %d %d", &a, &b, &c);
    printf("max: %d", m(a, b, c));
}

