// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t = 999;
    do
    {
        printf("do ");
        t = t + 1;
    } while (t < 10);
    printf("while!\n");

    return 0;
}
