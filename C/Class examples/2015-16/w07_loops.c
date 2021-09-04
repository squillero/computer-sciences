/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUM 10

/* PROTOS */
void PrintR(int rows, int cols);
void PrintT(int dim);

int main()
{
    int v;

    for (v = 1; v < NUM; v += 1)
    {
        PrintT(v);
        printf("\n");
    }
    return 0;
}

void PrintR(int rows, int cols)
{
    int t, u;
    for (u = 0; u < rows; u += 1)
    {
        for (t = 0; t < cols; t += 1)
        {
            printf("#");
        }
        printf("\n");
    }
    return;
}

void PrintT(int dim)
{
    int t, u;
    for (u = 0; u < dim; u += 1)
    {
        t = 0;
        while (t < dim - u - 1)
        {
            printf(" ");
            t += 1;
        }
        while (t < dim)
        {
            printf("#");
            t += 1;
        }
        printf("\n");
    }
    return;
}
