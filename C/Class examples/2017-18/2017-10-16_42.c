/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define THE_ANSWER 42

int main()
{
    int a, b;

    a = 23;
    b = 10;

    printf("a=%d, b=%d\n", a, b);

    {
        int c = 17;
        int a = 42;
        printf("a=%d, b=%d, c=%d\n", a, b, c);
    }

    printf("a=%d, b=%d\n", a, b);

    return 0;
}
