/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUM 12

/* Remember to use comments! */

int main()
{
    for (int r = 1; r <= NUM; r = r + 1)
    {
        // print row
        for (int c = 1; c <= NUM; c = c + 1)
        {
            // print cell
            printf("%5d", r * c);
        }
        // print newline
        printf("\n");
    }

    return 0;
}
