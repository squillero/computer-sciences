/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

int main()
{
    int my_first_array[SIZE];

    scanf("%d", &my_first_array[0]);
    for (int t = 1; t < SIZE; t = t + 1)
    {
        my_first_array[t] = my_first_array[0];
    }

    return 0;
}
