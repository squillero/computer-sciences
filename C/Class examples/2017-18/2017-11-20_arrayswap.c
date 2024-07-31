// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main()
{
    int array[ARRAY_SIZE];

    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        array[t] = t + 1;
    }
    printf("Array:");
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", array[t]);
    }
    printf("\n");

    for (int t = 0; t < 100 * ARRAY_SIZE; ++t)
    {
        // swap 2 elms
        int i = rand() % ARRAY_SIZE;
        int j = rand() % ARRAY_SIZE;
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }

    printf("Array:");
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", array[t]);
    }
    printf("\n");

    return 0;
}
