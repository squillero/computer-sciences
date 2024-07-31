// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char a = 15;
    unsigned char b = 240;
    unsigned char c = a ^ b;

    printf("%d %d -> %d\n", a, b, c);
    return 0;
}
