// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
