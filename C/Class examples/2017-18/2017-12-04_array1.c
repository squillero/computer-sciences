/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM1 5
#define DIM2 10

// Use global!
int MyGlobalMatrix[DIM1][DIM2];

void print_matrix(void)
{
    for (int i1 = 0; i1 < DIM1; ++i1)
    {
        for (int i2 = 0; i2 < DIM2; ++i2)
        {
            printf("%4d", MyGlobalMatrix[i1][i2]);
        }
        printf("\n");
    }
}

int main()
{
    printf("Welcome to the Matrix!\n");
    srand(time(NULL));

    for (int i1 = 0; i1 < DIM1; ++i1)
    {
        for (int i2 = 0; i2 < DIM2; ++i2)
        {
            MyGlobalMatrix[i1][i2] = rand() % 100;
        }
    }
    print_matrix();

    return 0;
}
