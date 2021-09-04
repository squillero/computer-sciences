/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define ever (;;)
#define true (1 == 1)

int main()
{
    int sum = 0;
    int counter = 0;
    int num;

    for
        ever
        { // don't do that!
            printf(":");
            scanf("%d", &num);
            if (num < 0)
                break;
            sum = sum + num;
            counter = counter + 1;
        }

    printf("Avg is %g\n", 1.0 * sum / counter);

    return 0;
}
