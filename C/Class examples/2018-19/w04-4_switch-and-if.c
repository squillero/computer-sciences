/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;

    scanf("%d", &val);

    if (val % 2 == 1 && val > 100)
    {
        printf("odd AND big! Whoa!\n");
    }
    else if (val % 2 == 1)
    {
        printf("odd!\n");
    }
    else if (val > 100)
    {
        printf("big!\n");
    }
    else if (val == 0)
    {
        printf("ZERO!\n");
    }
    else if (val < 0)
    {
        printf("negative!\n");
    }
    else
    {
        printf("neither odd nor big... and not negative and not zero\n");
    }

    return 0;
}
