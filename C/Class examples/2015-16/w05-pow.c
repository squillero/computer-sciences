/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    int t;

    t = 0;
    while (t < 30)
    {
        x = pow(2.0, (double)t);
        printf("%f\n", x);

        t = t + 1;
    }

    printf("Hello world!\n");
    return 0;
}
