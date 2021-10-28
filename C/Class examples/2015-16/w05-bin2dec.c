// Copyright © 2015-2016 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int bit;
    int weight;
    int num;

    num = 0;
    weight = 128;
    t = 0;
    while (t < 8)
    {
        scanf("%d", &bit);
        num = num + weight * bit;

        weight = weight / 2;
        t = t + 1;
    }

    printf("Value: %d\n", num);

    return 0;
}
