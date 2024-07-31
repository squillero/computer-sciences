// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res;
    int min = 1;
    int max = 101;
    int b_correct = 0;
    int n;

    while (b_correct == 0)
    {
        n = (min + max) / 2;
        printf("I guess it is %d. Is it correct? ", n);
        scanf("%d", &res);
        printf("\n");
        if (res == 0)
            b_correct = 1;
        else
        {
            if (res == 1)
                max = n;
            else
                min = n;
        }
    }
    return 0;
}
