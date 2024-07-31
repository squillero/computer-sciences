// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define N 4

int main()
{
    int n, cnt, max_n, max_cnt;
    cnt = 0;
    max_n = 0;

    while (cnt < N)
    {
        scanf("%d", &n);

        if (cnt == 0 || n > max_n)
        {
            /* update the max */
            max_n = n;
            max_cnt = 1;
        }
        else if (n == max_n)
        {
            max_cnt++;
        }

        /* next step */
        cnt = cnt + 1;
    }

    printf("max is %d\n", max_n);

    return 0;
}
