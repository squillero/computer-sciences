// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[8] = {0};
    int foo = 42;

    printf("foo: %d\n", foo);
    for (int t = 0; t < 12; ++t)
    {
        array[t] = -1;
        printf("%d: foo: %d\n", t, foo);
    }

    return 0;
}
