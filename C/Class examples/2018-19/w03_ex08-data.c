// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define NUM_WHOAS 5
#define FOO 'x'
#define BAR(X) (X * X)

int loosing_point_at_the_exam = 10;

int main()
{
    int x = 42;
    int y = 42;

    printf("Test: %d\n", x + y);

    if (x == y)
    {
        int z = 21;
        if (z % 2 == 1)
        {
            printf("Test: %d\n", x + y - z);
        }
    }

    return 0;
}
