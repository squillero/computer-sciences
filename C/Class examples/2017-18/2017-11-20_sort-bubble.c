/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main()
{
    int array[ARRAY_SIZE];

    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        array[t] = rand() % 100;
    }
    printf("Array:");
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", array[t]);
    }
    printf("\n");

    int swapped = 1;
    while (swapped == 1)
    {
        swapped = 0;
        for (int t = 1; t < ARRAY_SIZE; ++t)
        {
            if (array[t] < array[t - 1])
            {
                swapped = 1;
                printf("Swap: %d <-> %d\n", array[t - 1], array[t]);
                int tmp = array[t];
                array[t] = array[t - 1];
                array[t - 1] = tmp;
            }
        }
    }

    printf("Array:");
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", array[t]);
    }
    printf("\n");

    return 0;
}
