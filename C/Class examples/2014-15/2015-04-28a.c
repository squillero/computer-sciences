/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define N 8

int main()
{
    int i;
    int v[N];
    int w[N];

    for (i = 0; i < N; ++i)
    {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < N; ++i)
    {
        w[i] = v[i];
    }

    printf("Hello world!\n");
    return 0;
}
