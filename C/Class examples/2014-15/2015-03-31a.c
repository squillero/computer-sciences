/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
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

    int weight = 1;
    t = 1;
    while (t < digits)
    {
        weight = weight * 2;
        t = t + 1;
    }
    weight = -weight;
    printf("Weight: %d\n", weight);

    int val = 0;
    t = 0;
    while (t < digits)
    {
        int b;
        scanf("%d", &b);

        val = val + (b * weight);
        if (t == 0)
        {
            weight = -weight;
        }
        weight = weight / 2;
        t = t + 1;
    }
    printf("\nVAL: %d\n", val);

    return 0;
}
