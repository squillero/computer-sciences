// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    num = 0;
    while (num != 42)
    {
        printf("Tell me the answer of the question about life, universe ");
        printf("and everything else:");
        scanf("%d", &num);
        if (num != 42)
        {
            if (num > 42)
            {
                printf("TOO BIG\n");
            }
            else
            {
                printf("TOO SMALL\n");
            }
        }
    }
    printf("ok!\n");

    return EXIT_SUCCESS;
}
