/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUM 100

int main()
{
    short int sum = 0;

    for (int t = 0; t < NUM; ++t)
    {
        int r = rand() % 1000;
        printf("%d + %d", sum, r);
        sum += r;
        printf(" = %d\n", sum);
    }

    return 0;
}
