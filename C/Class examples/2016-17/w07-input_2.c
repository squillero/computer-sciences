// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int main()
{
    int array[MAX_SIZE];
    int index = 0;

    while (index < MAX_SIZE)
    {
        scanf("%d", &array[index]);
        if (array[index] >= 1 && array[index] <= 30)
        {
            ++index;
        }
        else
        {
            printf("Yeuch!?\n");
        }
    }

    for (int t = 0; t < MAX_SIZE; ++t)
    {
        printf("%d) %d\n", t, array[t]);
    }

    return 0;
}
