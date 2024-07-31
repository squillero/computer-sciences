// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define STEPS 500000

int main()
{
    double pi = 0.0;

    double sign = 1.0;
    for (int s = 0; s < STEPS; s = s + 1)
    {
        pi = pi + sign * 4.0 / (1.0 + s * 2.0);

        printf("Pi: %.10f\n", pi);

        sign = sign * -1.0;
    }

    return 0;
}
