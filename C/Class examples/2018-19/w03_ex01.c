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
    double a;
    double b;

    scanf("%lg", &a);
    scanf("%lg", &b);

    double zap = a % b;

    if (a > b)
    {
        printf("Max is %g\n", a);
    }
    else
    {
        printf("Max is %g\n", b);
    }

    return 0;
}
