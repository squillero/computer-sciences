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

    switch (n)
    {
    case 1:
    case 10:
        printf("One, or Ten?!\n");
        break;
    case 2:
        printf("Two!!\n");
        break;
    case 3:
        printf("Three!!!");
        break;
    case 4:
        printf("Four!!!!\n");
        break;
    default:
        printf("Yeuch\n");
    }

    return 0;
}
