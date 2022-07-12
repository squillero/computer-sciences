// Copyright © 2015-2016 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
