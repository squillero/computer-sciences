// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
