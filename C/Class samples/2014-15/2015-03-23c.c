/********************************************************************-*-c-*-*\
*               *  Class examples for Computer Sciences 2014-15              *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://www.cad.polito.it/staff/squillero/dida/       *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define N 4

int main()
{
    int n, cnt, max_n, max_cnt;
    cnt = 0;
    max_n = 0;

    while(cnt < N)
    {
        scanf("%d", &n);


        if (cnt == 0 || n > max_n)
        {
            /* update the max */
            max_n = n;
            max_cnt = 1;
        }
        else if(n == max_n)
        {
            max_cnt++;
        }

        /* next step */
        cnt = cnt +1;
    }

    printf("max is %d\n", max_n);

    return 0;
}
