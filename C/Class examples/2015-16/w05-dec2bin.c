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
    unsigned int num;

    printf("Insert a number :");
    scanf("%u", &num);

    while (num > 0)
    {
        printf("%d", num % 2);
        num = num / 2;
    }
    printf("\n\nNow read from right to left!\n");

    return 0;
}
