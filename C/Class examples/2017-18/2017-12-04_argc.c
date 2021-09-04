/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Hello argc/argv!\n");

    printf("ARGC: %d\n", argc);
    for (int t = 0; t < argc; ++t)
    {
        printf("Argument %d: %s\n", t, argv[t]);
    }
    return 0;
}
