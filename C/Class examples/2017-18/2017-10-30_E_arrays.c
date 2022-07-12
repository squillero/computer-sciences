// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
