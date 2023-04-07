// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
