/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

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
