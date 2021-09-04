/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define DIM 10

void PrintArray(int v[]);
void Init(int v[]);
int SeekValue(int v[], int val);

int SeekValue2(int in[], int val, int out[]);

int main()
{
    int array[DIM];
    int v;

    PrintArray(array);
    scanf("%d", &v);
    if (SeekValue(array, v) != -1)
    {
        printf("Whoa!\n");
    }

    return EXIT_SUCCESS;
}

int SeekValue(int v[], int val)
{
    int t;

    for (t = 0; t < DIM; ++t)
    {
        if (v[t] == val)
        {
            return t;
        }
    }
    return -1;
}

void PrintArray(int v[])
{
    int t;
    for (t = 0; t < DIM; ++t)
    {
        printf(" %d", v[t]);
    }
    printf("\n");
    v = 0;
}

void Init(int v[])
{
    int t;
    printf("Initiliazing array @%p\n", v);
    for (t = 0; t < DIM; ++t)
    {
        v[t] = 0;
    }
}
