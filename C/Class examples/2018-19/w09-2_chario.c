// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Type 1 char: ");
    int c = getchar();
    printf("Hey! You typed %d (%c)\n", c, c);
    c = getchar();
    printf("and %d (%c)\n", c, c);

    return 0;
}
