/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define FIBONACCI 10

int main()
{
    // f0 = 0, f1 = 1, ..., fn+2 = fn+1 + fn

    unsigned long long int Fn, Fn_1, Fn_2;

    Fn = 0;
    Fn_1 = 1;

    printf("%d %d", Fn, Fn_1); // KICKSTART

    for (int t = 2; t < FIBONACCI; t = t + 1)
    {
        Fn_2 = Fn_1 + Fn;
        printf(" %u", Fn_2);
        Fn = Fn_1;
        Fn_1 = Fn_2;
    }

    printf("\n");
    return 0;
}
