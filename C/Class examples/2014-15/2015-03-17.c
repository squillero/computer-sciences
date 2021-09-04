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
    int num;

    num = 0;
    while (num != 42)
    {
        printf("Tell me the answer of the question about life, universe ");
        printf("and everything else:");
        scanf("%d", &num);
        if (num != 42)
        {
            if (num > 42)
            {
                printf("TOO BIG\n");
            }
            else
            {
                printf("TOO SMALL\n");
            }
        }
    }
    printf("ok!\n");

    return EXIT_SUCCESS;
}
