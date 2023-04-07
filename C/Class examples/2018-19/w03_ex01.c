// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    double b;

    scanf("%lg", &a);
    scanf("%lg", &b);

    double zap = a % b;

    if (a > b)
    {
        printf("Max is %g\n", a);
    }
    else
    {
        printf("Max is %g\n", b);
    }

    return 0;
}
