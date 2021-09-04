/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

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
