/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define DIM 12
int Table[DIM][DIM];

void fill(void);
void print(void);
void sum_rows(int *);
void sum_cols(int *);

int main()
{
    fill();
    print();

    int tmp_array[DIM];

    sum_rows(tmp_array); // or sum_rows(&tmp_array[0]);
    printf("\nRows:");
    for (int t = 0; t < DIM; ++t)
    {
        printf(" %d", tmp_array[t]);
    }
    printf("\n");

    sum_cols(tmp_array); // or sum_rows(&tmp_array[0]);
    printf("\nColumns:");
    for (int t = 0; t < DIM; ++t)
    {
        printf(" %d", tmp_array[t]);
    }
    printf("\n");

    return 0;
}

void fill(void)
{
    for (int t = 0; t < DIM; ++t)
    {
        for (int u = 0; u < DIM; ++u)
        {
            Table[t][u] = (t + 1) * (u + 1);
        }
    }
}

void print(void)
{
    for (int t = 0; t < DIM; ++t)
    {
        for (int u = 0; u < DIM; ++u)
        {
            printf("%4d", Table[t][u]);
        }
        printf("\n");
    }
}

void sum_rows(int *its_fine)
{
    for (int t = 0; t < DIM; ++t)
    {
        its_fine[t] = 0;
    }

    for (int t = 0; t < DIM; ++t)
    {
        for (int u = 0; u < DIM; ++u)
        {
            its_fine[t] += Table[t][u];
        }
    }
}

void sum_cols(int *its_fine)
{
    for (int t = 0; t < DIM; ++t)
    {
        its_fine[t] = 0;
    }

    for (int t = 0; t < DIM; ++t)
    {
        for (int u = 0; u < DIM; ++u)
        {
            its_fine[u] += Table[t][u];
        }
    }
}
