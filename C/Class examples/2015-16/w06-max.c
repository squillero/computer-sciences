/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

int main()
{
    int array[SIZE];
    int t;

    // seed with seconds from the epoch
    srand(time(NULL));

    for (t = 0; t < SIZE; t = t + 1)
    {
        array[t] = rand();
    }

    int max;
    max = array[0];
    for (t = 1; t < SIZE; t = t + 1)
    {
        if (max < array[t])
        {
            max = array[t];
        }
    }

    printf("Max: %d\n", max);

    return 0;
}
