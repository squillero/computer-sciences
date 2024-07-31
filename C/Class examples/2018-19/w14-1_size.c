// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

struct FOO
{
    int a;
    short int b;
    char c;
};

union BAR
{
    int a;
    short int b;
    char c;
};

struct element
{
    char n[60];
    int m;
    float p;
};

int main()
{
    prontf("%d\n", sizeof(struct element));
    /*
    printf("%d\n", sizeof (struct FOO));
    printf("%d\n", sizeof (union BAR));

    union BAR b;
    b.a = 42;
    printf("%d\n", b.a);
    b.c = '!';
    printf("%d\n", b.a);
    */
    return 0;
}
