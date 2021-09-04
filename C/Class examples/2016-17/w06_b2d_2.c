/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
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
