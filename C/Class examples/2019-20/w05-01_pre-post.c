// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    a = 10;
    b = 20;

    printf("a: %d / b: %d\n", a, b);

    b = a++ * 100;

    printf("a: %d / b: %d\n", a, b);

    // no
    a = a + 1;

    // almost
    a += 1;

    // good
    ++a;

    for (int t = 0; t < 10; ++t)
    {
    }

    return 0;
}
