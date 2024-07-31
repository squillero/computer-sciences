// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b, c;

    printf("Fibonacci: 0 1");
    b = 0;
    c = 1;

    int i = 0;
    while (i < 100)
    {
        a = b;
        b = c;
        c = a + b;
        printf(" %d", c);
        i = i + 1;
    }
    printf("\n");

    return 0;
}
