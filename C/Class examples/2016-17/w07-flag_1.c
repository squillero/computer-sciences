/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

int main()
{
    int array[LENGTH];

    for (int t = 0; t < LENGTH; ++t)
    {
        scanf("%d", &array[t]);
    }

    int at_least_one_neg = 0;
    for (int t = 0; t < LENGTH; ++t)
    {
        if (array[t] < 0)
        {
            at_least_one_neg = 1;
        }
    }

    if (at_least_one_neg == 0)
    {
        printf("WHOA!!!!!\n");
    }
    return 0;
}
