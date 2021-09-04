/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTS 7

int main()
{
    double arr[NUM_ELEMENTS];
    int t;

    printf("Insert %d numbers: ", NUM_ELEMENTS);
    for (t = 0; t < NUM_ELEMENTS; t = t + 1)
    {
        scanf("%lf", &arr[t]); // letter "L", not ONE
    }

    printf("Backward 1:");
    for (t = 0; t < NUM_ELEMENTS; t = t + 1)
    {
        printf(" %g", arr[NUM_ELEMENTS - t - 1]);
    }
    printf("\n");

    printf("Backward 2:");
    for (t = NUM_ELEMENTS - 1; t >= 0; t = t - 1)
    {
        printf(" %g", arr[t]);
    }
    printf("\n");

    return 0;
}
