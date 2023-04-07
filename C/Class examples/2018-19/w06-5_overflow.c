// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
