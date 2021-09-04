/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int terminate;
    int t;
    printf("LOOPS!\n");

    terminate = 0; // INIT
    while (terminate == 0)
    {                           // TEST
        printf("Looping...\n"); // BODY
        scanf("%d", &t);
        if (t > 10 && t < 15)
        {
            terminate = 1;
        }
    }

    printf("goodbye cruel world!\n");
    return 0;
}
