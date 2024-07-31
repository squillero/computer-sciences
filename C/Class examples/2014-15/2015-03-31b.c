// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int digits;

    printf("Digits: ");
    scanf("%d", &digits);

    int val = 0;
    t = 0;
    while (t < digits)
    {
        int b;
        scanf("%d", &b);

        val = 2 * val + b;
        t = t + 1;
    }
    printf("\nVAL: %d\n", val);

    return 0;
}
