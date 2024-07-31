// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGIT 12

int main()
{
    int binary[MAX_DIGIT];
    printf("Insert number (%d digits): ", MAX_DIGIT);
    for (int d = 0; d < MAX_DIGIT; ++d)
    {
        scanf("%d", &binary[d]);
    }

    int value = 0;
    for (int d = 0; d < MAX_DIGIT; ++d)
    {
        value = value * 2 + binary[d];
    }
    printf("Value: %d\n", value);

    return 0;
}
