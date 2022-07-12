// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

// function that gets an array
void foo1(int *x);
void foo2(int x[]);
void bar1(char *x);
void bar2(char x[]);

int main(int argc, char *argv[])
{
    printf("Hello argc/argv -- 3 points for free!\n");

    for (int t = 0; t < argc; ++t)
    {
        printf("argv[%d] = %p (\"%s\")\n", t, argv[t], argv[t]);
    }
    printf("argv[%d] = %p\n", argc, argv[argc]);

    // real men & women use pointers
    for (int t = 0; argv[t] != NULL; ++t)
    {
        printf("argv[%d] = %p (\"%s\")\n", t, argv[t], argv[t]);
    }
    printf("argv[%d] = %p\n", argc, argv[argc]);

    return 0;
}
