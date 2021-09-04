/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c;

    scanf("%lg", &a);
    scanf("%lg", &b);
    scanf("%lg", &c);
    printf("Solving %gx**2 + %gx + %g == 0\n", a, b, c);

    if (a != 0.0)
    {
        double delta = b * b - 4.0 * a * c;
        if (delta >= 0.0)
        {
            double x1 = (-b + sqrt(delta)) / (2.0 * a);
            double x2 = (-b - sqrt(delta)) / (2.0 * a);
            printf("Solutions:\nx1 = %g\nx2 = %g\n", x1, x2);
        }
        else
        {
            printf("D'ho, no real solutions!\n");
        }
    }
    else
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Indeterminate\n");
            }
            else
            {
                printf("Impossible\n");
            }
        }
        else
        {
            double x = -c / b;
            printf("Solution: x = %g\n", x);
        }
    }

    return 0;
}
