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

int main()
{
    int stillsearching = 1;
    int target;
    int guess;

    srand(time(NULL));
    target = rand() % 100 + 1;
    printf("[shh...] target is %d\n", target);

    while (stillsearching == 1)
    {
        printf("Choose anumber from 1 to 100\n");
        scanf("%d", &guess);

        if (target == guess)
        {
            stillsearching = 0;
            printf("tada\n");
        }
        else if (target > guess)
        {
            printf("Too low, try again !\n");
        }
        else
        {
            printf("Too high, try again!\n");
        }
    }

    return 0;
}
