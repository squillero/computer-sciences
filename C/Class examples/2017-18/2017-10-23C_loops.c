// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
