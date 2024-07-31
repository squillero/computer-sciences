// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000
#define NUM_RANGE 50
#define TARGET_NUMBER 7

int main()
{
    int array[MAX_SIZE];

    // initialization
    srand(time(NULL)); // magic randomization
    for (int t = 0; t < MAX_SIZE; ++t)
    {
        array[t] = rand() % (NUM_RANGE + 1);
    }

    // counting
    int counter[NUM_RANGE + 1] = {0};
    for (int t = 0; t < MAX_SIZE; ++t)
    {
        ++counter[array[t]];
    }

    // finding max
    int max = counter[0];
    for (int t = 1; t < NUM_RANGE + 1; ++t)
    {
        if (counter[t] > max)
        {
            max = counter[t];
        }
    }

    // print ALL numbers appearing exactly max times
    printf("Number appearing %d times:", max);
    for (int t = 0; t < NUM_RANGE + 1; ++t)
    {
        if (counter[t] == max)
        {
            printf(" %d", t);
        }
    }
    printf("\n");

    return 0;
}
