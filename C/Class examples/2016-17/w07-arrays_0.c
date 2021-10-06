/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 8
#define TRUE 1
#define FALSE 0

int main()
{
    int array1[ARRAY_SIZE] = {0};
    int array2[ARRAY_SIZE] = {-1, 42, 23, -42};

    printf("Array1 @ %p:", array1);
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", array1[t]);
    }
    printf("\n");
    printf("Array2 @ %p:", array2);
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", array2[t]);
    }
    printf("\n");

    int arrays_equal = TRUE;
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        if (array1[t] != array2[t])
        {
            arrays_equal = FALSE;
        }
    }

    if (arrays_equal)
    {
        printf("Whoa!\n");
    }
    else
    {
        printf("Yeuch -- Not equal...\n");
        for (int t = 0; t < ARRAY_SIZE; ++t)
        {
            array2[t] = array1[t];
        }
    }

    printf("Array1 @ %p:", array1);
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", array1[t]);
    }
    printf("\n");
    printf("Array2 @ %p:", array2);
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", array2[t]);
    }
    printf("\n");
    return 0;
}
