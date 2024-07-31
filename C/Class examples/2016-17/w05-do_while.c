// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("World hello!\n");

    int n = 10;
    do
    {
        printf("%d\n", n);
        n = n - 1;
    } while (n >= 0);
    printf("BANG\n");
    return 0;
}
