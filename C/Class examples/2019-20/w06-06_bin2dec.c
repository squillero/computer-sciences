// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGIT 8

int main()
{
    int binary[MAX_DIGIT];
    printf("Insert number (%d digits): ", MAX_DIGIT);
    for (int d = 0; d < MAX_DIGIT; ++d)
    {
        scanf("%d", &binary[MAX_DIGIT - d - 1]);
    }

    int value = 0;
    int weight = 1;
    for (int d = 0; d < MAX_DIGIT; ++d)
    {
        value += binary[d] * weight;
        weight *= 2;
    }
    printf("Value: %d\n", value);

    return 0;
}
