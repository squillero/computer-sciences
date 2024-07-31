// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define NUM 100

int main()
{
    short int sum = 0;

    for (int t = 0; t < NUM; ++t)
    {
        int r = rand() % 1000;
        printf("%d + %d", sum, r);
        sum += r;
        printf(" = %d\n", sum);
    }

    return 0;
}
