/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 40

int main()
{
    printf("Hello arrays!!\n");

    int foo;
    int bar[LENGTH] = {0};
    int baz[LENGTH];

    // INIT
    // bar <- {42, ..., 42}
    for (int t = 0; t < LENGTH; t = t + 1)
    {
        bar[t] = 42;
    }

    // COPY SINGLE ELEMENT
    bar[13] = baz[13];

    // COPY WHOLE ARRAY
    // bar <- baz
    for (int t = 0; t < LENGTH; t = t + 1)
    {
        bar[t] = baz[t]; // single element copy
    }

    // print
    printf("bar =");
    for (int t = 0; t < LENGTH; t = t + 1)
    {
        printf(" %d", bar[t]);
    }
    printf("\n");

    // CHECK bar == baz
    int equal = 1;
    for (int t = 0; t < LENGTH; t = t + 1)
    {
        if (bar[t] != baz[t])
        {
            equal = 0;
        }
    }
    if (equal == 1)
    {
        printf("bar == baz!\n");
    }

    // CHECK NOT EQL (ELEM BY ELEM)
    int ebeeq = 1;
    for (int t = 0; t < LENGTH; t = t + 1)
    {
        if (bar[t] == baz[t])
        {
            ebeeq = 0;
        }
    }
    if (ebeeq == 1)
    {
        printf("bar[t] is NEVER equal to baz[t]!\n");
    }

    return 0;
}
