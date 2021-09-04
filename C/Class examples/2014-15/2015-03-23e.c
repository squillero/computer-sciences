/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n_pre, cnt;
    int verse = 0, stop;

    /* first number */
    scanf("%d", &n);
    n_pre = n;
    cnt = 0;
    stop = 0;

    while (stop == 0)
    {

        scanf("%d", &n);
        cnt++;
        if (verse == 0)
        {
            if (n > n_pre)
            {
                verse = 1;
            }
            else if (n < n_pre)
            {
                verse = -1;
            }
        }
        else if (verse > 1)
        {
            if (n < n_pre)
            {
                stop = 1;
            }
        }
        else
        {
            if (n > n_pre)
            {
                stop = 1;
            }
        }
    }

    return 0;
}
