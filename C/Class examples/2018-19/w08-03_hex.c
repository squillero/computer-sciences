// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed char x = 0x7f;

    printf("x = 0x%02x\n", x);
    printf("%d\n", x);
    ++x;
    printf("x = 0x%02x\n", x);
    printf("%d\n", x);

    return 0;
}
