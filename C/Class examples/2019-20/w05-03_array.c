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

#define ARRAY_SIZE 10000
#define RAND_MAX 100
#define THE_NUMBER 42

int main()
{
    int array[ARRAY_SIZE];

    srand(time(NULL));
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        array[t] = rand() % RAND_MAX;
    }

    // check for the number
    int counter = 0;
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        if (array[t] == THE_NUMBER)
        {
            ++counter;
        }
    }
    if (counter > 0)
    {
        printf("Oh yeah! I found it...\n");
    }

    return 0;
}
