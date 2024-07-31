// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("if - else if\n");

    printf("Enter num: ");
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("One!\n");
    }
    else if (n == 2)
    {
        printf("Two!!\n");
    }
    else if (n == 3)
    {
        printf("Three!!!");
    }
    else if (n == 4)
    {
        printf("Four!!!!\n");
    }
    else
    {
        printf("Yeuch\n");
    }

    return 0;
}
