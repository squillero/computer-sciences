/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 4

int main()
{
    int array1[ARRAY_LENGTH];
    int array2[ARRAY_LENGTH];

    printf("Array1: ");
    for (int t = 0; t < ARRAY_LENGTH; ++t)
    {
        scanf("%d", &array1[t]);
    }

    printf("Array2: ");
    for (int t = 0; t < ARRAY_LENGTH; ++t)
    {
        scanf("%d", &array2[t]);
    }

    int equal = 1;
    for (int t = 0; t < ARRAY_LENGTH; ++t)
    {
        if (array1[t] != array2[t])
        {
            equal = 0;
        }
    }

    if (equal)
    {
        printf("The two arrays are equal\n");
    }
    else
    {
        printf("The two arrays are NOT equal\n");
    }

    return 0;
}
