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
    signed char foo;
    unsigned char bar;

    foo = 0;
    bar = 0;
    for (int t = 0; t < 500; ++t)
    {
        printf("foo:%d  bar:%d\n", foo, bar);
        ++foo;
        ++bar;

        if (t % 50 == 0)
        {
            int x;
            scanf("%d", &x);
        }
    }

    return 0;
}
