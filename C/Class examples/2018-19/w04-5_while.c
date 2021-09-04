/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define TABLE_MAX 10

int main()
{
    /**
    int bob = 0;                // init
    while(bob < 10) {           // condition
        printf(" %d", bob);     // body
        bob = bob + 1;          // closing (update)
    }
    printf("\n");
    **/

    for (int alice = 0; alice < TABLE_MAX; alice = alice + 1)
    {
        for (int bob = 0; bob < TABLE_MAX; bob = bob + 1)
        {
            printf(" %4d", (1 + alice) * (1 + bob));
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
