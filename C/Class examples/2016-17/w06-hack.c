/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[8] = {0};
    int foo = 42;

    printf("foo: %d\n", foo);
    for (int t = 0; t < 12; ++t)
    {
        array[t] = -1;
        printf("%d: foo: %d\n", t, foo);
    }

    return 0;
}
