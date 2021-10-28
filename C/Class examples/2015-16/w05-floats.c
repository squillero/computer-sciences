// Copyright © 2015-2016 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    double d;
    int bit;
    int val;

    t = 0;
    val = 0;
    while (t < 8)
    {
        scanf("%d", &bit);
        val = 2 * val + bit;
        t = t + 1;
    }
    printf("Val: %d\n", val);

    return 0;
}
