/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("%d x**2 + %d x + %d = 0\n", a, b, c);

    if (a == 0)
    {
        a = b; // I'm LAZY
        b = c;
        if (a == 0)
        {
            if (b == 0)
            {
                printf("Truism\n");
            }
            else
            {
                printf("No solutions, pal!\n");
            }
        }
        else
        {
            float x = -(float)b / (float)a; // requires >= C99
            printf("Solution: x = %g\n", x);
        }
    }
    else
    {
        int delta = b * b - 4 * a * c;

        if (delta < 0)
        {
            printf("No real roots.\n");
        }
        else
        {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);

            printf("x1 = %g\n", x1);
            printf("x2 = %g\n", x2);
        }
    }

    return 0;
}
