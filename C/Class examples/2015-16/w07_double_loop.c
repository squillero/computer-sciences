/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUM 1000
#define MAX 1000

int main()
{
    int v[NUM];
    int t, u;

    srand(time(NULL));
    for (t = 0; t < NUM; t += 1)
    {
        v[t] = rand() % MAX;
    }

    int array_contains_dups;
    array_contains_dups = 0;
    for (t = 0; t < NUM; t += 1)
    {
        for (u = t + 1; u < NUM; u += 1)
        {
            if (v[t] == v[u])
            {
                array_contains_dups = 1;
            }
        }
    }
    // better?

    if (array_contains_dups == 1)
    {
        printf("Found dups!\n");
    }
    return 0;
}
