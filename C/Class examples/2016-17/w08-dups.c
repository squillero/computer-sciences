// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 4096

// PROTOS
int count(int arr[], int start, int end, int num);

int main()
{
    int array[ARRAY_SIZE];

    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        array[t] = rand() % 10;
    }
    printf("ARAY:");
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", array[t]);
    }
    printf("\n");

    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        int target = array[t];
        int prev_cnt = count(array, 0, t, target);
        int glob_cnt = count(array, 0, ARRAY_SIZE, target);
        if (prev_cnt == 0)
        {
            printf("Number %d appears %d times\n", target, glob_cnt);
        }
    }
    return 0;
}

int count(int arr[], int start, int end, int num)
{
    int r = 0;
    for (int t = start; t < end; ++t)
    {
        if (arr[t] == num)
        {
            ++r;
        }
    }
    return r;
}
