/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int lunch_time(int parameter)
{
    int t;
    for (t = 0; t < 10; ++t)
    {
        printf("lunch time!!!!\n");
    }
    return t * parameter;
}

int main()
{
    int t = 42;
    int z = lunch_time(23);
    printf("%d\n", z);
    return 0;
}
