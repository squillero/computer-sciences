// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
