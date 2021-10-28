// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

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
