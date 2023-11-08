
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main() {
    char s1[60] = "welcome";
    char s2[60];
    int len;

    strcpy_s(s2, s1);
    printf("string2=%s\n", s2);

    len = strlen(s2);
    printf("length of string2= %d\n", len);



}

