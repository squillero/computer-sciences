// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
