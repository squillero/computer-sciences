// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 4

int main()
{
    int array[LENGTH];

    for (int t = 0; t < LENGTH; ++t)
    {
        scanf("%d", &array[t]);
    }

    int all_positive = 1;
    int all_negative = 1;
    for (int t = 0; t < LENGTH; ++t)
    {
        if (array[t] >= 0)
        {
            all_negative = 0;
        }
        if (array[t] <= 0)
        {
            all_positive = 0;
        }
    }

    if (all_positive == 1 || all_negative == 1)
    {
        printf("WHOA!!!!!\n");
    }
    else
    {
        printf("yeuch\n");
    }
    return 0;
}
