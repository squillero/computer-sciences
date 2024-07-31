// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("if - else if\n");

    printf("Yes or no: ");
    char c;
    scanf("%c", &c);

    switch (c)
    {
    case 'y':
    case 'Y':
    case 's':
    case 'S':
    case 't':
    case 'q':
    case 80 + 3:
        printf("Oh yeah!\n");
        break;
    default:
        printf("No\n");
    }

    return 0;
}
