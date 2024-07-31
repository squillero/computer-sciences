// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
