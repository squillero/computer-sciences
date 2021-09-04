/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

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
