/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

// Hello World$
// the$--------
// answer$-----
// is$---------
// 42$---------

int main(int argc, char *argv[])
{
    printf("I just got %d arguments\n", argc);
    for (int t = 0; t < argc; ++t)
    {
        printf("argv[%d] = ``%s''\n", t, argv[t]);
    }

    return EXIT_SUCCESS;
}
