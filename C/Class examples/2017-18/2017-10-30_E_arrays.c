// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

int main()
{
    int my_first_array[SIZE];

    scanf("%d", &my_first_array[0]);
    for (int t = 1; t < SIZE; t = t + 1)
    {
        my_first_array[t] = my_first_array[0];
    }

    return 0;
}
