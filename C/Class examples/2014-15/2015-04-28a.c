// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define N 8

int main()
{
    int i;
    int v[N];
    int w[N];

    for (i = 0; i < N; ++i)
    {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < N; ++i)
    {
        w[i] = v[i];
    }

    printf("Hello world!\n");
    return 0;
}
