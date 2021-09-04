/*  ######       /***********************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           *
|*  ####   \     * https://github.com/squillero/computer-science             *
|*   ###G  c\    *                                                           *
|*   ##     _\   * Copyright © 2015 Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>            *
\*   |   _/      \***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x_neg, x_pos;
    double x_zero;
    double val;

    printf("Insert x where f(x) < 0: ");
    scanf("%lf", &x_neg);
    printf("Insert x where f(x) > 0: ");
    scanf("%lf", &x_pos);

    printf("%.10f - %.10f\n", x_neg, x_pos);
    x_zero = (x_pos + x_neg) / 2.0;
    val = atan(pow(x_zero, 3.0) + 3 * x_zero + 1);
    while (fabs(val) > 1e-10)
    {
        // I need "floating point" abs
        if (val > 0.0)
        {
            x_pos = x_zero;
        }
        else
        {
            x_neg = x_zero;
        }
        printf("%.10f - %.10f\n", x_neg, x_pos);
        x_zero = (x_pos + x_neg) / 2.0;
        val = atan(pow(x_zero, 3.0) + 3 * x_zero + 1);
    }
    printf("f(%g) = %g\n", x_zero, val);
    return 0;
}
