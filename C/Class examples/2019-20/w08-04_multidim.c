/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int Array2d[5][2] = {1, 2, 3, 4};

int main()
{
    for (int t = 0; t < 5; ++t)
    {
        for (int u = 0; u < 2; ++u)
        {
            printf("%4d", Array2d[t][u]);
        }
        printf("\n");
    }

    return 0;
}
