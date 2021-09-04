/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

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
