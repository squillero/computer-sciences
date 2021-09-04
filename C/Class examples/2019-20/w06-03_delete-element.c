/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 20

int main()
{
    int array[ARRAY_SIZE];

    srand(time(NULL));
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        array[t] = rand();
        printf("%02d) %d\n", t, array[t]);
    }

    // delete one element (flag)
    int deleted[ARRAY_SIZE] = {0};

    for (;;)
    {
        printf("Element to delete: ");
        int index;
        scanf("%d", &index);
        deleted[index] = 1;
        for (int t = 0; t < ARRAY_SIZE; ++t)
        {
            if (deleted[t] == 0)
            {
                printf("%02d) %d\n", t, array[t]);
            }
            else
            {
                printf("%02d)\n", t);
            }
        }
    }

    return 0;
}
