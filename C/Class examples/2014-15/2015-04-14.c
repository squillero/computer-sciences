/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    int array[SIZE];
    int t;
    int maxNum;

    for (t = 0; t < SIZE; ++t)
    {
        printf("Element %d: ", t);
        scanf("%d", &array[t]);
    }

    maxNum = array[0];
    for (t = 1; t < SIZE; t++)
    { // TYPO
        if (array[t] > maxNum)
        {
            maxNum = array[t];
        }
    }
    printf("Hey, the max is %d\n", maxNum);

    int oddFlag = 0;
    for (t = 0; t < SIZE; t++)
    {
        if (array[t] % 2 == 1)
            oddFlag = 1;
    }
    if (oddFlag == 1)
    {
        printf("At least on odd num!\n");
    }
    else
    {
        printf("Yeuch, no odd nums\n");
    }

    return EXIT_SUCCESS;
}
