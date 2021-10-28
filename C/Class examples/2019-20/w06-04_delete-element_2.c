// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

int main()
{
    int array[ARRAY_SIZE];
    int array_length = ARRAY_SIZE;

    srand(time(NULL));
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        array[t] = rand();
        printf("%02d) %d\n", t, array[t]);
    }

    // delete one element (shrink)
    for (;;)
    {
        printf("Element to delete: ");
        int index;
        scanf("%d", &index);

        // shuffling the array
        // array[index] = array[array_length - 1];

        // without shuffling
        for (int t = index; t < array_length - 1; ++t)
        {
            array[t] = array[t + 1];
        }

        array_length -= 1;
        for (int t = 0; t < array_length; ++t)
        {
            printf("%02d) %d\n", t, array[t]);
        }
        printf("------\n");
        for (int t = array_length; t < ARRAY_SIZE; ++t)
        {
            printf("%02d) %d\n", t, array[t]);
        }
    }

    return 0;
}
