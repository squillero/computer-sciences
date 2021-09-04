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
    printf("if - else if\n");

    printf("Yes or no: ");
    char c;
    scanf("%c", &c);

    switch (c)
    {
    case 'y':
    case 'Y':
    case 's':
    case 'S':
    case 't':
    case 'q':
    case 80 + 3:
        printf("Oh yeah!\n");
        break;
    default:
        printf("No\n");
    }

    return 0;
}
