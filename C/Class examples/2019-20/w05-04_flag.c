// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10000
#define RAND_MAX 100
#define THE_NUMBER 42

int main()
{
    int array[ARRAY_SIZE];

    srand(time(NULL));
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        array[t] = rand() % RAND_MAX;
    }

    // check for the number
    int found = 0;
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        if (array[t] == THE_NUMBER)
        {
            found = 1;
        }
    }
    if (found)
    {
        printf("Oh yeah! I found it...\n");
    }

    return 0;
}
