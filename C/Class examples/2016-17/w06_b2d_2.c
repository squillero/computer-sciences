// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
