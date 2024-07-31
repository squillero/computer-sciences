// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 4096

int main()
{
    int array[MAX_SIZE];
    int array_size = 0;

    do
    {
        scanf("%d", &array[array_size]);
        ++array_size;
    } while (array[array_size - 1] != -1);
    --array_size;

    // print using the size
    for (int t = 0; t < array_size; ++t)
    {
        printf("%d) %d\n", t, array[t]);
    }

    // print using the marker
    for (int t = 0; array[t] != -1; ++t)
    {
        printf("%d) %d\n", t, array[t]);
    }

    return 0;
}
