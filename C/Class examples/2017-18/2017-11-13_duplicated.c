/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define N 4096

int main()
{
    int array[N];
    int num_elements;

    printf("Enter values (end with <0)\n");
    // KISS
    num_elements = 0;
    int val;
    do
    {
        scanf("%d", &val);
        array[num_elements++] = val; // oh yeah!
    } while (val >= 0);
    --num_elements;

    // debug print
    printf("Array (%d elements):", num_elements);
    for (int t = 0; t < num_elements; ++t)
    {
        printf(" %d", array[t]);
    }
    printf("\n");

    // find duplicates (???)
    for (int t = 0; t < num_elements; ++t)
    {
        for (int u = t + 1; u < num_elements; ++u)
        {
            if (array[t] == array[u])
            {
                printf("Yeuch, %d is duplicated\n", array[t]);
            }
        }
    }

    // pointb
    //int array2[num_elements]; // don't do it, it's a VLA
    int array2[N]; // safer
    int num_elements_in_array2;
    int target_number;
    scanf("%d", &target_number);
    num_elements_in_array2 = 0;
    for (int t = 0; t < num_elements; ++t)
    {
        if (array[t] == target_number)
        {
            // Found @ position t!!!!
            array2[num_elements_in_array2++] = t; // ie. append
        }
    }

    printf("Value %d is in positions", target_number);
    for (int t = 0; t < num_elements_in_array2; ++t)
    {
        printf(" %d", array2[t]);
    }
    printf("\n");

    return 0;
}
