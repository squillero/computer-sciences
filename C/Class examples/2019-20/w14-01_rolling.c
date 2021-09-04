/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

int main()
{
    int circular_array[ARRAY_SIZE];
    int pos;

    srand(time(NULL));

    printf("Let's roll!\n");
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        circular_array[t] = rand() % 10000;
    }
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf("%2d) %d\n", t, circular_array[t]);
    }

    printf("\nEnter index: ");
    scanf("%d", &pos);
    for (int t = 0; t < 5; ++t)
    {
        printf("%2d) %d\n", pos, circular_array[pos]);
        pos = (pos + 1) % ARRAY_SIZE; // ++pos;
    }

    printf("\nEnter index: ");
    scanf("%d", &pos);
    for (int t = 0; t < 5; ++t)
    {
        printf("%2d) %d\n", pos, circular_array[pos]);
        pos = (ARRAY_SIZE + pos - 1) % ARRAY_SIZE;
    }

    return 0;
}
