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
    int t;

    t = 0;
    while (t < 1000)
    {
        printf("%d Whoa!\n", t);
        if (t == 3)
        {
            printf("I'm failing the exam :-)\n");
            break;
        }
        t = t + 1;
    }
    return 0;
}
