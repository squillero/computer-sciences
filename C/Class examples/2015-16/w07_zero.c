/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 9000
#define MAX 100

int main()
{
    int v[NUM];
    int t;

    srand(time(NULL));
    for (t = 0; t < NUM; t += 1)
    {
        v[t] = rand() % MAX;
    }

    int at_least_one_zero;

    at_least_one_zero = 0;
    for (t = 0; t < NUM; t += 1)
    {
        if (v[t] == 0)
        {
            at_least_one_zero = 1;
        }
    }

    if (at_least_one_zero == 1)
    {
        printf("At least one zero!!!!!!!!!!!!!\n");
    }

    return EXIT_SUCCESS;
}
