
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

long fac(long n);

int main()
{
    for (int i = 0; i <= 10; i++) {
    
        printf("%2d!= %1d\n", i, fac(i));
    }
}

long fac(long n) {

    if (n <= 1) return 1;
    else return(n * fac(n - 1));
}