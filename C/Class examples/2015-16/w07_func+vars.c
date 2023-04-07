// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define VAL 2

/* PROTOS */
void foo(int x);
void bar(int x);

void foo(int x)
{
    int gargle;

    gargle = x * VAL;
    printf("foo: %d\n", gargle);
}

void bar(int x)
{
    int gargle;

    gargle = x / VAL;
    printf("bar: %d\n", gargle);
}

int main()
{
    printf("Hello funcs\n");
    foo(42);
    bar(42);
    return 0;
}
