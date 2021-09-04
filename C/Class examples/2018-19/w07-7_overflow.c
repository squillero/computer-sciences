/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char c1, c2;
    unsigned char s;

    c1 = 99;
    c2 = 123;
    s = c1 - c2;

    printf("%d - %d = %d\n", c1, c2, s);

    // char test = 'a';
    // char test = 70 + 9;
    // printf("%d %c\n", test, test);

    return 0;
}
