// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
