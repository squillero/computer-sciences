// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed char foo;
    unsigned char bar;

    foo = 0;
    bar = 0;
    for (int t = 0; t < 500; ++t)
    {
        printf("foo:%d  bar:%d\n", foo, bar);
        ++foo;
        ++bar;

        if (t % 50 == 0)
        {
            int x;
            scanf("%d", &x);
        }
    }

    return 0;
}
