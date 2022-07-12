// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("World hello!\n");

    int n = 10;
    do
    {
        printf("%d\n", n);
        n = n - 1;
    } while (n >= 0);
    printf("BANG\n");
    return 0;
}
