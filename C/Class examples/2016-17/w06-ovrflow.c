// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char a = 254;
    unsigned char b = 2;
    unsigned char c = a + b;

    printf("%d + %d = %d\n", a, b, c);
    return 0;
}
