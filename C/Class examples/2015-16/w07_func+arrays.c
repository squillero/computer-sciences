/*  ######       /***********************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           *
|*  ####   \     * https://github.com/squillero/computer-science             *
|*   ###G  c\    *                                                           *
|*   ##     _\   * Copyright © 2015 Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>            *
\*   |   _/      \***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 2000
#define MAX 100

// array of ints: int foo[]
// pointer to int: int *bar (meaning: int* bar)
// array of ptr to int; int *baz[] (meaning: int* baz[])

int Dups(int foo[]);
void Test(int bar[]);
void Zero(int foo[]);

int main(int argc, char *argv[])
{
    int a[SIZE];
    int b[SIZE];
    int c[SIZE];
    int t;

    // init
    printf("Beginning of a: %p\n", a);
    srand(time(NULL));
    for (t = 0; t < SIZE; t += 1)
    {
        a[t] = rand() % MAX;
    }

    printf("a[42]: %d\n", a[42]);
    Test(a);
    // or. Test(&a[0])
    printf("a[42]: %d\n", a[42]);

    if (Dups(a) != 0)
    {
        printf("Found dups!!!!!!!!!\n");
    }

    Zero(a);
    Zero(b);
    Zero(c);

    return EXIT_SUCCESS;
}

void Test(int bar[])
{
    bar[42] = -1;
}

int Dups(int foo[])
// i.e., int Dups(int *foo)
{
    int t, u;
    int dups_detected;

    dups_detected = 0;
    for (t = 0; t < SIZE; t += 1)
    {
        for (u = t + 1; u < SIZE; u += 1)
        {
            if (foo[t] == foo[u])
            {
                dups_detected = 1;
            }
        }
    }
    return dups_detected;
}

void Zero(int foo[])
{
    int t;

    for (t = 0; t < SIZE; t += 1)
    {
        foo[t] = 0;
    }
}
