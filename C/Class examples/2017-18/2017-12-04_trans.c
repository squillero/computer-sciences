/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define DIMR 5
#define DIMC 10

int main()
{
    printf("Transpose!\n");

    int matrix[DIMR][DIMC] = {0};
    for (int r = 0; r < DIMR; ++r)
    {
        for (int c = 0; c < DIMC; ++c)
        {
            scanf("%d", &matrix[r][c]);
        }
    }

    for (int c = 0; c < DIMC; ++c)
    {
        for (int r = 0; r < DIMR; ++r)
        {
            printf("%5d", matrix[r][c]);
        }
        printf("\n");
    }

    return 0;
}
