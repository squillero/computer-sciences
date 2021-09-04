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
    int a, b;

    a = 10;
    b = 20;

    printf("a: %d / b: %d\n", a, b);

    b = a++ * 100;

    printf("a: %d / b: %d\n", a, b);

    // no
    a = a + 1;

    // almost
    a += 1;

    // good
    ++a;

    for (int t = 0; t < 10; ++t)
    {
    }

    return 0;
}
