/*  ######       /***********************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           *
|*  ####   \     * https://github.com/squillero/computer-science             *
|*   ###G  c\    *                                                           *
|*   ##     _\   * Copyright © 2015 Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>            *
\*   |   _/      \***********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int bit;
    int weight;
    int num;

    num = 0;
    weight = 128;
    t = 0;
    while (t < 8)
    {
        scanf("%d", &bit);
        num = num + weight * bit;

        weight = weight / 2;
        t = t + 1;
    }

    printf("Value: %d\n", num);

    return 0;
}
