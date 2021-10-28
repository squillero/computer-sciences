// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 42;
    int i2 = -42;
    double d = 0.007;

    // integers
    printf("[%d]\n", i);
    printf("[%8d]\n", i);
    printf("[%08d]\n", i);
    // negative
    printf("[%8d]\n", i2);
    printf("[%08d]\n", i2);
    // positive
    printf("[%+8d]\n", i);
    printf("[%-8d]\n", i);
    printf("[%+08d]\n", i);

    printf("[%---------------8d] **\n", i);
    printf("[%+-8d]\n", i);
    printf("[%+-8d]\n", i2);

    // floating point
    printf("[----------]\n");
    printf("[%+10.4f]\n", d);
    printf("[%+10.4f]\n", 0.0);
    printf("[%+.4f]\n", 0.0);
    printf("[%-+10.4f]\n", 0.33333333);
    printf("[%-+10.4f]\n", 0.77777777);
    printf("[%+-10.4f]\n", 0.77777777);

    printf("%g\n", 98457345.0 * 98457345.0);
    printf("[%e]\n", d);
    printf("[%.2E]\n", d);

    return 0;
}
