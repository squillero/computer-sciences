/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;

    printf(": ");
    scanf("%c", &c);

    switch (c)
    {
    case 'y':
    case 'Y': // "ie. case 89:"
        printf("Cool\n");
        break;
    default:
        printf("D'ho!\n");
    }

    return 0;
}
