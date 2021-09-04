/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUM_WHOAS 5
#define FOO 'x'
#define BAR(X) (X * X)

int loosing_point_at_the_exam = 10;

int main()
{
    int x = 42;
    int y = 42;

    printf("Test: %d\n", x + y);

    if (x == y)
    {
        int z = 21;
        if (z % 2 == 1)
        {
            printf("Test: %d\n", x + y - z);
        }
    }

    return 0;
}
