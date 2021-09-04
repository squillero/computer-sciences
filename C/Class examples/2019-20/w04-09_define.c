/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_P_TABLE 10

int main()
{
    for (int t = 1; t <= MAX_P_TABLE; t = t + 1)
    {
        // row
        for (int u = 1; u <= MAX_P_TABLE; u = u + 1)
        {
            printf("%6d ", t * u);
        }

        printf("\n");
    }
    return 0;
}
