// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

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

    for (int t1 = 0; t1 < ARRAY_SIZE; ++t1)
    {
        for (int t2 = t1 + 1; t2 < ARRAY_SIZE; ++t2)
        {
            printf("%d + %d = %d\n",
                   array[t1], array[t2],
                   array[t1] + array[t2]);
        }
    }

    int x = printf("foo");

    return 0;
}
