// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
