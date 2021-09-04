/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

/*
 * cal avg(n1, n2, ..., nN)
 * N is unknown, but list is terminated by -1
 */

int main()
{
    int flag_sorry;
    double sum;
    double cnt;

    sum = 0.0;
    cnt = 0.0;
    flag_sorry = 1;
    while (flag_sorry == 1)
    {
        double num;
        scanf("%lg", &num);
        if (num < 0)
        {
            flag_sorry = 0;
        }
        else
        {
            sum = sum + num;
            cnt = cnt + 1.0;
        }
    }
    if (cnt == 0.0)
    {
        printf("D'ho!\n");
    }
    else
    {
        printf("Avg: %g\n", sum / cnt);
    }
    return 0;
}
