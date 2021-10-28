// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define SIZE 8

int main()
{
    double array[SIZE];

    printf("Max random number is %d\n", RAND_MAX);

    // seed rand with the num of secs since the epoch
    srand(time(NULL));
    for (int t = 0; t < SIZE; ++t)
    {
        array[t] = 1.0 * rand() / RAND_MAX;
    }

    // find max & min
    double max = array[0];
    double min = array[0];
    for (int t = 0; t < SIZE; ++t)
    {
        if (array[t] > max)
        {
            max = array[t];
        }
        if (array[t] < min)
        {
            min = array[t];
        }
    }
    printf("Array is [%g, %g]\n", min, max);

    return 0;
}
