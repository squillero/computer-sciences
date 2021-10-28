// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define BITS 8

int main()
{
    printf("Hello world!\n");

    int binary[BITS];

    printf("Binary number (8 bit): ");
    for (int t = 0; t < BITS; ++t)
    {
        scanf("%d", &binary[t]);
    }
    int decimal = 0;
    int weight = 1;
    for (int t = BITS - 1; t >= 0; --t)
    {
        decimal += binary[t] * weight;
        weight *= 2;
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}
