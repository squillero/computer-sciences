// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

int main()
{
    int array[LENGTH];

    for (int t = 0; t < LENGTH; ++t)
    {
        scanf("%d", &array[t]);
    }

    int at_least_one_neg = 0;
    for (int t = 0; t < LENGTH; ++t)
    {
        if (array[t] < 0)
        {
            at_least_one_neg = 1;
        }
    }

    if (at_least_one_neg == 0)
    {
        printf("WHOA!!!!!\n");
    }
    return 0;
}
