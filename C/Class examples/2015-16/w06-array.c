/*  ######       /***********************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           *
|*  ####   \     * https://github.com/squillero/computer-science             *
|*   ###G  c\    *                                                           *
|*   ##     _\   * Copyright © 2015 Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>            *
\*   |   _/      \***********************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTS 7

int main()
{
    double arr[NUM_ELEMENTS];
    int t;

    printf("Insert %d numbers: ", NUM_ELEMENTS);
    t = 0;
    while (t < NUM_ELEMENTS)
    {
        double d;
        scanf("%lf", &d); // letter "L", not ONE
        arr[t] = d;
        t = t + 1;
    }

    printf("Backward 1:");
    t = 0;
    while (t < NUM_ELEMENTS)
    {
        printf(" %g", arr[NUM_ELEMENTS - t - 1]);
        t = t + 1;
    }
    printf("\n");

    printf("Backward 2:");
    t = NUM_ELEMENTS - 1;
    while (t >= 0)
    {
        printf(" %g", arr[t]);
        t = t - 1;
    }
    printf("\n");

    return 0;
}
