/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGIT 8

int main()
{
    int binary[MAX_DIGIT];
    printf("Insert number (%d digits): ", MAX_DIGIT);
    for (int d = 0; d < MAX_DIGIT; ++d)
    {
        scanf("%d", &binary[MAX_DIGIT - d - 1]);
    }

    int value = 0;
    int weight = 1;
    for (int d = 0; d < MAX_DIGIT; ++d)
    {
        value += binary[d] * weight;
        weight *= 2;
    }
    printf("Value: %d\n", value);

    return 0;
}
