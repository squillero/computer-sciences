// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 16
#define LARGE_ARRAY_SIZE 8192

int main()
{
    int array1[ARRAY_SIZE];
    int array2[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, -7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int array3[ARRAY_SIZE] = {-1, -2, -3};
    int array4[] = {1, 2, 3, 4, 5};

    int array5[LARGE_ARRAY_SIZE] = {0}; // 0 0 0 ... 0
    int array6[LARGE_ARRAY_SIZE] = {1}; // 1 0 0 ... 0

    printf("That's all folks...");

    return 0;
}
