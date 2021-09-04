/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 4

int main()
{
    int array[LENGTH];

    for (int t = 0; t < LENGTH; ++t)
    {
        scanf("%d", &array[t]);
    }

    int all_positive = 1;
    int all_negative = 1;
    for (int t = 0; t < LENGTH; ++t)
    {
        if (array[t] >= 0)
        {
            all_negative = 0;
        }
        if (array[t] <= 0)
        {
            all_positive = 0;
        }
    }

    if (all_positive == 1 || all_negative == 1)
    {
        printf("WHOA!!!!!\n");
    }
    else
    {
        printf("yeuch\n");
    }
    return 0;
}
