/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

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
