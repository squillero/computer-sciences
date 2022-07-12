// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
