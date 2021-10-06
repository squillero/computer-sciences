/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define ROWS 10
#define COLUMNS 50

int main()
{
    for (int r = 0; r < ROWS; r = r + 1)
    {
        for (int c = 0; c < COLUMNS; c = c + 1)
        {
            if (r == 0 || r == ROWS - 1 ||
                c == 0 || c == COLUMNS - 1 ||
                (r + c) % 3 == 0)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
