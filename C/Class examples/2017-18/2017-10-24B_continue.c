// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int t = 0; t < 20; t = t + 1)
    {
        if (t == 3)
        {
            continue;
        }
        printf("Hello world %d\n", t);
    }
    return 0;
}
