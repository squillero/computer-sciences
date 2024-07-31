// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define THE_ANSWER 42

int main()
{
    int a, b;

    a = 23;
    b = 10;

    printf("a=%d, b=%d\n", a, b);

    {
        int c = 17;
        int a = 42;
        printf("a=%d, b=%d, c=%d\n", a, b, c);
    }

    printf("a=%d, b=%d\n", a, b);

    return 0;
}
