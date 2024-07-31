// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    int t;

    t = 0;
    while (t < 30)
    {
        x = pow(2.0, (double)t);
        printf("%f\n", x);

        t = t + 1;
    }

    printf("Hello world!\n");
    return 0;
}
