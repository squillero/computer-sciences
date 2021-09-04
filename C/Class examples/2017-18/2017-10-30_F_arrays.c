/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

/*
 * Read list of # terminated by -1, print it backward
 * we assume less than SIZE numbers
 */

int main()
{
    int array[SIZE];

    int flag = 1;
    int pos = 0;
    while (flag == 1)
    {
        scanf("%d", &array[pos]);
        if (array[pos] == -1)
        {
            flag = 0;
        }
        else
        {
            pos = pos + 1;
        }
    }

    printf("Array:");
    for (int t = 0; t < pos; t = t + 1)
    {
        printf(" %d", array[t]);
    }
    printf("\n");

    printf("Array (rev):");
    for (int t = pos - 1; t >= 0; t = t - 1)
    {
        printf(" %d", array[t]);
    }
    printf("\n");

    return 0;
}
