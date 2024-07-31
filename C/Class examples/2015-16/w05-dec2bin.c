// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num;

    printf("Insert a number :");
    scanf("%u", &num);

    while (num > 0)
    {
        printf("%d", num % 2);
        num = num / 2;
    }
    printf("\n\nNow read from right to left!\n");

    return 0;
}
