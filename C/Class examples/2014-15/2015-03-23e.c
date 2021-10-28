// Copyright © 2015 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

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
