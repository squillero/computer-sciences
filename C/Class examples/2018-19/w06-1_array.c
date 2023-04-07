// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define SIZE 8

int main()
{
    int array[SIZE];

    // seed rand with the num of secs since the epoch
    srand(time(NULL));
    for (int t = 0; t < SIZE; ++t)
    {
        array[t] = rand() % 100;
    }

    // find max & min
    int max = array[0];
    int min = array[0];
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
    printf("Array is [%d, %d]\n", min, max);

    // count 42s
    int cnt42 = 0;
    for (int t = 0; t < SIZE; ++t)
    {
        if (array[t] == 42)
        {
            ++cnt42; // :-)
        }
    }
    printf("Found %d 42s\n", cnt42);

    return 0;
}
