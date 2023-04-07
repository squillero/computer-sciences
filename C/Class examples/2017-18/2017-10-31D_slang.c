// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello slang!\n");

    int t = 0;

    t += 4;  // t = t + 4;
    t *= 10; // t = t * 10;
    t -= 8;  // t = t - 8;

    int foo;
    int bar;

    foo = 42;
    bar = foo-- * 10;

    foo = 42;
    bar = --foo * foo++;

    return 0;
}
