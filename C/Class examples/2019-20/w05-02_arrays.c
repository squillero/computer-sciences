// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main()
{
    int variable;
    int array[ARRAY_SIZE];

    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        array[t] = t;
    }

    int t = 3;
    array[t * 2 - 1] = ++array[4] - --array[6];

    return 0;
}
