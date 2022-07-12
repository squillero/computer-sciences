// Copyright © 2018 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

// Define STRUCT & declare VARIABLE
struct FOO
{
    int a, b, c;
} foo;

// Define UNNAMED STRUCT & declare VARIABLE
struct
{
    int x, y;
} bar;

// Define STRUCT and TYPEDEF a new type
typedef struct _POINT
{
    double x, y;
} POINT;

int main()
{
    POINT p1, p2;

    foo.a = 23;
    bar.x = 0;
    return 0;
}

void func(void)
{
    // interesting stuff
    struct
    {
        int zap, zop;
    } tmp;
    // use tmp
}
