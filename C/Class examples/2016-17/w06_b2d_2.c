// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define BITS 8

int main()
{
    printf("Hello world!\n");

    printf("Binary number (8 bit): ");
    int decimal = 0;
    for (int t = 0; t < BITS; ++t)
    {
        int bit;
        scanf("%d", &bit);
        decimal = decimal * 2 + bit;
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}
