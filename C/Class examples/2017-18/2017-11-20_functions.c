// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int lunch_time(int parameter)
{
    int t;
    for (t = 0; t < 10; ++t)
    {
        printf("lunch time!!!!\n");
    }
    return t * parameter;
}

int main()
{
    int t = 42;
    int z = lunch_time(23);
    printf("%d\n", z);
    return 0;
}
