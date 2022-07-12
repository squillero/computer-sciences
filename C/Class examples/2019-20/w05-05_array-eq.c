// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
