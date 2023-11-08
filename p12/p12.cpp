
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int square(int y) {

    return y * y;
}


int main()
{

    for (int i = 1; i < 11; i++) {
        printf("%d\n", square(i));
    }
    
}

