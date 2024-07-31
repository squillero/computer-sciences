// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int t = 0; t < 10; t = t + 1)
    {
        if (t % 2 == 1)
            continue;
        printf("%d) Loosing points at the exam!\n", t);
    }
    return 0;
}
