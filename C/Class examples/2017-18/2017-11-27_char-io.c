// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello char-based i/o!\n");

    char c;
    do
    {
        c = getchar();
        printf("%c", c);
    } while (c != EOF);

    return 0;
}
