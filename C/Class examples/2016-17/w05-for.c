/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    printf("LOOPS!\n");

    t = 0; // INIT
    while (t < 10)
    {                                   // TEST
        printf("Looping (%d)...\n", t); // BODY
        t = t + 1;                      // UPDATE
    }

    printf("goodbye cruel world!\n");
    return 0;
}
