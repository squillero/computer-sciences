// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // -42 * x*x*x*x + 3 * x*x - 2 * x + 2

    double i1 = .4;
    double i2 = .5;

    double val = 99;
    int n = 0;
    while (fabs(val) > 1.0e-12)
    {
        double x = (i1 + i2) / 2.0;
        val = -42 * x * x * x * x + 3 * x * x - 2 * x + 2;
        printf("%3d- f(%.20f) = %g\n", n, x, val);

        if (val > 0.0)
        {
            i1 = x;
        }
        else
        {
            i2 = x;
        }

        n += 1;
    }

    return 0;
}
