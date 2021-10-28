// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

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
