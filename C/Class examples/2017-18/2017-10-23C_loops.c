// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Hello: ");
    scanf("%d", &n);

    printf("Sum(%d, %d) = ", 0, n);
    int sum = 0;
    while (n >= 0)
    {
        sum = sum + n;
        n = n - 1;
    }
    printf("%d\n", sum);
    return 0;
}
