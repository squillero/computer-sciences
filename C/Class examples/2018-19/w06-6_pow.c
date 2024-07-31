// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int num = 1;

    int bits = 0;
    while (num != 0)
    {
        num *= 2;
        ++bits;
    }
    printf("bits: %d\n", bits);
    return 0;
}
