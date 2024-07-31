// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    while (i < 3)
    {
        printf("Whoa!\n");
        i = i + 1;
    }

    while (i < 2)
    {
        printf("d'ho!?\n");
        i = i + 1;
    }

    return 0;
}
