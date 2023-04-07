// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;

    printf(": ");
    scanf("%c", &c);

    switch (c)
    {
    case 'y':
    case 'Y': // "ie. case 89:"
        printf("Cool\n");
        break;
    default:
        printf("D'ho!\n");
    }

    return 0;
}
