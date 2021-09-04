/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10000

int main()
{
    int data[SIZE];

    srand(time(NULL));
    for (int t = 0; t < SIZE; ++t)
    {
        data[t] = rand();
    }

    printf("Array:");
    for (int t = 0; t < SIZE; ++t)
    {
        printf(" %d", data[t]);
    }
    printf("\n");

    int max = data[0];
    int min = data[0];
    for (int t = 0; t < SIZE; ++t)
    {
        if (data[t] > max)
        {
            max = data[t];
        }
        if (data[t] < min)
        {
            min = data[t];
        }
    }
    printf("Max: %d, min: %d\n", max, min);

    return 0;
}
