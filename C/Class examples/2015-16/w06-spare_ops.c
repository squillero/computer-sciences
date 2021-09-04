/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main()
{
    int array1[SIZE], array2[SIZE];
    int t;

    // seed with seconds from the epoch
    srand(time(NULL));
    for (t = 0; t < SIZE; t += 1)
    {
        array1[t] = rand() % 2000 - 1000;
    }

    // Copy: array2 <- array1;
    for (t = 0; t < SIZE; t += 1)
    {
        array2[t] = array1[t];
    }
    // print
    for (t = 0; t < SIZE; t += 1)
    {
        printf(" %d", array2[t]);
    }
    printf("\n");

    // position of max
    int pmax;
    pmax = 0;
    for (t = 0; t < SIZE; t += 1)
    {
        if (array2[t] > array2[pmax])
        {
            pmax = t;
        }
    }
    printf("Max: position %d, value %d\n", pmax, array2[pmax]);
    array2[pmax] = 0;

    // print
    for (t = 0; t < SIZE; t += 1)
    {
        printf(" %d", array2[t]);
    }
    printf("\n");
}
