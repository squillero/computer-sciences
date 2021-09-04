/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 8192

int main()
{
    int array[ARRAY_SIZE];
    int array_size;
    int max_value;

    printf("Array size: ");
    scanf("%d", &array_size);
    printf("Max value: ");
    scanf("%d", &max_value);

    // initialization
    srand(time(NULL));
    for (int t = 0; t < array_size; ++t)
    {
        array[t] = rand() % max_value + 1;
    }
    printf("ARRAY:");
    for (int t = 0; t < array_size; ++t)
    {
        printf(" %d", array[t]);
    }
    printf("\n");

    int all_unique_elements = 1;
    for (int u = 0; u < array_size; ++u)
    {
        // look for element u
        int target = array[u];
        int at_least_one = 0; // a flag! much better
        for (int t = 0; t < u && at_least_one == 0; ++t)
        {
            if (array[t] == target)
            {
                at_least_one = 1;
            }
        }
        if (at_least_one != 0)
        {
            all_unique_elements = 0;
            //printf("Found %d in array!\n", target);
        }
    }
    if (all_unique_elements == 1)
    {
        printf("Whoa! The array does not contain duplicated elements!!!\n");
    }

    return 0;
}
