// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main()
{
    int array[ARRAY_SIZE];

    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        array[t] = rand() % 100;
    }
    printf("Original array:");
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", array[t]);
    }
    printf("\n");

    int already_sorted = 1;
    for (int t = 1; t < ARRAY_SIZE; ++t)
    {
        if (array[t] < array[t - 1])
        {
            already_sorted = 0;
        }
    }
    if (already_sorted == 1)
    {
        printf("Whoa! Sorted!!!\n");
    }

    // SELECTION SORT
    // find smallest
    // save & remove it

    int array_size = ARRAY_SIZE;

    while (array_size > 0)
    {
        // find index of min
        int i_max = 0;
        for (int t = 1; t < array_size; ++t)
        {
            if (array[t] > array[i_max])
            {
                i_max = t;
            }
        }
        // put in last & "delete"
        printf("Swap: %d <-> %d\n", array[i_max], array[array_size - 1]);
        int tmp = array[array_size - 1];
        array[array_size - 1] = array[i_max];
        array[i_max] = tmp;
        --array_size;

        printf("Original array:");
        for (int t = 0; t < array_size; ++t)
        {
            printf(" %d", array[t]);
        }
        printf(" ||");
        for (int t = array_size; t < ARRAY_SIZE; ++t)
        {
            printf(" %d", array[t]);
        }
        printf("\n");
        /**
        printf("Sorted array  :");
        for(int t = 0; t < sorted_array_size; ++t) {
            printf(" %d", sorted_array[t]);
        }
        printf(" ||");
        for(int t = sorted_array_size; t < ARRAY_SIZE; ++t) {
            printf(" %d", sorted_array[t]);
        }
        printf("\n");
        **/
    }

    return 0;
}
