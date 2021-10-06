/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    for (int r = 0; r < SIZE; r = r + 1)
    {
        for (int c = 0; c < r; c = c + 1)
        {
            printf(" ");
        }
        for (int c = 0; c < 10 - r; c = c + 1)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
