// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

/*
 * Simplistic binary 2 decimal converter
 * Challenge: rewrite it without if & without the variable weight
 */

int main()
{
    int t;
    int val, weight;

    val = 0;
    weight = 128;
    t = 0;
    while (t < 8)
    {
        int b;

        scanf("%d", &b);
        if (b == 1)
        {
            val = val + weight;
        }

        weight = weight / 2;
        t = t + 1;
    }
    printf("Val = %d\n", val);

    return 0;
}
