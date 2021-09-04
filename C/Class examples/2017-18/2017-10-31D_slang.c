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
    printf("Hello slang!\n");

    int t = 0;

    t += 4;  // t = t + 4;
    t *= 10; // t = t * 10;
    t -= 8;  // t = t - 8;

    int foo;
    int bar;

    foo = 42;
    bar = foo-- * 10;

    foo = 42;
    bar = --foo * foo++;

    return 0;
}
