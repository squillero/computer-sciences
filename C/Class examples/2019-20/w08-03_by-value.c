/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN 30

int Sudoku[9][9];

int foo(int x)
{
    printf("%d\n", x);
    --x;
    return x;
}

int bar(int v[], int length)
{
    for (int t = 0; t < length; ++t)
    {
        v[t] = -1;
    }
    return 0;
}

int main()
{
    int x = 42;

    foo(x + 1);
    printf("x is %d\n", x);

    int array[ARRAY_LEN] = {0};
    for (int t = 0; t < ARRAY_LEN; ++t)
    {
        printf("%d ", array[t]);
    }
    printf("\n");
    bar(&array[1], ARRAY_LEN - 2);
    for (int t = 0; t < ARRAY_LEN; ++t)
    {
        printf("%d ", array[t]);
    }
    printf("\n");

    return 0;
}
