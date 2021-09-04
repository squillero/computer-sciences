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
    int foo;

    printf("Tell me a number: ");
    scanf("%d", &foo);
    printf("Hey, you told me %d!\n", foo);

    if (foo < 0)
    {
        printf("... and it is negative\n");
    }
    else
    {
        printf("d'ho....\n");
    }

    return 0;
}
