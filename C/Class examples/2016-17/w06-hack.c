// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

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
