// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // integer expression 3
    // integer expression 1 + 2 / 4
    // double expression 3.0
    // double expression 3.0 + 4.2
    // double expression 3 - 2 * 2.3

    double x;
    int y;

    printf("Tell me the value: ");
    scanf("%lf", &x);

    if (x >= 0.0)
    {
        printf("The number %g is positive\n", x);
        y = (int)x;
        if ((double)y == x)
        {
            printf("The number %g is integer!!!!!\n", x);
        }
    }
    else
    {
        printf("The number %g is negative\n", x);
    }

    return 0;
}
