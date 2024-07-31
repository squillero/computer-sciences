// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int foo;

    printf("Tell me a number: ");
    scanf("%d", &foo);
    printf("Hey, you told me %d!\n", foo);

    if (foo < 0)
    {
        printf("... and it is negative\n");
    }
    else
    {
        printf("d'ho....\n");
    }

    return 0;
}
