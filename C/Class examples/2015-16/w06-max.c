// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
