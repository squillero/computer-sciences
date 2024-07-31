// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var;

    scanf("%d", &var);

    switch (var / 2 + 1)
    {
    case 1:
        printf("One!\n");
        break;
    case 2:
        printf("Two!\n");
        break;
    case 99:
        printf("99!\n");
        break;
    default:
        printf("D'ho");
    }
    printf("Hello world!\n");
    return 0;
}
