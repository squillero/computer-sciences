/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    for (int r = 0; r < SIZE; r = r + 1)
    {
        for (int c = 0; c < r; c = c + 1)
        {
            printf(" ");
        }
        for (int c = 0; c < 10 - r; c = c + 1)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
