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
    int a, b;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    printf("%d x + %d = 0\n", a, b);

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

    return 0;
}
