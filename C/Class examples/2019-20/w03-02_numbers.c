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
    int a = 7;

    printf("a / 2 = %d\n", a / 2);

    double tmp = a / 2;
    printf("a / 2 = %g\n", tmp);

    // old school
    double tmp2 = a / 2.0;
    printf("a / 2 = %g\n", tmp2);

    // newer
    double tmp3 = (double)a / 2.0;
    printf("a / 2 = %g\n", tmp3);

    return 0;
}
