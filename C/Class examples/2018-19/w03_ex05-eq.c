/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double b, c;

    scanf("%lg", &b);
    scanf("%lg", &c);
    printf("Solving %gx + %g == 0\n", b, c);
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
    return 0;
}
